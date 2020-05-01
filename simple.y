 
%{

  #include <stdio.h>
  extern FILE *yyin;
  extern int yylex();

  #define YYDEBUG 1
int yyerror(char *s);

%}

/* Declaraciones de BISON */
%union {
  int valor_entero;
  double valor_real;
  char * texto;
}

%token ABSTRACTO BOOLEANO BUCLE CARACTER CASOS CLASE COMO CONSTANTE CONSTRUCTOR CORTO
%token CUANDO DE DESCENDENTE DESTRUCTOR DEVOLVER DICCIONARIO EN ENTERO ENTONCES 
%token ENUMERACION ES ESPECIFICO EXCEPCION EXPORTAR FALSO FIN FINAL FINALMENTE GENERICO
%token IMPORTAR LARGO LANZA LIBRERIA LISTA MIENTRAS OBJETO OTRO PARA PRINCIPIO PRIVADO
%token PROGRAMA PROTEGIDO PRUEBA PUBLICO RANGO REAL REFERENCIA REGISTRO REPETIR SALIR
%token SI SIGNO SIGUIENTE SINO SUBPROGRAMA TABLA TIPO ULTIMA VALOR VERDADERO CTC_CARACTER
%token CTC_CADENA IDENTIFICADOR CTC_ENTERA CTC_REAL DOS_PUNTOS CUATRO_PUNTOS
%token ASIGNACION FLECHA INC DEC DESPI DESPD LEQ GEQ NEQ AND OR ASIG_SUMA ASIG_RESTA
%token ASIG_MULT ASIG_DIV ASIG_RESTO ASIG_POT ASIG_DESPI ASIG_DESPD
%token ERROR
//%token <texto> IDENTIFICADOR
%right FLECHA 
%right SI ENTONCES SINO


%%
//Parte 3.7 pag 12

fin : primario {printf("\nfin -> primario\n");}
	| fin primario {printf("\nfin -> fin primario\n");}
	| fin cadenaMult {printf("\nfin -> fin cadenaMult\n");}
	| fin expresionCondicional { printf("\nfin -> fin expresionCondicional\n");}
	| fin enumeraciones { printf("\nfin -> fin enumeraciones\n");}
;




cadenaMult: CTC_CADENA ',' CTC_CADENA {printf("\ncadenaMult -> CTC_CADENA , CTC_CADENA");}
	| cadenaMult ',' CTC_CADENA {printf("\ncadenaMult -> cadenaMult , CTC_CADENA");}
	| cadenaMult ',' error {yyerrok; printf("\ncadenaMult -> cadenaMult , error "); }
;
nombre: IDENTIFICADOR {printf("\nnombre -> IDENTIFICADOR");}
	| nombre CUATRO_PUNTOS IDENTIFICADOR {printf("\nnombre -> nombre :: IDENTIFICADOR");}
;

expresionMult : expresionMult ',' expresion {printf("\nexpresionMult -> expresionMult , expresion");}
	| expresion ',' expresion {printf("\nexpresionMult -> expresion , expresion");}
	| expresion ',' error {printf("\nexpresionMult -> expresion , error");}
;
expresion: primario {printf("\nexpresion -> primario");}
;
primario: literal {printf("\nprimario -> literal");}
	| objeto {printf("\nprimario -> objeto");}
	//| llamada_subprograma {printf("primario -> llamada_subprograma");}
	//| OBJETO llamada_subprograma {printf("primario -> OBJETO llamada_subprograma");}
	//| enumeraciones
	| '(' expresion ')' {printf("\nprimario -> ( expresion ) ");}
;
literal: VERDADERO {printf("\nliteral -> VERDADERO");}
	| FALSO {printf("\nliteral -> FASLO");}
	| CTC_ENTERA {printf("\nliteral -> CTC_ENTERA");}
	| CTC_REAL {printf("\nliteral -> CTC_REAL");}
	| CTC_CARACTER {printf("\nliteral -> CTC_CARACTER");}
	| CTC_CADENA {printf("\nliteral -> CTC_CADENA");}
;

objeto: nombre  
	| objeto '.' nombre {printf("\nobjeto -> objeto . nombre");}
	| objeto '[' expresion ']' {printf("\nobjeto -> objeto [ expresion ]");}
	| objeto '[' expresionMult ']' {printf("\nobjeto -> objeto [ expresionMult ]");}
	| objeto '{' CTC_CADENA '}' {printf("\nobjeto -> objeto { CTC_CADENA }");}
	| objeto '{' cadenaMult '}' {printf("\nobjeto -> objeto { cadenaMult }");}
; 

clausulaIteracion :  //TODO ACABAR
;
//error: ERROR { printf("\error -> objeto [ expresion ]"); yyerrok; };
enumeraciones: '[' expresionCondicional  clausulaIteracion ']' {printf("\nenumeraciones -> [ expresionCondicional ]");}
	| '[' expresionMult ']' {printf("\nenumeraciones -> [ expresionMult ]");}
	| '{' claveValor '}' {printf("\nenumeraciones -> [ claveValor ]");}
	| '{' campoValor '}' {printf("\nenumeraciones -> [ campoValor ]");}
;
claveValor: CTC_CADENA FLECHA expresion {printf("\nclave_valor -> CTC_CADENA => expresion");}
;
campoValor: IDENTIFICADOR FLECHA expresion {printf("\ncampo_valor -> CTC_CADENA => expresion");}
;
expresionCondicional: expresion {printf("\nexpresionCondicional -> expresion");}
	| SI expresion ENTONCES expresion {printf("\nexpresionCondicional -> si expresion entonces expresion");}
	| SI expresion ENTONCES expresion SINO expresion {printf("\nexpresionCondicional -> si expresion entonces expresion SINO expresion");}
;

%%

int yyerror(char *s) {
  fflush(stdout);
  printf("\n***************** %s\n",s);
 return(1);
  }

int yywrap() {
  return(1);
  }

int main(int argc, char *argv[]) {

  yydebug = 0;

  if (argc < 2) {
    printf("Uso: ./simple NombreArchivo\n");
    }
  else {
    yyin = fopen(argv[1],"r");
    yyparse();
    }
  }
