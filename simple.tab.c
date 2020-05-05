/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "simple.y" /* yacc.c:339  */


  #include <stdio.h>
  extern FILE *yyin;
  extern int yylex();

  #define YYDEBUG 1
int yyerror(char *s);


#line 77 "simple.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "simple.tab.h".  */
#ifndef YY_YY_SIMPLE_TAB_H_INCLUDED
# define YY_YY_SIMPLE_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ABSTRACTO = 258,
    BOOLEANO = 259,
    BUCLE = 260,
    CARACTER = 261,
    CASOS = 262,
    CLASE = 263,
    COMO = 264,
    CONSTANTE = 265,
    CONSTRUCTOR = 266,
    CORTO = 267,
    CUANDO = 268,
    DE = 269,
    DESCENDENTE = 270,
    DESTRUCTOR = 271,
    DEVOLVER = 272,
    DICCIONARIO = 273,
    EN = 274,
    ENTERO = 275,
    ENTONCES = 276,
    ENUMERACION = 277,
    ES = 278,
    ESPECIFICO = 279,
    EXCEPCION = 280,
    EXPORTAR = 281,
    FALSO = 282,
    FIN = 283,
    FINAL = 284,
    FINALMENTE = 285,
    GENERICO = 286,
    IMPORTAR = 287,
    LARGO = 288,
    LANZA = 289,
    LIBRERIA = 290,
    LISTA = 291,
    MIENTRAS = 292,
    OBJETO = 293,
    OTRO = 294,
    PARA = 295,
    PRINCIPIO = 296,
    PRIVADO = 297,
    PROGRAMA = 298,
    PROTEGIDO = 299,
    PRUEBA = 300,
    PUBLICO = 301,
    RANGO = 302,
    REAL = 303,
    REFERENCIA = 304,
    REGISTRO = 305,
    REPETIR = 306,
    SALIR = 307,
    SI = 308,
    SIGNO = 309,
    SIGUIENTE = 310,
    SINO = 311,
    SUBPROGRAMA = 312,
    TABLA = 313,
    TIPO = 314,
    ULTIMA = 315,
    VALOR = 316,
    VERDADERO = 317,
    CTC_CARACTER = 318,
    CTC_CADENA = 319,
    IDENTIFICADOR = 320,
    CTC_ENTERA = 321,
    CTC_REAL = 322,
    DOS_PUNTOS = 323,
    CUATRO_PUNTOS = 324,
    ASIGNACION = 325,
    FLECHA = 326,
    INC = 327,
    DEC = 328,
    DESPI = 329,
    DESPD = 330,
    LEQ = 331,
    GEQ = 332,
    NEQ = 333,
    AND = 334,
    OR = 335,
    ASIG_SUMA = 336,
    ASIG_RESTA = 337,
    ASIG_MULT = 338,
    ASIG_DIV = 339,
    ASIG_RESTO = 340,
    ASIG_POT = 341,
    ASIG_DESPI = 342,
    ASIG_DESPD = 343,
    MENOS_UNI = 344
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 14 "simple.y" /* yacc.c:355  */

  int valor_entero;
  double valor_real;
  char * texto;

#line 213 "simple.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SIMPLE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 230 "simple.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2751

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  110
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  95
/* YYNRULES -- Number of rules.  */
#define YYNRULES  307
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  625

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   344

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      94,    95,   102,   100,   109,   101,   107,   103,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    89,   108,
      97,    99,    98,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    92,   104,    93,   105,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    90,     2,    91,    96,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,   106
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    60,    60,    61,    64,    67,    68,    69,    72,    73,
      74,    75,    77,    78,    81,    83,    84,    86,    87,    88,
      90,    91,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   115,   116,   119,   120,   122,   123,   126,   127,
     129,   130,   132,   133,   135,   136,   139,   140,   141,   142,
     143,   144,   146,   147,   148,   149,   150,   151,   154,   155,
     156,   157,   158,   159,   164,   165,   167,   168,   169,   170,
     174,   175,   176,   177,   178,   179,   182,   185,   188,   189,
     192,   193,   195,   196,   198,   199,   201,   202,   204,   205,
     206,   208,   209,   211,   212,   213,   214,   217,   218,   220,
     221,   223,   224,   225,   228,   229,   232,   233,   234,   236,
     237,   239,   240,   243,   244,   247,   248,   251,   252,   253,
     255,   256,   259,   260,   262,   263,   264,   265,   266,   267,
     268,   269,   272,   273,   275,   276,   278,   279,   281,   282,
     283,   285,   286,   287,   288,   289,   291,   292,   294,   295,
     296,   297,   298,   299,   304,   305,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   321,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   335,   336,   339,
     342,   343,   346,   347,   351,   352,   353,   356,   357,   358,
     359,   360,   361,   364,   365,   368,   369,   372,   373,   374,
     377,   378,   379,   380,   381,   382,   383,   384,   387,   388,
     391,   392,   393,   394,   397,   398,   401,   404,   405,   406,
     409,   410,   413,   414,   415,   416,   419,   420,   423,   424,
     425,   426,   429,   430,   433,   434,   437,   438,   441,   442,
     443,   444,   447,   448,   451,   452,   453,   454,   455,   456,
     457,   458,   461,   462,   465,   466,   469,   472,   473,   474,
     475,   476,   477,   480,   481,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,   494,   495,   496,   497,   498,
     499,   500,   501,   503,   504,   506,   507,   510,   512,   513,
     515,   517,   518,   519,   522,   523,   526,   529
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ABSTRACTO", "BOOLEANO", "BUCLE",
  "CARACTER", "CASOS", "CLASE", "COMO", "CONSTANTE", "CONSTRUCTOR",
  "CORTO", "CUANDO", "DE", "DESCENDENTE", "DESTRUCTOR", "DEVOLVER",
  "DICCIONARIO", "EN", "ENTERO", "ENTONCES", "ENUMERACION", "ES",
  "ESPECIFICO", "EXCEPCION", "EXPORTAR", "FALSO", "FIN", "FINAL",
  "FINALMENTE", "GENERICO", "IMPORTAR", "LARGO", "LANZA", "LIBRERIA",
  "LISTA", "MIENTRAS", "OBJETO", "OTRO", "PARA", "PRINCIPIO", "PRIVADO",
  "PROGRAMA", "PROTEGIDO", "PRUEBA", "PUBLICO", "RANGO", "REAL",
  "REFERENCIA", "REGISTRO", "REPETIR", "SALIR", "SI", "SIGNO", "SIGUIENTE",
  "SINO", "SUBPROGRAMA", "TABLA", "TIPO", "ULTIMA", "VALOR", "VERDADERO",
  "CTC_CARACTER", "CTC_CADENA", "IDENTIFICADOR", "CTC_ENTERA", "CTC_REAL",
  "DOS_PUNTOS", "CUATRO_PUNTOS", "ASIGNACION", "FLECHA", "INC", "DEC",
  "DESPI", "DESPD", "LEQ", "GEQ", "NEQ", "AND", "OR", "ASIG_SUMA",
  "ASIG_RESTA", "ASIG_MULT", "ASIG_DIV", "ASIG_RESTO", "ASIG_POT",
  "ASIG_DESPI", "ASIG_DESPD", "':'", "'{'", "'}'", "'['", "']'", "'('",
  "')'", "'~'", "'<'", "'>'", "'='", "'+'", "'-'", "'*'", "'/'", "'\\\\'",
  "'^'", "MENOS_UNI", "'.'", "';'", "','", "$accept", "programa",
  "definicionPrograma", "codigoPrograma", "libreria", "libreriaMultiple",
  "definicionLibreria", "declaracionMultiple", "declaracion",
  "exportaciones", "expresion", "cadenaMult", "nombre", "nombreMultiple",
  "expresionPotencia", "expresionPosfija", "operadorPosfijo",
  "expresionUnaria", "primario", "literal", "objeto", "declaracionObjeto",
  "instruccionInterrupcion", "cuando", "instruccionLanzamientoExcepcion",
  "instruccionMultiple", "instruccionCasos", "casoMultiple", "caso",
  "entradas", "entrada", "entradaDosP", "instruccionBucle",
  "clausulaIteracion", "instruccionDeCapturaDeExcepcion",
  "clausulasExcepcion", "clausulaExcepcionEspecifica",
  "clausulaExcepcionEspecificaMultiple", "clausulaExcepcionGeneral",
  "clausulaFinalmente", "clausulas", "identificadorMultiple",
  "expresionMult", "clase", "superclase", "declaracionComponente",
  "declaracionComponenteMultiple", "visibilidad", "componente",
  "modificadorMultiple", "modificador", "rango", "instruccion",
  "instruccionAsignacion", "operadorAsignacion", "instruccionDevolver",
  "instruccionLlamada", "definicionParametro",
  "definicionParametroMultiple", "llamadaSubprograma", "instruccionSi",
  "especificacionTipo", "declaracionTipo", "tipoNoEstructurado",
  "tipoEscalar", "longitud", "tipoBasico", "tipoTabla", "tipoDiccionario",
  "tipoEstructurado", "tipoRegistro", "campo", "campoMultiple",
  "tipoEnumerado", "elementoEnumeracion", "elementoEnumeracionMultiple",
  "declaracionSubprograma", "cabeceraSubprograma", "parametrizacion",
  "declaracionParametros", "declaracionParametrosMultiple", "modo",
  "tipoResultado", "cuerpoSubprograma", "codigoLibreria", "enumeraciones",
  "clausulaIteracionMultiple", "claveValorMult", "claveValor",
  "campoValorMult", "campoValor", "expresionCondicional", "reductora",
  "finSubprogramaError", "finInstruccionError", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,    58,
     123,   125,    91,    93,    40,    41,   126,    60,    62,    61,
      43,    45,    42,    47,    92,    94,   344,    46,    59,    44
};
# endif

#define YYPACT_NINF -368

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-368)))

#define YYTABLE_NINF -285

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-285)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     392,   -46,   -37,    40,  -368,  -368,   -56,    70,  -368,   483,
     581,  1797,   162,   122,   190,   175,   187,   -47,   483,   483,
     145,   159,   352,  -368,    65,  -368,  -368,  -368,   155,  -368,
    1618,  -368,   581,   581,   266,   385,  -368,  -368,   122,  -368,
    -368,  -368,  -368,  -368,  -368,  1810,   393,  1797,  1797,   565,
    2588,    83,  -368,   139,   322,  -368,  -368,   243,  -368,  -368,
     381,   122,   -52,   268,   122,    55,   516,   271,  1350,   226,
    -368,   200,   207,   352,  -368,   212,   219,   352,  -368,  -368,
     230,   282,  1432,   245,  -368,   272,  1797,  1742,   122,  1797,
     280,  1618,   343,    -8,  1797,    -5,   262,  -368,   722,  -368,
    -368,  1030,  -368,  -368,  1618,  -368,  1056,  -368,  -368,  -368,
     279,  -368,     1,  -368,  -368,  -368,  1618,  1618,    83,  -368,
     351,   354,  2503,   -60,   -28,   202,   211,  1797,  2174,   146,
    2539,  2633,   446,  -368,  1797,  1797,  1797,  1797,  1797,  1797,
    1797,  1797,  1797,  1797,  1797,  1797,  1797,  1797,  1797,  1797,
    1797,   364,   824,   919,  -368,  -368,  -368,   376,  1797,   382,
     110,   373,   137,  -368,   122,  -368,   122,    36,  1074,   389,
     450,  -368,   413,  2175,  -368,  -368,  1074,   460,  -368,   477,
    -368,   231,   427,   431,   -41,  -368,  -368,    27,  -368,  -368,
    -368,   300,   313,   342,   380,  1074,   -26,  -368,  -368,  1688,
    -368,  2246,   -62,  2588,    -1,   829,   829,     4,  1797,   474,
    -368,   443,   650,  -368,   468,   381,  -368,  -368,  -368,  -368,
    -368,  -368,  -368,  -368,  -368,  1797,  -368,  -368,  1097,  1123,
    -368,  -368,  -368,  -368,  1164,  1190,  1231,  1257,  1797,  1797,
    -368,  -368,   490,  -368,   490,  -368,   519,  -368,   519,  1675,
    -368,  1797,  -368,  1797,  -368,   351,   354,  2588,   715,   423,
    2644,  2644,  2644,  2599,  2633,  2644,  2644,  2644,   429,   429,
     487,   487,   487,   487,  -368,   520,  -368,  2588,   -36,   237,
    -368,   227,   239,  2210,   165,  -368,  -368,  -368,  -368,  -368,
     533,   431,   431,   541,  -368,  -368,    86,    87,   119,   208,
    -368,  -368,  1664,   108,   546,  -368,   510,  -368,  -368,  -368,
     556,  1074,  1074,   209,  1797,  1797,  -368,  -368,  -368,  1797,
     592,   564,  1797,  -368,   629,  -368,  -368,  1797,  1074,  1298,
    1618,   614,   622,   622,  -368,  -368,   621,   623,  1797,  1074,
    2588,     0,  -368,  1618,  -368,  1618,  2258,   645,   649,  -368,
    -368,  -368,  -368,  2588,  2588,  -368,  -368,  -368,  -368,  1797,
    2588,  2588,  1797,  -368,  1857,  -368,  1857,  -368,   596,  -368,
     599,  -368,  -368,   426,   447,   557,   587,   587,  -368,   389,
    -368,   389,  -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,
    -368,  1676,   122,  -368,  2106,  1885,  1932,  2144,  -368,    14,
      32,  -368,  -368,   286,   597,   -19,   -18,   172,   179,   144,
     152,  -368,  1797,  -368,  -368,  1797,   625,  2295,  2307,  2344,
     600,  1797,  1797,  2356,  1789,   387,   406,  2588,   655,   122,
      13,   636,  1324,  1365,  -368,  -368,  -368,  -368,  -368,   624,
     633,    17,   660,  -368,   572,   896,   922,  1394,  1426,  -368,
    -368,  -368,  2138,  2588,  -368,  -368,  -368,  -368,  -368,  -368,
    -368,  -368,  -368,   612,  1074,   613,  1074,  -368,  -368,  2106,
    1956,  1998,    96,   287,  2007,  2045,   682,  -368,   684,  -368,
    -368,   683,  -368,   683,  -368,   632,  1797,   681,   632,   688,
     632,  1074,  1074,   654,  -368,   661,  -368,  2392,   600,  1797,
    1797,  -368,  1797,  1797,   600,  2404,  -368,  -368,  2441,   646,
     627,  1789,   711,  -368,   713,  -368,  1797,    25,  -368,  -368,
    -368,  1797,  -368,   668,  1618,   669,  1618,   718,   731,  1797,
    1797,   667,  1797,   670,  2077,  2115,   730,   733,  -368,  -368,
     747,   748,  -368,  -368,  -368,  -368,   -12,    -2,  2588,  -368,
    -368,  -368,  -368,   -16,    -9,  -368,  -368,  -368,   600,  2552,
    2588,  2588,  -368,  1797,  1618,  -368,   671,  -368,  -368,  2588,
    1618,    19,  -368,  1455,  1487,  -368,  1516,  1548,  -368,  -368,
    2588,  2588,  1797,  2588,  1797,   750,   751,  -368,  -368,  -368,
    -368,   739,   744,  1797,  -368,  1797,  -368,   753,  2588,   963,
     989,  -368,  1577,  1609,  -368,   717,   720,   721,   728,  2588,
    2588,  -368,  -368,  -368,  -368,  2453,  2489,  1074,  -368,  -368,
    -368,  -368,  -368,  -368,  -368
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     2,     3,     0,     0,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    17,     0,    18,    19,    14,     0,   247,
       0,     4,     0,     0,     0,     0,     7,    63,     0,    62,
      66,    67,    44,    64,    65,     0,     0,     0,     0,     0,
     304,    68,    41,    48,    50,    54,    56,    57,    58,    60,
       0,     0,     0,     0,     0,   248,     0,     0,     0,     0,
      12,     0,     0,     0,    13,     0,     0,     0,    16,    15,
       0,     0,     0,     0,   305,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    44,   175,     0,   172,
     173,     0,   170,   171,     0,   174,     0,   166,   167,   168,
       0,   169,     0,   176,     6,     5,     0,     0,     0,    59,
      67,    44,     0,     0,     0,     0,     0,     0,   303,     0,
       0,    38,     0,    55,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    52,    53,    51,     0,     0,     0,
       0,     0,     0,    21,     0,    20,     0,     0,     0,     0,
     249,   250,     0,     0,   220,   221,     0,     0,   222,     0,
     223,     0,     0,   203,     0,   204,   207,   210,   208,   209,
     130,     0,     0,     0,     0,     0,     0,   131,   306,     0,
     187,     0,     0,   113,     0,     0,     0,     0,     0,     0,
      82,     0,     0,    80,     0,     0,   178,   179,   183,   181,
     182,   180,   184,   185,   186,     0,   268,    89,     0,     0,
     267,    88,   189,   307,     0,     0,     0,     0,     0,     0,
      30,   290,     0,   289,     0,   292,     0,   291,     0,     0,
     287,     0,   288,     0,    61,     0,     0,    31,    27,    28,
      34,    35,    37,    39,    40,    32,    33,    36,    22,    23,
      26,    24,    25,    29,    45,    44,   194,   190,     0,     0,
      49,     0,     0,     0,     0,    69,   285,   293,   286,   294,
       0,    46,    47,     0,     9,   266,     0,     0,     0,     0,
     251,   246,     0,     0,     0,   229,     0,   206,   227,   228,
       0,     0,     0,   211,     0,     0,    78,   218,   219,     0,
     215,     0,     0,    79,     0,   188,    87,     0,     0,     0,
       0,   127,     0,     0,   116,   129,     0,     0,     0,     0,
      86,     0,    84,     0,    81,     0,     0,     0,     0,   272,
     271,   270,   269,   297,   300,   296,   295,   299,   298,     0,
     133,   132,     0,   195,     0,   196,     0,    72,     0,    73,
       0,    70,    71,     0,     0,     0,     0,     0,   252,     0,
     253,     0,   161,   158,   159,   162,   163,   160,   149,   150,
     148,     0,     0,   152,     0,     0,     0,     0,   145,     0,
       0,   151,   153,     0,   242,     0,     0,     0,     0,     0,
       0,   205,     0,   226,   225,     0,   212,     0,     0,     0,
     216,     0,     0,     0,     0,     0,     0,   107,     0,     0,
       0,     0,     0,     0,   128,   121,   117,   122,   118,     0,
       0,   109,     0,    83,     0,     0,     0,     0,     0,   177,
     106,   105,   302,   191,   192,   193,    42,    43,    10,    11,
       8,   265,   264,   254,     0,   258,     0,   262,   263,     0,
       0,     0,     0,     0,     0,     0,     0,   146,     0,   147,
     144,     0,   155,     0,   154,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   236,     0,   237,     0,   213,     0,
       0,    76,     0,     0,   217,     0,    77,   100,    98,     0,
      97,     0,     0,    93,     0,    92,     0,     0,   115,   114,
     111,     0,    85,     0,     0,     0,     0,     0,     0,     0,
       0,   255,     0,   259,     0,     0,     0,     0,   142,   143,
       0,     0,   140,   141,   157,   156,     0,     0,   243,   238,
     244,   239,   245,     0,     0,   230,   231,    74,   214,     0,
     164,   165,    75,     0,     0,   101,    96,    91,    90,   108,
       0,   110,   198,     0,     0,   197,     0,     0,   104,   103,
     301,   256,     0,   260,     0,     0,     0,   136,   137,   138,
     139,     0,     0,     0,   232,     0,   234,     0,    99,     0,
       0,   102,     0,     0,   112,     0,     0,     0,     0,   257,
     261,   134,   135,   240,   241,     0,     0,     0,   202,   201,
     200,   199,   233,   235,   224
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -368,  -368,  -368,  -368,   462,   772,  -368,   149,   766,   540,
     -10,  -368,   -13,   391,   641,  -368,  -368,  -368,   737,  -368,
     169,    -6,  -368,   -91,  -368,   -21,  -368,  -368,   161,  -368,
     278,  -368,  -368,   -49,  -368,  -368,   238,  -368,   256,   464,
     590,  -147,   639,  -368,   409,  -290,  -367,  -368,   405,  -368,
    -162,  -335,   267,  -368,  -368,  -368,  -368,    64,  -368,   132,
    -368,    16,   150,   638,   410,   507,   640,  -368,  -368,  -368,
    -368,   199,  -368,  -368,    28,   338,  -281,  -368,  -368,    62,
    -368,   448,   656,   214,  -368,  -368,  -368,  -368,   244,  -368,
     304,  -368,   332,  -368,  -368
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    31,    70,    19,     5,    34,    78,    22,
     419,   282,    51,    63,    52,    53,   156,    54,    55,    56,
      57,    23,    99,   211,   100,   101,   102,   425,   426,   509,
     510,   511,   103,   104,   105,   331,   332,   333,   334,   335,
     336,    24,   129,   305,   394,   477,   396,   397,   398,   399,
     400,   420,   227,   107,   225,   108,   109,   278,   279,    58,
     111,   184,    25,   185,   186,   320,   187,   188,   189,   307,
     308,   409,   410,   309,   405,   406,    26,    66,   170,   298,
     299,   464,   171,    36,    27,    59,   161,   123,   124,   125,
     126,    60,    28,    29,   113
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      62,    50,    84,   441,   214,   208,   209,   151,   208,   487,
     489,   160,   395,   208,    11,    11,   591,   151,   327,     6,
      86,   402,   297,   338,   471,   118,   592,   475,     7,   315,
      87,   241,   520,    11,   604,   122,   128,   130,   131,   317,
       8,  -124,    68,  -124,   322,   293,   326,    88,   162,   242,
      89,   167,     9,    90,   593,   183,   163,   164,    91,   363,
     318,   595,    69,   243,    92,    93,    94,   316,    95,   183,
     205,    15,   168,   364,   319,   202,   199,   201,    96,   203,
     498,   244,   323,   228,   212,   503,   504,   503,   328,    15,
     488,   490,   594,   339,   151,   234,   236,   488,   196,   596,
     210,   470,   535,   213,   474,   151,   479,   490,   443,   233,
     402,   287,   289,   402,   402,   402,   402,   249,   482,   484,
     570,    97,   403,   481,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   483,   277,   374,   294,  -284,    11,    89,   283,   169,
      90,   291,   151,   292,    82,   183,    84,   408,    20,  -283,
      11,    92,   110,   183,   558,   151,   345,    71,    75,   290,
     119,    80,   493,   404,    83,   376,   377,   152,    10,   534,
     495,   479,   183,    85,   295,   479,   571,    42,   402,   402,
     402,   538,   310,   402,   402,    69,    83,    61,   340,    98,
    -280,    11,    15,   286,    16,   164,   151,  -279,    11,   407,
      17,   321,  -276,    11,   378,   346,    15,   407,    16,  -275,
      11,   317,   191,   110,    17,    64,   193,   379,   353,   354,
    -282,    11,   297,   110,   297,   174,   110,   175,   110,   252,
      65,   360,   318,   361,   153,   479,   114,   115,   110,   110,
     444,   178,    67,   402,   402,   253,   415,    15,   372,    16,
      98,   491,   408,   408,    15,    17,    16,    11,   492,    15,
      98,    16,    17,    98,   253,    98,    15,    17,    16,   180,
     172,    69,  -281,    11,    17,    98,    98,    15,    83,    16,
     174,   190,   175,   245,   173,    17,   393,   106,   183,   183,
    -278,    11,   247,   380,   417,   418,   178,   116,   430,   432,
     197,   246,   423,  -277,    11,   183,   381,   427,   367,   544,
     248,   545,   445,    15,   447,    16,   183,   413,   414,   198,
     369,    17,   365,   157,   180,   158,   368,   110,   110,    15,
     181,    16,  -274,    11,   428,   204,   366,    17,   370,   452,
     159,   215,   453,    11,   277,   442,   277,    15,   206,    16,
     110,   110,   112,   183,   183,    17,   110,   110,   110,   110,
      15,   229,    16,   231,    98,    98,   165,   166,    17,   472,
    -273,    11,   539,   235,   237,   393,    11,   232,   393,   393,
     393,   393,   463,   465,   154,   155,   166,    98,    98,    15,
     424,    16,   497,    98,    98,    98,    98,    17,   207,    15,
      89,    16,   505,    90,   508,   512,   517,    17,    89,   424,
      37,    90,   238,   112,    92,   239,   117,     1,   454,   274,
     455,    38,    92,   112,   514,     2,   112,    15,   112,    16,
     281,   467,    15,   468,    16,    17,   127,   285,   112,   112,
      17,   183,   401,   183,   296,    39,    40,    41,    42,    43,
      44,   110,   110,   393,   393,   393,   288,   168,   393,   393,
     301,    18,    32,   231,   311,   110,   548,   110,   183,   183,
     531,    74,   533,    45,    11,    46,   355,    47,   356,    48,
     559,   312,   560,   561,    49,    74,   231,    12,    98,    98,
     151,   508,   231,   573,   231,   576,   569,   553,   554,    13,
     255,   256,    98,   546,    98,    14,   550,    11,   552,   580,
     581,   314,   583,   145,   146,   147,   148,   149,   393,   393,
     150,   147,   148,   149,   458,    69,   150,   112,   112,   341,
      15,   401,    16,   599,   401,   401,   401,   401,    17,   602,
     357,   342,   358,   598,   255,   459,    83,    30,    73,    77,
     112,   112,   110,   110,   110,   110,   112,   112,   112,   112,
     435,   437,   609,    15,   610,    16,   344,   110,   110,   110,
     110,    17,    11,   615,   256,   616,   513,   515,   436,   438,
     362,   174,    37,   175,   150,    12,   431,   433,   373,    98,
      98,    98,    98,    38,   183,   177,   375,   178,   494,   496,
     446,   407,   448,    14,    98,    98,    98,    98,   411,   401,
     401,   401,    30,   179,   401,   401,   412,    39,    40,    41,
      42,    43,    44,   624,   422,   180,   461,    11,    15,   421,
      16,   181,   424,    86,   330,   182,    17,   329,   462,   439,
     450,   440,    42,    87,   451,   132,   110,    46,   110,    47,
     456,   112,   112,   457,  -123,   460,  -123,   486,   503,   518,
      88,   343,   499,    89,   516,   112,    90,   112,   519,   521,
     522,    91,   530,   532,   401,   401,   382,    92,    93,    94,
     542,    95,   543,    98,   383,    98,   110,   404,   231,   384,
     231,    96,   110,   549,   555,   110,   110,   385,   110,   110,
     551,   556,   386,   231,   387,   231,   565,   564,   567,   134,
     568,   572,   575,   578,   135,   136,   137,   138,   139,   140,
     141,   110,   110,    98,   110,   110,   579,   582,   587,    98,
     584,   588,    98,    98,    97,    98,    98,   142,   143,   144,
     145,   146,   147,   148,   149,   589,   590,   150,   611,   612,
     601,   613,   112,   112,   112,   112,   614,   617,    98,    98,
     618,    98,    98,   619,   620,    21,    35,   112,   112,   112,
     112,   621,    33,   473,    72,    76,   133,    79,    81,   566,
     136,   574,   216,   577,   280,   434,   337,   284,    35,    35,
     469,    79,   480,   217,   218,   219,   220,   221,   222,   223,
     224,   306,   157,   485,   158,   145,   146,   147,   148,   149,
     416,   313,   150,   547,     0,   466,   300,     0,     0,   159,
      11,   600,    35,     0,     0,     0,    86,   603,    79,   192,
       0,   231,    79,   194,   231,     0,    87,    79,     0,     0,
       0,    37,     0,     0,   329,     0,   112,     0,   112,   330,
       0,     0,    38,    88,     0,     0,    89,   231,     0,    90,
     231,     0,     0,     0,    91,     0,     0,     0,     0,     0,
      92,    93,    94,     0,    95,     0,    39,    40,    41,   275,
      43,    44,     0,     0,    96,     0,   112,    11,     0,     0,
       0,     0,   112,    86,     0,   112,   112,     0,   112,   112,
       0,     0,     0,    87,    45,     0,    46,     0,    47,   276,
      48,     0,     0,    11,   523,    49,     0,     0,     0,    86,
      88,   112,   112,    89,   112,   112,    90,    97,     0,    87,
       0,    91,     0,     0,     0,     0,    37,    92,    93,    94,
     525,    95,   524,     0,     0,     0,    88,    38,    79,    89,
      79,    96,    90,     0,    11,     0,     0,    91,     0,     0,
      86,     0,     0,    92,    93,    94,   -95,    95,   526,     0,
      87,    39,    40,    41,    42,    43,    44,    96,     0,     0,
      11,   -95,     0,     0,     0,     0,    86,    88,     0,     0,
      89,     0,   -94,    90,    97,     0,    87,     0,    91,   132,
       0,    46,     0,    47,    92,    93,    94,   -94,    95,     0,
      49,     0,     0,    88,     0,     0,    89,     0,    96,    90,
      97,    11,     0,     0,    91,     0,     0,    86,     0,     0,
      92,    93,    94,     0,    95,     0,     0,    87,     0,     0,
       0,     0,     0,     0,    96,     0,     0,    11,   226,     0,
       0,     0,     0,    86,    88,     0,     0,    89,     0,     0,
      90,    97,     0,    87,     0,    91,     0,     0,   174,     0,
     175,    92,    93,    94,   230,    95,     0,     0,     0,     0,
      88,     0,   177,    89,   178,    96,    90,    97,    11,     0,
       0,    91,     0,     0,    86,     0,     0,    92,    93,    94,
     179,    95,     0,     0,    87,     0,     0,     0,     0,     0,
       0,    96,   180,     0,    11,   347,     0,     0,   181,     0,
      86,    88,   182,     0,    89,     0,     0,    90,    97,    42,
      87,     0,    91,     0,     0,     0,     0,     0,    92,    93,
      94,   348,    95,     0,     0,     0,     0,    88,     0,     0,
      89,     0,    96,    90,    97,    11,     0,     0,    91,     0,
       0,    86,     0,     0,    92,    93,    94,     0,    95,     0,
       0,    87,     0,     0,     0,     0,     0,     0,    96,     0,
       0,    11,   349,     0,     0,     0,     0,    86,    88,     0,
       0,    89,     0,     0,    90,    97,     0,    87,     0,    91,
       0,     0,     0,     0,     0,    92,    93,    94,   350,    95,
       0,     0,     0,     0,    88,     0,     0,    89,     0,    96,
      90,    97,    11,     0,     0,    91,     0,     0,    86,     0,
       0,    92,    93,    94,     0,    95,     0,     0,    87,     0,
       0,     0,     0,     0,     0,    96,     0,     0,    11,   351,
       0,     0,     0,     0,    86,    88,     0,     0,    89,     0,
       0,    90,    97,     0,    87,     0,    91,     0,     0,     0,
       0,     0,    92,    93,    94,   352,    95,     0,     0,     0,
       0,    88,     0,     0,    89,     0,    96,    90,    97,    11,
       0,     0,    91,     0,     0,    86,     0,     0,    92,    93,
      94,     0,    95,     0,     0,    87,     0,     0,     0,     0,
       0,     0,    96,     0,     0,    11,     0,     0,     0,     0,
       0,    86,    88,     0,     0,    89,     0,     0,    90,    97,
       0,    87,     0,    91,     0,     0,     0,     0,     0,    92,
      93,    94,  -126,    95,   174,     0,   175,     0,    88,     0,
     176,    89,     0,    96,    90,    97,    11,     0,   177,    91,
     178,     0,    86,     0,     0,    92,    93,    94,     0,    95,
       0,     0,    87,     0,     0,     0,   179,     0,     0,    96,
       0,     0,   429,  -125,     0,    11,     0,     0,   180,    88,
       0,    86,    89,     0,   181,    90,    97,     0,   182,     0,
      91,    87,     0,     0,     0,    42,    92,    93,    94,     0,
      95,     0,   527,     0,     0,     0,     0,    11,    88,     0,
      96,    89,    97,    86,    90,     0,   174,     0,   175,    91,
       0,     0,   195,    87,     0,    92,    93,    94,     0,    95,
     177,     0,   178,     0,   528,     0,    11,     0,     0,    96,
      88,     0,    86,    89,     0,     0,    90,     0,   179,     0,
       0,    91,    87,    97,     0,     0,     0,    92,    93,    94,
     180,    95,     0,   605,     0,     0,   181,     0,    11,    88,
     182,    96,    89,     0,    86,    90,     0,    42,     0,     0,
      91,     0,    97,     0,    87,     0,    92,    93,    94,     0,
      95,     0,     0,     0,     0,   606,     0,    11,     0,     0,
      96,    88,     0,    86,    89,     0,     0,    90,     0,     0,
       0,     0,    91,    87,    97,     0,     0,     0,    92,    93,
      94,     0,    95,     0,   607,     0,     0,     0,     0,    11,
      88,     0,    96,    89,     0,    86,    90,     0,     0,     0,
       0,    91,     0,    97,     0,    87,     0,    92,    93,    94,
       0,    95,     0,     0,     0,     0,   608,     0,    11,     0,
       0,    96,    88,     0,    86,    89,     0,     0,    90,     0,
       0,     0,     0,    91,    87,    97,     0,     0,     0,    92,
      93,    94,  -120,    95,     0,     0,     0,     0,     0,     0,
      11,    88,     0,    96,    89,     0,    86,    90,     0,    11,
       0,     0,    91,     0,    97,    86,    87,     0,    92,    93,
      94,     0,    95,     0,  -119,    87,     0,     0,     0,     0,
       0,     0,    96,    88,     0,     0,    89,     0,     0,    90,
       0,     0,    88,     0,    91,    89,    97,     0,    90,     0,
      92,    93,    94,    91,    95,    11,     0,   382,     0,    92,
      93,    94,     0,    95,    96,   383,     0,    11,     0,   382,
     384,     0,     0,    96,     0,    97,     0,   383,   385,     0,
       0,     0,   384,   386,     0,   387,   359,     0,     0,     0,
     385,     0,     0,     0,     0,   386,   388,   387,   389,     0,
     390,   324,     0,     0,     0,     0,     0,    97,   388,     0,
     389,    15,   390,    16,   391,     0,    97,     0,     0,    17,
       0,     0,     0,    15,     0,    16,     0,     0,     0,     0,
       0,    17,     0,     0,   134,     0,     0,     0,     0,   135,
     136,   137,   138,   139,   140,   141,     0,   134,   392,     0,
       0,     0,   135,   136,   137,   138,   139,   140,   141,    37,
     392,     0,   142,   143,   144,   145,   146,   147,   148,   149,
      38,     0,   150,     0,     0,   142,   143,   144,   145,   146,
     147,   148,   149,     0,     0,   150,     0,     0,     0,     0,
       0,     0,     0,     0,    39,    40,    41,    42,    43,    44,
       0,     0,     0,     0,     0,     0,    37,     0,     0,     0,
       0,     0,     0,     0,    37,     0,     0,    38,   507,     0,
       0,     0,    45,     0,    46,    38,    47,    37,    48,     0,
       0,     0,     0,    49,     0,     0,     0,     0,    38,     0,
     200,    39,    40,    41,    42,    43,    44,     0,     0,    39,
      40,    41,    42,    43,    44,     0,     0,     0,     0,     0,
       0,     0,    39,    40,   120,   121,    43,    44,     0,    45,
       0,    46,     0,    47,    37,    48,    11,    45,   382,    46,
      49,    47,     0,    48,     0,    38,   383,     0,    49,     0,
      45,   384,    46,     0,    47,     0,    48,     0,     0,   385,
       0,    49,     0,   476,   386,     0,   387,     0,     0,    39,
      40,    41,   275,    43,    44,     0,     0,   388,     0,   389,
       0,   390,     0,    11,     0,   382,     0,     0,     0,     0,
       0,     0,    15,   383,    16,     0,     0,    45,   384,    46,
      17,    47,     0,    48,     0,     0,   385,    11,    49,   382,
     478,   386,     0,   387,     0,     0,     0,   383,     0,     0,
       0,     0,   384,     0,   388,     0,   389,     0,   390,     0,
     385,     0,     0,     0,   536,   386,     0,   387,     0,    15,
       0,    16,     0,     0,     0,     0,     0,    17,   388,    11,
     389,   382,   390,     0,     0,     0,     0,     0,    11,   383,
     382,     0,     0,    15,   384,    16,     0,     0,   383,     0,
       0,    17,   385,   384,     0,     0,   537,   386,     0,   387,
       0,   385,     0,     0,     0,   540,   386,     0,   387,     0,
     388,     0,   389,     0,   390,     0,    11,     0,   382,   388,
       0,   389,     0,   390,     0,    15,   383,    16,     0,     0,
       0,   384,     0,    17,    15,     0,    16,     0,     0,   385,
       0,     0,    17,   541,   386,     0,   387,     0,    11,     0,
     382,     0,     0,     0,     0,     0,     0,   388,   383,   389,
       0,   390,     0,   384,     0,     0,     0,     0,     0,     0,
       0,   385,    15,     0,    16,   585,   386,    11,   387,   382,
      17,     0,     0,     0,     0,     0,    11,   383,   382,   388,
       0,   389,   384,   390,     0,     0,   383,     0,     0,     0,
     385,   384,     0,     0,    15,   386,    16,   387,     0,   385,
       0,     0,    17,   586,   386,    11,   387,   382,   388,     0,
     389,     0,   390,     0,     0,   383,     0,   388,     0,   389,
     384,   390,     0,    15,     0,    16,     0,     0,   385,     0,
       0,    17,    15,   386,    16,   387,     0,     0,     0,   174,
      17,   175,     0,   302,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   177,   529,   178,     0,   303,     0,     0,
       0,    15,     0,    16,     0,     0,     0,   134,     0,    17,
       0,   179,   135,   136,   137,   138,   139,   140,   141,     0,
       0,     0,     0,   180,     0,   304,     0,     0,     0,   181,
       0,     0,     0,   182,     0,   142,   143,   144,   145,   146,
     147,   148,   149,   134,     0,   150,     0,     0,   135,   136,
     137,   138,   139,   140,   141,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   250,     0,     0,
       0,   142,   143,   144,   145,   146,   147,   148,   149,   134,
       0,   150,     0,   251,   135,   136,   137,   138,   139,   140,
     141,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   371,     0,     0,     0,   142,   143,   144,
     145,   146,   147,   148,   149,   134,     0,   150,     0,   251,
     135,   136,   137,   138,   139,   140,   141,   134,     0,     0,
       0,     0,   135,   136,   137,   138,   139,   140,   141,     0,
       0,     0,     0,   142,   143,   144,   145,   146,   147,   148,
     149,     0,     0,   150,   325,   142,   143,   144,   145,   146,
     147,   148,   149,   500,   134,   150,   449,     0,     0,   135,
     136,   137,   138,   139,   140,   141,   134,     0,     0,     0,
       0,   135,   136,   137,   138,   139,   140,   141,     0,     0,
       0,     0,   142,   143,   144,   145,   146,   147,   148,   149,
       0,     0,   150,     0,   142,   143,   144,   145,   146,   147,
     148,   149,   502,   134,   150,   501,     0,     0,   135,   136,
     137,   138,   139,   140,   141,   134,     0,     0,     0,     0,
     135,   136,   137,   138,   139,   140,   141,     0,     0,     0,
       0,   142,   143,   144,   145,   146,   147,   148,   149,     0,
       0,   150,     0,   142,   143,   144,   145,   146,   147,   148,
     149,   134,     0,   150,   506,     0,   135,   136,   137,   138,
     139,   140,   141,   134,     0,     0,     0,     0,   135,   136,
     137,   138,   139,   140,   141,     0,     0,     0,     0,   142,
     143,   144,   145,   146,   147,   148,   149,     0,     0,   150,
     557,   142,   143,   144,   145,   146,   147,   148,   149,   563,
     134,   150,   562,     0,     0,   135,   136,   137,   138,   139,
     140,   141,   134,     0,     0,     0,     0,   135,   136,   137,
     138,   139,   140,   141,     0,     0,     0,     0,   142,   143,
     144,   145,   146,   147,   148,   149,     0,     0,   150,     0,
     142,   143,   144,   145,   146,   147,   148,   149,   134,     0,
     150,   622,     0,   135,   136,   137,   138,   139,   140,   141,
       0,     0,   134,     0,     0,     0,     0,   135,   136,   137,
     138,   139,   140,   141,     0,     0,   142,   143,   144,   145,
     146,   147,   148,   149,   240,     0,   150,   623,     0,     0,
     142,   143,   144,   145,   146,   147,   148,   149,   134,     0,
     150,     0,     0,   135,   136,   137,   138,   139,   140,   141,
       0,   134,     0,     0,     0,     0,   135,   136,   137,   138,
     139,   140,   141,     0,   254,     0,   142,   143,   144,   145,
     146,   147,   148,   149,     0,     0,   150,   597,     0,   142,
     143,   144,   145,   146,   147,   148,   149,   134,     0,   150,
       0,     0,   135,   136,   137,   138,   139,   140,   141,     0,
       0,     0,     0,   135,   136,   137,   138,   139,     0,   141,
       0,     0,     0,     0,     0,   142,   143,   144,   145,   146,
     147,   148,   149,     0,     0,   150,   142,   143,   144,   145,
     146,   147,   148,   149,     0,     0,   150,   135,   136,   137,
     138,   139,     0,     0,     0,     0,     0,     0,   135,   136,
    -285,  -285,  -285,     0,     0,     0,     0,     0,     0,     0,
     142,   143,   144,   145,   146,   147,   148,   149,     0,     0,
     150,  -285,  -285,  -285,   145,   146,   147,   148,   149,     0,
       0,   150
};

static const yytype_int16 yycheck[] =
{
      13,    11,     1,   338,    95,    13,    14,    69,    13,    28,
      28,    60,   302,    13,     1,     1,    28,    69,    19,    65,
       7,   302,   169,    19,   391,    38,    28,   394,    65,    70,
      17,    91,    15,     1,    15,    45,    46,    47,    48,    12,
       0,    28,    89,    30,    70,     9,   108,    34,    61,   109,
      37,    64,   108,    40,    70,    68,   108,   109,    45,    95,
      33,    70,   109,    91,    51,    52,    53,   108,    55,    82,
      91,    57,    17,   109,    47,    88,    86,    87,    65,    89,
     415,   109,   108,   104,    94,    68,   421,    68,    89,    57,
     109,   109,   108,    89,    69,   116,   117,   109,    82,   108,
     108,   391,   469,   108,   394,    69,   396,   109,   108,   108,
     391,   160,   161,   394,   395,   396,   397,   127,   399,   400,
      95,   108,    14,   109,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   109,   152,   290,   108,     0,     1,    37,   158,    94,
      40,   164,    69,   166,    89,   168,     1,   304,     9,     0,
       1,    51,    30,   176,   499,    69,   215,    18,    19,    32,
      38,    22,    28,    65,   109,    89,    89,    94,   108,   469,
      28,   471,   195,    28,   168,   475,   521,    65,   469,   470,
     471,    95,   176,   474,   475,   109,   109,    35,   208,    30,
       0,     1,    57,    93,    59,   109,    69,     0,     1,    65,
      65,   195,     0,     1,    95,   225,    57,    65,    59,     0,
       1,    12,    73,    91,    65,    35,    77,   108,   238,   239,
       0,     1,   379,   101,   381,     4,   104,     6,   106,    93,
      65,   251,    33,   253,   105,   535,    32,    33,   116,   117,
     341,    20,    65,   534,   535,   109,    47,    57,    93,    59,
      91,    89,   409,   410,    57,    65,    59,     1,    89,    57,
     101,    59,    65,   104,   109,   106,    57,    65,    59,    48,
      66,   109,     0,     1,    65,   116,   117,    57,   109,    59,
       4,    65,     6,    91,    23,    65,   302,    30,   311,   312,
       0,     1,    91,    95,   314,   315,    20,    41,   329,   330,
      65,   109,   322,     0,     1,   328,   108,   327,    91,   481,
     109,   483,   343,    57,   345,    59,   339,   311,   312,    57,
      91,    65,    95,    90,    48,    92,   109,   205,   206,    57,
      54,    59,     0,     1,   328,    65,   109,    65,   109,   359,
     107,    89,   362,     1,   364,   339,   366,    57,    91,    59,
     228,   229,    30,   376,   377,    65,   234,   235,   236,   237,
      57,   104,    59,   106,   205,   206,   108,   109,    65,   392,
       0,     1,    95,   116,   117,   391,     1,   108,   394,   395,
     396,   397,   376,   377,    72,    73,   109,   228,   229,    57,
      13,    59,   412,   234,   235,   236,   237,    65,    65,    57,
      37,    59,   422,    40,   424,    28,   429,    65,    37,    13,
      27,    40,    71,    91,    51,    71,    41,    35,   364,    65,
     366,    38,    51,   101,    28,    43,   104,    57,   106,    59,
      64,   379,    57,   381,    59,    65,    53,    65,   116,   117,
      65,   464,   302,   466,    65,    62,    63,    64,    65,    66,
      67,   329,   330,   469,   470,   471,    93,    17,   474,   475,
      57,     9,    10,   206,    14,   343,   486,   345,   491,   492,
     464,    19,   466,    90,     1,    92,   242,    94,   244,    96,
     500,    14,   502,   503,   101,    33,   229,    14,   329,   330,
      69,   511,   235,   524,   237,   526,   516,   491,   492,    26,
      64,    65,   343,   485,   345,    32,   488,     1,   490,   529,
     530,    94,   532,   100,   101,   102,   103,   104,   534,   535,
     107,   102,   103,   104,   108,   109,   107,   205,   206,    65,
      57,   391,    59,   564,   394,   395,   396,   397,    65,   570,
     246,   108,   248,   563,    64,   108,   109,    41,    18,    19,
     228,   229,   430,   431,   432,   433,   234,   235,   236,   237,
     332,   333,   582,    57,   584,    59,   108,   445,   446,   447,
     448,    65,     1,   593,    65,   595,   425,   426,   332,   333,
      70,     4,    27,     6,   107,    14,   329,   330,    65,   430,
     431,   432,   433,    38,   617,    18,    65,    20,   409,   410,
     343,    65,   345,    32,   445,   446,   447,   448,   108,   469,
     470,   471,    41,    36,   474,   475,    70,    62,    63,    64,
      65,    66,    67,   617,    70,    48,    49,     1,    57,    47,
      59,    54,    13,     7,    30,    58,    65,    25,    61,    28,
       5,    28,    65,    17,     5,    90,   524,    92,   526,    94,
      64,   329,   330,    64,    28,   108,    30,    70,    68,    45,
      34,    21,    47,    37,    19,   343,    40,   345,    45,    19,
     108,    45,    70,    70,   534,   535,     3,    51,    52,    53,
       8,    55,     8,   524,    11,   526,   564,    65,   431,    16,
     433,    65,   570,    22,    50,   573,   574,    24,   576,   577,
      22,    50,    29,   446,    31,   448,    89,    71,     7,    69,
       7,    53,    53,     5,    74,    75,    76,    77,    78,    79,
      80,   599,   600,   564,   602,   603,     5,    70,     8,   570,
      70,     8,   573,   574,   108,   576,   577,    97,    98,    99,
     100,   101,   102,   103,   104,     8,     8,   107,     8,     8,
      89,    22,   430,   431,   432,   433,    22,    14,   599,   600,
      53,   602,   603,    53,    53,     9,    10,   445,   446,   447,
     448,    53,    10,   392,    18,    19,    49,    21,    22,   511,
      75,   524,    70,   526,   153,   331,   206,   158,    32,    33,
     391,    35,   397,    81,    82,    83,    84,    85,    86,    87,
      88,   173,    90,   403,    92,   100,   101,   102,   103,   104,
     313,   181,   107,   485,    -1,   377,   170,    -1,    -1,   107,
       1,   564,    66,    -1,    -1,    -1,     7,   570,    72,    73,
      -1,   574,    76,    77,   577,    -1,    17,    81,    -1,    -1,
      -1,    27,    -1,    -1,    25,    -1,   524,    -1,   526,    30,
      -1,    -1,    38,    34,    -1,    -1,    37,   600,    -1,    40,
     603,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,
      51,    52,    53,    -1,    55,    -1,    62,    63,    64,    65,
      66,    67,    -1,    -1,    65,    -1,   564,     1,    -1,    -1,
      -1,    -1,   570,     7,    -1,   573,   574,    -1,   576,   577,
      -1,    -1,    -1,    17,    90,    -1,    92,    -1,    94,    95,
      96,    -1,    -1,     1,    28,   101,    -1,    -1,    -1,     7,
      34,   599,   600,    37,   602,   603,    40,   108,    -1,    17,
      -1,    45,    -1,    -1,    -1,    -1,    27,    51,    52,    53,
      28,    55,    56,    -1,    -1,    -1,    34,    38,   192,    37,
     194,    65,    40,    -1,     1,    -1,    -1,    45,    -1,    -1,
       7,    -1,    -1,    51,    52,    53,    13,    55,    56,    -1,
      17,    62,    63,    64,    65,    66,    67,    65,    -1,    -1,
       1,    28,    -1,    -1,    -1,    -1,     7,    34,    -1,    -1,
      37,    -1,    13,    40,   108,    -1,    17,    -1,    45,    90,
      -1,    92,    -1,    94,    51,    52,    53,    28,    55,    -1,
     101,    -1,    -1,    34,    -1,    -1,    37,    -1,    65,    40,
     108,     1,    -1,    -1,    45,    -1,    -1,     7,    -1,    -1,
      51,    52,    53,    -1,    55,    -1,    -1,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    -1,     1,    28,    -1,
      -1,    -1,    -1,     7,    34,    -1,    -1,    37,    -1,    -1,
      40,   108,    -1,    17,    -1,    45,    -1,    -1,     4,    -1,
       6,    51,    52,    53,    28,    55,    -1,    -1,    -1,    -1,
      34,    -1,    18,    37,    20,    65,    40,   108,     1,    -1,
      -1,    45,    -1,    -1,     7,    -1,    -1,    51,    52,    53,
      36,    55,    -1,    -1,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    48,    -1,     1,    28,    -1,    -1,    54,    -1,
       7,    34,    58,    -1,    37,    -1,    -1,    40,   108,    65,
      17,    -1,    45,    -1,    -1,    -1,    -1,    -1,    51,    52,
      53,    28,    55,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      37,    -1,    65,    40,   108,     1,    -1,    -1,    45,    -1,
      -1,     7,    -1,    -1,    51,    52,    53,    -1,    55,    -1,
      -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,
      -1,     1,    28,    -1,    -1,    -1,    -1,     7,    34,    -1,
      -1,    37,    -1,    -1,    40,   108,    -1,    17,    -1,    45,
      -1,    -1,    -1,    -1,    -1,    51,    52,    53,    28,    55,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    37,    -1,    65,
      40,   108,     1,    -1,    -1,    45,    -1,    -1,     7,    -1,
      -1,    51,    52,    53,    -1,    55,    -1,    -1,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,     1,    28,
      -1,    -1,    -1,    -1,     7,    34,    -1,    -1,    37,    -1,
      -1,    40,   108,    -1,    17,    -1,    45,    -1,    -1,    -1,
      -1,    -1,    51,    52,    53,    28,    55,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    37,    -1,    65,    40,   108,     1,
      -1,    -1,    45,    -1,    -1,     7,    -1,    -1,    51,    52,
      53,    -1,    55,    -1,    -1,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    -1,    -1,     1,    -1,    -1,    -1,    -1,
      -1,     7,    34,    -1,    -1,    37,    -1,    -1,    40,   108,
      -1,    17,    -1,    45,    -1,    -1,    -1,    -1,    -1,    51,
      52,    53,    28,    55,     4,    -1,     6,    -1,    34,    -1,
      10,    37,    -1,    65,    40,   108,     1,    -1,    18,    45,
      20,    -1,     7,    -1,    -1,    51,    52,    53,    -1,    55,
      -1,    -1,    17,    -1,    -1,    -1,    36,    -1,    -1,    65,
      -1,    -1,    94,    28,    -1,     1,    -1,    -1,    48,    34,
      -1,     7,    37,    -1,    54,    40,   108,    -1,    58,    -1,
      45,    17,    -1,    -1,    -1,    65,    51,    52,    53,    -1,
      55,    -1,    28,    -1,    -1,    -1,    -1,     1,    34,    -1,
      65,    37,   108,     7,    40,    -1,     4,    -1,     6,    45,
      -1,    -1,    10,    17,    -1,    51,    52,    53,    -1,    55,
      18,    -1,    20,    -1,    28,    -1,     1,    -1,    -1,    65,
      34,    -1,     7,    37,    -1,    -1,    40,    -1,    36,    -1,
      -1,    45,    17,   108,    -1,    -1,    -1,    51,    52,    53,
      48,    55,    -1,    28,    -1,    -1,    54,    -1,     1,    34,
      58,    65,    37,    -1,     7,    40,    -1,    65,    -1,    -1,
      45,    -1,   108,    -1,    17,    -1,    51,    52,    53,    -1,
      55,    -1,    -1,    -1,    -1,    28,    -1,     1,    -1,    -1,
      65,    34,    -1,     7,    37,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    45,    17,   108,    -1,    -1,    -1,    51,    52,
      53,    -1,    55,    -1,    28,    -1,    -1,    -1,    -1,     1,
      34,    -1,    65,    37,    -1,     7,    40,    -1,    -1,    -1,
      -1,    45,    -1,   108,    -1,    17,    -1,    51,    52,    53,
      -1,    55,    -1,    -1,    -1,    -1,    28,    -1,     1,    -1,
      -1,    65,    34,    -1,     7,    37,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    45,    17,   108,    -1,    -1,    -1,    51,
      52,    53,    25,    55,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    34,    -1,    65,    37,    -1,     7,    40,    -1,     1,
      -1,    -1,    45,    -1,   108,     7,    17,    -1,    51,    52,
      53,    -1,    55,    -1,    25,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    34,    -1,    -1,    37,    -1,    -1,    40,
      -1,    -1,    34,    -1,    45,    37,   108,    -1,    40,    -1,
      51,    52,    53,    45,    55,     1,    -1,     3,    -1,    51,
      52,    53,    -1,    55,    65,    11,    -1,     1,    -1,     3,
      16,    -1,    -1,    65,    -1,   108,    -1,    11,    24,    -1,
      -1,    -1,    16,    29,    -1,    31,    21,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    29,    42,    31,    44,    -1,
      46,    23,    -1,    -1,    -1,    -1,    -1,   108,    42,    -1,
      44,    57,    46,    59,    60,    -1,   108,    -1,    -1,    65,
      -1,    -1,    -1,    57,    -1,    59,    -1,    -1,    -1,    -1,
      -1,    65,    -1,    -1,    69,    -1,    -1,    -1,    -1,    74,
      75,    76,    77,    78,    79,    80,    -1,    69,    94,    -1,
      -1,    -1,    74,    75,    76,    77,    78,    79,    80,    27,
      94,    -1,    97,    98,    99,   100,   101,   102,   103,   104,
      38,    -1,   107,    -1,    -1,    97,    98,    99,   100,   101,
     102,   103,   104,    -1,    -1,   107,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    63,    64,    65,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    38,    39,    -1,
      -1,    -1,    90,    -1,    92,    38,    94,    27,    96,    -1,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    38,    -1,
     108,    62,    63,    64,    65,    66,    67,    -1,    -1,    62,
      63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    63,    64,    65,    66,    67,    -1,    90,
      -1,    92,    -1,    94,    27,    96,     1,    90,     3,    92,
     101,    94,    -1,    96,    -1,    38,    11,    -1,   101,    -1,
      90,    16,    92,    -1,    94,    -1,    96,    -1,    -1,    24,
      -1,   101,    -1,    28,    29,    -1,    31,    -1,    -1,    62,
      63,    64,    65,    66,    67,    -1,    -1,    42,    -1,    44,
      -1,    46,    -1,     1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    11,    59,    -1,    -1,    90,    16,    92,
      65,    94,    -1,    96,    -1,    -1,    24,     1,   101,     3,
      28,    29,    -1,    31,    -1,    -1,    -1,    11,    -1,    -1,
      -1,    -1,    16,    -1,    42,    -1,    44,    -1,    46,    -1,
      24,    -1,    -1,    -1,    28,    29,    -1,    31,    -1,    57,
      -1,    59,    -1,    -1,    -1,    -1,    -1,    65,    42,     1,
      44,     3,    46,    -1,    -1,    -1,    -1,    -1,     1,    11,
       3,    -1,    -1,    57,    16,    59,    -1,    -1,    11,    -1,
      -1,    65,    24,    16,    -1,    -1,    28,    29,    -1,    31,
      -1,    24,    -1,    -1,    -1,    28,    29,    -1,    31,    -1,
      42,    -1,    44,    -1,    46,    -1,     1,    -1,     3,    42,
      -1,    44,    -1,    46,    -1,    57,    11,    59,    -1,    -1,
      -1,    16,    -1,    65,    57,    -1,    59,    -1,    -1,    24,
      -1,    -1,    65,    28,    29,    -1,    31,    -1,     1,    -1,
       3,    -1,    -1,    -1,    -1,    -1,    -1,    42,    11,    44,
      -1,    46,    -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    57,    -1,    59,    28,    29,     1,    31,     3,
      65,    -1,    -1,    -1,    -1,    -1,     1,    11,     3,    42,
      -1,    44,    16,    46,    -1,    -1,    11,    -1,    -1,    -1,
      24,    16,    -1,    -1,    57,    29,    59,    31,    -1,    24,
      -1,    -1,    65,    28,    29,     1,    31,     3,    42,    -1,
      44,    -1,    46,    -1,    -1,    11,    -1,    42,    -1,    44,
      16,    46,    -1,    57,    -1,    59,    -1,    -1,    24,    -1,
      -1,    65,    57,    29,    59,    31,    -1,    -1,    -1,     4,
      65,     6,    -1,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    56,    20,    -1,    22,    -1,    -1,
      -1,    57,    -1,    59,    -1,    -1,    -1,    69,    -1,    65,
      -1,    36,    74,    75,    76,    77,    78,    79,    80,    -1,
      -1,    -1,    -1,    48,    -1,    50,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    58,    -1,    97,    98,    99,   100,   101,
     102,   103,   104,    69,    -1,   107,    -1,    -1,    74,    75,
      76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,
      -1,    97,    98,    99,   100,   101,   102,   103,   104,    69,
      -1,   107,    -1,   109,    74,    75,    76,    77,    78,    79,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    93,    -1,    -1,    -1,    97,    98,    99,
     100,   101,   102,   103,   104,    69,    -1,   107,    -1,   109,
      74,    75,    76,    77,    78,    79,    80,    69,    -1,    -1,
      -1,    -1,    74,    75,    76,    77,    78,    79,    80,    -1,
      -1,    -1,    -1,    97,    98,    99,   100,   101,   102,   103,
     104,    -1,    -1,   107,   108,    97,    98,    99,   100,   101,
     102,   103,   104,    68,    69,   107,   108,    -1,    -1,    74,
      75,    76,    77,    78,    79,    80,    69,    -1,    -1,    -1,
      -1,    74,    75,    76,    77,    78,    79,    80,    -1,    -1,
      -1,    -1,    97,    98,    99,   100,   101,   102,   103,   104,
      -1,    -1,   107,    -1,    97,    98,    99,   100,   101,   102,
     103,   104,    68,    69,   107,   108,    -1,    -1,    74,    75,
      76,    77,    78,    79,    80,    69,    -1,    -1,    -1,    -1,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    97,    98,    99,   100,   101,   102,   103,   104,    -1,
      -1,   107,    -1,    97,    98,    99,   100,   101,   102,   103,
     104,    69,    -1,   107,   108,    -1,    74,    75,    76,    77,
      78,    79,    80,    69,    -1,    -1,    -1,    -1,    74,    75,
      76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,    97,
      98,    99,   100,   101,   102,   103,   104,    -1,    -1,   107,
     108,    97,    98,    99,   100,   101,   102,   103,   104,    68,
      69,   107,   108,    -1,    -1,    74,    75,    76,    77,    78,
      79,    80,    69,    -1,    -1,    -1,    -1,    74,    75,    76,
      77,    78,    79,    80,    -1,    -1,    -1,    -1,    97,    98,
      99,   100,   101,   102,   103,   104,    -1,    -1,   107,    -1,
      97,    98,    99,   100,   101,   102,   103,   104,    69,    -1,
     107,   108,    -1,    74,    75,    76,    77,    78,    79,    80,
      -1,    -1,    69,    -1,    -1,    -1,    -1,    74,    75,    76,
      77,    78,    79,    80,    -1,    -1,    97,    98,    99,   100,
     101,   102,   103,   104,    91,    -1,   107,   108,    -1,    -1,
      97,    98,    99,   100,   101,   102,   103,   104,    69,    -1,
     107,    -1,    -1,    74,    75,    76,    77,    78,    79,    80,
      -1,    69,    -1,    -1,    -1,    -1,    74,    75,    76,    77,
      78,    79,    80,    -1,    95,    -1,    97,    98,    99,   100,
     101,   102,   103,   104,    -1,    -1,   107,    95,    -1,    97,
      98,    99,   100,   101,   102,   103,   104,    69,    -1,   107,
      -1,    -1,    74,    75,    76,    77,    78,    79,    80,    -1,
      -1,    -1,    -1,    74,    75,    76,    77,    78,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    97,    98,    99,   100,   101,
     102,   103,   104,    -1,    -1,   107,    97,    98,    99,   100,
     101,   102,   103,   104,    -1,    -1,   107,    74,    75,    76,
      77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,
      76,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      97,    98,    99,   100,   101,   102,   103,   104,    -1,    -1,
     107,    97,    98,    99,   100,   101,   102,   103,   104,    -1,
      -1,   107
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    35,    43,   111,   112,   116,    65,    65,     0,   108,
     108,     1,    14,    26,    32,    57,    59,    65,   114,   115,
     117,   118,   119,   131,   151,   172,   186,   194,   202,   203,
      41,   113,   114,   115,   117,   118,   193,    27,    38,    62,
      63,    64,    65,    66,    67,    90,    92,    94,    96,   101,
     120,   122,   124,   125,   127,   128,   129,   130,   169,   195,
     201,    35,   122,   123,    35,    65,   187,    65,    89,   109,
     114,   117,   118,   119,   114,   117,   118,   119,   118,   118,
     117,   118,    89,   109,     1,    28,     7,    17,    34,    37,
      40,    45,    51,    52,    53,    55,    65,   108,   130,   132,
     134,   135,   136,   142,   143,   144,   162,   163,   165,   166,
     169,   170,   202,   204,   193,   193,    41,    41,   122,   169,
      64,    65,   120,   197,   198,   199,   200,    53,   120,   152,
     120,   120,    90,   128,    69,    74,    75,    76,    77,    78,
      79,    80,    97,    98,    99,   100,   101,   102,   103,   104,
     107,    69,    94,   105,    72,    73,   126,    90,    92,   107,
     143,   196,   122,   108,   109,   108,   109,   122,    17,    94,
     188,   192,   193,    23,     4,     6,    10,    18,    20,    36,
      48,    54,    58,   122,   171,   173,   174,   176,   177,   178,
      65,   117,   118,   117,   118,    10,   171,    65,    57,   120,
     108,   120,   122,   120,    65,   135,   162,    65,    13,    14,
     108,   133,   120,   108,   133,    89,    70,    81,    82,    83,
      84,    85,    86,    87,    88,   164,    28,   162,   135,   162,
      28,   162,   108,   108,   135,   162,   135,   162,    71,    71,
      91,    91,   109,    91,   109,    91,   109,    91,   109,   120,
      93,   109,    93,   109,    95,    64,    65,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,    65,    65,    95,   120,   167,   168,
     124,    64,   121,   120,   152,    65,    93,   143,    93,   143,
      32,   122,   122,     9,   108,   171,    65,   151,   189,   190,
     192,    57,     8,    22,    50,   153,   173,   179,   180,   183,
     171,    14,    14,   176,    94,    70,   108,    12,    33,    47,
     175,   171,    70,   108,    23,   108,   108,    19,    89,    25,
      30,   145,   146,   147,   148,   149,   150,   150,    19,    89,
     120,    65,   108,    21,   108,   143,   120,    28,    28,    28,
      28,    28,    28,   120,   120,   198,   198,   200,   200,    21,
     120,   120,    70,    95,   109,    95,   109,    91,   109,    91,
     109,    93,    93,    65,   151,    65,    89,    89,    95,   108,
      95,   108,     3,    11,    16,    24,    29,    31,    42,    44,
      46,    60,    94,   131,   154,   155,   156,   157,   158,   159,
     160,   172,   186,    14,    65,   184,   185,    65,   151,   181,
     182,   108,    70,   171,   171,    47,   175,   120,   120,   120,
     161,    47,    70,   120,    13,   137,   138,   120,   171,    94,
     135,   162,   135,   162,   149,   146,   148,   146,   148,    28,
      28,   161,   171,   108,   133,   135,   162,   135,   162,   108,
       5,     5,   120,   120,   167,   167,    64,    64,   108,   108,
     108,    49,    61,   171,   191,   171,   191,   189,   189,   154,
     155,   156,   122,   123,   155,   156,    28,   155,    28,   155,
     158,   109,   186,   109,   186,   174,    70,    28,   109,    28,
     109,    89,    89,    28,   181,    28,   181,   120,   161,    47,
      68,   108,    68,    68,   161,   120,   108,    39,   120,   139,
     140,   141,    28,   138,    28,   138,    19,   122,    45,    45,
      15,    19,   108,    28,    56,    28,    56,    28,    28,    56,
      70,   171,    70,   171,   155,   156,    28,    28,    95,    95,
      28,    28,     8,     8,   160,   160,   184,   185,   120,    22,
     184,    22,   184,   171,   171,    50,    50,   108,   161,   120,
     120,   120,   108,    68,    71,    89,   140,     7,     7,   120,
      95,   161,    53,   135,   162,    53,   135,   162,     5,     5,
     120,   120,    70,   120,    70,    28,    28,     8,     8,     8,
       8,    28,    28,    70,   108,    70,   108,    95,   120,   135,
     162,    89,   135,   162,    15,    28,    28,    28,    28,   120,
     120,     8,     8,    22,    22,   120,   120,    14,    53,    53,
      53,    53,   108,   108,   171
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   110,   111,   111,   112,   113,   113,   113,   114,   114,
     114,   114,   115,   115,   116,   117,   117,   118,   118,   118,
     119,   119,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   121,   121,   122,   122,   123,   123,   124,   124,
     125,   125,   126,   126,   127,   127,   128,   128,   128,   128,
     128,   128,   129,   129,   129,   129,   129,   129,   130,   130,
     130,   130,   130,   130,   131,   131,   131,   131,   131,   131,
     132,   132,   132,   132,   132,   132,   133,   134,   135,   135,
     136,   136,   137,   137,   138,   138,   139,   139,   140,   140,
     140,   141,   141,   142,   142,   142,   142,   143,   143,   143,
     143,   143,   143,   143,   144,   144,   145,   145,   145,   146,
     146,   147,   147,   148,   148,   149,   149,   150,   150,   150,
     151,   151,   152,   152,   153,   153,   153,   153,   153,   153,
     153,   153,   154,   154,   155,   155,   156,   156,   157,   157,
     157,   158,   158,   158,   158,   158,   159,   159,   160,   160,
     160,   160,   160,   160,   161,   161,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   163,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   165,   165,   166,
     167,   167,   168,   168,   169,   169,   169,   170,   170,   170,
     170,   170,   170,   171,   171,   172,   172,   173,   173,   173,
     174,   174,   174,   174,   174,   174,   174,   174,   175,   175,
     176,   176,   176,   176,   177,   177,   178,   179,   179,   179,
     180,   180,   181,   181,   181,   181,   182,   182,   183,   183,
     183,   183,   184,   184,   185,   185,   186,   186,   187,   187,
     187,   187,   188,   188,   189,   189,   189,   189,   189,   189,
     189,   189,   190,   190,   191,   191,   192,   193,   193,   193,
     193,   193,   193,   194,   194,   194,   194,   194,   194,   194,
     194,   194,   194,   194,   194,   195,   195,   195,   195,   195,
     195,   195,   195,   196,   196,   197,   197,   198,   199,   199,
     200,   201,   201,   201,   202,   202,   203,   204
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     4,     2,     2,     1,     6,     4,
       6,     6,     2,     2,     4,     2,     2,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     1,     3,
       1,     2,     1,     1,     1,     2,     1,     1,     1,     2,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       4,     4,     4,     4,     7,     7,     6,     6,     4,     4,
       2,     3,     2,     4,     3,     5,     2,     3,     2,     2,
       6,     6,     2,     2,     4,     4,     2,     1,     1,     3,
       1,     2,     3,     6,     6,     4,     4,     4,     6,     4,
       6,     5,     7,     2,     5,     5,     1,     2,     2,     5,
       5,     2,     2,     2,     2,     2,     2,     1,     2,     1,
       3,     3,     3,     3,     6,     6,     5,     5,     5,     5,
       4,     4,     3,     3,     2,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     2,     2,     3,     3,     1,     1,
       1,     1,     1,     1,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     3,     2,
       1,     3,     3,     3,     3,     4,     4,     6,     6,     8,
       8,     8,     8,     1,     1,     5,     4,     1,     1,     1,
       1,     2,     3,     4,     5,     2,     3,     4,     1,     1,
       1,     1,     1,     1,     8,     3,     3,     1,     1,     1,
       4,     4,     4,     6,     4,     6,     2,     2,     4,     4,
       6,     6,     1,     3,     3,     3,     4,     1,     1,     2,
       2,     3,     3,     3,     3,     4,     5,     6,     3,     4,
       5,     6,     3,     3,     1,     1,     2,     3,     3,     4,
       4,     4,     4,     3,     3,     2,     2,     3,     3,     2,
       2,     2,     2,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     3,     3,     3,     3,     3,
       3,     7,     5,     2,     2,     2,     3,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 60 "simple.y" /* yacc.c:1646  */
    {printf("\nEXITO programa -> definicionPrograma");}
#line 2201 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 61 "simple.y" /* yacc.c:1646  */
    {printf("\nEXITO programa -> definicionLibreria");}
#line 2207 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 64 "simple.y" /* yacc.c:1646  */
    {printf("\ndefinicionPrograma -> PROGRAMA IDENTIFICADOR ; codigoPrograma");}
#line 2213 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 67 "simple.y" /* yacc.c:1646  */
    {printf("\ndefinicionPrograma -> libreriaMultiple cuerpoSubprograma");}
#line 2219 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 68 "simple.y" /* yacc.c:1646  */
    {printf("\ndefinicionPrograma -> libreria cuerpoSubprograma");}
#line 2225 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 69 "simple.y" /* yacc.c:1646  */
    {printf("\ndefinicionPrograma -> cuerpoSubprograma");}
#line 2231 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 72 "simple.y" /* yacc.c:1646  */
    {printf("\nlibreria -> IMPORTAR LIBRERIA nombre COMO IDENTIFICADOR");}
#line 2237 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 73 "simple.y" /* yacc.c:1646  */
    {printf("\nlibreria -> IMPORTAR LIBRERIA nombre ");}
#line 2243 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 74 "simple.y" /* yacc.c:1646  */
    {printf("\nlibreria -> DE LIBRERIA nombre IMPORTAR IDENTIFICADOR");}
#line 2249 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 75 "simple.y" /* yacc.c:1646  */
    {printf("\nlibreria -> DE LIBRERIA nombre IMPORTAR identificadorMultiple");}
#line 2255 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 77 "simple.y" /* yacc.c:1646  */
    {printf("\nlibreriaMultiple -> libreria libreria");}
#line 2261 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 78 "simple.y" /* yacc.c:1646  */
    {printf("\nlibreriaMultiple -> libreriaMultiple libreria");}
#line 2267 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 81 "simple.y" /* yacc.c:1646  */
    {printf("\ndefinicionLibreria -> LIBRERIA IDENTIFICADOR ; codigoLibreria");}
#line 2273 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 83 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionMultiple -> declaracion declaracion");}
#line 2279 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 84 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionMultiple -> declaracionMultiple declaracion");}
#line 2285 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 86 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracion -> declaracionObjeto");}
#line 2291 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 87 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracion -> declaracionTipo");}
#line 2297 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 88 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracion -> declaracionSubprograma");}
#line 2303 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 90 "simple.y" /* yacc.c:1646  */
    {printf("\nexportaciones -> EXPORTAR nombreMultiple ;");}
#line 2309 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 91 "simple.y" /* yacc.c:1646  */
    {printf("\nexportaciones -> EXPORTAR nombre ;");}
#line 2315 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 94 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion '+' expresion");}
#line 2321 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 95 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion - expresion");}
#line 2327 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 96 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion / expresion");}
#line 2333 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 97 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion \\ expresion");}
#line 2339 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 98 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion * expresion");}
#line 2345 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 99 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion <- expresion");}
#line 2351 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 100 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion -> expresion");}
#line 2357 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 101 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion . expresion");}
#line 2363 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 102 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> { expresion } ");}
#line 2369 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 103 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion :: expresion");}
#line 2375 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 104 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion < expresion");}
#line 2381 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 105 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion > expresion");}
#line 2387 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 106 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion <= expresion");}
#line 2393 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 107 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion >= expresion");}
#line 2399 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 108 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion = expresion");}
#line 2405 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 109 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion NEQ expresion");}
#line 2411 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 110 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> ~ expresion");}
#line 2417 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 111 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion AND expresion");}
#line 2423 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 112 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion OR expresion");}
#line 2429 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 113 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresionPotencia");}
#line 2435 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 115 "simple.y" /* yacc.c:1646  */
    {printf("\ncadenaMult -> CTC_CADENA , CTC_CADENA");}
#line 2441 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 116 "simple.y" /* yacc.c:1646  */
    {printf("\ncadenaMult -> cadenaMult , CTC_CADENA");}
#line 2447 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 119 "simple.y" /* yacc.c:1646  */
    {printf("\nnombre -> IDENTIFICADOR");}
#line 2453 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 120 "simple.y" /* yacc.c:1646  */
    {printf("\nnombre -> nombre :: IDENTIFICADOR");}
#line 2459 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 122 "simple.y" /* yacc.c:1646  */
    {printf("\nnombreMultiple -> nombre , nombre");}
#line 2465 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 123 "simple.y" /* yacc.c:1646  */
    {printf("\nnombreMultiple -> nombreMultiple , nombre");}
#line 2471 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 126 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionPotencia -> expresionPosfija");}
#line 2477 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 127 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionPotencia -> expresionPosfija ^ expresionPotencia");}
#line 2483 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 129 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionPosfija -> expresionUnaria");}
#line 2489 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 130 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionPosfija -> expresionUnaria operadorPosfijo");}
#line 2495 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 132 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorPosfijo -> INC");}
#line 2501 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 133 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorPosfijo -> DEC");}
#line 2507 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 135 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionUnaria -> primario");}
#line 2513 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 136 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionUnaria -> '-' primario");}
#line 2519 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 139 "simple.y" /* yacc.c:1646  */
    {printf("\nprimario -> literal");}
#line 2525 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 140 "simple.y" /* yacc.c:1646  */
    {printf("\nprimario -> objeto");}
#line 2531 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 141 "simple.y" /* yacc.c:1646  */
    {printf("\nprimario -> llamada_subprograma");}
#line 2537 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 142 "simple.y" /* yacc.c:1646  */
    {printf("\nprimario -> OBJETO llamada_subprograma");}
#line 2543 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 143 "simple.y" /* yacc.c:1646  */
    {printf("\nprimario -> enumeraciones ");}
#line 2549 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 144 "simple.y" /* yacc.c:1646  */
    {printf("\nprimario -> ( expresion ) ");}
#line 2555 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 146 "simple.y" /* yacc.c:1646  */
    {printf("\nliteral -> VERDADERO");}
#line 2561 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 147 "simple.y" /* yacc.c:1646  */
    {printf("\nliteral -> FASLO");}
#line 2567 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 148 "simple.y" /* yacc.c:1646  */
    {printf("\nliteral -> CTC_ENTERA");}
#line 2573 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 149 "simple.y" /* yacc.c:1646  */
    {printf("\nliteral -> CTC_REAL");}
#line 2579 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 150 "simple.y" /* yacc.c:1646  */
    {printf("\nliteral -> CTC_CARACTER");}
#line 2585 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 151 "simple.y" /* yacc.c:1646  */
    {printf("\nliteral -> CTC_CADENA");}
#line 2591 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 154 "simple.y" /* yacc.c:1646  */
    {printf("\nobjeto -> nombre");}
#line 2597 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 155 "simple.y" /* yacc.c:1646  */
    {printf("\nobjeto -> objeto . nombre");}
#line 2603 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 156 "simple.y" /* yacc.c:1646  */
    {printf("\nobjeto -> objeto [ expresion ]");}
#line 2609 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 157 "simple.y" /* yacc.c:1646  */
    {printf("\nobjeto -> objeto [ expresionMult ]");}
#line 2615 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 158 "simple.y" /* yacc.c:1646  */
    {printf("\nobjeto -> objeto { CTC_CADENA }");}
#line 2621 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 159 "simple.y" /* yacc.c:1646  */
    {printf("\nobjeto -> objeto { cadenaMult }");}
#line 2627 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 164 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionObjeto -> IDENTIFICADOR : CONSTANTE especificacionTipo ASIGNACION expresion ;\n");}
#line 2633 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 165 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionObjeto -> identificadorMultiple : CONSTANTE especificacionTipo ASIGNACION expresion ;");}
#line 2639 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 167 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionObjeto -> IDENTIFICADOR : especificacionTipo ASIGNACION expresion ;");}
#line 2645 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 168 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionObjeto -> identificadorMultiple : especificacionTipo ASIGNACION expresion ;");}
#line 2651 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 169 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionObjeto -> IDENTIFICADOR : especificacionTipo ;");}
#line 2657 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 170 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionObjeto -> identificadorMultiple : especificacionTipo ;");}
#line 2663 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 174 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionInterrupcion -> siguiente ; ");}
#line 2669 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 175 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionInterrupcion -> siguiente cuando ; ");}
#line 2675 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 176 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionInterrupcion -> SALIR ; ");}
#line 2681 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 177 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionInterrupcion -> SALIR DE IDENTIFICADOR ; ");}
#line 2687 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 178 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionInterrupcion -> SALIR cuando ; ");}
#line 2693 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 179 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionInterrupcion -> SALIR DE IDENTIFICADOR cuando ; ");}
#line 2699 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 182 "simple.y" /* yacc.c:1646  */
    {printf("\ncuando -> CUANDO expresion");}
#line 2705 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 185 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionLanzamientoExcepcion -> LANZA nombre ; ");}
#line 2711 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 188 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionMultiple -> instruccion instruccion");}
#line 2717 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 189 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionMultiple -> instruccionMultiple instruccion");}
#line 2723 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 192 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionCasos -> CASOS expresion ES caso FIN CASOS");}
#line 2729 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 193 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionCasos -> CASOS expresion ES casoMultiple FIN CASOS");}
#line 2735 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 195 "simple.y" /* yacc.c:1646  */
    {printf("\ncasoMultiple -> caso caso");}
#line 2741 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 196 "simple.y" /* yacc.c:1646  */
    {printf("\ncasoMultiple -> casoMultiple caso");}
#line 2747 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 198 "simple.y" /* yacc.c:1646  */
    {printf("\ncaso -> CUANDO entradas FLECHA instruccion");}
#line 2753 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 199 "simple.y" /* yacc.c:1646  */
    {printf("\ncaso -> CUANDO entradas FLECHA instruccionMultiple");}
#line 2759 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 201 "simple.y" /* yacc.c:1646  */
    {printf("\nentradas -> entrada : entrada");}
#line 2765 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 202 "simple.y" /* yacc.c:1646  */
    {printf("\nentradas -> entrada");}
#line 2771 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 204 "simple.y" /* yacc.c:1646  */
    {printf("\nentrada -> expresion");}
#line 2777 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 205 "simple.y" /* yacc.c:1646  */
    {printf("\nentrada -> expresion DOS_PUNTOS expresion");}
#line 2783 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 206 "simple.y" /* yacc.c:1646  */
    {printf("\nentrada -> OTRO");}
#line 2789 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 208 "simple.y" /* yacc.c:1646  */
    {printf("\nentradaDosP -> entrada : ");}
#line 2795 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 209 "simple.y" /* yacc.c:1646  */
    {printf("\nentradaDosP -> entradaDosP entrada : ");}
#line 2801 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 211 "simple.y" /* yacc.c:1646  */
    {printf("\nintsruccionBucle -> IDENTIFICADOR : clausulaIteracion instruccion FIN BUCLE");}
#line 2807 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 212 "simple.y" /* yacc.c:1646  */
    {printf("\nintsruccionBucle -> IDENTIFICADOR : clausulaIteracion instruccionMultiple FIN BUCLE");}
#line 2813 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 213 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionBucle -> clausulaIteracion instruccion FIN BUCLE");}
#line 2819 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 214 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionBucle -> clausulaIteracion instruccionMultiple FIN BUCLE");}
#line 2825 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 217 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaIteracion -> PARA IDENTIFICADOR EN expresion");}
#line 2831 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 218 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaIteracion -> PARA IDENTIFICADOR EN ':' especifiacionTipo EN expresion");}
#line 2837 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 220 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaIteracion -> REPETIR IDENTIFICADOR EN RANGO");}
#line 2843 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 221 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaIteracion -> REPETIR IDENTIFICADOR ':' especificacionTipo EN rango");}
#line 2849 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 223 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaIteracion -> REPETIR IDENTIFICADOR EN rango DESCENDENTE");}
#line 2855 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 224 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaIteracion -> REPETIR IDENTIFICADOR ':' especificacionTipo EN rango DESCENDENTE");}
#line 2861 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 225 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaIteracion -> MIENTRAS expresion");}
#line 2867 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 228 "simple.y" /* yacc.c:1646  */
    {printf("\ninstrccuionCapturaDeExcepcion -> PRUEBA instruccion clausulas FIN PRUEBA");}
#line 2873 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 229 "simple.y" /* yacc.c:1646  */
    {printf("\ninstrccuionCapturaDeExcepcion -> prueba instruccion clausulas FIN PRUEBA");}
#line 2879 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 232 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulasExcepcion -> clausulaExcepcionGeneral");}
#line 2885 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 233 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulasExcepcion -> clausulaExcepcionEspecifica clausulaExcepcionGeneral");}
#line 2891 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 234 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulasExcepcion -> clausulaExcepcionEspecificaMultiple clausulaExcepcionGeneral");}
#line 2897 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 236 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaExcepcionEspecifica -> EXCEPCION ( nombre ) intruccion");}
#line 2903 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 237 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaExcepcionEspecifica -> EXCEPCION ( nombre ) instruccionMultiple");}
#line 2909 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 239 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaExcepcionEspecificaMultiple -> clausulaExcepcionEspecifica clausulaExcepcionEspecifica");}
#line 2915 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 240 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaExcepcionEspecificaMultiple -> clausulaExcepcionEspecificaMultiple clausulaExcepcionEspecifica");}
#line 2921 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 243 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaExcepcionGeneral -> EXCEPCION instruccion");}
#line 2927 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 244 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaExcepcionGeneral -> EXCEPCION instruccionMultiple");}
#line 2933 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 247 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaFinalmente -> FINALMENTE instruccion");}
#line 2939 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 248 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaFinalmente -> FINALMENTE instruccionMultiple");}
#line 2945 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 251 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulas -> clausulasExcepcion");}
#line 2951 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 252 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulas -> clausulasExcepcion clausulaFinalmente");}
#line 2957 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 253 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulas -> clausulaFinalmente");}
#line 2963 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 255 "simple.y" /* yacc.c:1646  */
    {printf("\nidentificadorMultiple -> IDENTIFICADOR ',' IDENTIFICADOR");}
#line 2969 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 256 "simple.y" /* yacc.c:1646  */
    {printf("\nidentificadorMultiple -> identificadorMultiple ',' IDENTIFICADOR");}
#line 2975 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 259 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionMult -> expresionMult , expresion");}
#line 2981 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 260 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionMult -> expresion , expresion");}
#line 2987 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 262 "simple.y" /* yacc.c:1646  */
    {printf("\nclase -> CLASE ULTIMA superclase declaracionComponente FIN CLASE");}
#line 2993 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 263 "simple.y" /* yacc.c:1646  */
    {printf("\nclase -> CLASE ULTIMA superclase declaracionComponenteMultiple FIN CLASE");}
#line 2999 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 264 "simple.y" /* yacc.c:1646  */
    {printf("\nclase -> CLASE ULTIMA declaracionComponente FIN CLASE");}
#line 3005 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 265 "simple.y" /* yacc.c:1646  */
    {printf("\nclase -> CLASE ULTIMA declaracionComponenteMultiple FIN CLASE");}
#line 3011 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 266 "simple.y" /* yacc.c:1646  */
    {printf("\nclase -> CLASE superclase declaracionComponente FIN CLASE");}
#line 3017 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 267 "simple.y" /* yacc.c:1646  */
    {printf("\nclase -> CLASE superclase declaracionComponenteMultiple FIN CLASE");}
#line 3023 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 268 "simple.y" /* yacc.c:1646  */
    {printf("\nclase -> CLASE declaracionComponente FIN CLASE");}
#line 3029 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 269 "simple.y" /* yacc.c:1646  */
    {printf("\nclase -> CLASE declaracionComponenteMultiple FIN CLASE");}
#line 3035 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 272 "simple.y" /* yacc.c:1646  */
    {printf("\nsuperClase -> ( nombre )");}
#line 3041 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 273 "simple.y" /* yacc.c:1646  */
    {printf("\nsuperClase -> ( nombreMultiple )");}
#line 3047 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 275 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionComponente -> visibilidad  componente");}
#line 3053 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 276 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionComponente ->   componente");}
#line 3059 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 278 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionComponenteMultiple -> declaracionComponente  declaracionComponente");}
#line 3065 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 279 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionComponenteMultiple -> declaracionComponenteMultiple  declaracionComponente");}
#line 3071 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 281 "simple.y" /* yacc.c:1646  */
    {printf("\nvisibilidad -> PUBLICO");}
#line 3077 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 282 "simple.y" /* yacc.c:1646  */
    {printf("\nvisibilidad -> PRIVADO");}
#line 3083 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 283 "simple.y" /* yacc.c:1646  */
    {printf("\nvisibilidad -> PROTEGIDO");}
#line 3089 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 285 "simple.y" /* yacc.c:1646  */
    {printf("\ncomponente -> declaracionTipo");}
#line 3095 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 286 "simple.y" /* yacc.c:1646  */
    {printf("\ncomponente -> declaracionObjeto");}
#line 3101 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 287 "simple.y" /* yacc.c:1646  */
    {printf("\ncomponente -> declaracionSubprograma");}
#line 3107 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 288 "simple.y" /* yacc.c:1646  */
    {printf("\ncomponente -> modificador declaracionSubprograma");}
#line 3113 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 289 "simple.y" /* yacc.c:1646  */
    {printf("\ncomponente -> modificadorMult declaracionSubprograma");}
#line 3119 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 291 "simple.y" /* yacc.c:1646  */
    {printf("\nmodificadorMultiple -> modificador ',' modificador");}
#line 3125 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 292 "simple.y" /* yacc.c:1646  */
    {printf("\nmodificadorMultiple -> modificadorMultiple ',' modificador");}
#line 3131 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 294 "simple.y" /* yacc.c:1646  */
    {printf("\nmodificador -> CONSTRUCTOR");}
#line 3137 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 295 "simple.y" /* yacc.c:1646  */
    {printf("\nmodificador -> DESTRUCTOR");}
#line 3143 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 296 "simple.y" /* yacc.c:1646  */
    {printf("\nmodificador -> GENERIC");}
#line 3149 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 297 "simple.y" /* yacc.c:1646  */
    {printf("\nmodificador -> ABSTRACTO");}
#line 3155 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 298 "simple.y" /* yacc.c:1646  */
    {printf("\nmodificador -> ESPECIFICO");}
#line 3161 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 299 "simple.y" /* yacc.c:1646  */
    {printf("\nmodificador -> FINAL");}
#line 3167 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 304 "simple.y" /* yacc.c:1646  */
    {printf("\nrango -> expresion :: expresion");}
#line 3173 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 305 "simple.y" /* yacc.c:1646  */
    {printf("\nrango -> rango :: expresion");}
#line 3179 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 308 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionAsignacion");}
#line 3185 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 309 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionDevolver");}
#line 3191 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 310 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionLlamada");}
#line 3197 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 311 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionSi");}
#line 3203 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 312 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionCasos");}
#line 3209 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 313 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionBucle");}
#line 3215 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 314 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionInterrupcion");}
#line 3221 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 315 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionLanzamientoExcepcion");}
#line 3227 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 316 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionDeCapturaDeExcepcion");}
#line 3233 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 317 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> ';'");}
#line 3239 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 318 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> finInstruccionError");}
#line 3245 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 321 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionAsignacion -> objeto op_asignacion expresion ';'");}
#line 3251 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 324 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIGNACION := ");}
#line 3257 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 325 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIG_SUMA :+");}
#line 3263 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 326 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIG_RESTO :\\");}
#line 3269 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 327 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIG_MULT :*");}
#line 3275 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 328 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIG_DIV :/");}
#line 3281 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 329 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIG_RESTA :-");}
#line 3287 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 330 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIG_POT :^");}
#line 3293 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 331 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIG_DESPI :< ");}
#line 3299 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 332 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIG_DESPD :> ");}
#line 3305 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 335 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionDevolver -> DEVOLVER ';'");}
#line 3311 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 336 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionDevolver -> DEVOLVER expresion ';'");}
#line 3317 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 339 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionLlamada -> llamadaSubprograma ';'");}
#line 3323 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 342 "simple.y" /* yacc.c:1646  */
    {printf("\ndefinicionParametro -> expresion");}
#line 3329 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 343 "simple.y" /* yacc.c:1646  */
    {printf("\ndefinicionParametro -> IDENTIFICADOR ASIGNACION expresion");}
#line 3335 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 346 "simple.y" /* yacc.c:1646  */
    {printf("\ndefinicionParametroMultiple -> definicionParametro ',' definicionParametro");}
#line 3341 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 347 "simple.y" /* yacc.c:1646  */
    {printf("\ndefinicionParametroMultiple -> definicionParametroMultiple ',' definicionParametro");}
#line 3347 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 351 "simple.y" /* yacc.c:1646  */
    {printf("\nllamadaSubprograma -> nombre '(' ')'");}
#line 3353 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 352 "simple.y" /* yacc.c:1646  */
    {printf("\nllamadaSubprograma -> nombre '(' definicionParametro ')'");}
#line 3359 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 353 "simple.y" /* yacc.c:1646  */
    {printf("\nllamadaSubprograma -> nombre '(' definicionParametroMultiple ')'");}
#line 3365 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 356 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionSi -> SI expresion ENTONCES instruccion FIN SI");}
#line 3371 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 357 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionSi -> SI expresion ENTONCES instruccionMultiple FIN SI");}
#line 3377 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 358 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionSi -> SI expresion ENTONCES instruccion SINO instruccion FIN SI");}
#line 3383 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 359 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionSi -> SI expresion ENTONCES instruccion SINO instruccionMultiple FIN SI");}
#line 3389 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 360 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionSi -> SI expresion ENTONCES instruccionMultiple SINO instruccion");}
#line 3395 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 361 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionSi -> SI expresion ENTONCES instruccionMultiple SINO instruccionMultiple");}
#line 3401 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 364 "simple.y" /* yacc.c:1646  */
    {printf("\nespecificacionTipo -> nombre");}
#line 3407 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 365 "simple.y" /* yacc.c:1646  */
    {printf("\nespecificacionTipo -> tipoNoEstructurado");}
#line 3413 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 368 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionTipo -> TIPO IDENTIFICADOR ES tipoNoEstructurado ';'");}
#line 3419 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 369 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionTipo -> TIPO IDENTIFICADOR ES tipoEstructurado");}
#line 3425 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 372 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoNoEstructurado -> tipoEscalar");}
#line 3431 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 373 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoNoEstructurado -> tipoTabla");}
#line 3437 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 374 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoNoEstructurado -> tipoDiccionario");}
#line 3443 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 377 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEscalar -> tipoBasico");}
#line 3449 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 378 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEscalar -> SIGNO tipoBasico");}
#line 3455 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 379 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEscalar -> SIGNO tipoBasico longitud");}
#line 3461 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 380 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEscalar -> SIGNO tipoBasico RANGO rango");}
#line 3467 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 381 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEscalar -> SIGNO tipoBasico longitud RANGO rango");}
#line 3473 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 382 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEscalar -> tipoBasico longitud");}
#line 3479 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 383 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEscalar -> tipoBasico RANGO rango");}
#line 3485 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 384 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEscalar -> tipoBasico longitud RANGO rango");}
#line 3491 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 387 "simple.y" /* yacc.c:1646  */
    {printf("\nlongitud -> CORTO");}
#line 3497 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 388 "simple.y" /* yacc.c:1646  */
    {printf("\nlongitud -> LARGO");}
#line 3503 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 391 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoBasico -> BOOLEANO");}
#line 3509 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 392 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoBasico -> CARACTER");}
#line 3515 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 393 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoBasico -> ENTERO");}
#line 3521 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 394 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoBasico -> REAL");}
#line 3527 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 397 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoTabla -> TABLA '(' expresion '..' expresion ')' DE especificacionTipo");}
#line 3533 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 398 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoTabla -> LISTA DE especificacionTipo");}
#line 3539 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 401 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoDiccionario -> DICCIONARIO DE especificacionTipo");}
#line 3545 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 404 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEstructurado -> tipoRegistro");}
#line 3551 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 405 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEstructurado -> tipoEnumerado");}
#line 3557 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 406 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEstructurado -> clase");}
#line 3563 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 409 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoRegistro -> REGISTRO campo FIN REGISTRO");}
#line 3569 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 410 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoRegistro -> REGISTRO campoMultiple FIN REGISTRO");}
#line 3575 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 413 "simple.y" /* yacc.c:1646  */
    {printf("\ncampo -> IDENTIFICADOR ':' especificacionTipo ';'");}
#line 3581 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 414 "simple.y" /* yacc.c:1646  */
    {printf("\ncampo -> IDENTIFICADOR ':' especificacionTipo ASIGNACION expresion ';'");}
#line 3587 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 415 "simple.y" /* yacc.c:1646  */
    {printf("\ncampo -> identificadorMultiple ':' especificacionTipo ';'");}
#line 3593 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 416 "simple.y" /* yacc.c:1646  */
    {printf("\ncampo -> identificadorMultiple ':' especificacionTipo ASIGNACION expresion ';'");}
#line 3599 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 419 "simple.y" /* yacc.c:1646  */
    {printf("\ncampoMultiple -> campo campo");}
#line 3605 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 420 "simple.y" /* yacc.c:1646  */
    {printf("\ncampoMultiple -> campoMultiple campo");}
#line 3611 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 423 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEnumerado -> ENUMERACION elementoEnumeracion FIN ENUMERACION");}
#line 3617 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 424 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEnumerado -> ENUMERACION elementoEnumeracionMultiple FIN ENUMERACION");}
#line 3623 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 425 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEnumerado -> ENUMERACION DE tipoEscalar elementoEnumeracion FIN ENUMERACION");}
#line 3629 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 426 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEnumerado -> ENUMERACION DE tipoEscalar elementoEnumeracionMultiple FIN ENUMERACION");}
#line 3635 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 429 "simple.y" /* yacc.c:1646  */
    {printf("\nelementoEnumeracion -> IDENTIFICADOR");}
#line 3641 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 430 "simple.y" /* yacc.c:1646  */
    {printf("\nelementoEnumeracion -> IDENTIFICADOR ASIGNACION expresion");}
#line 3647 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 433 "simple.y" /* yacc.c:1646  */
    {printf("\nelementoEnumeracionMultiple -> elementoEnumeracion ',' elementoEnumeracion");}
#line 3653 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 434 "simple.y" /* yacc.c:1646  */
    {printf("\nelementoEnumeracionMultiple -> elementoEnumeracionMultiple ',' elementoEnumeracion");}
#line 3659 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 437 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionSubprograma -> SUBPROGRAMA cabeceraSubprograma cuerpoSubprograma SUBPROGRAMA");}
#line 3665 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 438 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionSubprograma -> finSubprogramaError");}
#line 3671 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 441 "simple.y" /* yacc.c:1646  */
    {printf("\ncabeceraSubprograma -> IDENTIFICADOR");}
#line 3677 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 442 "simple.y" /* yacc.c:1646  */
    {printf("\ncabeceraSubprograma -> IDENTIFICADOR parametrizacion");}
#line 3683 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 443 "simple.y" /* yacc.c:1646  */
    {printf("\ncabeceraSubprograma -> IDENTIFICADOR tipoResultado");}
#line 3689 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 444 "simple.y" /* yacc.c:1646  */
    {printf("\ncabeceraSubprograma -> IDENTIFICADOR parametrizacion tipoResultado");}
#line 3695 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 447 "simple.y" /* yacc.c:1646  */
    {printf("\nparametrizacion -> '(' declaracionParametros ')'");}
#line 3701 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 448 "simple.y" /* yacc.c:1646  */
    {printf("\nparametrizacion -> '(' declaracionParametrosMultiple ')'");}
#line 3707 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 451 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionParametros -> IDENTIFICADOR ':' especificacionTipo");}
#line 3713 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 452 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionParametros -> IDENTIFICADOR ':' modo especificacionTipo");}
#line 3719 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 453 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionParametros -> IDENTIFICADOR ':' especificacionTipo ASIGNACION expresion");}
#line 3725 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 454 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionParametros -> IDENTIFICADOR ':' modo especificacionTipo ASIGNACION expresion");}
#line 3731 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 455 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionParametros -> identificadorMultiple ':' especificacionTipo");}
#line 3737 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 456 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionParametros -> identificadorMultiple ':' modo especificacionTipo");}
#line 3743 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 457 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionParametros -> identificadorMultiple ':' especificacionTipo ASIGNACION expresion");}
#line 3749 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 458 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionParametros -> identificadorMultiple ':' modo especificacionTipo ASIGNACION expresion");}
#line 3755 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 461 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionParametrosMultiple -> declaracionParametros ';' declaracionParametros  ");}
#line 3761 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 462 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionParametrosMultiple -> declaracionParametrosMultiple declaracionParametros  ");}
#line 3767 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 465 "simple.y" /* yacc.c:1646  */
    {printf("\nmodo -> VALOR");}
#line 3773 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 466 "simple.y" /* yacc.c:1646  */
    {printf("\nmodo -> REFERENCIA");}
#line 3779 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 469 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoResultado -> DEVOLVER especificacionTipo");}
#line 3785 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 472 "simple.y" /* yacc.c:1646  */
    {printf("\ncuerpoSubprograma -> PRINCIPIO instruccion FIN");}
#line 3791 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 473 "simple.y" /* yacc.c:1646  */
    {printf("\ncuerpoSubprograma -> PRINCIPIO instruccionMultiple FIN");}
#line 3797 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 474 "simple.y" /* yacc.c:1646  */
    {printf("\ncuerpoSubprograma -> PRINCIPIO declaracion instruccion FIN");}
#line 3803 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 475 "simple.y" /* yacc.c:1646  */
    {printf("\ncuerpoSubprograma -> PRINCIPIO declaracion instruccionMultiple FIN");}
#line 3809 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 476 "simple.y" /* yacc.c:1646  */
    {printf("\ncuerpoSubprograma -> PRINCIPIO declaracionMultiple instruccion FIN");}
#line 3815 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 477 "simple.y" /* yacc.c:1646  */
    {printf("\ncuerpoSubprograma -> PRINCIPIO declaracionMultiple instruccionMultiple FIN");}
#line 3821 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 480 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> libreriaMultiple exportaciones declaracion");}
#line 3827 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 481 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> libreriaMultiple exportaciones declaracionMultiple");}
#line 3833 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 482 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> libreriaMultiple declaracion");}
#line 3839 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 483 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> libreriaMultiple declaracionMultiple");}
#line 3845 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 484 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> libreria exportaciones declaracion");}
#line 3851 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 485 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> libreria exportaciones declaracionMultiple");}
#line 3857 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 486 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> libreria declaracion");}
#line 3863 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 487 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> libreria declaracionMultiple");}
#line 3869 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 488 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> exportaciones declaracion");}
#line 3875 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 489 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> exportaciones declaracionMultiple");}
#line 3881 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 490 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> declaracion");}
#line 3887 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 491 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> declaracionMultiple");}
#line 3893 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 494 "simple.y" /* yacc.c:1646  */
    {printf("\nenumeraciones ->  expresionCondicional ]");}
#line 3899 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 495 "simple.y" /* yacc.c:1646  */
    {printf("\nenumeraciones ->  expresionCondicional ]");}
#line 3905 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 496 "simple.y" /* yacc.c:1646  */
    {printf("\nenumeraciones -> [ expresion ]");}
#line 3911 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 497 "simple.y" /* yacc.c:1646  */
    {printf("\nenumeraciones -> [ expresionMult ]");}
#line 3917 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 498 "simple.y" /* yacc.c:1646  */
    {printf("\nenumeraciones -> [ claveValor ]");}
#line 3923 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 499 "simple.y" /* yacc.c:1646  */
    {printf("\nenumeraciones -> [ claveValorMultiple ]");}
#line 3929 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 500 "simple.y" /* yacc.c:1646  */
    {printf("\nenumeraciones -> [ campoValor ]");}
#line 3935 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 501 "simple.y" /* yacc.c:1646  */
    {printf("\nenumeraciones -> [ campoValorMultiple ]");}
#line 3941 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 506 "simple.y" /* yacc.c:1646  */
    {printf("\nclaveValorMult -> claveValor , claveValor");}
#line 3947 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 507 "simple.y" /* yacc.c:1646  */
    {printf("\nclaveValorMult -> claveValorMult , claveValor");}
#line 3953 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 510 "simple.y" /* yacc.c:1646  */
    {printf("\nclave_valor -> CTC_CADENA => expresion");}
#line 3959 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 512 "simple.y" /* yacc.c:1646  */
    {printf("\ncampoValorMult -> campo_valor , campo_valor");}
#line 3965 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 513 "simple.y" /* yacc.c:1646  */
    {printf("\ncampoValorMult -> campoValorMult , campo_valor");}
#line 3971 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 515 "simple.y" /* yacc.c:1646  */
    {printf("\ncampo_valor -> CTC_CADENA => expresion");}
#line 3977 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 517 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionCondicional -> [ si expresion entonces expresion SINO expresion");}
#line 3983 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 518 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionCondicional -> pene duro [ si expresion entonces expresion");}
#line 3989 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 519 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionCondicional -> [ expresion");}
#line 3995 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 522 "simple.y" /* yacc.c:1646  */
    {printf("\nreductora -> error expresion");}
#line 4001 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 523 "simple.y" /* yacc.c:1646  */
    {printf("\nreductora -> error expresion");}
#line 4007 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 526 "simple.y" /* yacc.c:1646  */
    {printf("\nfinSubprogramaError -> reductora FIN SUBPROGRAMA");}
#line 4013 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 529 "simple.y" /* yacc.c:1646  */
    {printf("\nfinInstruccionError -> reductora ';'");}
#line 4019 "simple.tab.c" /* yacc.c:1646  */
    break;


#line 4023 "simple.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 534 "simple.y" /* yacc.c:1906  */


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
