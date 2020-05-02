 
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
//%token <texto> IDENTIFICADOR

%right SI ENTONCES SINO
%right PARA EN 

%left ':'

%right '{'
%left '}'
%right '['
%left ']'
%right '('
%left ')'

%right FLECHA 
%right CUATRO_PUNTOS


%%
//Parte 3.7 pag 12

fin : expresionCondicional ';' {printf("\nfin -> expresionCondicional\n");}
    | fin enumeraciones ';' {printf("\nfin -> enumeraciones\n");}
    | fin expresionCondicional ';'{printf("\nfin -> expresionCondicional\n");}
    | fin objeto ';'{printf("\nfin -> objeto\n");}
    | fin instruccionCasos ';' {printf("\nfin -> intruccionCasos\n");}
;

declaracionObjeto: IDENTIFICADOR ':' CONSTANTE especificacionTipo ASIGNACION expresion ';' {printf("\ndeclaracionObjeto -> IDENTIFICADOR : CONSTANTE especificacionTipo ASIGNACION expresion ;\n");}
	| identificadorMultiple ':' CONSTANTE especificacionTipo ASIGNACION expresion ';' {printf("\ndeclaracionObjeto -> identificadorMultiple : CONSTANTE especificacionTipo ASIGNACION expresion ;\n");}

	| IDENTIFICADOR ':' especificacionTipo ASIGNACION expresion ';'{printf("\ndeclaracionObjeto -> IDENTIFICADOR : especificacionTipo ASIGNACION expresion ;\n");}
	| identificadorMultiple ':' especificacionTipo ASIGNACION expresion ';' {printf("\ndeclaracionObjeto -> identificadorMultiple : especificacionTipo ASIGNACION expresion ;\n");}
	| IDENTIFICADOR ':' especificacionTipo ';'{printf("\ndeclaracionObjeto -> IDENTIFICADOR : especificacionTipo ;\n");}
	| identificadorMultiple ':' especificacionTipo ';' {printf("\ndeclaracionObjeto -> identificadorMultiple : especificacionTipo ;\n");}
;

especificacionTipo: nombre {printf("\nespecificacionTipo -> nombre");}
	| tipoNoEstructurado {printf("\nespecificacionTipo -> tipoNoEstructurado");}
;

tipoNoEstructurado: //TODO acabar
;

instruccionInterrupcion: SIGUIENTE cuando ';'  {printf("\ninstruccionInterrupcion -> siguiente ; ");}
	| SALIR DE IDENTIFICADOR cuando ';' {printf("\ninstruccionInterrupcion -> salir de IDENTIFICADOR cuando ; ");}
	| SALIR cuando ';' {printf("\ninstruccionInterrupcion -> salir cuando(?) ; ");}
;

cuando: CUANDO expresion {printf("\ncuando -> CUANDO expresion");}//TODO puede dar error salto reduccion
	| 	 {printf("\ncuando -> nada ");}
;

instruccionLanzamientoExcepcion: LANZA nombre ';' {printf("\ninstruccionLanzamientoExcepcion -> LANZA nombre ; ");}
;

instruccionMultiple: instruccion instruccion {printf("\ninstruccionMultiple -> instruccion instruccion");}
	| instruccionMultiple instruccion {printf("\ninstruccionMultiple -> instruccionMultiple instruccion");}
;

instruccionCasos: CASOS expresion ES caso FIN CASOS {printf("\ninstruccionCasos -> CASOS expresion ES caso FIN CASOS");}
	| CASOS expresion ES casoMultiple FIN CASOS {printf("\ninstruccionCasos -> CASOS expresion ES casoMultiple FIN CASOS");}
;
casoMultiple: caso caso {printf("\ncasoMultiple -> caso caso");}
	| casoMultiple caso {printf("\ncasoMultiple -> casoMultiple caso");}
;
caso: CUANDO entradas FLECHA instruccion {printf("\ncaso -> CUANDO entradas FLECHA instruccion");}
	| CUANDO entradas FLECHA instruccionMultiple {printf("\ncaso -> CUANDO entradas FLECHA instruccionMultiple");}
;
entradas: entradaDosP entrada {printf("\nentradas -> entrada : entrada");}//HICE ALGO RARO AQUI
	 | entrada {printf("\nentradas -> entrada");}
;
entrada: expresion {printf("\nentrada -> expresion");}
	| expresion DOS_PUNTOS expresion {printf("\nentrada -> expresion DOS_PUNTOS expresion");}
	| OTRO {printf("\nentrada -> OTRO");}
;
entradaDosP: entrada ':' {printf("\nentradaDosP -> entrada : ");}
	| entradaDosP entrada ':' {printf("\nentradaDosP -> entradaDosP entrada : ");}
;
intruccionBucle: IDENTIFICADOR ':' clausulaIteracion instruccion FIN BUCLE {printf("\nintruccionBucle -> IDENTIFICADOR : clausulaIteracion instruccion FIN BUCLE");}
	| IDENTIFICADOR ':' clausulaIteracion instruccionMultiple FIN BUCLE {printf("\nintruccionBucle -> IDENTIFICADOR : clausulaIteracion instruccionMultiple FIN BUCLE");}
	| clausulaIteracion instruccion FIN BUCLE {printf("\nintruccionBucle -> clausulaIteracion instruccion FIN BUCLE");}
	| clausulaIteracion instruccionMultiple FIN BUCLE {printf("\nintruccionBucle -> clausulaIteracion instruccionMultiple FIN BUCLE");}
;

rango: expresion DOS_PUNTOS expresion {printf("\nrango -> expresion DOS_PUNTOS expresion");}
	| rango DOS_PUNTOS expresion {printf("\nrango -> rango DOS_PUNTOS expresion");}
;

clausulaIteracion: PARA IDENTIFICADOR EN expresion {printf("\nclausulaIteracion -> PARA IDENTIFICADOR EN expresion");}
	| PARA IDENTIFICADOR EN ':' especificacionTipo EN expresion {printf("\nclausulaIteracion -> PARA IDENTIFICADOR EN ':' especifiacionTipo EN expresion");}

	| REPETIR IDENTIFICADOR EN RANGO {printf("\nclausulaIteracion -> REPETIR IDENTIFICADOR EN RANGO");}
	| REPETIR IDENTIFICADOR ':' especificacionTipo EN rango {printf("\nclausulaIteracion -> REPETIR IDENTIFICADOR ':' especificacionTipo EN rango");}

	| REPETIR IDENTIFICADOR EN RANGO DESCENDENTE {printf("\nclausulaIteracion -> REPETIR IDENTIFICADOR EN RANGO DESCENDENTE");}
	|REPETIR IDENTIFICADOR ':' especificacionTipo EN RANGO DESCENDENTE {printf("\nclausulaIteracion -> REPETIR IDENTIFICADOR ':' especificacionTipo EN RANGO DESCENDENTE");}

	| MIENTRAS expresion {printf("\nMIENTRAS expresion");}
;

instruccionDeCapturaDeExcepcion: PRUEBA instruccion clausulas FIN PRUEBA {printf("\ninstrccuionCapturaDeExcepcion -> PRUEBA instruccion clausulas FIN PRUEBA");}
	| PRUEBA instruccionMultiple clausulas FIN PRUEBA {printf("\ninstrccuionCapturaDeExcepcion -> prueba instruccion clausulas FIN PRUEBA");}
;

clausulasExcepcion: clausulaExcepcionGeneral {printf("\nclausulasExcepcion -> clausulaExcepcionGeneral");}
	| clausulaExcepcionEspecifica clausulaExcepcionGeneral {printf("\nclausulasExcepcion -> clausulaExcepcionEspecifica clausulaExcepcionGeneral");}
	| clausulaExcepcionEspecificaMultiple clausulaExcepcionGeneral {printf("\nclausulasExcepcion -> clausulaExcepcionEspecificaMultiple clausulaExcepcionGeneral");}
;
clausulaExcepcionEspecifica: EXCEPCION '(' nombre ')' instruccion {printf("\nclausulaExcepcionEspecifica -> EXCEPCION ( nombre ) intruccion");}
	| EXCEPCION '(' nombre ')' instruccionMultiple {printf("\nclausulaExcepcionEspecifica -> EXCEPCION ( nombre ) instruccionMultiple");}
;
clausulaExcepcionEspecificaMultiple: clausulaExcepcionEspecifica clausulaExcepcionEspecifica{printf("\nclausulaExcepcionEspecificaMultiple -> clausulaExcepcionEspecifica clausulaExcepcionEspecifica");}
	| clausulaExcepcionEspecificaMultiple clausulaExcepcionEspecifica{printf("\nclausulaExcepcionEspecificaMultiple -> clausulaExcepcionEspecificaMultiple clausulaExcepcionEspecifica");}
;

clausulaExcepcionGeneral: EXCEPCION instruccion {printf("\nclausulaExcepcionGeneral -> EXCEPCION instruccion");}
	| EXCEPCION instruccionMultiple{printf("\nclausulaExcepcionGeneral -> EXCEPCION instruccionMultiple");}
;

clausulaFinalmente: FINALMENTE instruccion {printf("\nclausulaFinalmente -> FINALMENTE instruccion");}
	| FINALMENTE instruccionMultiple {printf("\nclausulaFinalmente -> FINALMENTE instruccionMultiple");}
;

clausulas: clausulasExcepcion {printf("\nclausulas -> clausulasExcepcion");}
	| clausulasExcepcion clausulaFinalmente {printf("\nclausulas -> clausulasExcepcion clausulaFinalmente");}
	| clausulaFinalmente {printf("\nclausulas -> clausulaFinalmente");}
;
identificadorMultiple: IDENTIFICADOR ',' IDENTIFICADOR {printf("\nidentificadorMultiple -> IDENTIFICADOR ',' IDENTIFICADOR");}
	| identificadorMultiple ',' IDENTIFICADOR {printf("\nidentificadorMultiple -> identificadorMultiple ',' IDENTIFICADOR");}
;



cadenaMult: CTC_CADENA ',' CTC_CADENA {printf("\ncadenaMult -> CTC_CADENA , CTC_CADENA");}
	| cadenaMult ',' CTC_CADENA   {printf("\ncadenaMult -> cadenaMult , CTC_CADENA");}	
; 

nombre: IDENTIFICADOR {printf("\nnombre -> IDENTIFICADOR");}
	| nombre CUATRO_PUNTOS IDENTIFICADOR {printf("\nnombre -> nombre :: IDENTIFICADOR");}
;

expresionMult : expresionMult ',' expresion {printf("\nexpresionMult -> expresionMult , expresion");}
	| expresion ',' expresion           {printf("\nexpresionMult -> expresion , expresion");}
;

expresion: primario {printf("\nexpresion -> primario");}
    | primario '+' primario   {printf("\nexpresion -> primario + primario");}
    | primario '-' primario   {printf("\nexpresion -> primario - primario");}
    | primario '/' primario   {printf("\nexpresion -> primario / primario");}
    | primario INC            {printf("\nexpresion -> primario ++");}
    | primario DEC            {printf("\nexpresion -> primario --");}
    | primario '\\' primario  {printf("\nexpresion -> primario \ primario");}
    | primario '^' primario   {printf("\nexpresion -> primario ^ primario");}
    | primario DESPI primario {printf("\nexpresion -> primario <- primario");}
    | primario DESPD primario {printf("\nexpresion -> primario -> primario");}
    | primario '.' primario   {printf("\nexpresion -> primario . primario");}
    | '[' primario ']'        {printf("\nexpresion -> [ primario ] ");} 
    | '{' primario '}'        {printf("\nexpresion -> primario { primario");} 
    | primario CUATRO_PUNTOS primario {printf("\nexpresion -> primario :: primario");}
    | primario '<' primario {printf("\nexpresion -> primario < primario");}
    | primario '>' primario {printf("\nexpresion -> primario > primario");}
    | primario LEQ primario {printf("\nexpresion -> primario <= primario");}
    | primario GEQ primario {printf("\nexpresion -> primario >= primario");}
    | primario '=' primario {printf("\nexpresion -> primario = primario");}
    | primario NEQ primario {printf("\nexpresion -> primario ~= primario");}
    | primario '~' primario {printf("\nexpresion -> primario ~ primario");}
    | primario AND primario {printf("\nexpresion -> primario /\ primario");}
    | primario OR primario  {printf("\nexpresion -> primario \/ primario");}
;
primario: literal {printf("\nprimario -> literal");}
	| objeto  {printf("\nprimario -> objeto");}
	//| llamada_subprograma {printf("primario -> llamada_subprograma");}
	//| OBJETO llamada_subprograma {printf("primario -> OBJETO llamada_subprograma");}
	| enumeraciones {printf("\nprimario -> enumeraciones ");}
	| '(' expresion ')' {printf("\nprimario -> ( expresion ) ");}
;
literal: VERDADERO     {printf("\nliteral -> VERDADERO");}
	| FALSO        {printf("\nliteral -> FASLO");}
	| CTC_ENTERA   {printf("\nliteral -> CTC_ENTERA");}
	| CTC_REAL     {printf("\nliteral -> CTC_REAL");}
	| CTC_CARACTER {printf("\nliteral -> CTC_CARACTER");}
	| CTC_CADENA   {printf("\nliteral -> CTC_CADENA");}
;

objeto: nombre  
	| objeto '.' nombre {printf("\nobjeto -> objeto . nombre");}
	| objeto '[' expresion ']'     {printf("\nobjeto -> objeto [ expresion ]");}
	| objeto '[' expresionMult ']' {printf("\nobjeto -> objeto [ expresionMult ]");}
	| objeto '{' CTC_CADENA '}'    {printf("\nobjeto -> objeto { CTC_CADENA }");}
	| objeto '{' cadenaMult '}'    {printf("\nobjeto -> objeto { cadenaMult }");}
; 


enumeraciones: '[' expresionCondicional  clausulaIteracion ']' {printf("\nenumeraciones -> [ expresionCondicional ]");}
	| '[' expresionMult ']'  {printf("\nenumeraciones -> [ expresionMult ]");}
	| '{' claveValor '}'     {printf("\nenumeraciones -> [ claveValor ]");}
	| '{' claveValorMult '}' {printf("\nenumeraciones -> [ claveValorMultiple ]");}
	| '{' campoValor '}'     {printf("\nenumeraciones -> [ campoValor ]");}
	| '{' campoValorMult '}' {printf("\nenumeraciones -> [ campoValorMultiple ]");}
;

claveValorMult: claveValor ',' claveValor {printf("\nclaveValorMult -> claveValor , claveValor");}
	| claveValorMult ',' claveValor   {printf("\nclaveValorMult -> claveValorMult , claveValor");}
;

claveValor: CTC_CADENA FLECHA expresion {printf("\nclave_valor -> CTC_CADENA => expresion");}
;
campoValorMult : campoValor ',' campoValor {printf("\ncampoValorMult -> campo_valor , campo_valor");}
	| campoValorMult ',' campoValor    {printf("\ncampoValorMult -> campoValorMult , campo_valor");}
;
campoValor: IDENTIFICADOR FLECHA expresion {printf("\ncampo_valor -> CTC_CADENA => expresion");}
;
expresionCondicional: expresion           {printf("\nexpresionCondicional -> expresion");}
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

  yydebug = 1;

  if (argc < 2) {
    printf("Uso: ./simple NombreArchivo\n");
    }
  else {
    yyin = fopen(argv[1],"r");
    yyparse();
    }
  }
