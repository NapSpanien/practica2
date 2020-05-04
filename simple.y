 
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
%right SI ENTONCES SINO
%right PARA EN 
%right FIN 
%left ':'

%right '{'
%left '}'
%right '['
%left ']'
%right '('
%left ')'

%right FLECHA 
%right CUATRO_PUNTOS

%left AND
%left OR
%nonassoc '~'
%nonassoc '<' '>' GEQ LEQ NEW '='
%left DESPI
%left DESPD
%left '+' '-'
%left '*' '/' '\\'
%right '^'
%nonassoc INC
%nonassoc DEC
%nonassoc MENOS_UNI



%%
programa: definicionPrograma {printf("\nprograma -> definicionPrograma");}
	| definicionLibreria {printf("\nprograma -> definicionLibreria");}
;

definicionPrograma: PROGRAMA IDENTIFICADOR ';' codigoPrograma {printf("\ndefinicionPrograma -> PROGRAMA IDENTIFICADOR ; codigoPrograma");}
;

codigoPrograma: libreriaMultiple cuerpoSubprograma {printf("\ndefinicionPrograma -> libreriaMultiple cuerpoSubprograma");}
	| libreria cuerpoSubprograma {printf("\ndefinicionPrograma -> libreria cuerpoSubprograma");}
	| cuerpoSubprograma {printf("\ndefinicionPrograma -> cuerpoSubprograma");}
;

libreria: IMPORTAR LIBRERIA nombre COMO IDENTIFICADOR ';' {printf("\nlibreria -> IMPORTAR LIBRERIA nombre COMO IDENTIFICADOR");}
	| IMPORTAR LIBRERIA nombre ';'{printf("\nlibreria -> IMPORTAR LIBRERIA nombre ");}
	| DE LIBRERIA nombre IMPORTAR IDENTIFICADOR ';'{printf("\nlibreria -> DE LIBRERIA nombre IMPORTAR IDENTIFICADOR");}
	| DE LIBRERIA nombre IMPORTAR identificadorMultiple ';'{printf("\nlibreria -> DE LIBRERIA nombre IMPORTAR identificadorMultiple");}
;
libreriaMultiple : libreria libreria {printf("\nlibreriaMultiple -> libreria libreria");}
	| libreriaMultiple libreria {printf("\nlibreriaMultiple -> libreriaMultiple libreria");}
;

definicionLibreria: LIBRERIA IDENTIFICADOR ';' codigoLibreria  {printf("\ndefinicionLibreria -> LIBRERIA IDENTIFICADOR ; codigoLibreria");}
;
declaracionMultiple: declaracion declaracion {printf("\ndeclaracionMultiple -> declaracion declaracion");}
	| declaracionMultiple declaracion {printf("\ndeclaracionMultiple -> declaracionMultiple declaracion");}
;
declaracion: declaracionObjeto 		{printf("\ndeclaracion -> declaracionObjeto");}
	| declaracionTipo 		{printf("\ndeclaracion -> declaracionTipo");}
	| declaracionSubprograma 	{printf("\ndeclaracion -> declaracionSubprograma");}
;
exportaciones: EXPORTAR nombreMultiple ';'{printf("\nexportaciones -> EXPORTAR nombreMultiple");}
	| EXPORTAR nombre ';' {printf("\nexportaciones -> EXPORTAR nombre");}
;

expresion: expresion '+' expresion 	{printf("\nexpresion -> expresion '+' expresion");}
	| expresion '-' expresion 	{printf("\nexpresion -> expresion - expresion");}
	| expresion '/' expresion 	{printf("\nexpresion -> expresion / expresion");}
	| expresion '\\' expresion 	{printf("\nexpresion -> expresion \\ expresion");}
	| expresion '*' expresion 	{printf("\nexpresion -> expresion * expresion");}
	| expresion DESPI expresion 	{printf("\nexpresion -> expresion <- expresion");}
	| expresion DESPD expresion 	{printf("\nexpresion -> expresion -> expresion");}
	| expresion '.' expresion 	{printf("\nexpresion -> expresion . expresion");}
	| '[' expresion ']'        	{printf("\nexpresion -> [ expresion ] ");} 
	| '{' expresion '}'        	{printf("\nexpresion -> { expresion } ");} 
	| expresion CUATRO_PUNTOS expresion {printf("\nexpresion -> expresion :: expresion");}
	| expresion '<' expresion 	{printf("\nexpresion -> expresion < expresion");}
	| expresion '>' expresion 	{printf("\nexpresion -> expresion > expresion");}
	| expresion LEQ expresion 	{printf("\nexpresion -> expresion <= expresion");}
	| expresion GEQ expresion 	{printf("\nexpresion -> expresion >= expresion");}
	| expresion '=' expresion 	{printf("\nexpresion -> expresion = expresion");}
	| expresion NEQ expresion 	{printf("\nexpresion -> expresion NEQ expresion");}
	| '~' expresion 		{printf("\nexpresion -> expresion ~ expresion");}
	| expresion AND expresion 	{printf("\nexpresion -> expresion AND expresion");}
	| expresion OR expresion	{printf("\nexpresion -> expresion OR expresion");}
	| expresionPotencia 		{printf("\nexpresion -> expresionPotencia");}
;
cadenaMult: CTC_CADENA ',' CTC_CADENA {printf("\ncadenaMult -> CTC_CADENA , CTC_CADENA");}
	| cadenaMult ',' CTC_CADENA   {printf("\ncadenaMult -> cadenaMult , CTC_CADENA");}	
; 

nombre: IDENTIFICADOR {printf("\nnombre -> IDENTIFICADOR");} 
	| nombre CUATRO_PUNTOS IDENTIFICADOR {printf("\nnombre -> nombre :: IDENTIFICADOR");}
;
nombreMultiple: nombre ',' nombre {printf("\nnombreMultiple -> nombre , nombre");}
	| nombreMultiple ',' nombre {printf("\nnombreMultiple -> nombreMultiple , nombre");}
;

expresionPotencia: expresionPosfija {printf("\nexpresionPotencia -> expresionPosfija");}
	| expresionPosfija '^' expresionPotencia {printf("\nexpresionPotencia -> expresionPosfija ^ expresionPotencia");}
;
expresionPosfija: expresionUnaria {printf("\nexpresionPosfija -> expresionUnaria");}
	| expresionUnaria operadorPosfijo {printf("\nexpresionPosfija -> expresionUnaria operadorPosfijo");}
;
operadorPosfijo: INC {printf("\noperadorPosfijo -> INC");}
	| DEC {printf("\noperadorPosfijo -> DEC");}
;
expresionUnaria: primario {printf("\nexpresionUnaria -> primario");}
	| '-' primario {printf("\nexpresionUnaria -> '-' primario");} %prec MENOS_UNI
; 

primario: literal {printf("\nprimario -> literal");}
	| objeto {printf("\nprimario -> objeto");}
	| llamadaSubprograma {printf("\nprimario -> llamada_subprograma");}
	| OBJETO llamadaSubprograma {printf("\nprimario -> OBJETO llamada_subprograma");}
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

objeto: nombre  {printf("\nobjeto -> nombre");}
	| objeto '.' nombre {printf("\nobjeto -> objeto . nombre");}
	| objeto '[' expresion ']'     {printf("\nobjeto -> objeto [ expresion ]");}
	| objeto '[' expresionMult ']' {printf("\nobjeto -> objeto [ expresionMult ]");}
	| objeto '{' CTC_CADENA '}'    {printf("\nobjeto -> objeto { CTC_CADENA }");}
	| objeto '{' cadenaMult '}'    {printf("\nobjeto -> objeto { cadenaMult }");}
; 



declaracionObjeto: IDENTIFICADOR ':' CONSTANTE especificacionTipo ASIGNACION expresion ';' {printf("\ndeclaracionObjeto -> IDENTIFICADOR : CONSTANTE especificacionTipo ASIGNACION expresion ;\n");}
	| identificadorMultiple ':' CONSTANTE especificacionTipo ASIGNACION expresion ';' {printf("\ndeclaracionObjeto -> identificadorMultiple : CONSTANTE especificacionTipo ASIGNACION expresion ;\n");}

	| IDENTIFICADOR ':' especificacionTipo ASIGNACION expresion ';'{printf("\ndeclaracionObjeto -> IDENTIFICADOR : especificacionTipo ASIGNACION expresion ;\n");}
	| identificadorMultiple ':' especificacionTipo ASIGNACION expresion ';' {printf("\ndeclaracionObjeto -> identificadorMultiple : especificacionTipo ASIGNACION expresion ;\n");}
	| IDENTIFICADOR ':' especificacionTipo ';'{printf("\ndeclaracionObjeto -> IDENTIFICADOR : especificacionTipo ;\n");}
	| identificadorMultiple ':' especificacionTipo ';' {printf("\ndeclaracionObjeto -> identificadorMultiple : especificacionTipo ;\n");}
;


instruccionInterrupcion: SIGUIENTE cuando ';'  {printf("\ninstruccionInterrupcion -> siguiente ; ");}
	| SALIR DE IDENTIFICADOR cuando ';' {printf("\ninstruccionInterrupcion -> salir de IDENTIFICADOR cuando ; ");}
	| SALIR cuando ';' {printf("\ninstruccionInterrupcion -> salir cuando(?) ; ");}
;

cuando: CUANDO expresion {printf("\ncuando -> CUANDO expresion");} 
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

clausulaIteracion: PARA IDENTIFICADOR EN expresion {printf("\nclausulaIteracion -> PARA IDENTIFICADOR EN expresion");}
	| PARA IDENTIFICADOR EN ':' especificacionTipo EN expresion {printf("\nclausulaIteracion -> PARA IDENTIFICADOR EN ':' especifiacionTipo EN expresion");}

	| REPETIR IDENTIFICADOR EN rango {printf("\nclausulaIteracion -> REPETIR IDENTIFICADOR EN RANGO");}
	| REPETIR IDENTIFICADOR ':' especificacionTipo EN rango {printf("\nclausulaIteracion -> REPETIR IDENTIFICADOR ':' especificacionTipo EN rango");}

	| REPETIR IDENTIFICADOR EN rango DESCENDENTE {printf("\nclausulaIteracion -> REPETIR IDENTIFICADOR EN rango DESCENDENTE");}
	| REPETIR IDENTIFICADOR ':' especificacionTipo EN rango DESCENDENTE {printf("\nclausulaIteracion -> REPETIR IDENTIFICADOR ':' especificacionTipo EN rango DESCENDENTE");}
	| MIENTRAS expresion {printf("\nclausulaIteracion -> MIENTRAS expresion");}
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

expresionMult : expresionMult ',' expresion {printf("\nexpresionMult -> expresionMult , expresion");}
	| expresion ',' expresion           {printf("\nexpresionMult -> expresion , expresion");}
;
clase : CLASE ULTIMA superclase declaracionComponente FIN CLASE {printf("\nclase -> CLASE ULTIMA superclase declaracionComponente FIN CLASE");}
	| CLASE ULTIMA superclase declaracionComponenteMultiple FIN CLASE {printf("\nclase -> CLASE ULTIMA superclase declaracionComponenteMultiple FIN CLASE");}
	| CLASE ULTIMA declaracionComponente FIN CLASE {printf("\nclase -> CLASE ULTIMA declaracionComponente FIN CLASE");}
	| CLASE ULTIMA declaracionComponenteMultiple FIN CLASE {printf("\nclase -> CLASE ULTIMA declaracionComponenteMultiple FIN CLASE");}
	| CLASE superclase declaracionComponente FIN CLASE {printf("\nclase -> CLASE superclase declaracionComponente FIN CLASE");}
	| CLASE superclase declaracionComponenteMultiple FIN CLASE {printf("\nclase -> CLASE superclase declaracionComponenteMultiple FIN CLASE");}
	| CLASE declaracionComponente FIN CLASE {printf("\nclase -> CLASE declaracionComponente FIN CLASE");}
	| CLASE declaracionComponenteMultiple FIN CLASE {printf("\nclase -> CLASE declaracionComponenteMultiple FIN CLASE");}
;

superclase: '(' nombre ')' {printf("\nsuperClase -> ( nombre )");}
	| '(' nombreMultiple ')' {printf("\nsuperClase -> ( nombreMultiple )");}
;
declaracionComponente: visibilidad componente {printf("\ndeclaracionComponente -> visibilidad  componente");}
	| componente {printf("\ndeclaracionComponente ->   componente");}
;
declaracionComponenteMultiple: declaracionComponente  declaracionComponente {printf("\ndeclaracionComponenteMultiple -> declaracionComponente  declaracionComponente");}
	| declaracionComponenteMultiple  declaracionComponente {printf("\ndeclaracionComponenteMultiple -> declaracionComponenteMultiple  declaracionComponente");}
;
visibilidad: PUBLICO {printf("\nvisibilidad -> PUBLICO");}
	| PRIVADO {printf("\nvisibilidad -> PRIVADO");}
	| PROTEGIDO {printf("\nvisibilidad -> PROTEGIDO");}
;
componente: declaracionTipo {printf("\ncomponente -> declaracionTipo");}
	| declaracionObjeto {printf("\ncomponente -> declaracionObjeto");}
	| declaracionSubprograma {printf("\ncomponente -> declaracionSubprograma");}
	| modificador declaracionSubprograma {printf("\ncomponente -> modificador declaracionSubprograma");}
	|modificadorMultiple declaracionSubprograma {printf("\ncomponente -> modificadorMult declaracionSubprograma");}
;
modificadorMultiple: modificador ',' modificador {printf("\nmodificadorMultiple -> modificador ',' modificador");}
	| modificadorMultiple ',' modificador {printf("\nmodificadorMultiple -> modificadorMultiple ',' modificador");}
;
modificador: CONSTRUCTOR {printf("\nmodificador -> CONSTRUCTOR");}
	| DESTRUCTOR {printf("\nmodificador -> DESTRUCTOR");}
	| GENERICO {printf("\nmodificador -> GENERIC");}
	| ABSTRACTO {printf("\nmodificador -> ABSTRACTO");}
	| ESPECIFICO {printf("\nmodificador -> ESPECIFICO");}
	| FINAL  {printf("\nmodificador -> FINAL");}
;



rango: expresion DOS_PUNTOS expresion {printf("\nrango -> expresion :: expresion");}
	| rango DOS_PUNTOS expresion {printf("\nrango -> rango :: expresion");}
;

instruccion: instruccionAsignacion 		{printf("\ninstruccion -> instruccionAsignacion");}
	| instruccionDevolver 		 	{printf("\ninstruccion -> instruccionDevolver");}
	| instruccionLlamada   			{printf("\ninstruccion -> instruccionLlamada");}
	| instruccionSi				{printf("\ninstruccion -> instruccionSi");}
	| instruccionCasos			{printf("\ninstruccion -> instruccionCasos");}
	| instruccionBucle			{printf("\ninstruccion -> instruccionBucle");}
	| instruccionInterrupcion		{printf("\ninstruccion -> instruccionInterrupcion");}
	| instruccionLanzamientoExcepcion	{printf("\ninstruccion -> instruccionLanzamientoExcepcion");}
	| instruccionDeCapturaDeExcepcion	{printf("\ninstruccion -> instruccionDeCapturaDeExcepcion");}
	| ';'					{printf("\ninstruccion -> ';'");}
	| finInstruccionError			{printf("\ninstruccion -> finInstruccionError");}
;

instruccionAsignacion: objeto operadorAsignacion expresion ';' {printf("\ninstruccionAsignacion -> objeto op_asignacion expresion ';'");}
;

operadorAsignacion: ASIGNACION		{printf("\noperadorAsignacion -> ASIGNACION := ");}
	| ASIG_SUMA			{printf("\noperadorAsignacion -> ASIG_SUMA :+");}
	| ASIG_RESTO			{printf("\noperadorAsignacion -> ASIG_RESTO :\\");}
	| ASIG_MULT			{printf("\noperadorAsignacion -> ASIG_MULT :*");}
	| ASIG_DIV			{printf("\noperadorAsignacion -> ASIG_DIV :/");}
	| ASIG_RESTA			{printf("\noperadorAsignacion -> ASIG_RESTA :-");}
	| ASIG_POT			{printf("\noperadorAsignacion -> ASIG_POT :^");}
	| ASIG_DESPI			{printf("\noperadorAsignacion -> ASIG_DESPI :< ");}
	| ASIG_DESPD			{printf("\noperadorAsignacion -> ASIG_DESPD :> ");}
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
	| SI expresion ENTONCES instruccionMultiple SINO instruccionMultiple FIN SI {printf("\ninstruccionSi -> SI expresion ENTONCES instruccionMultiple SINO instruccionMultiple");}
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

tipoEscalar: tipoBasico 		{printf("\ntipoEscalar -> tipoBasico");}
	| SIGNO tipoBasico 		{printf("\ntipoEscalar -> SIGNO tipoBasico");}
	| SIGNO tipoBasico longitud 	{printf("\ntipoEscalar -> SIGNO tipoBasico longitud");}
	| SIGNO tipoBasico RANGO rango 	{printf("\ntipoEscalar -> SIGNO tipoBasico RANGO rango");}
	| SIGNO tipoBasico longitud RANGO rango {printf("\ntipoEscalar -> SIGNO tipoBasico longitud RANGO rango");}
	| tipoBasico longitud 		{printf("\ntipoEscalar -> tipoBasico longitud");}
	| tipoBasico RANGO rango 	{printf("\ntipoEscalar -> tipoBasico RANGO rango");}
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

tipoTabla: TABLA '(' expresion DOS_PUNTOS expresion ')' DE especificacionTipo {printf("\ntipoTabla -> TABLA '(' expresion '..' expresion ')' DE especificacionTipo");}
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

tipoEnumerado: ENUMERACION elementoEnumeracion FIN ENUMERACION 			{printf("\ntipoEnumerado -> ENUMERACION elementoEnumeracion FIN ENUMERACION");}
	| ENUMERACION elementoEnumeracionMultiple FIN ENUMERACION 		{printf("\ntipoEnumerado -> ENUMERACION elementoEnumeracionMultiple FIN ENUMERACION");}
	| ENUMERACION DE tipoEscalar elementoEnumeracion FIN ENUMERACION 	{printf("\ntipoEnumerado -> ENUMERACION DE tipoEscalar elementoEnumeracion FIN ENUMERACION");}
	| ENUMERACION DE tipoEscalar elementoEnumeracionMultiple FIN ENUMERACION {printf("\ntipoEnumerado -> ENUMERACION DE tipoEscalar elementoEnumeracionMultiple FIN ENUMERACION");}
;

elementoEnumeracion: IDENTIFICADOR {printf("\nelementoEnumeracion -> IDENTIFICADOR");}
	| IDENTIFICADOR ASIGNACION expresion {printf("\nelementoEnumeracion -> IDENTIFICADOR ASIGNACION expresion");}
;

elementoEnumeracionMultiple: elementoEnumeracion ',' elementoEnumeracion {printf("\nelementoEnumeracionMultiple -> elementoEnumeracion ',' elementoEnumeracion");}
	| elementoEnumeracionMultiple ',' elementoEnumeracion {printf("\nelementoEnumeracionMultiple -> elementoEnumeracionMultiple ',' elementoEnumeracion");}
;

declaracionSubprograma: SUBPROGRAMA cabeceraSubprograma cuerpoSubprograma SUBPROGRAMA {printf("\ndeclaracionSubprograma -> SUBPROGRAMA cabeceraSubprograma cuerpoSubprograma SUBPROGRAMA");}
	| finSubprogramaError {printf("\ndeclaracionSubprograma -> finSubprogramaError");}
;

cabeceraSubprograma: IDENTIFICADOR 			{printf("\ncabeceraSubprograma -> IDENTIFICADOR");}
	| IDENTIFICADOR parametrizacion 		{printf("\ncabeceraSubprograma -> IDENTIFICADOR parametrizacion");}
	| IDENTIFICADOR tipoResultado 			{printf("\ncabeceraSubprograma -> IDENTIFICADOR tipoResultado");}
	| IDENTIFICADOR parametrizacion tipoResultado 	{printf("\ncabeceraSubprograma -> IDENTIFICADOR parametrizacion tipoResultado");}
;

parametrizacion: '(' declaracionParametros ')'  {printf("\nparametrizacion -> '(' declaracionParametros ')'");}
	| '(' declaracionParametrosMultiple ')' {printf("\nparametrizacion -> '(' declaracionParametrosMultiple ')'");}
;

declaracionParametros: IDENTIFICADOR ':' especificacionTipo {printf("\ndeclaracionParametros -> IDENTIFICADOR ':' especificacionTipo");}
	| IDENTIFICADOR ':' modo especificacionTipo {printf("\ndeclaracionParametros -> IDENTIFICADOR ':' modo especificacionTipo");}
	| IDENTIFICADOR ':' especificacionTipo ASIGNACION expresion {printf("\ndeclaracionParametros -> IDENTIFICADOR ':' especificacionTipo ASIGNACION expresion");}
	| IDENTIFICADOR ':' modo especificacionTipo ASIGNACION expresion {printf("\ndeclaracionParametros -> IDENTIFICADOR ':' modo especificacionTipo ASIGNACION expresion");}
	| identificadorMultiple ':' especificacionTipo {printf("\ndeclaracionParametros -> identificadorMultiple ':' especificacionTipo");}
	| identificadorMultiple ':' modo especificacionTipo {printf("\ndeclaracionParametros -> identificadorMultiple ':' modo especificacionTipo");}
	| identificadorMultiple ':' especificacionTipo ASIGNACION expresion {printf("\ndeclaracionParametros -> identificadorMultiple ':' especificacionTipo ASIGNACION expresion");}
	| identificadorMultiple ':' modo especificacionTipo ASIGNACION expresion {printf("\ndeclaracionParametros -> identificadorMultiple ':' modo especificacionTipo ASIGNACION expresion");}
;

declaracionParametrosMultiple: declaracionParametros ';' declaracionParametros  {printf("\ndeclaracionParametrosMultiple -> declaracionParametros ';' declaracionParametros ';'");}
	| declaracionParametrosMultiple ';' declaracionParametros ';' {printf("\ndeclaracionParametrosMultiple -> declaracionParametrosMultiple declaracionParametros ';'");}
;

modo: VALOR {printf("\nmodo -> VALOR");}
	| REFERENCIA {printf("\nmodo -> REFERENCIA");}
;

tipoResultado: DEVOLVER especificacionTipo {printf("\ntipoResultado -> DEVOLVER especificacionTipo");}
;

cuerpoSubprograma: PRINCIPIO instruccion FIN {printf("\ncuerpoSubprograma -> PRINCIPIO instruccion FIN");}
	| PRINCIPIO instruccionMultiple FIN {printf("\ncuerpoSubprograma -> PRINCIPIO instruccionMultiple FIN");}
	| declaracion PRINCIPIO instruccion FIN {printf("\ncuerpoSubprograma -> PRINCIPIO declaracion instruccion FIN");}
	| declaracion PRINCIPIO  instruccionMultiple FIN {printf("\ncuerpoSubprograma -> PRINCIPIO declaracion instruccionMultiple FIN");}
	| declaracionMultiple PRINCIPIO instruccion FIN {printf("\ncuerpoSubprograma -> PRINCIPIO declaracionMultiple instruccion FIN");}
	| declaracionMultiple PRINCIPIO instruccionMultiple FIN {printf("\ncuerpoSubprograma -> PRINCIPIO declaracionMultiple instruccionMultiple FIN");}
;

codigoLibreria: libreriaMultiple exportaciones declaracion {printf("\ncodigoLibreria -> libreriaMultiple exportaciones declaracion");}
	| libreriaMultiple exportaciones declaracionMultiple {printf("\ncodigoLibreria -> libreriaMultiple exportaciones declaracionMultiple");}
	| libreriaMultiple declaracion {printf("\ncodigoLibreria -> libreriaMultiple declaracion");}
	| libreriaMultiple declaracionMultiple {printf("\ncodigoLibreria -> libreriaMultiple declaracionMultiple");}
	| libreria exportaciones declaracion {printf("\ncodigoLibreria -> libreria exportaciones declaracion");}
	| libreria exportaciones declaracionMultiple {printf("\ncodigoLibreria -> libreria exportaciones declaracionMultiple");}
	| libreria  declaracion {printf("\ncodigoLibreria -> libreria declaracion");}
	| libreria  declaracionMultiple {printf("\ncodigoLibreria -> libreria declaracionMultiple");}
	| exportaciones declaracion {printf("\ncodigoLibreria -> exportaciones declaracion");}
	| exportaciones declaracionMultiple {printf("\ncodigoLibreria -> exportaciones declaracionMultiple");}
	| declaracion {printf("\ncodigoLibreria -> declaracion");}
	| declaracionMultiple {printf("\ncodigoLibreria -> declaracionMultiple");}
;

enumeraciones:  expresionCondicional  clausulaIteracion ']' {printf("\nenumeraciones -> [ expresionCondicional ]");}
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
expresionCondicional: '[' expresion           {printf("\nexpresionCondicional -> expresion");}
	| SI expresion ENTONCES expresion {printf("\nexpresionCondicional -> si expresion entonces expresion");}
	| SI expresion ENTONCES expresion SINO expresion {printf("\nexpresionCondicional -> si expresion entonces expresion SINO expresion");}
;

reductora: error expresion {printf("\nreductora -> error expresion");}
	| reductora error {printf("\nreductora -> error expresion");}
;

finSubprogramaError: reductora FIN SUBPROGRAMA{printf("\nfinSubprogramaError -> reductora FIN SUBPROGRAMA");}
;

finInstruccionError: reductora ';' {printf("\nfinInstruccionError -> reductora ';'");}
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
