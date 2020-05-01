
%{ 
   #include <string.h>
   #include <malloc.h>
   #include <stdlib.h>
   #include "simple.tab.h"
   int linea = 1;
   char * cadenaToret;

char * extenderCad(char * oldText, char * newText);
%}

%x comentarioMulti
%x cadena

DELIMITADORES ("\("|"\)"|":"|";"|","|"\|")

OP_SINGLE ("\+"|"\-"|"\*"|"\/"|"\\"|"\^"|"\."|"\["|"\]"|"\{"|"\}"|"\<"|"\>"|"="|"~")
 

CONST_ENT ([0-9]+|\%[oO][0-7]+|\%[xX][0-9a-fA-F]+)
CONST_REAL_DEC ([0-9]*\.[0-9]+)
CONST_REAL_OCTAL (\%[oO][0-7]*\.[0-7]+)
CONST_REAL_HEX	(\%[xX][0-9a-fA-F]*\.[0-9a-fA-F]+)
CONST_MANT_DEC ({CONST_REAL_DEC}\^[\+\-]?[0-9]+)
CONST_MANT_OCTAL ({CONST_REAL_OCTAL}\^[\+\-]?[0-7]+)
CONST_MANT_HEX ({CONST_REAL_HEX}\^[\+\-]?[0-9a-fA-F]+)

CAR_CAR .
CAR_ESC \%(\'|\"|\%|n|r|t)
CAR_DEC	\%([0-1]?[0-9]{1,2}|2[0-4][0-9]|25[0-5])
CAR_OCT \%[oO]([0-2]?[0-7]{1,2}|3[0-7][0-7])
CAR_HEX \%[xX][0-9a-fA-F]{1,2}

CONST_CAD_ERROR	(\\n|\"|\'\%\')

ERROR_CAR_DEC	\%(25[6-9]|[3-9][0-9]{2,})
ERROR_CAR_OCT 	\%[oO](([0-7]*[89]+)+|[4-9][0-9]{2}|[0-9]{4,})
ERROR_CAR_HEX 	\%[xX](([0-9a-fA-F]*[g-zG-Z]+)+|[0-9a-fA-F]{3,})
%%



(\"{CONST_CAD_ERROR}\")  	{//falta acabar
				printf("\nlinea %d, error cadena: %s", linea, yytext);}

"\""				{printf("\nlinea %d, cadena: %s", linea, yytext);
				 cadenaToret = (char *) malloc (strlen(yytext) + 1);
				BEGIN(cadena);} 

<cadena>\n			{printf("\n\t");
				cadenaToret = extenderCad (cadenaToret,yytext);
				linea++;}

<cadena>{CAR_ESC}		{ cadenaToret = extenderCad (cadenaToret,yytext); 
				printf(" %s", yytext); }

<cadena>({ERROR_CAR_DEC}|{ERROR_CAR_OCT}|{ERROR_CAR_HEX}) {//falta acabar
				printf("\nlinea %d, error: %s \nlinea %d, cadena:", linea,yytext,linea); }

<cadena>\"			{ cadenaToret = extenderCad (cadenaToret,yytext);
				 //strcat(cadenaToret, "\0"); //creo que ya esta
				 yylval.texto = cadenaToret;
				 printf("\" ");
				BEGIN(INITIAL);
				 return (CTC_CADENA);}





##.*$				;

#\{				BEGIN(comentarioMulti);
<comentarioMulti>\n		linea++;
<comentarioMulti>#\}		BEGIN(INITIAL);
<comentarioMulti>.		;

(\'{CAR_CAR}\')  		|
(\'{CAR_ESC}\')			|
(\'{CAR_DEC}\')			|
(\'{CAR_OCT}\')			|
(\'{CAR_HEX}\')			{ printf("\nlinea %d, ctc caracter: %s", linea, yytext);
				  yylval.texto = (char *) malloc (strlen(yytext) + 1);
                                  strcpy(yylval.texto, yytext);
                                  return (CTC_CARACTER);
                                  }


{CONST_ENT} 			{ printf("\nlinea %d, ctc real: %s", linea, yytext); 
				  yylval.valor_entero = atoi(yytext);
					return (CTC_ENTERA);
				}

{CONST_REAL_DEC} 		{ printf("\nlinea %d, ctc real: %s", linea, yytext);  
				  yylval.valor_real = atof(yytext);
					return (CTC_REAL); 
				}

{CONST_REAL_OCTAL} 		|
{CONST_REAL_HEX}		|
{CONST_MANT_DEC}   		|
{CONST_MANT_OCTAL}  		|
{CONST_MANT_HEX} 		{ //poner en comun con alguien
				 printf("\nlinea %d, ctc real: %s", linea, yytext);  
				 yylval.texto = (char *) malloc (strlen(yytext) + 1);
                        	strcpy(yylval.texto, yytext);
					return (CTC_REAL); }


		
("\+\+")	{printf("\nlinea %d, operador: %s", linea, yytext);
			yylval.texto = (char *) malloc (strlen(yytext) + 1);
                        strcpy(yylval.texto, yytext);
                        return (INC);
		}
("\-\-")	{printf("\nlinea %d, operador: %s", linea, yytext);
			yylval.texto = (char *) malloc (strlen(yytext) + 1);
                        strcpy(yylval.texto, yytext);
                        return (DEC);
		}
("\<\-")	{printf("\nlinea %d, operador: %s", linea, yytext);
			yylval.texto = (char *) malloc (strlen(yytext) + 1);
                        strcpy(yylval.texto, yytext);
                        return (DESPI);
		}
("\-\>")	{printf("\nlinea %d, operador: %s", linea, yytext);
			yylval.texto = (char *) malloc (strlen(yytext) + 1);
                        strcpy(yylval.texto, yytext);
                        return (DESPD);
		}
(":=")		{printf("\nlinea %d, operador: %s", linea, yytext);
			yylval.texto = (char *) malloc (strlen(yytext) + 1);
                        strcpy(yylval.texto, yytext);
                        return (ASIGNACION);
		}
(":\+")		{printf("\nlinea %d, operador: %s", linea, yytext);
			yylval.texto = (char *) malloc (strlen(yytext) + 1);
                        strcpy(yylval.texto, yytext);
                        return (ASIG_SUMA);
		}
(":\/")		{printf("\nlinea %d, operador: %s", linea, yytext);
			yylval.texto = (char *) malloc (strlen(yytext) + 1);
                        strcpy(yylval.texto, yytext);
                        return (ASIG_DIV);
		}
(":\\")		{printf("\nlinea %d, operador: %s", linea, yytext);
			yylval.texto = (char *) malloc (strlen(yytext) + 1);
                        strcpy(yylval.texto, yytext);
                        return (ASIG_RESTO);
		}
(":\^")		{printf("\nlinea %d, operador: %s", linea, yytext);
			yylval.texto = (char *) malloc (strlen(yytext) + 1);
                        strcpy(yylval.texto, yytext);
                        return (ASIG_POT);
		}
(":\<")		{printf("\nlinea %d, operador: %s", linea, yytext);
			yylval.texto = (char *) malloc (strlen(yytext) + 1);
                        strcpy(yylval.texto, yytext);
                        return (ASIG_DESPI);
		}
(":\>")		{printf("\nlinea %d, operador: %s", linea, yytext);
			yylval.texto = (char *) malloc (strlen(yytext) + 1);
                        strcpy(yylval.texto, yytext);
                        return (ASIG_DESPD);
		}
("::")		{printf("\nlinea %d, operador: %s", linea, yytext);
			yylval.texto = (char *) malloc (strlen(yytext) + 1);
                        strcpy(yylval.texto, yytext);
                        return (CUATRO_PUNTOS);
		}
("\<=")		{printf("\nlinea %d, operador: %s", linea, yytext);
			yylval.texto = (char *) malloc (strlen(yytext) + 1);
                        strcpy(yylval.texto, yytext);
                        return (LEQ);
		}
("\>=")		{printf("\nlinea %d, operador: %s", linea, yytext);
			yylval.texto = (char *) malloc (strlen(yytext) + 1);
                        strcpy(yylval.texto, yytext);
                        return (GEQ);
		}
("~=")		{printf("\nlinea %d, operador: %s", linea, yytext);
			yylval.texto = (char *) malloc (strlen(yytext) + 1);
                        strcpy(yylval.texto, yytext);
                        return (NEQ);
		}
("\/\\")	{printf("\nlinea %d, operador: %s", linea, yytext);
			yylval.texto = (char *) malloc (strlen(yytext) + 1);
                        strcpy(yylval.texto, yytext);
                        return (AND);
		}
("\\\/")	{printf("\nlinea %d, operador: %s", linea, yytext);
			yylval.texto = (char *) malloc (strlen(yytext) + 1);
                        strcpy(yylval.texto, yytext);
                        return (OR);
		}
{OP_SINGLE}  	{printf("\nlinea %d, operador: %s", linea, yytext);
		return (yytext[0]);
		}
		

("\.\.")	{printf("\nlinea %d, delimitador: %s", linea, yytext);
			yylval.texto = (char *) malloc (strlen(yytext) + 1);
                        strcpy(yylval.texto, yytext);
                        return (DOS_PUNTOS);
		}
("=\>")		{printf("\nlinea %d, delimitador: %s", linea, yytext);
			yylval.texto = (char *) malloc (strlen(yytext) + 1);
                        strcpy(yylval.texto, yytext);
                        return (FLECHA);
		}
{DELIMITADORES}		{printf("\nlinea %d, delimitador: %s", linea, yytext); 
                        return (yytext[0]);
		}

(?i:abstracto)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (ABSTRACTO);}
(?i:booleano)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return(BOOLEANO);}
(?i:bucle)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (BUCLE);}
(?i:caracter)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (CARACTER);}
(?i:casos)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (CASOS);}
(?i:clase)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (CLASE);}
(?i:como)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (COMO);}
(?i:constante)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (CONSTANTE);}
(?i:constructor)		{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (CONSTRUCTOR);}
(?i:corto)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (CORTO);}
(?i:cuando)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (CUANDO);}
(?i:de)				{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (DE);}
(?i:descendente)		{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (DESCENDENTE);}
(?i:destructor)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (DESTRUCTOR);}
(?i:devolver)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (DEVOLVER);}
(?i:diccionario)		{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (DICCIONARIO);}
(?i:en)				{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (EN);}
(?i:entero)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (ENTERO);}
(?i:entonces)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (ENTONCES);}
(?i:enumeracion)		{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (ENUMERACION);}
(?i:es)				{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (ES);}
(?i:especifico)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (ESPECIFICO);}
(?i:excepcion)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (EXCEPCION);}
(?i:exportar)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (EXPORTAR);}
(?i:falso)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (FALSO);}
(?i:fin)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (FIN);}
(?i:final)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (FINAL);}
(?i:finalmente)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (FINALMENTE);}
(?i:generico)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (GENERICO);}
(?i:importar)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (IMPORTAR);}
(?i:largo)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (LARGO);}
(?i:lanza)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (LANZA);}
(?i:libreria)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (LIBRERIA);}
(?i:lista)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (LISTA);}
(?i:mientras)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (MIENTRAS);}
(?i:objeto)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (OBJETO);}
(?i:otro)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (OTRO);}
(?i:para)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (PARA);}
(?i:principio)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (PRINCIPIO);}
(?i:privado)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (PRIVADO);}
(?i:programa)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (PROGRAMA);}
(?i:protegido)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (PROTEGIDO);}
(?i:prueba)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (PRUEBA);}
(?i:publico)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (PUBLICO);}
(?i:rango)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (RANGO);}
(?i:real)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (REAL);}
(?i:referencia)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (REFERENCIA);}
(?i:registro)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (REGISTRO);}
(?i:repetir)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (REPETIR);}
(?i:salir)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (SALIR);}
(?i:si)				{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (SI);}
(?i:signo)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (SIGNO);}
(?i:siguiente)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (SIGUIENTE);}
(?i:sino)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (SINO);}
(?i:subprograma)		{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (SUBPROGRAMA);}
(?i:tabla)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (TABLA);}
(?i:tipo)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (TIPO);}
(?i:ultima)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (ULTIMA);}
(?i:valor)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (VALOR);}
(?i:verdadero)			{printf("\nlinea %d, palabra reservada: %s", linea, yytext);
				return (VERDADERO);}

[a-zA-Z_][a-zA-Z_0-9]*		{ printf("\nlinea %d, identificador: %s",linea,yytext);
				  yylval.texto = (char *) malloc (strlen(yytext) + 1);
                                  strcpy(yylval.texto, yytext);
                                  return (IDENTIFICADOR);
                                  }
				

(" "|\t)	printf(" ");
\n		linea++;
.		printf("\nlinea %d, error: %s",linea,yytext);//hacer algo mas?

%%	

char * extenderCad(char * oldText, char * newText){
	
	char * auxiliar = (char *) malloc(strlen(newText) + strlen(oldText) );
	strcpy(auxiliar,oldText);
	strcat(auxiliar,newText);
	return auxiliar;
	
}
