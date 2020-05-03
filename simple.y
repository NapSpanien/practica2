 
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
    | fin instruccionCasos ';' {printf("\nfin -> instruccionCasos\n");}
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
instruccionBucle: IDENTIFICADOR ':' clausulaIteracion instruccion FIN BUCLE {printf("\nintsruccionBucle -> IDENTIFICADOR : clausulaIteracion instruccion FIN BUCLE");}
	| IDENTIFICADOR ':' clausulaIteracion instruccionMultiple FIN BUCLE {printf("\nintsruccionBucle -> IDENTIFICADOR : clausulaIteracion instruccionMultiple FIN BUCLE");}
	| clausulaIteracion instruccion FIN BUCLE {printf("\ninstruccionBucle -> clausulaIteracion instruccion FIN BUCLE");}
	| clausulaIteracion instruccionMultiple FIN BUCLE {printf("\ninstruccionBucle -> clausulaIteracion instruccionMultiple FIN BUCLE");}
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
	| llamadaSubprograma {printf("primario -> llamada_subprograma");}
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

instruccion: instruccionAsignacion {printf("\ninstruccion -> instruccionAsignacion");}
	| instruccionDevolver 		 	{printf("\ninstruccion -> instruccionDevolver");}
	| instruccionLlamada   			{printf("\ninstruccion -> instruccionLlamada");}
	| instruccionSi				{printf("\ninstruccion -> instruccionSi");}
	| instruccionCasos			{printf("\ninstruccion -> instruccionCasos");}
	| instruccionBucle			{printf("\ninstruccion -> instruccionBucle");}
	| instruccionInterrupcion		{printf("\ninstruccion -> instruccionInterrupcion");}
	| instruccionLanzamientoExcepcion	{printf("\ninstruccion -> instruccionLanzamientoExcepcion");}
	| instruccionDeCapturaDeExcepcion		{printf("\ninstruccion -> instruccionDeCapturaDeExcepcion");}
	| ';'					{printf("\ninstruccion -> ';'");}
;

instruccionAsignacion: objeto operadorAsignacion expresion ';' {printf("\ninstruccionAsignacion -> objeto op_asignacion expresion ';'");}
;

operadorAsignacion: ASIGNACION	{printf("\noperadorAsignacion -> ASIGNACION");}
	| ASIG_SUMA			{printf("\noperadorAsignacion -> ASIG_SUMA");}
	| ASIG_RESTO			{printf("\noperadorAsignacion -> ASIG_RESTO");}
	| ASIG_MULT			{printf("\noperadorAsignacion -> ASIG_MULT");}
	| ASIG_DIV			{printf("\noperadorAsignacion -> ASIG_DIV");}
	| ASIG_RESTO			{printf("\noperadorAsignacion -> ASIG_RESTO");}
	| ASIG_POT			{printf("\noperadorAsignacion -> ASIG_POT");}
	| ASIG_DESPI			{printf("\noperadorAsignacion -> ASIG_DESPI");}
	| ASIG_DESPD			{printf("\noperadorAsignacion -> ASIG_DESPD");}
;

instruccionDevolver: DEVOLVER ';'	{printf("\ninstruccionDevolver -> DEVOLVER ';'");}
	| DEVOLVER expresion ';'	{printf("\ninstruccionDevolver -> DEVOLVER expresion ';'");}
;

instruccionLlamada: llamadaSubprograma ';'	{printf("\ninstruccionLlamada -> llamadaSubprograma ';'");}
;

definicionParametro: expresion {printf("\ndefinicionParametro -> expresion");}
	| IDENTIFICADOR ASIGNACION expresion {printf("\ndefinicionParametro -> IDENTIFICADOR ASIGNACION expresion");}
;

definicionParametroMultiple: definicionParametro ',' definicionParametro {printf("\ndefinicionParametroMultiple -> definicionParametro ',' definicionParametro");}
	| definicionParametroMultiple ',' definicionParametro {printf("\ndefinicionParametroMultiple -> definicionParametroMultiple ',' definicionParametro");}
;


llamadaSubprograma: nombre '(' ')' {printf("\nllamadaSubprograma -> nombre '(' ')'");}
	| nombre '(' definicionParametro ')' {printf("\nllamadaSubprograma -> nombre '(' definicionParametro ')'");}
	| nombre '(' definicionParametroMultiple ')' {printf("\nllamadaSubprograma -> nombre '(' definicionParametroMultiple ')'");}
;

instruccionSi: SI expresion ENTONCES instruccion FIN SI {printf("\ninstruccionSi -> SI expresion ENTONCES instruccion FIN SI");}
	| SI expresion ENTONCES instruccionMultiple FIN SI {printf("\ninstruccionSi -> SI expresion ENTONCES instruccionMultiple FIN SI");}
	| SI expresion ENTONCES instruccion SINO instruccion FIN SI {printf("\ninstruccionSi -> SI expresion ENTONCES instruccion SINO instruccion FIN SI");}
	| SI expresion ENTONCES instruccion SINO instruccionMultiple FIN SI {printf("\ninstruccionSi -> SI expresion ENTONCES instruccion SINO instruccionMultiple FIN SI");}
	|SI expresion ENTONCES instruccionMultiple SINO instruccion FIN SI {printf("\ninstruccionSi -> SI expresion ENTONCES instruccionMultiple SINO instruccion");}
	SI expresion ENTONCES instruccionMultiple SINO instruccionMultiple FIN SI {printf("\ninstruccionSi -> SI expresion ENTONCES instruccionMultiple SINO instruccionMultiple");}
;

declaracion: declaracionObjeto 		{printf("\ndeclaracion -> declaracionObjeto");}
	| declaracionTipo 		{printf("\ndeclaracion -> declaracionTipo");}
	| declaracionSubprograma 	{printf("\ndeclaracion -> declaracionSubprograma");}
;

declaracionMultiple: declaracion declaracion {printf("\ndeclaracionMultiple -> declaracion declaracion");}
	| declaracionMultiple declaracion {printf("\ndeclaracionMultiple -> declaracionMultiple declaracion");}
;

declaracionObjeto: IDENTIFICADOR ';' CONSTANTE especificacionTipo ASIGNACION expresion ';' {printf("\ndeclaracionObjeto -> IDENTIFICADOR ';' CONSTANTE especificacionTipo ASIGNACION expresion ';'");}
	| identificadorMultiple ';' CONSTANTE especificacionTipo ASIGNACION expresion ';' {printf("\ndeclaracionObjeto -> IDENTIFICADOR ';' CONSTANTE especificacionTipo ASIGNACION expresion ';'");}
	| IDENTIFICADOR ';' especificacionTipo ';' {printf("\ndeclaracionObjeto -> IDENTIFICADOR ';' especificacionTipo ';'");}
	| IDENTIFICADOR ';' especificacionTipo ASIGNACION expresion ';'		{printf("\ndeclaracionObjeto -> IDENTIFICADOR ';' especificacionTipo ASIGNACION expresion ';'");}
	| IDENTIFICADOR ';' especificacionTipo ASIGNACION expresionMult ';' {printf("\ndeclaracionObjeto -> IDENTIFICADOR ';' especificacionTipo ASIGNACION expresionMult ';'");}
	| identificadorMultiple ';' especificacionTipo ';' {printf("\ndeclaracionObjeto -> identificadorMultiple ';' especificacionTipo ';'");}
	| identificadorMultiple ';' especificacionTipo ASIGNACION expresion ';'		{printf("\ndeclaracionObjeto -> identificadorMultiple ';' especificacionTipo ASIGNACION expresion ';'");}
	| identificadorMultiple ';' especificacionTipo ASIGNACION expresionMult ';'	{printf("\ndeclaracionObjeto -> identificadorMultiple ';' especificacionTipo ASIGNACION expresionMult ';'");}
;

especificacionTipo: nombre 	 {printf("\nespecificacionTipo -> nombre");}
	| tipoNoEstructurado	 {printf("\nespecificacionTipo -> tipoNoEstructurado");}
;

declaracionTipo: TIPO IDENTIFICADOR ES tipoNoEstructurado ';' {printf("\ndeclaracionTipo -> TIPO IDENTIFICADOR ES tipoNoEstructurado ';'");}
	| TIPO IDENTIFICADOR ES tipoEstructurado ';' {printf("\ndeclaracionTipo -> TIPO IDENTIFICADOR ES tipoEstructurado ';'");}
;

tipoNoEstructurado: tipoEscalar {printf("\ntipoNoEstructurado -> tipoEscalar");}
	| tipoTabla {printf("\ntipoNoEstructurado -> tipoTabla");}
	| tipoDiccionario {printf("\ntipoNoEstructurado -> tipoDiccionario");}
;

tipoEscalar: tipoBasico {printf("\ntipoEscalar -> tipoBasico");}
	| SIGNO tipoBasico {printf("\ntipoEscalar -> SIGNO tipoBasico");}
	| SIGNO tipoBasico longitud {printf("\ntipoEscalar -> SIGNO tipoBasico longitud");}
	| SIGNO tipoBasico RANGO rango {printf("\ntipoEscalar -> SIGNO tipoBasico RANGO rango");}
	| SIGNO tipoBasico longitud RANGO rango {printf("\ntipoEscalar -> SIGNO tipoBasico longitud RANGO rango");}
	| tipoBasico longitud {printf("\ntipoEscalar -> tipoBasico longitud");}
	| tipoBasico RANGO rango {printf("\ntipoEscalar -> tipoBasico RANGO rango");}
	| tipoBasico longitud RANGO rango {printf("\ntipoEscalar -> tipoBasico longitud RANGO rango");}
;

longitud: CORTO 	{printf("\nlongitud -> CORTO");}
	| LARGO 	{printf("\nlongitud -> LARGO");}
;

tipoBasico: BOOLEANO 	{printf("\ntipoBasico -> BOOLEANO");}
	| CARACTER 	{printf("\ntipoBasico -> CARACTER");}
	| ENTERO 	{printf("\ntipoBasico -> ENTERO");}
	| REAL 		{printf("\ntipoBasico -> REAL");}
;

rango: expresion '..' expresion {printf("\nrango -> expresion '..' expresion");}
	| expresion '..' expresionMult {printf("\nrango -> expresion '..' expresionMult");}
;

tipoTabla: TABLA '(' expresion '..' expresion ')' DE especificacionTipo {printf("\ntipoTabla -> TABLA '(' expresion '..' expresion ')' DE especificacionTipo");}
	| LISTA DE especificacionTipo {printf("\ntipoTabla -> LISTA DE especificacionTipo");}
;

tipoDiccionario: DICCIONARIO DE especificacionTipo {printf("\ntipoDiccionario -> DICCIONARIO DE especificacionTipo");}
;

tipoEstructurado: tipoRegistro  {printf("\ntipoEstructurado -> tipoRegistro");}
	| tipoEnumerado 	{printf("\ntipoEstructurado -> tipoEnumerado");}
	| clase 		{printf("\ntipoEstructurado -> clase");}
;

tipoRegistro: REGISTRO campo FIN REGISTRO {printf("\ntipoRegistro -> REGISTRO campo FIN REGISTRO");}
	| REGISTRO campoMultiple FIN REGISTRO {printf("\ntipoRegistro -> REGISTRO campoMultiple FIN REGISTRO");}
;

campo: IDENTIFICADOR ':' especificacionTipo ';' {printf("\ncampo -> IDENTIFICADOR ':' especificacionTipo ';'");}
	| IDENTIFICADOR ':' especificacionTipo ASIGNACION expresion ';' {printf("\ncampo -> IDENTIFICADOR ':' especificacionTipo ASIGNACION expresion ';'");}
	| identificadorMultiple ':' especificacionTipo ';' {printf("\ncampo -> identificadorMultiple ':' especificacionTipo ';'");}
	| identificadorMultiple ':' especificacionTipo ASIGNACION expresion ';' {printf("\ncampo -> identificadorMultiple ':' especificacionTipo ASIGNACION expresion ';'");}
;

campoMultiple: campo campo {printf("\ncampoMultiple -> campo campo");}
	| campoMultiple campo {printf("\ncampoMultiple -> campoMultiple campo");}
;

tipoEnumerado: ENUMERACION elementoEnumeracion FIN ENUMERACION 				{printf("\ntipoEnumerado -> ENUMERACION elementoEnumeracion FIN ENUMERACION");}
	| ENUMERACION elementoEnumeracionMultiple FIN ENUMERACION 			{printf("\ntipoEnumerado -> ENUMERACION elementoEnumeracionMultiple FIN ENUMERACION");}
	| ENUMERACION DE tipoEscalar elementoEnumeracion FIN ENUMERACION 		{printf("\ntipoEnumerado -> ENUMERACION DE tipoEscalar elementoEnumeracion FIN ENUMERACION");}
	| ENUMERACION DE tipoEscalar elementoEnumeracionMultiple FIN ENUMERACION	{printf("\ntipoEnumerado -> ENUMERACION DE tipoEscalar elementoEnumeracionMultiple FIN ENUMERACION");}
;

elementoEnumeracion: IDENTIFICADOR {printf("\nelementoEnumeracion -> IDENTIFICADOR");}
	| IDENTIFICADOR ASIGNACION expresion {printf("\nelementoEnumeracion -> IDENTIFICADOR ASIGNACION expresion");}
;

elementoEnumeracionMultiple: elementoEnumeracion ',' elementoEnumeracion {printf("\nelementoEnumeracionMultiple -> elementoEnumeracion ',' elementoEnumeracion");}
	| elementoEnumeracionMultiple ',' elementoEnumeracion {printf("\nelementoEnumeracionMultiple -> elementoEnumeracionMultiple ',' elementoEnumeracion");}
;

declaracionSubprograma: SUBPROGRAMA cabeceraSubprograma cuerpoSubprograma SUBPROGRAMA {printf("\ndeclaracionSubprograma -> SUBPROGRAMA cabeceraSubprograma cuerpoSubprograma SUBPROGRAMA");}
;

cabeceraSubprograma: IDENTIFICADOR 			{printf("cabeceraSubprograma -> IDENTIFICADOR");}
	| IDENTIFICADOR parametrizacion 		{printf("cabeceraSubprograma -> IDENTIFICADOR parametrizacion");}
	| IDENTIFICADOR tipoResultado 			{printf("cabeceraSubprograma -> IDENTIFICADOR tipoResultado");}
	| IDENTIFICADOR parametrizacion tipoResultado 	{printf("cabeceraSubprograma -> IDENTIFICADOR parametrizacion tipoResultado");}
;

parametrizacion: '(' declaracionParametros ')' {printf("parametrizacion -> '(' declaracionParametros ')'");}
	| '(' declaracionParametrosMultiple ')' {printf("parametrizacion -> '(' declaracionParametrosMultiple ')'");}
;

declaracionParametros: IDENTIFICADOR ':' especificacionTipo {printf("declaracionParametros -> IDENTIFICADOR ':' especificacionTipo");}
	| IDENTIFICADOR ':' modo especificacionTipo {printf("declaracionParametros -> IDENTIFICADOR ':' modo especificacionTipo");}
	| IDENTIFICADOR ':' especificacionTipo ASIGNACION expresion {printf("declaracionParametros -> IDENTIFICADOR ':' especificacionTipo ASIGNACION expresion");}
	| IDENTIFICADOR ':' modo especificacionTipo ASIGNACION expresion {printf("declaracionParametros -> IDENTIFICADOR ':' modo especificacionTipo ASIGNACION expresion");}
	| identificadorMultiple ':' especificacionTipo {printf("declaracionParametros -> identificadorMultiple ':' especificacionTipo");}
	| identificadorMultiple ':' modo especificacionTipo {printf("declaracionParametros -> identificadorMultiple ':' modo especificacionTipo");}
	| identificadorMultiple ':' especificacionTipo ASIGNACION expresion {printf("declaracionParametros -> identificadorMultiple ':' especificacionTipo ASIGNACION expresion");}
	| identificadorMultiple ':' modo especificacionTipo ASIGNACION expresion {printf("declaracionParametros -> identificadorMultiple ':' modo especificacionTipo ASIGNACION expresion");}
;

declaracionParametrosMultiple: declaracionParametros ';' declaracionParametros ';' {printf("\ndeclaracionParametrosMultiple -> declaracionParametros ';' declaracionParametros ';'");}
	| declaracionParametrosMultiple declaracionParametros ';' {printf("\ndeclaracionParametrosMultiple -> declaracionParametrosMultiple declaracionParametros ';'");}
;

modo: VALOR {printf("\nmodo -> VALOR");}
	| REFERENCIA {printf("\nmodo -> REFERENCIA");}
;

tipoResultado: DEVOLVER especificacionTipo {printf("\ntipoResultado -> DEVOLVER especificacionTipo");}
;

cuerpoSubprograma: PRINCIPIO instruccion FIN {printf("\ncuerpoSubprograma -> PRINCIPIO instruccion FIN");}
	| PRINCIPIO instruccionMultiple FIN {printf("\ncuerpoSubprograma -> PRINCIPIO instruccionMultiple FIN");}
	| PRINCIPIO declaracion instruccion FIN {printf("\ncuerpoSubprograma -> PRINCIPIO declaracion instruccion FIN");}
	| PRINCIPIO declaracion instruccionMultiple FIN {printf("\ncuerpoSubprograma -> PRINCIPIO declaracion instruccionMultiple FIN");}
	| PRINCIPIO declaracionMultiple instruccion FIN {printf("\ncuerpoSubprograma -> PRINCIPIO declaracionMultiple instruccion FIN");}
	| PRINCIPIO declaracionMultiple instruccionMultiple FIN {printf("\ncuerpoSubprograma -> PRINCIPIO declaracionMultiple instruccionMultiple FIN");}
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
