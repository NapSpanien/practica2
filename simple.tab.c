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
    NEW = 344
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
#define YYLAST   2414

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  110
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  91
/* YYNRULES -- Number of rules.  */
#define YYNRULES  296
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  612

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
      94,    95,   103,   101,   108,   102,   109,   104,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    89,   107,
      97,   100,    98,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    92,   105,    93,   106,     2,     2,     2,     2,     2,
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
      85,    86,    87,    88,    99
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    60,    60,    61,    64,    67,    68,    69,    72,    73,
      74,    75,    77,    78,    81,    83,    84,    86,    87,    88,
      90,    91,    94,    95,    97,    98,    99,   100,   104,   105,
     106,   109,   110,   113,   116,   117,   120,   121,   123,   124,
     126,   127,   129,   130,   132,   133,   134,   136,   137,   139,
     140,   141,   142,   145,   146,   148,   149,   151,   152,   153,
     156,   157,   160,   161,   162,   164,   165,   167,   168,   171,
     172,   175,   176,   179,   180,   181,   183,   184,   187,   188,
     190,   191,   192,   193,   194,   195,   196,   197,   200,   201,
     203,   204,   206,   207,   209,   210,   211,   213,   214,   215,
     216,   217,   219,   220,   222,   223,   224,   225,   226,   227,
     232,   233,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   248,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   262,   263,   266,   269,   270,   273,   274,   278,
     279,   280,   283,   284,   285,   286,   287,   288,   291,   292,
     295,   296,   299,   300,   301,   304,   305,   306,   307,   308,
     309,   310,   311,   314,   315,   318,   319,   320,   321,   324,
     325,   328,   331,   332,   333,   336,   337,   340,   341,   342,
     343,   346,   347,   350,   351,   352,   353,   356,   357,   360,
     361,   364,   367,   368,   369,   370,   373,   374,   377,   378,
     379,   380,   381,   382,   383,   384,   387,   388,   391,   392,
     395,   398,   399,   400,   401,   402,   403,   406,   407,   408,
     409,   410,   411,   412,   413,   414,   415,   416,   417,   420,
     421,   422,   423,   424,   425,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   436,   437,   438,   439,   440,
     442,   443,   446,   447,   449,   450,   453,   454,   456,   457,
     459,   460,   462,   463,   466,   467,   468,   469,   470,   471,
     473,   474,   475,   476,   477,   478,   481,   482,   483,   484,
     485,   486,   490,   491,   492,   493,   494,   495,   498,   499,
     502,   504,   505,   507,   509,   510,   511
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
  "')'", "'~'", "'<'", "'>'", "NEW", "'='", "'+'", "'-'", "'*'", "'/'",
  "'\\\\'", "'^'", "';'", "','", "'.'", "$accept", "programa",
  "definicionPrograma", "codigoPrograma", "libreria", "libreriaMultiple",
  "definicionLibreria", "declaracionMultiple", "declaracion",
  "exportaciones", "declaracionObjeto", "instruccionInterrupcion",
  "cuando", "instruccionLanzamientoExcepcion", "instruccionMultiple",
  "instruccionCasos", "casoMultiple", "caso", "entradas", "entrada",
  "entradaDosP", "instruccionBucle", "clausulaIteracion",
  "instruccionDeCapturaDeExcepcion", "clausulasExcepcion",
  "clausulaExcepcionEspecifica", "clausulaExcepcionEspecificaMultiple",
  "clausulaExcepcionGeneral", "clausulaFinalmente", "clausulas",
  "identificadorMultiple", "expresionMult", "clase", "superclase",
  "declaracionComponente", "declaracionComponenteMultiple", "visibilidad",
  "componente", "modificadorMultiple", "modificador", "rango",
  "instruccion", "instruccionAsignacion", "operadorAsignacion",
  "instruccionDevolver", "instruccionLlamada", "definicionParametro",
  "definicionParametroMultiple", "llamadaSubprograma", "instruccionSi",
  "especificacionTipo", "declaracionTipo", "tipoNoEstructurado",
  "tipoEscalar", "longitud", "tipoBasico", "tipoTabla", "tipoDiccionario",
  "tipoEstructurado", "tipoRegistro", "campo", "campoMultiple",
  "tipoEnumerado", "elementoEnumeracion", "elementoEnumeracionMultiple",
  "declaracionSubprograma", "cabeceraSubprograma", "parametrizacion",
  "declaracionParametros", "declaracionParametrosMultiple", "modo",
  "tipoResultado", "cuerpoSubprograma", "codigoLibreria", "expresion",
  "cadenaMult", "nombre", "nombreMultiple", "expresionPotencia",
  "expresionPosfija", "operadorPosfijo", "expresionUnaria", "primario",
  "literal", "objeto", "enumeraciones", "claveValorMult", "claveValor",
  "campoValorMult", "campoValor", "expresionCondicional", YY_NULLPTR
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
     123,   125,    91,    93,    40,    41,   126,    60,    62,   344,
      61,    43,    45,    42,    47,    92,    94,    59,    44,    46
};
# endif

#define YYPACT_NINF -339

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-339)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      78,    -1,    20,   114,  -339,  -339,    97,   125,  -339,     1,
      45,   117,   120,   208,   185,   203,    80,     1,     1,   260,
     260,   260,  -339,    86,  -339,  -339,  -339,  1186,  -339,    45,
      45,   166,   176,  -339,   120,  -339,   -29,    12,   120,    -7,
     177,   274,  1707,   237,  -339,   260,   260,   260,  -339,   260,
     260,   260,  -339,  -339,   260,   260,  1720,   243,  1407,   302,
     120,  1407,   248,  1186,   258,   163,  1407,   315,   246,  -339,
    -339,  -339,   660,  -339,  -339,  1186,  -339,   723,  -339,  -339,
    -339,   231,  -339,   -38,  2213,  -339,  -339,  1186,  1186,    56,
     277,  -339,   120,  -339,   120,     2,   997,   289,   341,  -339,
     305,  1740,  -339,  -339,   997,   361,  -339,   364,  -339,    69,
     294,    33,  -339,  -339,   162,  -339,  -339,   326,  -339,   260,
     260,   260,   260,   997,    46,  -339,  -339,  1407,  -339,  -339,
    -339,  -339,  -339,  1440,  1407,  1407,   818,  -339,  1313,  -339,
     300,   330,  -339,  -339,    74,  -339,   224,  -339,  1904,   -31,
    2212,   394,   269,   269,    -6,  1407,   353,   316,  1255,   325,
     224,  -339,  -339,   763,   822,  -339,  -339,  -339,  1152,  -339,
    -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,   375,  1407,
     120,  1407,   869,   918,   940,   979,   378,  -339,   326,   326,
     380,  -339,  -339,    90,    91,   115,   200,  -339,  -339,  1224,
      -2,   383,  -339,   334,   344,  -339,  -339,   393,   997,   997,
     204,  1407,  1407,  -339,  -339,  -339,  1407,   422,   396,  1407,
    -339,  1269,   405,   417,  1919,   -67,   -56,   -55,    21,   184,
    1830,  1956,   390,  1407,  -339,   477,  1407,  1407,  1407,  1407,
    1407,  1407,  1407,  1407,  1407,  1407,  1407,  1407,  1407,  1407,
    1407,  1407,  1407,  1407,  1458,  -339,  -339,  -339,  -339,   -38,
     401,  -339,  -339,  1341,   772,  1186,   469,   479,   479,  -339,
    -339,   484,   487,   460,   997,  2212,   315,  -339,  1186,  -339,
    1186,   511,   512,   454,  -339,   179,   193,  2212,    81,   155,
     192,  1867,   326,  1970,  -339,  -339,  -339,  -339,   350,   354,
     412,   700,   700,  -339,   289,  -339,   289,  -339,  -339,  -339,
    -339,  -339,  -339,  -339,  -339,  -339,  1256,   120,  -339,   449,
    1530,  1540,   489,  -339,   -36,   -34,  -339,  -339,    95,   455,
     -14,   -11,   141,   151,    96,   102,  -339,  -339,  1407,  -339,
    -339,  1407,   480,  1741,  2007,   462,  1779,  1407,  1407,  2021,
    1407,  1407,  1407,  -339,  -339,   468,  -339,   468,  -339,   473,
    -339,   473,  -339,  1407,  -339,  1407,  -339,   405,   417,  2058,
    1385,    19,    26,  2212,   496,   296,  2305,  2305,  2212,  2249,
    2259,  2295,  2305,  2305,  2305,   175,   175,   -44,   -44,   -44,
    2212,  -339,  -339,   997,  2212,   120,  1186,  1186,  1186,  1186,
    -339,  -339,  -339,  -339,  -339,   494,   497,   526,   528,   438,
     419,   631,  1001,  1042,  -339,  -339,  1407,  -339,  1473,  -339,
    1473,  -339,   485,  -339,   488,  -339,  -339,  -339,  -339,  -339,
    -339,  -339,  -339,   481,   997,   483,   997,  -339,   453,   449,
    1580,  1590,    27,   196,  1622,  1632,   548,  -339,   553,  -339,
    -339,   409,  -339,   409,  -339,   502,  1407,   540,   502,   546,
     502,   997,   997,   519,  -339,   522,  -339,  2072,   462,  1407,
    1407,  -339,  1407,  1407,   462,  2109,  -339,  1726,  2212,  2212,
    -339,  -339,  -339,  -339,  2212,  2212,  -339,   504,   490,  1385,
    1793,   569,  -339,   575,  -339,   564,    65,  -339,  -339,  -339,
    1392,  -339,   531,  1186,   532,  1186,   581,   584,  2212,  -339,
    -339,  -339,  -339,  1407,   520,  1407,   521,  -339,  1664,  1674,
     585,   586,  -339,  -339,   588,   596,  -339,  -339,  -339,  -339,
     -10,    -8,  2212,  -339,  -339,  -339,  -339,    66,    71,  -339,
    -339,  -339,   462,  2124,  2212,  2212,  -339,  1407,  1186,  -339,
     517,  1407,  -339,  -339,  1407,  1186,   595,   462,  -339,  1064,
    1093,  -339,  1125,  1157,  -339,  -339,  2212,  1407,  2212,  1407,
     603,   622,  -339,  -339,  -339,  -339,   609,   612,  1407,  -339,
    1407,  -339,   621,  2212,  1186,  1186,  -339,  2212,  2212,  1186,
    1186,  -339,   583,   589,   592,   593,  2212,  2212,  -339,  -339,
    -339,  -339,  2161,  2175,   997,  -339,  -339,  -339,  -339,  -339,
    -339,  -339
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     2,     3,     0,     0,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   228,
     227,     0,    17,     0,    18,    19,    14,     0,     4,     0,
       0,     0,     0,     7,     0,   252,     0,     0,     0,   192,
       0,     0,     0,     0,    12,   224,   223,     0,    13,   220,
     219,     0,    16,    15,   226,   225,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    32,     0,    32,   252,   121,
     118,   119,     0,   116,   117,     0,   120,     0,   112,   113,
     114,     0,   115,   276,     0,     6,     5,     0,     0,     0,
       0,    21,     0,    20,     0,     0,     0,     0,   193,   194,
       0,     0,   165,   166,     0,     0,   167,     0,   168,     0,
       0,     0,   149,   152,   155,   153,   154,   148,    76,   222,
     221,   218,   217,     0,     0,    77,   271,     0,   270,   274,
     275,   272,   273,     0,     0,     0,     0,   266,     0,   249,
     256,   258,   262,   264,   265,   268,     0,   132,     0,     0,
      59,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   212,    35,     0,     0,   211,    34,   134,     0,   123,
     124,   128,   126,   127,   125,   129,   130,   131,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   253,   254,   255,
       0,     9,   210,     0,     0,     0,     0,   195,   191,     0,
       0,     0,   174,     0,     0,   172,   173,     0,     0,     0,
     156,     0,     0,    26,   163,   164,     0,   160,     0,     0,
      27,     0,   275,   252,     0,     0,     0,     0,     0,     0,
     294,     0,     0,     0,   263,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   260,   261,   259,   267,     0,
       0,   133,    33,     0,     0,     0,    73,     0,     0,    62,
      75,     0,     0,     0,     0,    31,    32,    30,     0,    28,
       0,     0,     0,   252,   139,     0,     0,   135,     0,     0,
       0,     0,   277,     0,   216,   215,   214,   213,     0,     0,
       0,     0,     0,   196,     0,   197,     0,   107,   104,   105,
     108,   109,   106,    95,    96,    94,     0,     0,    98,     0,
       0,     0,     0,    91,     0,     0,    97,    99,     0,   187,
       0,     0,     0,     0,     0,     0,   150,   151,     0,   171,
     170,     0,   157,     0,     0,   161,     0,     0,     0,     0,
       0,     0,     0,   238,   285,     0,   284,     0,   287,     0,
     286,     0,   283,     0,   237,     0,   269,     0,     0,   294,
       0,     0,     0,   239,   234,   235,   242,   243,   245,   247,
     248,   246,   240,   241,   244,   229,   230,   233,   231,   232,
     236,   257,   282,     0,    53,     0,    70,    69,    72,    71,
      74,    67,    63,    68,    64,     0,     0,    55,     0,     0,
       0,     0,     0,     0,    52,    51,     0,   140,     0,   141,
       0,   280,     0,   281,     0,   279,   278,   122,    10,    11,
       8,   209,   208,   198,     0,   202,     0,   206,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,     0,    93,
      90,     0,   101,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   181,     0,   182,     0,   158,     0,
       0,    24,     0,     0,   162,     0,    25,   295,   290,   293,
     289,   288,   292,   291,    78,    79,    46,     0,    43,     0,
      44,     0,    39,     0,    38,     0,     0,    61,    60,    57,
       0,    29,     0,     0,     0,     0,     0,     0,   136,   137,
     138,   250,   251,     0,   199,     0,   203,   207,     0,     0,
       0,     0,    88,    89,     0,     0,    86,    87,   103,   102,
       0,     0,   188,   183,   189,   184,   190,     0,     0,   175,
     176,    22,   159,     0,   111,   110,    23,     0,     0,    47,
      42,     0,    37,    36,     0,     0,     0,    56,   143,     0,
       0,   142,     0,     0,    50,    49,   200,     0,   204,     0,
       0,     0,    82,    83,    84,    85,     0,     0,     0,   177,
       0,   179,     0,   296,    41,    40,    48,    45,    54,    66,
      65,    58,     0,     0,     0,     0,   201,   205,    80,    81,
     185,   186,     0,     0,     0,   147,   146,   145,   144,   178,
     180,   169
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -339,  -339,  -339,  -339,   263,   627,  -339,   309,   623,   450,
    -129,  -339,   -61,  -339,   -59,  -339,  -339,   110,  -339,   158,
    -339,  -339,   109,  -339,  -339,   219,  -339,   230,   384,   498,
     -78,   470,  -339,   338,   -92,  -311,  -339,   335,  -339,  -267,
    -338,   -20,  -339,  -339,  -339,  -339,   -68,  -339,   -26,  -339,
     -54,  -108,   555,   332,   448,   552,  -339,  -339,  -339,  -339,
     167,  -339,  -339,  -112,   207,  -174,  -339,  -339,    53,  -339,
     362,   568,   311,  -339,   376,  -339,   -12,   355,   421,  -339,
    -339,  -339,   543,  -339,    18,  -339,  -339,     6,  -339,    60,
    -339
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    28,    44,    18,     5,    31,    52,    21,
      22,    70,   157,    71,    72,    73,   371,   372,   487,   488,
     489,    74,    75,    76,   266,   267,   268,   269,   270,   271,
      23,   229,   202,   319,   447,   321,   322,   323,   324,   325,
     345,   162,    78,   181,    79,    80,   285,   286,   137,    82,
     111,    24,   112,   113,   217,   114,   115,   116,   204,   205,
     334,   335,   206,   330,   331,    25,    40,    98,   195,   196,
     434,    99,    33,    26,   346,   289,    83,    37,   139,   140,
     257,   141,   142,   143,   144,   145,   225,   226,   227,   228,
     146
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      36,    81,   124,   468,   152,   441,   159,    77,   445,   474,
      96,   190,   328,   273,   457,    11,   163,   459,   576,   194,
     577,    14,    89,    14,   354,   327,    95,    12,   182,   184,
     117,    90,   370,    13,   241,   356,   358,    81,    90,   370,
      90,   355,   192,   153,   117,    84,    81,   491,   149,    81,
     207,    81,   357,   359,   493,   164,   168,   166,    14,    11,
      15,    81,    81,   329,     6,   253,    16,   183,   185,   218,
     318,    90,   451,   102,   453,   103,   262,    13,    91,    92,
     188,    84,   189,   274,   117,     7,    27,    97,   186,   106,
      84,   326,   117,    84,   458,    84,    90,   460,   458,   102,
     460,   103,    14,   212,    15,    84,    84,   320,   299,   191,
      16,   117,   360,     1,     8,   106,   219,   108,   258,    93,
      94,     2,   522,   333,   463,    90,    81,    81,   519,   361,
     465,   542,   259,   166,    90,    92,   578,    81,    81,    35,
     213,   580,   327,   108,   166,   327,   327,   327,   327,   109,
     452,   454,    34,   220,   339,   340,    81,    81,    81,    81,
     555,   332,   557,   166,   178,   166,   179,   332,   292,    42,
      84,    84,   421,   579,   214,    56,   155,   156,   581,   301,
     302,    84,    84,   180,   528,    35,   529,   318,    43,   422,
     318,   318,   318,   318,    57,   215,   117,   117,    43,    57,
      84,    84,    84,    84,     9,   396,   398,    87,   326,   216,
     303,   326,   326,   326,   326,   409,   214,    88,    27,   410,
     408,   412,   304,    14,   440,    15,   194,   444,   194,   449,
     461,    16,    10,    14,    14,    15,    15,   215,    81,    81,
     462,    16,    16,    38,   397,   399,   423,   433,   435,    43,
      39,   341,    81,   241,    81,   260,   333,   333,   411,    57,
     413,    61,   117,   424,    62,   327,   327,   327,    41,   280,
     327,   327,    17,    29,   417,    64,    58,   362,   250,   251,
     252,    48,    84,    84,   253,   425,    59,   418,   419,   117,
     117,   523,   363,    48,   264,   305,    84,   101,    84,   265,
     363,   420,   118,    60,    94,   442,    61,   306,   125,    62,
     318,   318,   318,   151,    63,   318,   318,    14,    19,    15,
      64,    65,    66,   154,    67,    16,    45,    49,   155,   126,
      54,   326,   326,   326,    68,   160,   326,   326,   167,   495,
      85,    86,   187,   530,   327,   327,   534,   518,   536,   449,
     509,   100,   510,   449,   193,   127,   119,   437,    96,   438,
     121,   480,   198,   481,   128,   129,   130,    35,   131,   132,
      81,    81,    81,    81,   241,   208,    69,   166,   209,   166,
     514,   117,   516,   496,    81,    81,    81,    81,   211,   318,
     318,   166,   133,   166,   134,    90,   135,   248,   249,   250,
     251,   252,   255,   256,   136,   253,   254,   537,   538,   147,
     326,   326,   307,   263,    84,    84,    84,    84,   276,   482,
     308,   483,   117,   277,   117,   309,    58,   449,    84,    84,
      84,    84,   279,   310,   138,   148,    59,   150,   311,   288,
     312,   336,   158,   298,   559,   300,   562,   502,   332,   117,
     117,   337,   307,    60,   367,   368,    61,   428,    43,    62,
     308,   429,    57,   338,    63,   309,   348,    47,    51,   347,
      64,    65,    66,   310,    67,   503,   351,    81,   311,    81,
     312,   492,   494,   560,    68,   563,   401,   403,   352,   584,
     370,   313,   307,   314,   392,   315,   589,   402,   404,   265,
     308,   464,   466,   221,   264,   309,    14,   407,    15,   224,
     230,   231,   405,   310,    16,   406,   414,   415,   311,   430,
     312,    84,    81,    84,   416,   456,    69,   469,   585,    81,
     472,   275,   367,    81,    81,   590,    81,    81,   368,   497,
     166,   499,   498,   166,   287,   501,    14,   500,    15,   511,
     611,   513,   512,   515,    16,   291,   526,   293,    81,    81,
     517,   527,   533,    81,    81,   166,    84,   329,   535,   539,
     166,   238,   540,    84,   241,   548,   552,    84,    84,   549,
      84,    84,   553,   554,   558,   561,   564,   343,   344,   565,
     567,   569,   117,   572,   573,   349,   574,   248,   249,   250,
     251,   252,    84,    84,   575,   253,   586,    84,    84,   369,
     591,   598,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     599,   600,    20,    32,   601,   604,   605,    30,    58,   394,
      46,    50,   606,    53,    55,   607,   608,   550,    59,   290,
     400,   272,    32,    32,   439,    53,   203,   450,   342,   504,
     455,   210,   531,    32,   436,    60,   197,    58,    61,    53,
     120,    62,   443,    53,   122,   391,    63,    59,    53,   234,
       0,     0,    64,    65,    66,     0,    67,   505,   161,     0,
       0,     0,     0,     0,    60,     0,    68,    61,     0,     0,
      62,     0,     0,     0,   102,    63,   103,     0,     0,     0,
       0,    64,    65,    66,   467,    67,     0,     0,   105,     0,
     106,     0,     0,     0,   475,    68,   477,   478,   479,     0,
      58,     0,     0,     0,     0,     0,   107,     0,    69,   484,
      59,   485,     0,    53,     0,    53,   490,     0,   108,   431,
       0,   165,     0,     0,   109,     0,     0,    60,   110,     0,
      61,   432,     0,    62,     0,    35,     0,    69,    63,     0,
      58,     0,     0,     0,    64,    65,    66,     0,    67,    58,
      59,     0,     0,     0,     0,     0,     0,     0,    68,    59,
       0,   281,   508,     0,   287,     0,   287,    60,     0,     0,
      61,     0,     0,    62,     0,     0,    60,     0,    63,    61,
       0,     0,    62,     0,    64,    65,    66,    63,    67,     0,
       0,     0,     0,    64,    65,    66,     0,    67,    68,    58,
      69,     0,   532,     0,     0,     0,     0,    68,     0,    59,
       0,     0,     0,     0,     0,   126,   543,     0,   544,   545,
     282,     0,     0,     0,     0,     0,    60,     0,     0,    61,
       0,     0,    62,     0,     0,   490,   395,    63,     0,     0,
      69,   127,     0,    64,    65,    66,    58,    67,     0,    69,
     128,   129,   130,    35,   131,   132,    59,    68,     0,   566,
       0,   568,     0,     0,     0,     0,     0,   294,     0,     0,
       0,     0,     0,    60,     0,     0,    61,     0,   232,    62,
     233,     0,   135,     0,    63,     0,     0,     0,     0,     0,
      64,    65,    66,   583,    67,    58,     0,   587,     0,    69,
     588,     0,     0,     0,    68,    59,     0,     0,     0,     0,
       0,     0,     0,   596,     0,   597,   295,    58,     0,     0,
       0,     0,    60,     0,   602,    61,   603,    59,    62,     0,
       0,     0,     0,    63,     0,     0,     0,     0,   296,    64,
      65,    66,     0,    67,    60,     0,    69,    61,     0,     0,
      62,     0,     0,    68,     0,    63,    58,     0,     0,     0,
       0,    64,    65,    66,     0,    67,    59,     0,     0,     0,
       0,   102,     0,   103,     0,    68,     0,   297,    58,     0,
       0,     0,     0,    60,     0,   105,    61,   106,    59,    62,
       0,     0,     0,     0,    63,    69,     0,     0,     0,   506,
      64,    65,    66,   107,    67,    60,     0,     0,    61,     0,
       0,    62,     0,     0,    68,   108,    63,    69,     0,    58,
       0,   109,    64,    65,    66,   110,    67,     0,     0,    59,
       0,     0,    35,     0,     0,     0,    68,     0,     0,     0,
     507,    58,     0,     0,     0,     0,    60,     0,     0,    61,
       0,    59,    62,     0,     0,     0,    69,    63,     0,     0,
       0,     0,   592,    64,    65,    66,     0,    67,    60,     0,
      58,    61,     0,     0,    62,     0,     0,    68,    69,    63,
      59,     0,     0,     0,     0,    64,    65,    66,     0,    67,
       0,   593,     0,     0,     0,     0,     0,    60,     0,    68,
      61,     0,    58,    62,     0,     0,     0,     0,    63,     0,
       0,     0,    59,     0,    64,    65,    66,     0,    67,    69,
       0,     0,     0,   594,     0,     0,     0,     0,    68,    60,
       0,     0,    61,     0,    58,    62,     0,     0,     0,     0,
      63,    69,     0,     0,    59,     0,    64,    65,    66,   126,
      67,     0,     0,     0,     0,   595,     0,     0,     0,     0,
      68,    60,     0,    58,    61,     0,     0,    62,     0,     0,
      69,     0,    63,    59,     0,   127,     0,     0,    64,    65,
      66,     0,    67,     0,   128,   129,   130,   283,   131,   132,
      60,     0,    68,    61,     0,     0,    62,   307,     0,     0,
       0,    63,    69,     0,     0,   308,     0,    64,    65,    66,
     309,    67,   133,     0,   134,     0,   135,   284,   310,     0,
       0,    68,     0,   311,   136,   312,     0,     0,     0,   307,
       0,     0,     0,     0,    69,     0,   313,   308,   314,     0,
     315,     0,   309,     0,     0,     0,   278,     0,     0,     0,
     310,    14,     0,    15,   316,   311,     0,   312,     0,    16,
     350,     0,     0,    69,     0,     0,     0,     0,   313,     0,
     314,     0,   315,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    14,     0,    15,     0,     0,   317,     0,
       0,    16,     0,     0,   236,     0,     0,     0,     0,   237,
     238,   239,   240,   241,   242,   243,   235,     0,   236,     0,
       0,     0,     0,   237,   238,   239,   240,   241,   242,   243,
     317,   244,   245,   246,     0,   247,   248,   249,   250,   251,
     252,     0,     0,     0,   253,   244,   245,   246,   126,   247,
     248,   249,   250,   251,   252,     0,     0,     0,   253,     0,
       0,     0,   236,     0,     0,     0,     0,   237,   238,   239,
     240,   241,   242,   243,   127,     0,     0,     0,     0,     0,
       0,     0,     0,   128,   129,   130,    35,   131,   132,   244,
     245,   246,   126,   247,   248,   249,   250,   251,   252,   126,
       0,     0,   253,     0,   486,     0,     0,     0,     0,     0,
     393,   133,     0,   134,   126,   135,     0,     0,   127,   556,
       0,     0,     0,   136,     0,   127,     0,   128,   129,   130,
      35,   131,   132,     0,   128,   129,   130,    35,   131,   132,
     127,     0,     0,     0,     0,     0,     0,   126,     0,   128,
     129,   130,    35,   131,   132,   133,     0,   134,     0,   135,
       0,     0,   133,     0,   134,   126,   135,   136,     0,     0,
       0,     0,     0,   127,   136,     0,     0,   133,     0,   134,
     126,   135,   128,   129,   222,   223,   131,   132,     0,   136,
       0,   127,     0,     0,     0,     0,     0,     0,     0,     0,
     128,   129,   130,    35,   131,   132,   127,     0,     0,     0,
     133,     0,   134,   307,   135,   128,   129,   130,   283,   131,
     132,   308,   136,   307,     0,     0,   309,     0,   232,     0,
     233,   308,   135,     0,   310,     0,   309,     0,   446,   311,
     136,   312,     0,   133,   310,   134,     0,   135,   448,   311,
       0,   312,   313,     0,   314,   136,   315,     0,     0,     0,
       0,     0,   313,   307,   314,     0,   315,    14,     0,    15,
       0,   308,     0,   307,     0,    16,   309,    14,     0,    15,
       0,   308,     0,     0,   310,    16,   309,     0,   520,   311,
       0,   312,     0,     0,   310,     0,     0,     0,   521,   311,
       0,   312,   313,     0,   314,   307,   315,     0,     0,     0,
       0,     0,   313,   308,   314,   307,   315,    14,   309,    15,
       0,     0,     0,   308,     0,    16,   310,    14,   309,    15,
     524,   311,     0,   312,     0,    16,   310,     0,     0,     0,
     525,   311,     0,   312,   313,     0,   314,   307,   315,     0,
       0,     0,     0,     0,   313,   308,   314,   307,   315,    14,
     309,    15,     0,     0,     0,   308,     0,    16,   310,    14,
     309,    15,   570,   311,     0,   312,     0,    16,   310,     0,
       0,     0,   571,   311,     0,   312,   313,     0,   314,     0,
     315,   102,     0,   103,     0,     0,   313,   104,   314,     0,
     315,    14,     0,    15,   102,   105,   103,   106,     0,    16,
     123,    14,     0,    15,     0,     0,     0,     0,   105,    16,
     106,     0,     0,   107,   102,     0,   103,     0,   199,     0,
       0,     0,     0,     0,     0,   108,   107,     0,   105,     0,
     106,   109,   200,     0,     0,   110,     0,     0,   108,     0,
       0,     0,    35,     0,   109,     0,   107,     0,   110,     0,
       0,     0,   547,     0,     0,    35,     0,     0,   108,     0,
     201,     0,     0,     0,   109,   236,     0,     0,   110,     0,
     237,   238,   239,   240,   241,   242,   243,     0,     0,   470,
     236,     0,     0,     0,     0,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,     0,   247,   248,   249,   250,
     251,   252,     0,     0,     0,   253,     0,   244,   245,   246,
       0,   247,   248,   249,   250,   251,   252,   473,   236,     0,
     253,     0,     0,   237,   238,   239,   240,   241,   242,   243,
       0,   551,   236,     0,     0,     0,     0,   237,   238,   239,
     240,   241,   242,   243,     0,   244,   245,   246,     0,   247,
     248,   249,   250,   251,   252,     0,     0,     0,   253,   244,
     245,   246,     0,   247,   248,   249,   250,   251,   252,   236,
       0,     0,   253,     0,   237,   238,   239,   240,   241,   242,
     243,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   364,     0,     0,   244,   245,   246,     0,
     247,   248,   249,   250,   251,   252,   236,     0,   365,   253,
       0,   237,   238,   239,   240,   241,   242,   243,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     426,     0,     0,   244,   245,   246,     0,   247,   248,   249,
     250,   251,   252,   236,     0,   365,   253,     0,   237,   238,
     239,   240,   241,   242,   243,     0,     0,     0,   236,     0,
       0,     0,     0,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,     0,   247,   248,   249,   250,   251,   252,
     353,   261,     0,   253,     0,   244,   245,   246,     0,   247,
     248,   249,   250,   251,   252,   236,     0,     0,   253,     0,
     237,   238,   239,   240,   241,   242,   243,     0,     0,   236,
       0,     0,     0,     0,   237,   238,   239,   240,   241,   242,
     243,   366,   244,   245,   246,     0,   247,   248,   249,   250,
     251,   252,     0,     0,     0,   253,   244,   245,   246,     0,
     247,   248,   249,   250,   251,   252,   236,   427,     0,   253,
       0,   237,   238,   239,   240,   241,   242,   243,     0,     0,
     236,     0,     0,     0,     0,   237,   238,   239,   240,   241,
     242,   243,     0,   244,   245,   246,     0,   247,   248,   249,
     250,   251,   252,     0,   471,     0,   253,   244,   245,   246,
       0,   247,   248,   249,   250,   251,   252,   236,   476,     0,
     253,     0,   237,   238,   239,   240,   241,   242,   243,     0,
       0,   236,     0,     0,     0,     0,   237,   238,   239,   240,
     241,   242,   243,     0,   244,   245,   246,     0,   247,   248,
     249,   250,   251,   252,     0,     0,   365,   253,   244,   245,
     246,     0,   247,   248,   249,   250,   251,   252,   236,   541,
       0,   253,     0,   237,   238,   239,   240,   241,   242,   243,
       0,     0,     0,   236,     0,     0,     0,     0,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,     0,   247,
     248,   249,   250,   251,   252,     0,   546,     0,   253,   582,
     244,   245,   246,     0,   247,   248,   249,   250,   251,   252,
     236,     0,     0,   253,     0,   237,   238,   239,   240,   241,
     242,   243,     0,     0,   236,     0,     0,     0,     0,   237,
     238,   239,   240,   241,   242,   243,     0,   244,   245,   246,
       0,   247,   248,   249,   250,   251,   252,     0,   609,     0,
     253,   244,   245,   246,     0,   247,   248,   249,   250,   251,
     252,   236,   610,   169,   253,     0,   237,   238,   239,   240,
     241,   242,   243,     0,   170,   171,   172,   173,   174,   175,
     176,   177,     0,   178,     0,   179,     0,     0,   244,   245,
     246,     0,   247,   248,   249,   250,   251,   252,     0,     0,
       0,   253,   180,   237,   238,   239,   240,   241,     0,   243,
       0,     0,     0,   237,   238,   239,   240,   241,     0,     0,
       0,     0,     0,     0,     0,   244,   245,   246,     0,   247,
     248,   249,   250,   251,   252,   244,   245,   246,   253,   247,
     248,   249,   250,   251,   252,     0,     0,     0,   253,   237,
     238,   239,   240,   241,     0,     0,     0,     0,     0,   237,
     238,    -1,    -1,   241,     0,     0,     0,     0,     0,     0,
       0,    -1,   245,   246,     0,   247,   248,   249,   250,   251,
     252,     0,    -1,    -1,   253,    -1,   248,   249,   250,   251,
     252,     0,     0,     0,   253
};

static const yytype_int16 yycheck[] =
{
      12,    27,    56,   341,    63,   316,    67,    27,   319,   347,
      17,     9,    14,    19,    28,    14,    75,    28,    28,    97,
      28,    57,    34,    57,    91,   199,    38,    26,    87,    88,
      42,    69,    13,    32,    78,    91,    91,    63,    69,    13,
      69,   108,    96,    63,    56,    27,    72,    28,    60,    75,
     104,    77,   108,   108,    28,    75,    94,    77,    57,    14,
      59,    87,    88,    65,    65,   109,    65,    87,    88,   123,
     199,    69,   108,     4,   108,     6,   107,    32,   107,   108,
      92,    63,    94,    89,    96,    65,    41,    94,    32,    20,
      72,   199,   104,    75,   108,    77,    69,   108,   108,     4,
     108,     6,    57,    70,    59,    87,    88,   199,   186,   107,
      65,   123,    91,    35,     0,    20,    70,    48,   144,   107,
     108,    43,    95,   201,    28,    69,   152,   153,   439,   108,
      28,   469,   144,   153,    69,   108,    70,   163,   164,    65,
     107,    70,   316,    48,   164,   319,   320,   321,   322,    54,
     324,   325,    35,   107,   208,   209,   182,   183,   184,   185,
      95,    65,   500,   183,    90,   185,    92,    65,   180,    89,
     152,   153,    91,   107,    12,    89,    13,    14,   107,    89,
      89,   163,   164,   109,   451,    65,   453,   316,   108,   108,
     319,   320,   321,   322,   108,    33,   208,   209,   108,   108,
     182,   183,   184,   185,   107,   264,   265,    41,   316,    47,
      95,   319,   320,   321,   322,   276,    12,    41,    41,   278,
     274,   280,   107,    57,   316,    59,   304,   319,   306,   321,
      89,    65,   107,    57,    57,    59,    59,    33,   264,   265,
      89,    65,    65,    35,   264,   265,    91,   301,   302,   108,
      65,    47,   278,    78,   280,   146,   334,   335,   278,   108,
     280,    37,   274,   108,    40,   439,   440,   441,    65,   160,
     444,   445,     9,    10,    95,    51,     7,    93,   103,   104,
     105,    18,   264,   265,   109,    93,    17,   108,    95,   301,
     302,    95,   108,    30,    25,    95,   278,    23,   280,    30,
     108,   108,    65,    34,   108,   317,    37,   107,    65,    40,
     439,   440,   441,    65,    45,   444,   445,    57,     9,    59,
      51,    52,    53,    65,    55,    65,    17,    18,    13,    27,
      21,   439,   440,   441,    65,    89,   444,   445,   107,   393,
      29,    30,    65,   455,   518,   519,   458,   439,   460,   441,
     418,    40,   420,   445,    65,    53,    47,   304,    17,   306,
      51,   355,    57,   357,    62,    63,    64,    65,    66,    67,
     396,   397,   398,   399,    78,    14,   107,   397,    14,   399,
     434,   393,   436,   395,   410,   411,   412,   413,    94,   518,
     519,   411,    90,   413,    92,    69,    94,   101,   102,   103,
     104,   105,    72,    73,   102,   109,   106,   461,   462,   107,
     518,   519,     3,    19,   396,   397,   398,   399,    65,   359,
      11,   361,   434,   107,   436,    16,     7,   519,   410,   411,
     412,   413,   107,    24,    58,    59,    17,    61,    29,    64,
      31,   107,    66,    65,   503,    65,   505,    28,    65,   461,
     462,   107,     3,    34,    64,    65,    37,   107,   108,    40,
      11,   107,   108,    70,    45,    16,    70,    17,    18,    47,
      51,    52,    53,    24,    55,    56,    71,   503,    29,   505,
      31,   371,   372,   503,    65,   505,   267,   268,    71,   548,
      13,    42,     3,    44,    93,    46,   555,   267,   268,    30,
      11,   334,   335,   127,    25,    16,    57,    47,    59,   133,
     134,   135,    28,    24,    65,    28,     5,     5,    29,   107,
      31,   503,   548,   505,    70,    70,   107,    47,   548,   555,
      68,   155,    64,   559,   560,   555,   562,   563,    65,    45,
     560,    15,    45,   563,   168,   107,    57,    19,    59,    64,
     604,    70,    64,    70,    65,   179,     8,   181,   584,   585,
     107,     8,    22,   589,   590,   585,   548,    65,    22,    50,
     590,    75,    50,   555,    78,    71,     7,   559,   560,    89,
     562,   563,     7,    19,    53,    53,     5,   211,   212,     5,
      70,    70,   604,     8,     8,   219,     8,   101,   102,   103,
     104,   105,   584,   585,     8,   109,    89,   589,   590,   233,
      15,     8,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
       8,    22,     9,    10,    22,    14,    53,    10,     7,   263,
      17,    18,    53,    20,    21,    53,    53,   489,    17,   179,
     266,   153,    29,    30,   316,    32,   101,   322,   210,    28,
     328,   109,   455,    40,   302,    34,    98,     7,    37,    46,
      47,    40,   317,    50,    51,   254,    45,    17,    55,   136,
      -1,    -1,    51,    52,    53,    -1,    55,    56,    28,    -1,
      -1,    -1,    -1,    -1,    34,    -1,    65,    37,    -1,    -1,
      40,    -1,    -1,    -1,     4,    45,     6,    -1,    -1,    -1,
      -1,    51,    52,    53,   338,    55,    -1,    -1,    18,    -1,
      20,    -1,    -1,    -1,   348,    65,   350,   351,   352,    -1,
       7,    -1,    -1,    -1,    -1,    -1,    36,    -1,   107,   363,
      17,   365,    -1,   120,    -1,   122,   370,    -1,    48,    49,
      -1,    28,    -1,    -1,    54,    -1,    -1,    34,    58,    -1,
      37,    61,    -1,    40,    -1,    65,    -1,   107,    45,    -1,
       7,    -1,    -1,    -1,    51,    52,    53,    -1,    55,     7,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    17,
      -1,    28,   416,    -1,   418,    -1,   420,    34,    -1,    -1,
      37,    -1,    -1,    40,    -1,    -1,    34,    -1,    45,    37,
      -1,    -1,    40,    -1,    51,    52,    53,    45,    55,    -1,
      -1,    -1,    -1,    51,    52,    53,    -1,    55,    65,     7,
     107,    -1,   456,    -1,    -1,    -1,    -1,    65,    -1,    17,
      -1,    -1,    -1,    -1,    -1,    27,   470,    -1,   472,   473,
      28,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    37,
      -1,    -1,    40,    -1,    -1,   489,    94,    45,    -1,    -1,
     107,    53,    -1,    51,    52,    53,     7,    55,    -1,   107,
      62,    63,    64,    65,    66,    67,    17,    65,    -1,   513,
      -1,   515,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    37,    -1,    90,    40,
      92,    -1,    94,    -1,    45,    -1,    -1,    -1,    -1,    -1,
      51,    52,    53,   547,    55,     7,    -1,   551,    -1,   107,
     554,    -1,    -1,    -1,    65,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   567,    -1,   569,    28,     7,    -1,    -1,
      -1,    -1,    34,    -1,   578,    37,   580,    17,    40,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    28,    51,
      52,    53,    -1,    55,    34,    -1,   107,    37,    -1,    -1,
      40,    -1,    -1,    65,    -1,    45,     7,    -1,    -1,    -1,
      -1,    51,    52,    53,    -1,    55,    17,    -1,    -1,    -1,
      -1,     4,    -1,     6,    -1,    65,    -1,    28,     7,    -1,
      -1,    -1,    -1,    34,    -1,    18,    37,    20,    17,    40,
      -1,    -1,    -1,    -1,    45,   107,    -1,    -1,    -1,    28,
      51,    52,    53,    36,    55,    34,    -1,    -1,    37,    -1,
      -1,    40,    -1,    -1,    65,    48,    45,   107,    -1,     7,
      -1,    54,    51,    52,    53,    58,    55,    -1,    -1,    17,
      -1,    -1,    65,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      28,     7,    -1,    -1,    -1,    -1,    34,    -1,    -1,    37,
      -1,    17,    40,    -1,    -1,    -1,   107,    45,    -1,    -1,
      -1,    -1,    28,    51,    52,    53,    -1,    55,    34,    -1,
       7,    37,    -1,    -1,    40,    -1,    -1,    65,   107,    45,
      17,    -1,    -1,    -1,    -1,    51,    52,    53,    -1,    55,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    34,    -1,    65,
      37,    -1,     7,    40,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    17,    -1,    51,    52,    53,    -1,    55,   107,
      -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    65,    34,
      -1,    -1,    37,    -1,     7,    40,    -1,    -1,    -1,    -1,
      45,   107,    -1,    -1,    17,    -1,    51,    52,    53,    27,
      55,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      65,    34,    -1,     7,    37,    -1,    -1,    40,    -1,    -1,
     107,    -1,    45,    17,    -1,    53,    -1,    -1,    51,    52,
      53,    -1,    55,    -1,    62,    63,    64,    65,    66,    67,
      34,    -1,    65,    37,    -1,    -1,    40,     3,    -1,    -1,
      -1,    45,   107,    -1,    -1,    11,    -1,    51,    52,    53,
      16,    55,    90,    -1,    92,    -1,    94,    95,    24,    -1,
      -1,    65,    -1,    29,   102,    31,    -1,    -1,    -1,     3,
      -1,    -1,    -1,    -1,   107,    -1,    42,    11,    44,    -1,
      46,    -1,    16,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      24,    57,    -1,    59,    60,    29,    -1,    31,    -1,    65,
      21,    -1,    -1,   107,    -1,    -1,    -1,    -1,    42,    -1,
      44,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    59,    -1,    -1,    94,    -1,
      -1,    65,    -1,    -1,    69,    -1,    -1,    -1,    -1,    74,
      75,    76,    77,    78,    79,    80,    23,    -1,    69,    -1,
      -1,    -1,    -1,    74,    75,    76,    77,    78,    79,    80,
      94,    96,    97,    98,    -1,   100,   101,   102,   103,   104,
     105,    -1,    -1,    -1,   109,    96,    97,    98,    27,   100,
     101,   102,   103,   104,   105,    -1,    -1,    -1,   109,    -1,
      -1,    -1,    69,    -1,    -1,    -1,    -1,    74,    75,    76,
      77,    78,    79,    80,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    63,    64,    65,    66,    67,    96,
      97,    98,    27,   100,   101,   102,   103,   104,   105,    27,
      -1,    -1,   109,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      89,    90,    -1,    92,    27,    94,    -1,    -1,    53,    47,
      -1,    -1,    -1,   102,    -1,    53,    -1,    62,    63,    64,
      65,    66,    67,    -1,    62,    63,    64,    65,    66,    67,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    62,
      63,    64,    65,    66,    67,    90,    -1,    92,    -1,    94,
      -1,    -1,    90,    -1,    92,    27,    94,   102,    -1,    -1,
      -1,    -1,    -1,    53,   102,    -1,    -1,    90,    -1,    92,
      27,    94,    62,    63,    64,    65,    66,    67,    -1,   102,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    63,    64,    65,    66,    67,    53,    -1,    -1,    -1,
      90,    -1,    92,     3,    94,    62,    63,    64,    65,    66,
      67,    11,   102,     3,    -1,    -1,    16,    -1,    90,    -1,
      92,    11,    94,    -1,    24,    -1,    16,    -1,    28,    29,
     102,    31,    -1,    90,    24,    92,    -1,    94,    28,    29,
      -1,    31,    42,    -1,    44,   102,    46,    -1,    -1,    -1,
      -1,    -1,    42,     3,    44,    -1,    46,    57,    -1,    59,
      -1,    11,    -1,     3,    -1,    65,    16,    57,    -1,    59,
      -1,    11,    -1,    -1,    24,    65,    16,    -1,    28,    29,
      -1,    31,    -1,    -1,    24,    -1,    -1,    -1,    28,    29,
      -1,    31,    42,    -1,    44,     3,    46,    -1,    -1,    -1,
      -1,    -1,    42,    11,    44,     3,    46,    57,    16,    59,
      -1,    -1,    -1,    11,    -1,    65,    24,    57,    16,    59,
      28,    29,    -1,    31,    -1,    65,    24,    -1,    -1,    -1,
      28,    29,    -1,    31,    42,    -1,    44,     3,    46,    -1,
      -1,    -1,    -1,    -1,    42,    11,    44,     3,    46,    57,
      16,    59,    -1,    -1,    -1,    11,    -1,    65,    24,    57,
      16,    59,    28,    29,    -1,    31,    -1,    65,    24,    -1,
      -1,    -1,    28,    29,    -1,    31,    42,    -1,    44,    -1,
      46,     4,    -1,     6,    -1,    -1,    42,    10,    44,    -1,
      46,    57,    -1,    59,     4,    18,     6,    20,    -1,    65,
      10,    57,    -1,    59,    -1,    -1,    -1,    -1,    18,    65,
      20,    -1,    -1,    36,     4,    -1,     6,    -1,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    36,    -1,    18,    -1,
      20,    54,    22,    -1,    -1,    58,    -1,    -1,    48,    -1,
      -1,    -1,    65,    -1,    54,    -1,    36,    -1,    58,    -1,
      -1,    -1,    56,    -1,    -1,    65,    -1,    -1,    48,    -1,
      50,    -1,    -1,    -1,    54,    69,    -1,    -1,    58,    -1,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    68,
      69,    -1,    -1,    -1,    -1,    74,    75,    76,    77,    78,
      79,    80,    96,    97,    98,    -1,   100,   101,   102,   103,
     104,   105,    -1,    -1,    -1,   109,    -1,    96,    97,    98,
      -1,   100,   101,   102,   103,   104,   105,    68,    69,    -1,
     109,    -1,    -1,    74,    75,    76,    77,    78,    79,    80,
      -1,    68,    69,    -1,    -1,    -1,    -1,    74,    75,    76,
      77,    78,    79,    80,    -1,    96,    97,    98,    -1,   100,
     101,   102,   103,   104,   105,    -1,    -1,    -1,   109,    96,
      97,    98,    -1,   100,   101,   102,   103,   104,   105,    69,
      -1,    -1,   109,    -1,    74,    75,    76,    77,    78,    79,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    93,    -1,    -1,    96,    97,    98,    -1,
     100,   101,   102,   103,   104,   105,    69,    -1,   108,   109,
      -1,    74,    75,    76,    77,    78,    79,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      93,    -1,    -1,    96,    97,    98,    -1,   100,   101,   102,
     103,   104,   105,    69,    -1,   108,   109,    -1,    74,    75,
      76,    77,    78,    79,    80,    -1,    -1,    -1,    69,    -1,
      -1,    -1,    -1,    74,    75,    76,    77,    78,    79,    80,
      96,    97,    98,    -1,   100,   101,   102,   103,   104,   105,
      91,   107,    -1,   109,    -1,    96,    97,    98,    -1,   100,
     101,   102,   103,   104,   105,    69,    -1,    -1,   109,    -1,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    69,
      -1,    -1,    -1,    -1,    74,    75,    76,    77,    78,    79,
      80,    95,    96,    97,    98,    -1,   100,   101,   102,   103,
     104,   105,    -1,    -1,    -1,   109,    96,    97,    98,    -1,
     100,   101,   102,   103,   104,   105,    69,   107,    -1,   109,
      -1,    74,    75,    76,    77,    78,    79,    80,    -1,    -1,
      69,    -1,    -1,    -1,    -1,    74,    75,    76,    77,    78,
      79,    80,    -1,    96,    97,    98,    -1,   100,   101,   102,
     103,   104,   105,    -1,   107,    -1,   109,    96,    97,    98,
      -1,   100,   101,   102,   103,   104,   105,    69,   107,    -1,
     109,    -1,    74,    75,    76,    77,    78,    79,    80,    -1,
      -1,    69,    -1,    -1,    -1,    -1,    74,    75,    76,    77,
      78,    79,    80,    -1,    96,    97,    98,    -1,   100,   101,
     102,   103,   104,   105,    -1,    -1,   108,   109,    96,    97,
      98,    -1,   100,   101,   102,   103,   104,   105,    69,   107,
      -1,   109,    -1,    74,    75,    76,    77,    78,    79,    80,
      -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    74,    75,
      76,    77,    78,    79,    80,    96,    97,    98,    -1,   100,
     101,   102,   103,   104,   105,    -1,   107,    -1,   109,    95,
      96,    97,    98,    -1,   100,   101,   102,   103,   104,   105,
      69,    -1,    -1,   109,    -1,    74,    75,    76,    77,    78,
      79,    80,    -1,    -1,    69,    -1,    -1,    -1,    -1,    74,
      75,    76,    77,    78,    79,    80,    -1,    96,    97,    98,
      -1,   100,   101,   102,   103,   104,   105,    -1,   107,    -1,
     109,    96,    97,    98,    -1,   100,   101,   102,   103,   104,
     105,    69,   107,    70,   109,    -1,    74,    75,    76,    77,
      78,    79,    80,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    90,    -1,    92,    -1,    -1,    96,    97,
      98,    -1,   100,   101,   102,   103,   104,   105,    -1,    -1,
      -1,   109,   109,    74,    75,    76,    77,    78,    -1,    80,
      -1,    -1,    -1,    74,    75,    76,    77,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    97,    98,    -1,   100,
     101,   102,   103,   104,   105,    96,    97,    98,   109,   100,
     101,   102,   103,   104,   105,    -1,    -1,    -1,   109,    74,
      75,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,    74,
      75,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    97,    98,    -1,   100,   101,   102,   103,   104,
     105,    -1,    97,    98,   109,   100,   101,   102,   103,   104,
     105,    -1,    -1,    -1,   109
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    35,    43,   111,   112,   116,    65,    65,     0,   107,
     107,    14,    26,    32,    57,    59,    65,   114,   115,   117,
     118,   119,   120,   140,   161,   175,   183,    41,   113,   114,
     115,   117,   118,   182,    35,    65,   186,   187,    35,    65,
     176,    65,    89,   108,   114,   117,   118,   119,   114,   117,
     118,   119,   118,   118,   117,   118,    89,   108,     7,    17,
      34,    37,    40,    45,    51,    52,    53,    55,    65,   107,
     121,   123,   124,   125,   131,   132,   133,   151,   152,   154,
     155,   158,   159,   186,   194,   182,   182,    41,    41,   186,
      69,   107,   108,   107,   108,   186,    17,    94,   177,   181,
     182,    23,     4,     6,    10,    18,    20,    36,    48,    54,
      58,   160,   162,   163,   165,   166,   167,   186,    65,   117,
     118,   117,   118,    10,   160,    65,    27,    53,    62,    63,
      64,    66,    67,    90,    92,    94,   102,   158,   184,   188,
     189,   191,   192,   193,   194,   195,   200,   107,   184,   186,
     184,    65,   124,   151,    65,    13,    14,   122,   184,   122,
      89,    28,   151,   124,   151,    28,   151,   107,    94,    70,
      81,    82,    83,    84,    85,    86,    87,    88,    90,    92,
     109,   153,   124,   151,   124,   151,    32,    65,   186,   186,
       9,   107,   160,    65,   140,   178,   179,   181,    57,     8,
      22,    50,   142,   162,   168,   169,   172,   160,    14,    14,
     165,    94,    70,   107,    12,    33,    47,   164,   160,    70,
     107,   184,    64,    65,   184,   196,   197,   198,   199,   141,
     184,   184,    90,    92,   192,    23,    69,    74,    75,    76,
      77,    78,    79,    80,    96,    97,    98,   100,   101,   102,
     103,   104,   105,   109,   106,    72,    73,   190,   158,   186,
     132,   107,   107,    19,    25,    30,   134,   135,   136,   137,
     138,   139,   139,    19,    89,   184,    65,   107,    21,   107,
     132,    28,    28,    65,    95,   156,   157,   184,    64,   185,
     141,   184,   186,   184,    28,    28,    28,    28,    65,   140,
      65,    89,    89,    95,   107,    95,   107,     3,    11,    16,
      24,    29,    31,    42,    44,    46,    60,    94,   120,   143,
     144,   145,   146,   147,   148,   149,   161,   175,    14,    65,
     173,   174,    65,   140,   170,   171,   107,   107,    70,   160,
     160,    47,   164,   184,   184,   150,   184,    47,    70,   184,
      21,    71,    71,    91,    91,   108,    91,   108,    91,   108,
      91,   108,    93,   108,    93,   108,    95,    64,    65,   184,
      13,   126,   127,   184,   184,   184,   184,   184,   184,   184,
     184,   184,   184,   184,   184,   184,   184,   184,   184,   184,
     184,   188,    93,    89,   184,    94,   124,   151,   124,   151,
     138,   135,   137,   135,   137,    28,    28,    47,   160,   122,
     124,   151,   124,   151,     5,     5,    70,    95,   108,    95,
     108,    91,   108,    91,   108,    93,    93,   107,   107,   107,
     107,    49,    61,   160,   180,   160,   180,   178,   178,   143,
     144,   145,   186,   187,   144,   145,    28,   144,    28,   144,
     147,   108,   175,   108,   175,   163,    70,    28,   108,    28,
     108,    89,    89,    28,   170,    28,   170,   184,   150,    47,
      68,   107,    68,    68,   150,   184,   107,   184,   184,   184,
     197,   197,   199,   199,   184,   184,    39,   128,   129,   130,
     184,    28,   127,    28,   127,   160,   186,    45,    45,    15,
      19,   107,    28,    56,    28,    56,    28,    28,   184,   156,
     156,    64,    64,    70,   160,    70,   160,   107,   144,   145,
      28,    28,    95,    95,    28,    28,     8,     8,   149,   149,
     173,   174,   184,    22,   173,    22,   173,   160,   160,    50,
      50,   107,   150,   184,   184,   184,   107,    56,    71,    89,
     129,    68,     7,     7,    19,    95,    47,   150,    53,   124,
     151,    53,   124,   151,     5,     5,   184,    70,   184,    70,
      28,    28,     8,     8,     8,     8,    28,    28,    70,   107,
      70,   107,    95,   184,   124,   151,    89,   184,   184,   124,
     151,    15,    28,    28,    28,    28,   184,   184,     8,     8,
      22,    22,   184,   184,    14,    53,    53,    53,    53,   107,
     107,   160
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   110,   111,   111,   112,   113,   113,   113,   114,   114,
     114,   114,   115,   115,   116,   117,   117,   118,   118,   118,
     119,   119,   120,   120,   120,   120,   120,   120,   121,   121,
     121,   122,   122,   123,   124,   124,   125,   125,   126,   126,
     127,   127,   128,   128,   129,   129,   129,   130,   130,   131,
     131,   131,   131,   132,   132,   132,   132,   132,   132,   132,
     133,   133,   134,   134,   134,   135,   135,   136,   136,   137,
     137,   138,   138,   139,   139,   139,   140,   140,   141,   141,
     142,   142,   142,   142,   142,   142,   142,   142,   143,   143,
     144,   144,   145,   145,   146,   146,   146,   147,   147,   147,
     147,   147,   148,   148,   149,   149,   149,   149,   149,   149,
     150,   150,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   152,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   154,   154,   155,   156,   156,   157,   157,   158,
     158,   158,   159,   159,   159,   159,   159,   159,   160,   160,
     161,   161,   162,   162,   162,   163,   163,   163,   163,   163,
     163,   163,   163,   164,   164,   165,   165,   165,   165,   166,
     166,   167,   168,   168,   168,   169,   169,   170,   170,   170,
     170,   171,   171,   172,   172,   172,   172,   173,   173,   174,
     174,   175,   176,   176,   176,   176,   177,   177,   178,   178,
     178,   178,   178,   178,   178,   178,   179,   179,   180,   180,
     181,   182,   182,   182,   182,   182,   182,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   184,
     184,   184,   184,   184,   184,   184,   184,   184,   184,   184,
     184,   184,   184,   184,   184,   184,   184,   184,   184,   184,
     185,   185,   186,   186,   187,   187,   188,   188,   189,   189,
     190,   190,   191,   191,   192,   192,   192,   192,   192,   192,
     193,   193,   193,   193,   193,   193,   194,   194,   194,   194,
     194,   194,   195,   195,   195,   195,   195,   195,   196,   196,
     197,   198,   198,   199,   200,   200,   200
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     4,     2,     2,     1,     6,     4,
       6,     6,     2,     2,     4,     2,     2,     1,     1,     1,
       3,     3,     7,     7,     6,     6,     4,     4,     3,     5,
       3,     2,     0,     3,     2,     2,     6,     6,     2,     2,
       4,     4,     2,     1,     1,     3,     1,     2,     3,     6,
       6,     4,     4,     4,     7,     4,     6,     5,     7,     2,
       5,     5,     1,     2,     2,     5,     5,     2,     2,     2,
       2,     2,     2,     1,     2,     1,     3,     3,     3,     3,
       6,     6,     5,     5,     5,     5,     4,     4,     3,     3,
       2,     1,     2,     2,     1,     1,     1,     1,     1,     1,
       2,     2,     3,     3,     1,     1,     1,     1,     1,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     3,     2,     1,     3,     3,     3,     3,
       4,     4,     6,     6,     8,     8,     8,     8,     1,     1,
       5,     5,     1,     1,     1,     1,     2,     3,     4,     5,
       2,     3,     4,     1,     1,     1,     1,     1,     1,     8,
       3,     3,     1,     1,     1,     4,     4,     4,     6,     4,
       6,     2,     2,     4,     4,     6,     6,     1,     3,     3,
       3,     4,     1,     2,     2,     3,     3,     3,     3,     4,
       5,     6,     3,     4,     5,     6,     3,     4,     1,     1,
       2,     3,     3,     4,     4,     4,     4,     3,     3,     2,
       2,     3,     3,     2,     2,     2,     2,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     1,     3,     1,     2,
       1,     1,     1,     2,     1,     1,     1,     2,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     3,     4,     4,
       4,     4,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     4,     6
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
    {printf("\nprograma -> definicionPrograma");}
#line 2125 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 61 "simple.y" /* yacc.c:1646  */
    {printf("\nprograma -> definicionLibreria");}
#line 2131 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 64 "simple.y" /* yacc.c:1646  */
    {printf("\ndefinicionPrograma -> PROGRAMA IDENTIFICADOR ; codigoPrograma");}
#line 2137 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 67 "simple.y" /* yacc.c:1646  */
    {printf("\ndefinicionPrograma -> libreriaMultiple cuerpoSubprograma");}
#line 2143 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 68 "simple.y" /* yacc.c:1646  */
    {printf("\ndefinicionPrograma -> libreria cuerpoSubprograma");}
#line 2149 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 69 "simple.y" /* yacc.c:1646  */
    {printf("\ndefinicionPrograma -> cuerpoSubprograma");}
#line 2155 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 72 "simple.y" /* yacc.c:1646  */
    {printf("\nlibreria -> IMPORTAR LIBRERIA nombre COMO IDENTIFICADOR");}
#line 2161 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 73 "simple.y" /* yacc.c:1646  */
    {printf("\nlibreria -> IMPORTAR LIBRERIA nombre ");}
#line 2167 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 74 "simple.y" /* yacc.c:1646  */
    {printf("\nlibreria -> DE LIBRERIA nombre IMPORTAR IDENTIFICADOR");}
#line 2173 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 75 "simple.y" /* yacc.c:1646  */
    {printf("\nlibreria -> DE LIBRERIA nombre IMPORTAR identificadorMultiple");}
#line 2179 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 77 "simple.y" /* yacc.c:1646  */
    {printf("\nlibreriaMultiple -> libreria libreria");}
#line 2185 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 78 "simple.y" /* yacc.c:1646  */
    {printf("\nlibreriaMultiple -> libreriaMultiple libreria");}
#line 2191 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 81 "simple.y" /* yacc.c:1646  */
    {printf("\ndefinicionLibreria -> LIBRERIA IDENTIFICADOR ; codigoLibreria");}
#line 2197 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 83 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionMultiple -> declaracion declaracion");}
#line 2203 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 84 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionMultiple -> declaracionMultiple declaracion");}
#line 2209 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 86 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracion -> declaracionObjeto");}
#line 2215 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 87 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracion -> declaracionTipo");}
#line 2221 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 88 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracion -> declaracionSubprograma");}
#line 2227 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 90 "simple.y" /* yacc.c:1646  */
    {printf("\nexportaciones -> EXPORTAR nombreMultiple");}
#line 2233 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 91 "simple.y" /* yacc.c:1646  */
    {printf("\nexportaciones -> EXPORTAR nombre");}
#line 2239 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 94 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionObjeto -> IDENTIFICADOR : CONSTANTE especificacionTipo ASIGNACION expresion ;\n");}
#line 2245 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 95 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionObjeto -> identificadorMultiple : CONSTANTE especificacionTipo ASIGNACION expresion ;\n");}
#line 2251 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 97 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionObjeto -> IDENTIFICADOR : especificacionTipo ASIGNACION expresion ;\n");}
#line 2257 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 98 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionObjeto -> identificadorMultiple : especificacionTipo ASIGNACION expresion ;\n");}
#line 2263 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 99 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionObjeto -> IDENTIFICADOR : especificacionTipo ;\n");}
#line 2269 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 100 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionObjeto -> identificadorMultiple : especificacionTipo ;\n");}
#line 2275 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 104 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionInterrupcion -> siguiente ; ");}
#line 2281 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 105 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionInterrupcion -> salir de IDENTIFICADOR cuando ; ");}
#line 2287 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 106 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionInterrupcion -> salir cuando(?) ; ");}
#line 2293 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 109 "simple.y" /* yacc.c:1646  */
    {printf("\ncuando -> CUANDO expresion");}
#line 2299 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 110 "simple.y" /* yacc.c:1646  */
    {printf("\ncuando -> nada ");}
#line 2305 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 113 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionLanzamientoExcepcion -> LANZA nombre ; ");}
#line 2311 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 116 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionMultiple -> instruccion instruccion");}
#line 2317 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 117 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionMultiple -> instruccionMultiple instruccion");}
#line 2323 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 120 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionCasos -> CASOS expresion ES caso FIN CASOS");}
#line 2329 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 121 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionCasos -> CASOS expresion ES casoMultiple FIN CASOS");}
#line 2335 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 123 "simple.y" /* yacc.c:1646  */
    {printf("\ncasoMultiple -> caso caso");}
#line 2341 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 124 "simple.y" /* yacc.c:1646  */
    {printf("\ncasoMultiple -> casoMultiple caso");}
#line 2347 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 126 "simple.y" /* yacc.c:1646  */
    {printf("\ncaso -> CUANDO entradas FLECHA instruccion");}
#line 2353 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 127 "simple.y" /* yacc.c:1646  */
    {printf("\ncaso -> CUANDO entradas FLECHA instruccionMultiple");}
#line 2359 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 129 "simple.y" /* yacc.c:1646  */
    {printf("\nentradas -> entrada : entrada");}
#line 2365 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 130 "simple.y" /* yacc.c:1646  */
    {printf("\nentradas -> entrada");}
#line 2371 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 132 "simple.y" /* yacc.c:1646  */
    {printf("\nentrada -> expresion");}
#line 2377 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 133 "simple.y" /* yacc.c:1646  */
    {printf("\nentrada -> expresion DOS_PUNTOS expresion");}
#line 2383 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 134 "simple.y" /* yacc.c:1646  */
    {printf("\nentrada -> OTRO");}
#line 2389 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 136 "simple.y" /* yacc.c:1646  */
    {printf("\nentradaDosP -> entrada : ");}
#line 2395 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 137 "simple.y" /* yacc.c:1646  */
    {printf("\nentradaDosP -> entradaDosP entrada : ");}
#line 2401 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 139 "simple.y" /* yacc.c:1646  */
    {printf("\nintsruccionBucle -> IDENTIFICADOR : clausulaIteracion instruccion FIN BUCLE");}
#line 2407 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 140 "simple.y" /* yacc.c:1646  */
    {printf("\nintsruccionBucle -> IDENTIFICADOR : clausulaIteracion instruccionMultiple FIN BUCLE");}
#line 2413 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 141 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionBucle -> clausulaIteracion instruccion FIN BUCLE");}
#line 2419 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 142 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionBucle -> clausulaIteracion instruccionMultiple FIN BUCLE");}
#line 2425 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 145 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaIteracion -> PARA IDENTIFICADOR EN expresion");}
#line 2431 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 146 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaIteracion -> PARA IDENTIFICADOR EN ':' especifiacionTipo EN expresion");}
#line 2437 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 148 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaIteracion -> REPETIR IDENTIFICADOR EN RANGO");}
#line 2443 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 149 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaIteracion -> REPETIR IDENTIFICADOR ':' especificacionTipo EN rango");}
#line 2449 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 151 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaIteracion -> REPETIR IDENTIFICADOR EN RANGO DESCENDENTE");}
#line 2455 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 152 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaIteracion -> REPETIR IDENTIFICADOR ':' especificacionTipo EN RANGO DESCENDENTE");}
#line 2461 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 153 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaIteracion -> MIENTRAS expresion");}
#line 2467 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 156 "simple.y" /* yacc.c:1646  */
    {printf("\ninstrccuionCapturaDeExcepcion -> PRUEBA instruccion clausulas FIN PRUEBA");}
#line 2473 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 157 "simple.y" /* yacc.c:1646  */
    {printf("\ninstrccuionCapturaDeExcepcion -> prueba instruccion clausulas FIN PRUEBA");}
#line 2479 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 160 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulasExcepcion -> clausulaExcepcionGeneral");}
#line 2485 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 161 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulasExcepcion -> clausulaExcepcionEspecifica clausulaExcepcionGeneral");}
#line 2491 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 162 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulasExcepcion -> clausulaExcepcionEspecificaMultiple clausulaExcepcionGeneral");}
#line 2497 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 164 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaExcepcionEspecifica -> EXCEPCION ( nombre ) intruccion");}
#line 2503 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 165 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaExcepcionEspecifica -> EXCEPCION ( nombre ) instruccionMultiple");}
#line 2509 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 167 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaExcepcionEspecificaMultiple -> clausulaExcepcionEspecifica clausulaExcepcionEspecifica");}
#line 2515 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 168 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaExcepcionEspecificaMultiple -> clausulaExcepcionEspecificaMultiple clausulaExcepcionEspecifica");}
#line 2521 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 171 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaExcepcionGeneral -> EXCEPCION instruccion");}
#line 2527 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 172 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaExcepcionGeneral -> EXCEPCION instruccionMultiple");}
#line 2533 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 175 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaFinalmente -> FINALMENTE instruccion");}
#line 2539 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 176 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaFinalmente -> FINALMENTE instruccionMultiple");}
#line 2545 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 179 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulas -> clausulasExcepcion");}
#line 2551 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 180 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulas -> clausulasExcepcion clausulaFinalmente");}
#line 2557 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 181 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulas -> clausulaFinalmente");}
#line 2563 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 183 "simple.y" /* yacc.c:1646  */
    {printf("\nidentificadorMultiple -> IDENTIFICADOR ',' IDENTIFICADOR");}
#line 2569 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 184 "simple.y" /* yacc.c:1646  */
    {printf("\nidentificadorMultiple -> identificadorMultiple ',' IDENTIFICADOR");}
#line 2575 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 187 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionMult -> expresionMult , expresion");}
#line 2581 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 188 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionMult -> expresion , expresion");}
#line 2587 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 190 "simple.y" /* yacc.c:1646  */
    {printf("\nclase -> CLASE ULTIMA superclase declaracionComponente FIN CLASE");}
#line 2593 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 191 "simple.y" /* yacc.c:1646  */
    {printf("\nclase -> CLASE ULTIMA superclase declaracionComponenteMultiple FIN CLASE");}
#line 2599 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 192 "simple.y" /* yacc.c:1646  */
    {printf("\nclase -> CLASE ULTIMA declaracionComponente FIN CLASE");}
#line 2605 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 193 "simple.y" /* yacc.c:1646  */
    {printf("\nclase -> CLASE ULTIMA declaracionComponenteMultiple FIN CLASE");}
#line 2611 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 194 "simple.y" /* yacc.c:1646  */
    {printf("\nclase -> CLASE superclase declaracionComponente FIN CLASE");}
#line 2617 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 195 "simple.y" /* yacc.c:1646  */
    {printf("\nclase -> CLASE superclase declaracionComponenteMultiple FIN CLASE");}
#line 2623 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 196 "simple.y" /* yacc.c:1646  */
    {printf("\nclase -> CLASE declaracionComponente FIN CLASE");}
#line 2629 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 197 "simple.y" /* yacc.c:1646  */
    {printf("\nclase -> CLASE declaracionComponenteMultiple FIN CLASE");}
#line 2635 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 200 "simple.y" /* yacc.c:1646  */
    {printf("\nsuperClase -> ( nombre )");}
#line 2641 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 201 "simple.y" /* yacc.c:1646  */
    {printf("\nsuperClase -> ( nombreMultiple )");}
#line 2647 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 203 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionComponente -> visibilidad  componente");}
#line 2653 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 204 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionComponente ->   componente");}
#line 2659 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 206 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionComponenteMultiple -> declaracionComponente  declaracionComponente");}
#line 2665 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 207 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionComponenteMultiple -> declaracionComponenteMultiple  declaracionComponente");}
#line 2671 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 209 "simple.y" /* yacc.c:1646  */
    {printf("\nvisibilidad -> PUBLICO");}
#line 2677 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 210 "simple.y" /* yacc.c:1646  */
    {printf("\nvisibilidad -> PRIVADO");}
#line 2683 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 211 "simple.y" /* yacc.c:1646  */
    {printf("\nvisibilidad -> PROTEGIDO");}
#line 2689 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 213 "simple.y" /* yacc.c:1646  */
    {printf("\ncomponente -> declaracionTipo");}
#line 2695 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 214 "simple.y" /* yacc.c:1646  */
    {printf("\ncomponente -> declaracionObjeto");}
#line 2701 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 215 "simple.y" /* yacc.c:1646  */
    {printf("\ncomponente -> declaracionSubprograma");}
#line 2707 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 216 "simple.y" /* yacc.c:1646  */
    {printf("\ncomponente -> modificador declaracionSubprograma");}
#line 2713 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 217 "simple.y" /* yacc.c:1646  */
    {printf("\ncomponente -> modificadorMult declaracionSubprograma");}
#line 2719 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 219 "simple.y" /* yacc.c:1646  */
    {printf("\nmodificadorMultiple -> modificador ',' modificador");}
#line 2725 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 220 "simple.y" /* yacc.c:1646  */
    {printf("\nmodificadorMultiple -> modificadorMultiple ',' modificador");}
#line 2731 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 222 "simple.y" /* yacc.c:1646  */
    {printf("\nmodificador -> CONSTRUCTOR");}
#line 2737 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 223 "simple.y" /* yacc.c:1646  */
    {printf("\nmodificador -> DESTRUCTOR");}
#line 2743 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 224 "simple.y" /* yacc.c:1646  */
    {printf("\nmodificador -> GENERIC");}
#line 2749 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 225 "simple.y" /* yacc.c:1646  */
    {printf("\nmodificador -> ABSTRACTO");}
#line 2755 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 226 "simple.y" /* yacc.c:1646  */
    {printf("\nmodificador -> ESPECIFICO");}
#line 2761 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 227 "simple.y" /* yacc.c:1646  */
    {printf("\nmodificador -> FINAL");}
#line 2767 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 232 "simple.y" /* yacc.c:1646  */
    {printf("\nrango -> expresion :: expresion");}
#line 2773 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 233 "simple.y" /* yacc.c:1646  */
    {printf("\nrango -> rango :: expresion");}
#line 2779 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 236 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionAsignacion");}
#line 2785 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 237 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionDevolver");}
#line 2791 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 238 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionLlamada");}
#line 2797 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 239 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionSi");}
#line 2803 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 240 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionCasos");}
#line 2809 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 241 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionBucle");}
#line 2815 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 242 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionInterrupcion");}
#line 2821 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 243 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionLanzamientoExcepcion");}
#line 2827 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 244 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionDeCapturaDeExcepcion");}
#line 2833 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 245 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> ';'");}
#line 2839 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 248 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionAsignacion -> objeto op_asignacion expresion ';'");}
#line 2845 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 251 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIGNACION := ");}
#line 2851 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 252 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIG_SUMA :+");}
#line 2857 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 253 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIG_RESTO :\\");}
#line 2863 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 254 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIG_MULT :*");}
#line 2869 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 255 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIG_DIV :/");}
#line 2875 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 256 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIG_RESTA :-");}
#line 2881 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 257 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIG_POT :^");}
#line 2887 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 258 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIG_DESPI :< ");}
#line 2893 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 259 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIG_DESPD :> ");}
#line 2899 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 262 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionDevolver -> DEVOLVER ';'");}
#line 2905 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 263 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionDevolver -> DEVOLVER expresion ';'");}
#line 2911 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 266 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionLlamada -> llamadaSubprograma ';'");}
#line 2917 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 269 "simple.y" /* yacc.c:1646  */
    {printf("\ndefinicionParametro -> expresion");}
#line 2923 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 270 "simple.y" /* yacc.c:1646  */
    {printf("\ndefinicionParametro -> IDENTIFICADOR ASIGNACION expresion");}
#line 2929 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 273 "simple.y" /* yacc.c:1646  */
    {printf("\ndefinicionParametroMultiple -> definicionParametro ',' definicionParametro");}
#line 2935 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 274 "simple.y" /* yacc.c:1646  */
    {printf("\ndefinicionParametroMultiple -> definicionParametroMultiple ',' definicionParametro");}
#line 2941 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 278 "simple.y" /* yacc.c:1646  */
    {printf("\nllamadaSubprograma -> nombre '(' ')'");}
#line 2947 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 279 "simple.y" /* yacc.c:1646  */
    {printf("\nllamadaSubprograma -> nombre '(' definicionParametro ')'");}
#line 2953 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 280 "simple.y" /* yacc.c:1646  */
    {printf("\nllamadaSubprograma -> nombre '(' definicionParametroMultiple ')'");}
#line 2959 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 283 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionSi -> SI expresion ENTONCES instruccion FIN SI");}
#line 2965 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 284 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionSi -> SI expresion ENTONCES instruccionMultiple FIN SI");}
#line 2971 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 285 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionSi -> SI expresion ENTONCES instruccion SINO instruccion FIN SI");}
#line 2977 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 286 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionSi -> SI expresion ENTONCES instruccion SINO instruccionMultiple FIN SI");}
#line 2983 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 287 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionSi -> SI expresion ENTONCES instruccionMultiple SINO instruccion");}
#line 2989 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 288 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionSi -> SI expresion ENTONCES instruccionMultiple SINO instruccionMultiple");}
#line 2995 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 291 "simple.y" /* yacc.c:1646  */
    {printf("\nespecificacionTipo -> nombre");}
#line 3001 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 292 "simple.y" /* yacc.c:1646  */
    {printf("\nespecificacionTipo -> tipoNoEstructurado");}
#line 3007 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 295 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionTipo -> TIPO IDENTIFICADOR ES tipoNoEstructurado ';'");}
#line 3013 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 296 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionTipo -> TIPO IDENTIFICADOR ES tipoEstructurado ';'");}
#line 3019 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 299 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoNoEstructurado -> tipoEscalar");}
#line 3025 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 300 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoNoEstructurado -> tipoTabla");}
#line 3031 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 301 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoNoEstructurado -> tipoDiccionario");}
#line 3037 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 304 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEscalar -> tipoBasico");}
#line 3043 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 305 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEscalar -> SIGNO tipoBasico");}
#line 3049 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 306 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEscalar -> SIGNO tipoBasico longitud");}
#line 3055 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 307 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEscalar -> SIGNO tipoBasico RANGO rango");}
#line 3061 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 308 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEscalar -> SIGNO tipoBasico longitud RANGO rango");}
#line 3067 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 309 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEscalar -> tipoBasico longitud");}
#line 3073 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 310 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEscalar -> tipoBasico RANGO rango");}
#line 3079 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 311 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEscalar -> tipoBasico longitud RANGO rango");}
#line 3085 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 314 "simple.y" /* yacc.c:1646  */
    {printf("\nlongitud -> CORTO");}
#line 3091 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 315 "simple.y" /* yacc.c:1646  */
    {printf("\nlongitud -> LARGO");}
#line 3097 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 318 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoBasico -> BOOLEANO");}
#line 3103 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 319 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoBasico -> CARACTER");}
#line 3109 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 320 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoBasico -> ENTERO");}
#line 3115 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 321 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoBasico -> REAL");}
#line 3121 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 324 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoTabla -> TABLA '(' expresion '..' expresion ')' DE especificacionTipo");}
#line 3127 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 325 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoTabla -> LISTA DE especificacionTipo");}
#line 3133 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 328 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoDiccionario -> DICCIONARIO DE especificacionTipo");}
#line 3139 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 331 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEstructurado -> tipoRegistro");}
#line 3145 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 332 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEstructurado -> tipoEnumerado");}
#line 3151 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 333 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEstructurado -> clase");}
#line 3157 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 336 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoRegistro -> REGISTRO campo FIN REGISTRO");}
#line 3163 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 337 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoRegistro -> REGISTRO campoMultiple FIN REGISTRO");}
#line 3169 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 340 "simple.y" /* yacc.c:1646  */
    {printf("\ncampo -> IDENTIFICADOR ':' especificacionTipo ';'");}
#line 3175 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 341 "simple.y" /* yacc.c:1646  */
    {printf("\ncampo -> IDENTIFICADOR ':' especificacionTipo ASIGNACION expresion ';'");}
#line 3181 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 342 "simple.y" /* yacc.c:1646  */
    {printf("\ncampo -> identificadorMultiple ':' especificacionTipo ';'");}
#line 3187 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 343 "simple.y" /* yacc.c:1646  */
    {printf("\ncampo -> identificadorMultiple ':' especificacionTipo ASIGNACION expresion ';'");}
#line 3193 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 346 "simple.y" /* yacc.c:1646  */
    {printf("\ncampoMultiple -> campo campo");}
#line 3199 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 347 "simple.y" /* yacc.c:1646  */
    {printf("\ncampoMultiple -> campoMultiple campo");}
#line 3205 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 350 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEnumerado -> ENUMERACION elementoEnumeracion FIN ENUMERACION");}
#line 3211 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 351 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEnumerado -> ENUMERACION elementoEnumeracionMultiple FIN ENUMERACION");}
#line 3217 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 352 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEnumerado -> ENUMERACION DE tipoEscalar elementoEnumeracion FIN ENUMERACION");}
#line 3223 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 353 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEnumerado -> ENUMERACION DE tipoEscalar elementoEnumeracionMultiple FIN ENUMERACION");}
#line 3229 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 356 "simple.y" /* yacc.c:1646  */
    {printf("\nelementoEnumeracion -> IDENTIFICADOR");}
#line 3235 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 357 "simple.y" /* yacc.c:1646  */
    {printf("\nelementoEnumeracion -> IDENTIFICADOR ASIGNACION expresion");}
#line 3241 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 360 "simple.y" /* yacc.c:1646  */
    {printf("\nelementoEnumeracionMultiple -> elementoEnumeracion ',' elementoEnumeracion");}
#line 3247 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 361 "simple.y" /* yacc.c:1646  */
    {printf("\nelementoEnumeracionMultiple -> elementoEnumeracionMultiple ',' elementoEnumeracion");}
#line 3253 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 364 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionSubprograma -> SUBPROGRAMA cabeceraSubprograma cuerpoSubprograma SUBPROGRAMA");}
#line 3259 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 367 "simple.y" /* yacc.c:1646  */
    {printf("\ncabeceraSubprograma -> IDENTIFICADOR");}
#line 3265 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 368 "simple.y" /* yacc.c:1646  */
    {printf("\ncabeceraSubprograma -> IDENTIFICADOR parametrizacion");}
#line 3271 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 369 "simple.y" /* yacc.c:1646  */
    {printf("\ncabeceraSubprograma -> IDENTIFICADOR tipoResultado");}
#line 3277 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 370 "simple.y" /* yacc.c:1646  */
    {printf("\ncabeceraSubprograma -> IDENTIFICADOR parametrizacion tipoResultado");}
#line 3283 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 373 "simple.y" /* yacc.c:1646  */
    {printf("\nparametrizacion -> '(' declaracionParametros ')'");}
#line 3289 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 374 "simple.y" /* yacc.c:1646  */
    {printf("\nparametrizacion -> '(' declaracionParametrosMultiple ')'");}
#line 3295 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 377 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionParametros -> IDENTIFICADOR ':' especificacionTipo");}
#line 3301 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 378 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionParametros -> IDENTIFICADOR ':' modo especificacionTipo");}
#line 3307 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 379 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionParametros -> IDENTIFICADOR ':' especificacionTipo ASIGNACION expresion");}
#line 3313 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 380 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionParametros -> IDENTIFICADOR ':' modo especificacionTipo ASIGNACION expresion");}
#line 3319 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 381 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionParametros -> identificadorMultiple ':' especificacionTipo");}
#line 3325 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 382 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionParametros -> identificadorMultiple ':' modo especificacionTipo");}
#line 3331 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 383 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionParametros -> identificadorMultiple ':' especificacionTipo ASIGNACION expresion");}
#line 3337 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 384 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionParametros -> identificadorMultiple ':' modo especificacionTipo ASIGNACION expresion");}
#line 3343 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 387 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionParametrosMultiple -> declaracionParametros ';' declaracionParametros ';'");}
#line 3349 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 388 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionParametrosMultiple -> declaracionParametrosMultiple declaracionParametros ';'");}
#line 3355 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 391 "simple.y" /* yacc.c:1646  */
    {printf("\nmodo -> VALOR");}
#line 3361 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 392 "simple.y" /* yacc.c:1646  */
    {printf("\nmodo -> REFERENCIA");}
#line 3367 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 395 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoResultado -> DEVOLVER especificacionTipo");}
#line 3373 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 398 "simple.y" /* yacc.c:1646  */
    {printf("\ncuerpoSubprograma -> PRINCIPIO instruccion FIN");}
#line 3379 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 399 "simple.y" /* yacc.c:1646  */
    {printf("\ncuerpoSubprograma -> PRINCIPIO instruccionMultiple FIN");}
#line 3385 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 400 "simple.y" /* yacc.c:1646  */
    {printf("\ncuerpoSubprograma -> PRINCIPIO declaracion instruccion FIN");}
#line 3391 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 401 "simple.y" /* yacc.c:1646  */
    {printf("\ncuerpoSubprograma -> PRINCIPIO declaracion instruccionMultiple FIN");}
#line 3397 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 402 "simple.y" /* yacc.c:1646  */
    {printf("\ncuerpoSubprograma -> PRINCIPIO declaracionMultiple instruccion FIN");}
#line 3403 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 403 "simple.y" /* yacc.c:1646  */
    {printf("\ncuerpoSubprograma -> PRINCIPIO declaracionMultiple instruccionMultiple FIN");}
#line 3409 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 406 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> libreriaMultiple exportaciones declaracion");}
#line 3415 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 407 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> libreriaMultiple exportaciones declaracionMultiple");}
#line 3421 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 408 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> libreriaMultiple declaracion");}
#line 3427 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 409 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> libreriaMultiple declaracionMultiple");}
#line 3433 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 410 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> libreria exportaciones declaracion");}
#line 3439 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 411 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> libreria exportaciones declaracionMultiple");}
#line 3445 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 412 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> libreria declaracion");}
#line 3451 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 413 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> libreria declaracionMultiple");}
#line 3457 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 414 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> exportaciones declaracion");}
#line 3463 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 415 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> exportaciones declaracionMultiple");}
#line 3469 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 416 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> declaracion");}
#line 3475 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 417 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> declaracionMultiple");}
#line 3481 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 420 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion '+' expresion");}
#line 3487 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 421 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion - expresion");}
#line 3493 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 422 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion / expresion");}
#line 3499 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 423 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion \\ expresion");}
#line 3505 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 424 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion * expresion");}
#line 3511 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 425 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion <- expresion");}
#line 3517 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 426 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion -> expresion");}
#line 3523 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 427 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion . expresion");}
#line 3529 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 428 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> [ expresion ] ");}
#line 3535 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 429 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> { expresion } ");}
#line 3541 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 430 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion :: expresion");}
#line 3547 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 431 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion < expresion");}
#line 3553 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 432 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion > expresion");}
#line 3559 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 433 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion <= expresion");}
#line 3565 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 434 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion >= expresion");}
#line 3571 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 435 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion = expresion");}
#line 3577 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 436 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion NEQ expresion");}
#line 3583 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 437 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion ~ expresion");}
#line 3589 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 438 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion AND expresion");}
#line 3595 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 439 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion OR expresion");}
#line 3601 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 440 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresionPotencia");}
#line 3607 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 442 "simple.y" /* yacc.c:1646  */
    {printf("\ncadenaMult -> CTC_CADENA , CTC_CADENA");}
#line 3613 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 443 "simple.y" /* yacc.c:1646  */
    {printf("\ncadenaMult -> cadenaMult , CTC_CADENA");}
#line 3619 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 446 "simple.y" /* yacc.c:1646  */
    {printf("\nnombre -> IDENTIFICADOR");}
#line 3625 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 447 "simple.y" /* yacc.c:1646  */
    {printf("\nnombre -> nombre :: IDENTIFICADOR");}
#line 3631 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 449 "simple.y" /* yacc.c:1646  */
    {printf("\nnombreMultiple -> nombre , nombre");}
#line 3637 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 450 "simple.y" /* yacc.c:1646  */
    {printf("\nnombreMultiple -> nombreMultiple , nombre");}
#line 3643 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 453 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionPotencia -> expresionPosfija");}
#line 3649 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 454 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionPotencia -> expresionPosfija ^ expresionPotencia");}
#line 3655 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 456 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionPosfija -> expresionUnaria");}
#line 3661 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 457 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionPosfija -> expresionUnaria operadorPosfijo");}
#line 3667 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 459 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorPosfijo -> INC");}
#line 3673 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 460 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorPosfijo -> DEC");}
#line 3679 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 462 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionUnaria -> primario");}
#line 3685 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 463 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionUnaria -> '-' primario");}
#line 3691 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 466 "simple.y" /* yacc.c:1646  */
    {printf("\nprimario -> literal");}
#line 3697 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 467 "simple.y" /* yacc.c:1646  */
    {printf("\nprimario -> objeto");}
#line 3703 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 468 "simple.y" /* yacc.c:1646  */
    {printf("\nprimario -> llamada_subprograma");}
#line 3709 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 469 "simple.y" /* yacc.c:1646  */
    {printf("\nprimario -> OBJETO llamada_subprograma");}
#line 3715 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 470 "simple.y" /* yacc.c:1646  */
    {printf("\nprimario -> enumeraciones ");}
#line 3721 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 471 "simple.y" /* yacc.c:1646  */
    {printf("\nprimario -> ( expresion ) ");}
#line 3727 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 473 "simple.y" /* yacc.c:1646  */
    {printf("\nliteral -> VERDADERO");}
#line 3733 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 474 "simple.y" /* yacc.c:1646  */
    {printf("\nliteral -> FASLO");}
#line 3739 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 475 "simple.y" /* yacc.c:1646  */
    {printf("\nliteral -> CTC_ENTERA");}
#line 3745 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 476 "simple.y" /* yacc.c:1646  */
    {printf("\nliteral -> CTC_REAL");}
#line 3751 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 477 "simple.y" /* yacc.c:1646  */
    {printf("\nliteral -> CTC_CARACTER");}
#line 3757 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 478 "simple.y" /* yacc.c:1646  */
    {printf("\nliteral -> CTC_CADENA");}
#line 3763 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 481 "simple.y" /* yacc.c:1646  */
    {printf("\nobjeto -> nombre");}
#line 3769 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 482 "simple.y" /* yacc.c:1646  */
    {printf("\nobjeto -> objeto . nombre");}
#line 3775 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 483 "simple.y" /* yacc.c:1646  */
    {printf("\nobjeto -> objeto [ expresion ]");}
#line 3781 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 484 "simple.y" /* yacc.c:1646  */
    {printf("\nobjeto -> objeto [ expresionMult ]");}
#line 3787 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 485 "simple.y" /* yacc.c:1646  */
    {printf("\nobjeto -> objeto { CTC_CADENA }");}
#line 3793 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 486 "simple.y" /* yacc.c:1646  */
    {printf("\nobjeto -> objeto { cadenaMult }");}
#line 3799 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 490 "simple.y" /* yacc.c:1646  */
    {printf("\nenumeraciones -> [ expresionCondicional ]");}
#line 3805 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 491 "simple.y" /* yacc.c:1646  */
    {printf("\nenumeraciones -> [ expresionMult ]");}
#line 3811 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 492 "simple.y" /* yacc.c:1646  */
    {printf("\nenumeraciones -> [ claveValor ]");}
#line 3817 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 493 "simple.y" /* yacc.c:1646  */
    {printf("\nenumeraciones -> [ claveValorMultiple ]");}
#line 3823 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 494 "simple.y" /* yacc.c:1646  */
    {printf("\nenumeraciones -> [ campoValor ]");}
#line 3829 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 495 "simple.y" /* yacc.c:1646  */
    {printf("\nenumeraciones -> [ campoValorMultiple ]");}
#line 3835 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 498 "simple.y" /* yacc.c:1646  */
    {printf("\nclaveValorMult -> claveValor , claveValor");}
#line 3841 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 499 "simple.y" /* yacc.c:1646  */
    {printf("\nclaveValorMult -> claveValorMult , claveValor");}
#line 3847 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 502 "simple.y" /* yacc.c:1646  */
    {printf("\nclave_valor -> CTC_CADENA => expresion");}
#line 3853 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 504 "simple.y" /* yacc.c:1646  */
    {printf("\ncampoValorMult -> campo_valor , campo_valor");}
#line 3859 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 505 "simple.y" /* yacc.c:1646  */
    {printf("\ncampoValorMult -> campoValorMult , campo_valor");}
#line 3865 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 507 "simple.y" /* yacc.c:1646  */
    {printf("\ncampo_valor -> CTC_CADENA => expresion");}
#line 3871 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 509 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionCondicional -> expresion");}
#line 3877 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 510 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionCondicional -> si expresion entonces expresion");}
#line 3883 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 511 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionCondicional -> si expresion entonces expresion SINO expresion");}
#line 3889 "simple.tab.c" /* yacc.c:1646  */
    break;


#line 3893 "simple.tab.c" /* yacc.c:1646  */
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
#line 514 "simple.y" /* yacc.c:1906  */


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
