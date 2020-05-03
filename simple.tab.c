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
#define YYFINAL  27
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2512

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  110
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  85
/* YYNRULES -- Number of rules.  */
#define YYNRULES  289
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  589

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
       0,    63,    63,    67,    68,    70,    71,    72,    73,    76,
      77,    80,    83,    84,    85,    88,    89,    92,    95,    96,
      99,   100,   102,   103,   105,   106,   108,   109,   111,   112,
     113,   115,   116,   118,   119,   120,   121,   124,   125,   128,
     129,   131,   132,   134,   135,   137,   140,   141,   144,   145,
     146,   148,   149,   151,   152,   155,   156,   159,   160,   163,
     164,   165,   167,   168,   173,   174,   177,   178,   180,   181,
     183,   184,   186,   187,   188,   189,   190,   191,   192,   193,
     196,   197,   199,   200,   202,   203,   205,   206,   207,   209,
     210,   211,   212,   214,   215,   217,   218,   219,   220,   221,
     222,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   247,   248,   250,   251,   253,   254,   256,   257,
     260,   261,   262,   263,   264,   265,   267,   268,   269,   270,
     271,   272,   275,   276,   277,   278,   279,   280,   284,   285,
     286,   287,   288,   289,   292,   293,   296,   298,   299,   301,
     303,   304,   305,   308,   309,   312,   313,   315,   316,   318,
     319,   321,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   336,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   350,   351,   354,   357,   358,   361,   362,   366,
     367,   368,   371,   372,   373,   374,   375,   375,   379,   380,
     381,   384,   385,   388,   389,   390,   391,   392,   393,   394,
     395,   398,   399,   402,   403,   406,   407,   408,   411,   412,
     413,   414,   415,   416,   417,   418,   421,   422,   425,   426,
     427,   428,   431,   432,   435,   438,   439,   440,   443,   444,
     447,   448,   449,   450,   453,   454,   457,   458,   459,   460,
     463,   464,   467,   468,   471,   474,   475,   476,   477,   480,
     481,   484,   485,   486,   487,   488,   489,   490,   491,   494,
     495,   498,   499,   502,   505,   506,   507,   508,   509,   510
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
  "'\\\\'", "'^'", "';'", "','", "'.'", "$accept", "fin",
  "declaracionObjeto", "especificacionTipo", "tipoNoEstructurado",
  "instruccionInterrupcion", "cuando", "instruccionLanzamientoExcepcion",
  "instruccionMultiple", "instruccionCasos", "casoMultiple", "caso",
  "entradas", "entrada", "entradaDosP", "instruccionBucle", "rango",
  "clausulaIteracion", "instruccionDeCapturaDeExcepcion",
  "clausulasExcepcion", "clausulaExcepcionEspecifica",
  "clausulaExcepcionEspecificaMultiple", "clausulaExcepcionGeneral",
  "clausulaFinalmente", "clausulas", "identificadorMultiple", "cadenaMult",
  "nombre", "nombreMultiple", "expresionMult", "clase", "superclase",
  "declaracionComponente", "declaracionComponenteMultiple", "visibilidad",
  "componente", "modificadorMultiple", "modificador", "expresion",
  "expresionPotencia", "expresionPosfija", "operadorPosfijo",
  "expresionUnaria", "primario", "literal", "objeto", "enumeraciones",
  "claveValorMult", "claveValor", "campoValorMult", "campoValor",
  "expresionCondicional", "instruccion", "instruccionAsignacion",
  "operadorAsignacion", "instruccionDevolver", "instruccionLlamada",
  "definicionParametro", "definicionParametroMultiple",
  "llamadaSubprograma", "instruccionSi", "$@1", "declaracion",
  "declaracionMultiple", "declaracionTipo", "tipoEscalar", "longitud",
  "tipoBasico", "tipoTabla", "tipoDiccionario", "tipoEstructurado",
  "tipoRegistro", "campo", "campoMultiple", "tipoEnumerado",
  "elementoEnumeracion", "elementoEnumeracionMultiple",
  "declaracionSubprograma", "cabeceraSubprograma", "parametrizacion",
  "declaracionParametros", "declaracionParametrosMultiple", "modo",
  "tipoResultado", "cuerpoSubprograma", YY_NULLPTR
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

#define YYPACT_NINF -207

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-207)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      99,   659,    40,    -3,  -207,  -207,  -207,  -207,  -207,  -207,
    -207,  -207,  -207,    77,  1174,    96,   161,  -207,   152,  1676,
    1485,  1509,    54,  -207,   -48,   -35,  -207,  -207,  -207,   137,
    1676,  1536,  1560,   808,  1096,   214,  -207,    36,   -61,  1692,
    1713,   220,  1587,  1611,   156,  -207,   212,  -207,  -207,   240,
     590,  -207,   590,  -207,  1752,  1638,  1662,   334,   341,  -207,
    -207,  1733,   320,  -207,   342,  -207,    32,   264,   -39,  -207,
     292,  -207,   122,  -207,  -207,  1733,   -33,  -207,   300,  -207,
     161,  -207,   161,  1733,    52,  1733,    56,  -207,   364,   367,
    -207,  -207,     4,   -15,  -207,  -207,    16,   316,   279,  -207,
     286,  -207,  -207,   387,   401,  -207,  -207,   330,  1733,  1733,
     155,  1350,  1350,  -207,  -207,  -207,  1350,   374,   353,  1350,
    -207,  -207,   292,   292,   358,  1350,  -207,   359,  1350,  -207,
    -207,  -207,  1733,   349,   414,  -207,  1141,  -207,   198,   319,
    -207,  -207,   375,    95,   365,   -18,   -17,   -62,   -54,   108,
     111,  -207,  -207,  -207,  -207,  1350,  -207,  -207,  1350,   390,
    -207,  1350,  -207,  -207,  -207,  -207,  -207,  1366,  1350,  1350,
     304,    27,  2311,  -207,   328,   228,  -207,  -207,    38,  -207,
     293,  -207,  1953,   373,  1753,  1350,  1350,     3,  1805,  1350,
    1967,  1350,   195,  1842,  -207,    86,   102,   117,    85,  -207,
    1350,   513,   161,  1350,   379,  1141,   381,   326,  1350,   434,
     362,  -207,  -207,  -207,   101,  -207,  -207,  1141,  -207,  1845,
     621,  -207,  -207,  -207,   345,  -207,  1141,  -207,  1141,  -207,
    -207,   383,  1350,   432,   383,   433,   383,  1733,  1733,   409,
    -207,   412,  -207,  2004,   373,  1350,  1158,   393,   395,  2019,
     -59,    79,   142,   154,   -60,  1879,  2056,   315,  1350,  -207,
    1268,  1350,  1350,  1350,  1350,  1350,  1350,  1350,  1350,  1350,
    1350,  1350,  1350,  1350,  1350,  1350,  1350,  1350,  1400,  -207,
    -207,  -207,   399,  1350,   161,    27,  -207,   380,  -207,  1350,
    1350,  1350,   373,  2070,  -207,  1350,  -207,  1350,  2107,  -207,
    2121,  -207,  -207,   725,   725,  -207,   349,  -207,   361,  1248,
    -207,  2158,   -49,  2325,   455,    72,    72,    -7,  1350,   410,
     369,  1196,   370,   293,  -207,  -207,   699,   770,  -207,  -207,
    -207,  -207,  -207,  -207,  -207,  -207,  1350,  -207,  -207,  -207,
     796,   835,   867,   906,   -14,   -13,  2325,  -207,  -207,  -207,
    -207,    70,    75,  -207,  -207,  -207,   373,  1350,  1350,  1350,
    -207,  -207,   418,  -207,   418,  -207,   413,  -207,   413,  -207,
    -207,  -207,   393,   395,  2172,   416,  -207,  2325,   230,   237,
    2325,   188,   250,   250,  2325,  2359,  2369,  2403,   250,   250,
     250,   139,   139,   -53,   -53,   -53,  2209,  -207,   178,   186,
     130,  1916,   292,  -207,  2325,  2325,  2325,  -207,  2325,  2325,
    -207,  -207,  -207,  -207,   424,  1733,   425,  1733,   376,  -207,
     471,  -207,  -207,   426,   928,  1141,   469,   475,   475,  -207,
    -207,   473,   474,   456,  1733,  2325,   434,  -207,  1141,  -207,
    1141,   499,   500,  2223,  -207,  -207,  -207,  -207,   484,   486,
    1350,  -207,  1350,  -207,  1738,  2325,  2325,  -207,  -207,  -207,
    -207,  1350,  -207,  1416,  -207,  1416,   496,  -207,   449,  -207,
     450,  -207,  -207,  1350,   447,  1350,   452,  -207,  1302,   267,
     271,  1733,  2325,   161,  1141,  1141,  1141,  1141,  -207,  -207,
    -207,  -207,  -207,   478,   482,   514,   511,   428,   144,   405,
     975,   997,  -207,  -207,  -207,  -207,  -207,  2260,  2274,  1350,
    2325,  -207,  -207,  1733,  -207,  -207,  2325,  1350,  2325,  1350,
    -207,   467,   453,  1302,  1791,   532,  -207,   534,  -207,   524,
     124,  -207,  -207,  -207,  1344,  -207,   491,  1141,   501,  1141,
     551,   552,  -207,  -207,  2325,  -207,  2325,  2325,  1141,  -207,
     470,  1350,  -207,  -207,  1350,  1141,   543,   373,  -207,   539,
    -207,  1026,  1058,  -207,  -207,  1141,  1141,  -207,  2325,  2325,
    1141,  1141,  -207,   507,   509,   515,  -207,  -207,  -207,   518,
    1350,  1210,  1141,  1090,  1141,  1141,  1119,   520,  -207
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,    98,    95,    96,    99,   100,    97,
      87,    88,    86,     0,     0,     0,     0,    90,     0,     0,
       0,     0,     0,    83,     0,     0,    89,     1,     2,     0,
       0,     0,     0,    11,    11,     0,    66,     0,     0,    11,
      11,     0,     0,     0,     0,    84,     0,    85,    82,     0,
       0,    92,     0,    91,    11,     0,     0,     0,     0,   238,
     239,    11,     0,   240,     0,   241,     0,     0,     0,    10,
       9,   225,   228,   226,   227,    11,     0,    62,     0,    80,
       0,    81,     0,    11,     0,    11,     0,    63,     0,     0,
      78,    79,   265,     0,    94,    93,     0,     0,     0,   247,
       0,   245,   246,     0,     0,    74,    75,     0,    11,    11,
     229,     0,     0,     7,   236,   237,     0,   233,     0,     0,
     215,    67,    68,    69,     0,     0,     8,     0,     0,   218,
      76,    77,    11,     0,   266,   267,     0,   208,     0,     0,
     209,   210,     0,     0,   260,     0,     0,     0,     0,     0,
       0,   223,   224,    72,    73,     0,   244,   243,     0,   230,
     137,     0,   136,   140,   141,   138,   139,     0,     0,     0,
       0,   142,     0,   121,   122,   124,   128,   130,   131,   134,
       0,   132,     0,   234,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   283,     0,     0,     0,     0,   268,
       0,     0,     0,     0,     0,     0,     0,    16,     0,    16,
      66,   181,   178,   179,     0,   176,   177,     0,   180,     0,
       0,   172,   173,   174,     0,   175,     0,   211,     0,   212,
     264,     0,     0,     0,     0,     0,     0,    11,    11,     0,
     254,     0,   255,     0,   231,     0,     0,   141,    66,     0,
       0,     0,     0,     0,     0,   160,     0,     0,     0,   129,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   126,
     127,   125,     0,     0,     0,     0,   133,     0,     5,     0,
       0,     0,   235,     0,   217,     0,   216,     0,     0,     6,
       0,   220,   219,    11,    11,   269,     0,   270,     0,     0,
     192,     0,     0,    45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   285,    19,     0,     0,   183,   184,
     186,   187,   185,   189,   190,   191,     0,   284,    18,   194,
       0,     0,     0,     0,     0,     0,   261,   256,   262,   257,
     263,     0,     0,   248,   249,     3,   232,     0,     0,     0,
     110,   151,     0,   150,     0,   153,     0,   152,     0,   149,
     109,   135,     0,     0,   160,    66,   199,   195,     0,     0,
     111,   106,   114,   115,   117,   119,   120,   118,   112,   113,
     116,   101,   102,   105,   103,   104,     0,   123,     0,     0,
       0,     0,   143,   148,   108,    38,    37,   213,    70,    71,
       4,   214,   282,   281,   271,    11,   275,    11,     0,   280,
       0,   193,    17,     0,     0,     0,    59,     0,     0,    48,
      61,     0,     0,     0,    11,    15,    16,    14,     0,    12,
       0,     0,     0,     0,   287,   286,   289,   288,     0,     0,
       0,   250,     0,   252,   161,   156,   159,   155,   154,   158,
     157,     0,   200,     0,   201,     0,     0,   146,     0,   147,
       0,   145,   144,     0,   272,     0,   276,   279,     0,     0,
       0,    11,    39,     0,    56,    55,    58,    57,    60,    53,
      49,    54,    50,     0,     0,    41,     0,     0,     0,     0,
       0,     0,    36,    35,   182,   258,   259,     0,     0,     0,
     196,   197,   198,    11,    64,    65,   273,     0,   277,     0,
      30,     0,    27,     0,    28,     0,    23,     0,    22,     0,
       0,    47,    46,    43,     0,    13,     0,     0,     0,     0,
       0,     0,   251,   253,   162,   242,   274,   278,     0,    31,
      26,     0,    21,    20,     0,     0,     0,    42,   203,     0,
     202,     0,     0,    34,    33,    25,    24,    32,    29,    40,
      52,    51,    44,     0,     0,     0,   206,   205,   204,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   207
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -207,  -207,   -77,   -32,   527,  -207,  -206,  -207,  -142,  -207,
    -207,   -88,  -207,    51,  -207,  -207,  -157,  -175,  -207,  -207,
     -20,  -207,    -8,   157,   266,   -78,  -207,   -16,  -207,  -115,
     531,   573,   197,   251,  -207,   566,  -207,   -11,    46,   311,
    -207,  -207,  -207,   420,  -207,   210,  -207,  -207,  -172,  -207,
    -110,  -207,   344,  -207,  -207,  -207,  -207,  -189,  -207,    47,
    -207,  -207,   272,  -207,    -6,   448,   488,   526,  -207,  -207,
    -207,  -207,   276,  -207,  -207,     0,   363,   392,  -207,  -207,
    -192,  -207,   295,   462,  -207
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    17,    68,    69,   212,   320,   213,   214,   215,
     479,   480,   521,   522,   523,   216,   183,   217,   218,   426,
     427,   428,   429,   430,   431,    18,   399,   171,    38,   254,
       3,    19,    45,    21,    22,    23,    24,    25,   184,   173,
     174,   281,   175,   176,   177,   178,   179,   250,   251,   252,
     253,   180,   325,   221,   336,   222,   223,   378,   379,   181,
     225,   579,   138,   139,    26,    71,   117,    72,    73,    74,
     100,   101,   149,   150,   102,   145,   146,   141,    93,   134,
     197,   198,   415,   135,   142
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      37,   244,    76,   322,   187,   287,   308,    84,    86,    49,
     233,   235,   433,   192,   448,   449,   137,    70,    70,   148,
      78,   132,    49,    70,    70,   265,   136,   237,   292,   107,
     143,   112,   361,   369,    81,   238,    59,   119,    60,    94,
      27,    95,    49,   118,    13,    70,    35,    82,   295,   362,
      15,   124,    63,   127,    41,   196,   289,     4,   422,    70,
      50,   137,   137,   315,   122,     5,   123,    70,   113,    70,
       6,   148,   148,    52,   120,   326,   156,   157,     7,   200,
      65,   144,   434,     8,   340,     9,   342,   140,   356,   201,
     234,   236,    70,    70,   234,   236,    78,   424,   133,    59,
     194,    60,   425,    36,    28,    78,   202,     1,   200,   203,
     294,   295,   204,    13,   418,    63,    70,   205,   201,    15,
     196,   260,   125,   206,   207,   208,   128,   209,   282,   324,
     283,    79,   140,   140,   114,   202,   239,   210,   203,   241,
     450,   204,    29,    65,    80,   452,   205,   284,   440,    66,
     195,   200,   206,   207,   208,   115,   209,   172,   182,   126,
      54,   201,   285,   129,    90,   188,   210,   114,   400,   116,
     363,   190,   536,   147,   193,   303,   147,   451,   202,   211,
     307,   203,   453,   224,   204,    33,   312,   364,   115,   205,
     457,   304,   458,    78,    35,   206,   207,   208,    20,   209,
     537,   243,   158,    34,    35,   351,   352,   246,   211,   210,
      41,    31,   305,   249,   255,   256,    42,   265,    47,   555,
      91,    70,    70,   471,   306,   286,    36,    55,   196,    47,
     497,   344,   293,   365,   348,   298,   350,   300,   295,   226,
      47,    39,   274,   275,   276,   367,   309,   311,   289,   313,
     366,   211,   224,    47,   321,    49,   459,    13,   460,    40,
      41,   224,   368,    15,   224,    32,   265,   224,   402,   467,
      43,   414,   416,   224,   511,   224,   512,   469,   346,    77,
     478,    56,   484,   486,   478,    87,   468,    70,    70,   272,
     273,   274,   275,   276,   470,   525,   498,   289,   500,   527,
     279,   280,   301,   295,   374,    92,   377,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   262,   462,    -1,    -1,   265,   401,
     203,   160,   464,   204,   108,   404,   405,   406,   463,   318,
     319,   408,   105,   409,   206,   465,   219,    -1,    -1,   106,
      -1,   272,   273,   274,   275,   276,   109,   161,   111,   289,
     228,    78,   224,   224,   435,   121,   162,   163,   164,    36,
     165,   166,   130,   224,   224,   131,    49,   557,    13,   372,
     373,   147,   443,   474,    15,   476,   151,   224,   224,   224,
     224,   526,   528,   152,   257,   153,   258,   561,   169,    70,
     155,    70,   496,   454,   455,   456,   565,   489,   491,   154,
     227,   229,   200,   570,   195,   219,    51,    53,    70,   490,
     492,   185,   201,   186,   219,   240,   242,   219,   189,   191,
     219,   132,   230,   538,   278,   232,   219,   245,   219,   202,
     583,   290,   203,   586,   314,   204,   317,   318,   144,   529,
     205,   323,   339,   160,   347,   349,   206,   207,   208,   353,
     209,   539,   354,   398,   358,    70,   359,   530,   419,   482,
     210,   224,   224,   403,   423,   436,   437,   439,   373,   161,
     220,   545,   372,   477,   478,   224,   461,   224,   162,   163,
     164,    36,   165,   166,   473,   475,   507,    70,   508,   425,
     424,   493,   494,   495,   502,   503,   505,   510,   506,   377,
     513,   377,   211,   514,   515,   481,   167,   517,   168,   516,
     169,   518,   519,   531,   524,   219,   219,   532,   170,   533,
     534,   224,   224,   224,   224,   535,   219,   219,   548,   552,
     160,   553,   549,   554,   558,   224,   224,   224,   224,   316,
     219,   219,   219,   219,   560,   544,   563,   564,   572,   567,
     576,   327,   577,   546,   338,   547,   161,   573,   578,   524,
     341,   580,   343,   588,   550,   162,   163,   164,    36,   165,
     166,    98,   432,   488,   224,    99,   224,    30,    48,   397,
     259,   231,   110,     4,   345,   224,   199,   568,   159,   417,
     569,     5,   224,   167,     0,   168,     6,   169,   224,   224,
       0,     0,   224,   224,     7,   170,     0,   224,   224,     8,
     310,     9,     0,     0,     0,     0,   581,     0,   200,   224,
     224,   224,   224,   224,   219,   219,     0,     0,   201,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   219,   337,
     219,     0,     0,     0,     0,   202,     0,     0,   203,     0,
     338,   204,     4,     0,     0,     0,   205,     0,     0,     0,
       5,   338,   206,   207,   208,     6,   209,     0,     0,     0,
       0,     0,     0,     7,     0,   338,   210,   338,     8,     0,
       9,     0,     0,     0,   219,   219,   219,   219,     0,     0,
       0,    10,     0,    11,     0,    12,   200,     0,   219,   219,
     219,   219,     0,     0,     0,     0,   201,     0,    13,    14,
       0,     0,     0,     0,    15,     0,     0,   441,   211,    59,
       0,    60,     0,   202,     0,     0,   203,     0,     0,   204,
       0,     0,     0,    62,   205,    63,     0,   219,     0,   219,
     206,   207,   208,    16,   209,     0,     0,     0,   219,     0,
       0,    64,     0,     0,   210,   219,     0,     0,   485,   487,
       0,   219,   219,    65,   412,   219,   219,   200,     0,    66,
     219,   219,   499,    67,   501,     0,   413,   201,     0,     0,
      36,     0,   219,   219,   219,   219,   219,     0,   442,     0,
       0,     0,     0,   200,   202,     0,   211,   203,     0,     0,
     204,     0,    59,   201,    60,   205,     0,     0,    61,     0,
       0,   206,   207,   208,   444,   209,    62,     0,    63,   338,
     202,   338,     0,   203,     0,   210,   204,     0,     0,     0,
       0,   205,   200,   338,    64,   338,     0,   206,   207,   208,
       0,   209,   201,     0,     0,     0,    65,     0,     0,     0,
       0,   210,    66,   445,     0,     0,    67,     0,     0,   202,
       0,     0,   203,    36,   200,   204,     0,   211,     0,     0,
     205,   559,     0,   562,   201,     0,   206,   207,   208,     0,
     209,     0,   566,     0,     0,   446,     0,     0,     0,   571,
     210,   202,     0,   211,   203,     0,   338,   204,     0,     0,
     338,     0,   205,   200,     0,   338,     0,     0,   206,   207,
     208,     0,   209,   201,     0,     0,   584,     0,   338,   584,
       0,     0,   210,     0,   447,   200,     0,     0,     0,     0,
     202,     0,   211,   203,     0,   201,   204,     0,     0,     0,
       0,   205,     0,     0,     0,     0,     0,   206,   207,   208,
       0,   209,   202,     0,     0,   203,     0,     0,   204,     0,
       0,   210,     0,   205,   211,     0,     0,     0,     0,   206,
     207,   208,   200,   209,     0,     0,     0,     0,     0,     0,
       0,     0,   201,   210,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   540,   200,     0,     0,     0,     0,   202,
       0,     0,   203,   211,   201,   204,     0,     0,     0,     0,
     205,     0,   483,     0,     0,   541,   206,   207,   208,     0,
     209,   202,     0,   200,   203,   211,     0,   204,     0,     0,
     210,     0,   205,   201,     0,     0,     0,     0,   206,   207,
     208,     0,   209,     0,   574,     0,     0,     0,     0,     0,
     202,     0,   210,   203,     0,   200,   204,     0,     0,     0,
       0,   205,     0,     0,     0,   201,     0,   206,   207,   208,
       0,   209,   211,     0,     0,     0,   575,     0,     0,     0,
       0,   210,   202,     0,     0,   203,     0,   200,   204,     0,
      59,     0,    60,   205,   211,     0,    75,   201,     0,   206,
     207,   208,     0,   209,    62,     0,    63,     0,     0,     0,
       0,     0,     0,   210,   202,     0,   200,   203,     0,     0,
     204,     0,    64,   211,     0,   205,   201,     0,     0,     0,
       0,   206,   207,   208,    65,   209,   585,   587,   200,     0,
      66,     0,     0,   202,    67,   210,   203,     0,   201,   204,
       0,    36,     0,     0,   205,   211,     0,     0,     0,     0,
     206,   207,   208,     0,   209,   202,     0,     4,   203,   357,
       0,   204,     0,     0,   210,     5,   205,     0,     0,     0,
       6,     0,   206,   207,   208,     0,   209,   211,     7,     0,
       0,     0,     0,     8,     0,     9,   210,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,   438,    11,     0,
      12,     0,     0,     0,     0,     0,   211,   261,     0,     0,
       0,   582,   262,    13,   263,   264,   265,   266,   267,    15,
       0,     0,     0,     0,     0,     0,     0,     0,   211,     0,
       0,     0,     0,     0,   268,   269,   270,     0,   271,   272,
     273,   274,   275,   276,     0,   261,     0,   289,    16,     0,
     262,   420,   263,   264,   265,   266,   267,     0,     0,   261,
       0,     0,     0,     0,   262,     0,   263,   264,   265,   266,
     267,     0,   268,   269,   270,   160,   271,   272,   273,   274,
     275,   276,     0,     0,     0,   289,   268,   269,   270,     0,
     271,   272,   273,   274,   275,   276,     0,   261,     0,   289,
       0,   161,   262,     0,   263,   264,   265,   266,   267,   160,
     162,   163,   164,   375,   165,   166,     0,     0,     0,     0,
       0,   520,     0,     0,   268,   269,   270,     0,   271,   272,
     273,   274,   275,   276,     0,   161,     0,   289,   167,     0,
     168,     0,   169,   376,   162,   163,   164,    36,   165,   166,
     170,   160,     0,     0,     0,     0,     0,   160,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   556,   167,   160,   168,     0,   169,   161,     0,     0,
       0,     0,     0,   161,   170,     0,   162,   163,   164,    36,
     165,   166,   162,   163,   164,    36,   165,   166,     0,   161,
       0,     0,     0,     0,     0,     0,     0,   160,   162,   163,
     247,   248,   165,   166,   167,     0,   168,     0,   169,     0,
     167,     0,   168,   160,   169,     0,   170,     0,     0,     0,
       0,     0,   170,   161,     0,     0,   167,     0,   168,     0,
     169,     0,   162,   163,   164,    36,   165,   166,   170,   161,
       0,     0,     0,     0,     0,     0,     0,     0,   162,   163,
     164,   375,   165,   166,     0,     0,     0,     0,     4,     0,
     257,     0,   258,     0,   169,     0,     5,     0,     0,     0,
       0,     6,   170,     0,     0,     0,   167,     0,   168,     7,
     169,     0,     4,    44,     8,     0,     9,     0,   170,     0,
       5,     0,     0,     0,     0,     6,     0,    10,     0,    11,
       0,    12,     0,     7,     0,     0,     0,    46,     8,     4,
       9,     0,     0,     0,    13,     0,     0,     5,     0,     0,
      15,    10,     6,    11,     0,    12,     0,     0,     0,     0,
       7,     0,     0,     4,    57,     8,     0,     9,    13,     0,
       0,     5,     0,     0,    15,     0,     6,     0,    10,     0,
      11,     0,    12,     0,     7,     0,     0,     0,    58,     8,
       4,     9,     0,     0,     0,    13,     0,     0,     5,     0,
       0,    15,    10,     6,    11,     0,    12,     0,     0,     0,
       0,     7,     0,     0,     4,    88,     8,     0,     9,    13,
       0,     0,     5,     0,     0,    15,     0,     6,     0,    10,
       0,    11,     0,    12,     0,     7,     0,     0,     0,    89,
       8,     4,     9,     0,     0,     0,    13,     0,     0,     5,
       0,     0,    15,    10,     6,    11,     0,    12,     0,     0,
       0,     0,     7,     0,     0,     4,   103,     8,     0,     9,
      13,     0,     0,     5,     0,     0,    15,     0,     6,     4,
      10,     0,    11,     0,    12,     0,     7,     5,     0,     0,
     104,     8,     6,     9,     0,     0,    59,    13,    60,     0,
       7,     0,    83,    15,    10,     8,    11,     9,    12,     0,
      62,     0,    63,     0,     0,     0,     0,    59,    10,    60,
      11,    13,    12,    85,     0,     0,     0,    15,    64,     0,
       0,    62,     0,    63,     0,    13,     0,    59,     0,    60,
      65,    15,     0,     0,     0,     0,    66,     0,     0,    64,
      67,    62,     0,    63,     0,     0,    59,    36,    60,     0,
       1,    65,     0,     0,     0,     0,     0,    66,     0,    64,
      62,    67,    63,     0,    96,     0,     0,     0,    36,     0,
       0,    65,     0,     0,     0,     0,     0,    66,    64,     0,
       0,    67,     0,     0,   509,     0,     0,     0,    36,     0,
      65,     0,    97,     0,     0,     0,    66,   261,     0,     0,
      67,     0,   262,     0,   263,   264,   265,   266,   267,     0,
       0,   291,   261,     0,     0,     0,     0,   262,     0,   263,
     264,   265,   266,   267,   268,   269,   270,     0,   271,   272,
     273,   274,   275,   276,     0,     0,     0,   289,     0,   268,
     269,   270,     0,   271,   272,   273,   274,   275,   276,   551,
     261,     0,   289,     0,     0,   262,     0,   263,   264,   265,
     266,   267,     0,     0,   261,     0,     0,     0,     0,   262,
       0,   263,   264,   265,   266,   267,     0,   268,   269,   270,
       0,   271,   272,   273,   274,   275,   276,     0,     0,     0,
     289,   268,   269,   270,     0,   271,   272,   273,   274,   275,
     276,   261,   296,   297,   289,   328,   262,     0,   263,   264,
     265,   266,   267,     0,     0,     0,   329,     0,   330,   331,
     332,   333,   334,   335,     0,   282,     0,   283,   268,   269,
     270,     0,   271,   272,   273,   274,   275,   276,   261,   302,
     297,   289,     0,   262,   284,   263,   264,   265,   266,   267,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   370,     0,     0,   268,   269,   270,     0,   271,
     272,   273,   274,   275,   276,   261,     0,   297,   289,     0,
     262,     0,   263,   264,   265,   266,   267,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   472,
       0,     0,   268,   269,   270,     0,   271,   272,   273,   274,
     275,   276,   261,     0,   297,   289,     0,   262,     0,   263,
     264,   265,   266,   267,     0,     0,   261,     0,     0,     0,
       0,   262,     0,   263,   264,   265,   266,   267,     0,   268,
     269,   270,     0,   271,   272,   273,   274,   275,   276,     0,
     288,     0,   289,   268,   269,   270,     0,   271,   272,   273,
     274,   275,   276,   261,   299,     0,   289,     0,   262,     0,
     263,   264,   265,   266,   267,     0,     0,     0,   261,     0,
       0,     0,     0,   262,     0,   263,   264,   265,   266,   267,
     268,   269,   270,     0,   271,   272,   273,   274,   275,   276,
     360,   355,     0,   289,     0,   268,   269,   270,     0,   271,
     272,   273,   274,   275,   276,   261,     0,     0,   289,     0,
     262,     0,   263,   264,   265,   266,   267,     0,     0,   261,
       0,     0,     0,     0,   262,     0,   263,   264,   265,   266,
     267,   371,   268,   269,   270,     0,   271,   272,   273,   274,
     275,   276,     0,     0,     0,   289,   268,   269,   270,     0,
     271,   272,   273,   274,   275,   276,   261,   407,     0,   289,
       0,   262,     0,   263,   264,   265,   266,   267,     0,     0,
     261,     0,     0,     0,     0,   262,     0,   263,   264,   265,
     266,   267,     0,   268,   269,   270,     0,   271,   272,   273,
     274,   275,   276,     0,   410,     0,   289,   268,   269,   270,
       0,   271,   272,   273,   274,   275,   276,   261,   411,     0,
     289,     0,   262,     0,   263,   264,   265,   266,   267,     0,
       0,   261,     0,     0,     0,     0,   262,     0,   263,   264,
     265,   266,   267,     0,   268,   269,   270,     0,   271,   272,
     273,   274,   275,   276,     0,   421,     0,   289,   268,   269,
     270,     0,   271,   272,   273,   274,   275,   276,   261,     0,
     297,   289,     0,   262,     0,   263,   264,   265,   266,   267,
       0,     0,   261,     0,     0,     0,     0,   262,     0,   263,
     264,   265,   266,   267,   466,   268,   269,   270,     0,   271,
     272,   273,   274,   275,   276,     0,     0,     0,   289,   268,
     269,   270,     0,   271,   272,   273,   274,   275,   276,   261,
     504,     0,   289,     0,   262,     0,   263,   264,   265,   266,
     267,     0,     0,   261,     0,     0,     0,     0,   262,     0,
     263,   264,   265,   266,   267,     0,   268,   269,   270,     0,
     271,   272,   273,   274,   275,   276,     0,   542,     0,   289,
     268,   269,   270,     0,   271,   272,   273,   274,   275,   276,
     261,   543,     0,   289,     0,   262,     0,   263,   264,   265,
     266,   267,     0,     0,   261,     0,     0,     0,     0,   262,
       0,   263,   264,   265,   266,   267,     0,   268,   269,   270,
       0,   271,   272,   273,   274,   275,   276,     0,     0,     0,
     277,   268,   269,   270,     0,   271,   272,   273,   274,   275,
     276,     0,     0,   262,   289,   263,   264,   265,     0,   267,
       0,     0,     0,   262,     0,   263,   264,   265,     0,     0,
       0,     0,     0,     0,     0,   268,   269,   270,     0,   271,
     272,   273,   274,   275,   276,   268,   269,   270,   289,   271,
     272,   273,   274,   275,   276,     0,     0,   262,   289,   263,
     264,   265,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    -1,
     269,   270,     0,   271,   272,   273,   274,   275,   276,     0,
       0,     0,   289
};

static const yytype_int16 yycheck[] =
{
      16,   158,    34,   209,   119,   180,   198,    39,    40,    57,
      28,    28,    19,   128,    28,    28,    93,    33,    34,    97,
      69,    17,    57,    39,    40,    78,    41,    89,   185,    61,
      14,    70,    91,    93,    95,    89,     4,    70,     6,    50,
       0,    52,    57,    75,    59,    61,   108,   108,   108,   108,
      65,    83,    20,    85,   108,   133,   109,     3,   107,    75,
     108,   138,   139,   205,    80,    11,    82,    83,   107,    85,
      16,   149,   150,   108,   107,   217,   108,   109,    24,     7,
      48,    65,    89,    29,   226,    31,   228,    93,   245,    17,
     108,   108,   108,   109,   108,   108,    69,    25,    94,     4,
     132,     6,    30,    65,   107,    69,    34,     8,     7,    37,
     107,   108,    40,    59,   306,    20,   132,    45,    17,    65,
     198,    94,    70,    51,    52,    53,    70,    55,    90,    28,
      92,    95,   138,   139,    12,    34,    28,    65,    37,    28,
      70,    40,    65,    48,   108,    70,    45,   109,   323,    54,
      65,     7,    51,    52,    53,    33,    55,   111,   112,   107,
      23,    17,   178,   107,     8,   119,    65,    12,   283,    47,
      91,   125,    28,    65,   128,    89,    65,   107,    34,   107,
      95,    37,   107,   136,    40,    89,   202,   108,    33,    45,
     362,    89,   364,    69,   108,    51,    52,    53,     1,    55,
      56,   155,    47,   107,   108,   237,   238,   161,   107,    65,
     108,    14,    95,   167,   168,   169,    19,    78,    21,    95,
       8,   237,   238,    93,   107,   178,    65,    30,   306,    32,
     436,   231,   186,    91,   234,   189,   236,   191,   108,    41,
      43,    89,   103,   104,   105,    91,   200,   201,   109,   203,
     108,   107,   205,    56,   208,    57,   366,    59,   368,   107,
     108,   214,   108,    65,   217,    14,    78,   220,   284,    91,
      19,   303,   304,   226,   463,   228,   465,    91,   232,    65,
      13,    30,   424,   425,    13,    65,   108,   303,   304,   101,
     102,   103,   104,   105,   108,    28,   438,   109,   440,    28,
      72,    73,   107,   108,   258,    65,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,    74,    95,    76,    77,    78,   283,
      37,    27,    95,    40,    14,   289,   290,   291,   108,    13,
      14,   295,     8,   297,    51,   108,   136,    97,    98,     8,
     100,   101,   102,   103,   104,   105,    14,    53,    94,   109,
      41,    69,   315,   316,   318,    65,    62,    63,    64,    65,
      66,    67,     8,   326,   327,     8,    57,   534,    59,    64,
      65,    65,   336,   415,    65,   417,   107,   340,   341,   342,
     343,   479,   480,   107,    90,     8,    92,   539,    94,   415,
      70,   417,   434,   357,   358,   359,   548,   427,   428,     8,
     138,   139,     7,   555,    65,   205,    24,    25,   434,   427,
     428,    47,    17,    70,   214,   149,   150,   217,    70,    70,
     220,    17,    57,    28,   106,    70,   226,    47,   228,    34,
     582,    68,    37,   585,    65,    40,    65,    13,    65,   481,
      45,    89,   107,    27,    22,    22,    51,    52,    53,    50,
      55,    56,    50,    64,    71,   481,    71,   483,   107,   423,
      65,   424,   425,    93,    19,    65,   107,   107,    65,    53,
     136,   513,    64,   107,    13,   438,    70,   440,    62,    63,
      64,    65,    66,    67,    70,    70,   450,   513,   452,    30,
      25,    28,    28,    47,     5,     5,    22,   461,    22,   463,
      14,   465,   107,    64,    64,    89,    90,    70,    92,   473,
      94,   475,    70,    45,   478,   315,   316,    45,   102,    15,
      19,   484,   485,   486,   487,   107,   326,   327,    71,     7,
      27,     7,    89,    19,    53,   498,   499,   500,   501,   205,
     340,   341,   342,   343,    53,   509,     5,     5,    15,    89,
      53,   217,    53,   517,   220,   519,    53,    28,    53,   523,
     226,    53,   228,    53,   523,    62,    63,    64,    65,    66,
      67,    54,   316,   426,   537,    54,   539,    14,    22,   278,
     170,   143,    66,     3,   231,   548,   134,   551,   110,   304,
     554,    11,   555,    90,    -1,    92,    16,    94,   561,   562,
      -1,    -1,   565,   566,    24,   102,    -1,   570,   571,    29,
     107,    31,    -1,    -1,    -1,    -1,   580,    -1,     7,   582,
     583,   584,   585,   586,   424,   425,    -1,    -1,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   438,    28,
     440,    -1,    -1,    -1,    -1,    34,    -1,    -1,    37,    -1,
     316,    40,     3,    -1,    -1,    -1,    45,    -1,    -1,    -1,
      11,   327,    51,    52,    53,    16,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    -1,   341,    65,   343,    29,    -1,
      31,    -1,    -1,    -1,   484,   485,   486,   487,    -1,    -1,
      -1,    42,    -1,    44,    -1,    46,     7,    -1,   498,   499,
     500,   501,    -1,    -1,    -1,    -1,    17,    -1,    59,    60,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    28,   107,     4,
      -1,     6,    -1,    34,    -1,    -1,    37,    -1,    -1,    40,
      -1,    -1,    -1,    18,    45,    20,    -1,   537,    -1,   539,
      51,    52,    53,    94,    55,    -1,    -1,    -1,   548,    -1,
      -1,    36,    -1,    -1,    65,   555,    -1,    -1,   424,   425,
      -1,   561,   562,    48,    49,   565,   566,     7,    -1,    54,
     570,   571,   438,    58,   440,    -1,    61,    17,    -1,    -1,
      65,    -1,   582,   583,   584,   585,   586,    -1,    28,    -1,
      -1,    -1,    -1,     7,    34,    -1,   107,    37,    -1,    -1,
      40,    -1,     4,    17,     6,    45,    -1,    -1,    10,    -1,
      -1,    51,    52,    53,    28,    55,    18,    -1,    20,   485,
      34,   487,    -1,    37,    -1,    65,    40,    -1,    -1,    -1,
      -1,    45,     7,   499,    36,   501,    -1,    51,    52,    53,
      -1,    55,    17,    -1,    -1,    -1,    48,    -1,    -1,    -1,
      -1,    65,    54,    28,    -1,    -1,    58,    -1,    -1,    34,
      -1,    -1,    37,    65,     7,    40,    -1,   107,    -1,    -1,
      45,   537,    -1,   539,    17,    -1,    51,    52,    53,    -1,
      55,    -1,   548,    -1,    -1,    28,    -1,    -1,    -1,   555,
      65,    34,    -1,   107,    37,    -1,   562,    40,    -1,    -1,
     566,    -1,    45,     7,    -1,   571,    -1,    -1,    51,    52,
      53,    -1,    55,    17,    -1,    -1,   582,    -1,   584,   585,
      -1,    -1,    65,    -1,    28,     7,    -1,    -1,    -1,    -1,
      34,    -1,   107,    37,    -1,    17,    40,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,
      -1,    55,    34,    -1,    -1,    37,    -1,    -1,    40,    -1,
      -1,    65,    -1,    45,   107,    -1,    -1,    -1,    -1,    51,
      52,    53,     7,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    28,     7,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    37,   107,    17,    40,    -1,    -1,    -1,    -1,
      45,    -1,    94,    -1,    -1,    28,    51,    52,    53,    -1,
      55,    34,    -1,     7,    37,   107,    -1,    40,    -1,    -1,
      65,    -1,    45,    17,    -1,    -1,    -1,    -1,    51,    52,
      53,    -1,    55,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    65,    37,    -1,     7,    40,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    17,    -1,    51,    52,    53,
      -1,    55,   107,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    65,    34,    -1,    -1,    37,    -1,     7,    40,    -1,
       4,    -1,     6,    45,   107,    -1,    10,    17,    -1,    51,
      52,    53,    -1,    55,    18,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    34,    -1,     7,    37,    -1,    -1,
      40,    -1,    36,   107,    -1,    45,    17,    -1,    -1,    -1,
      -1,    51,    52,    53,    48,    55,    56,    28,     7,    -1,
      54,    -1,    -1,    34,    58,    65,    37,    -1,    17,    40,
      -1,    65,    -1,    -1,    45,   107,    -1,    -1,    -1,    -1,
      51,    52,    53,    -1,    55,    34,    -1,     3,    37,    21,
      -1,    40,    -1,    -1,    65,    11,    45,    -1,    -1,    -1,
      16,    -1,    51,    52,    53,    -1,    55,   107,    24,    -1,
      -1,    -1,    -1,    29,    -1,    31,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    21,    44,    -1,
      46,    -1,    -1,    -1,    -1,    -1,   107,    69,    -1,    -1,
      -1,    21,    74,    59,    76,    77,    78,    79,    80,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,
      -1,    -1,    -1,    -1,    96,    97,    98,    -1,   100,   101,
     102,   103,   104,   105,    -1,    69,    -1,   109,    94,    -1,
      74,    23,    76,    77,    78,    79,    80,    -1,    -1,    69,
      -1,    -1,    -1,    -1,    74,    -1,    76,    77,    78,    79,
      80,    -1,    96,    97,    98,    27,   100,   101,   102,   103,
     104,   105,    -1,    -1,    -1,   109,    96,    97,    98,    -1,
     100,   101,   102,   103,   104,   105,    -1,    69,    -1,   109,
      -1,    53,    74,    -1,    76,    77,    78,    79,    80,    27,
      62,    63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    96,    97,    98,    -1,   100,   101,
     102,   103,   104,   105,    -1,    53,    -1,   109,    90,    -1,
      92,    -1,    94,    95,    62,    63,    64,    65,    66,    67,
     102,    27,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    90,    27,    92,    -1,    94,    53,    -1,    -1,
      -1,    -1,    -1,    53,   102,    -1,    62,    63,    64,    65,
      66,    67,    62,    63,    64,    65,    66,    67,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    62,    63,
      64,    65,    66,    67,    90,    -1,    92,    -1,    94,    -1,
      90,    -1,    92,    27,    94,    -1,   102,    -1,    -1,    -1,
      -1,    -1,   102,    53,    -1,    -1,    90,    -1,    92,    -1,
      94,    -1,    62,    63,    64,    65,    66,    67,   102,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,     3,    -1,
      90,    -1,    92,    -1,    94,    -1,    11,    -1,    -1,    -1,
      -1,    16,   102,    -1,    -1,    -1,    90,    -1,    92,    24,
      94,    -1,     3,    28,    29,    -1,    31,    -1,   102,    -1,
      11,    -1,    -1,    -1,    -1,    16,    -1,    42,    -1,    44,
      -1,    46,    -1,    24,    -1,    -1,    -1,    28,    29,     3,
      31,    -1,    -1,    -1,    59,    -1,    -1,    11,    -1,    -1,
      65,    42,    16,    44,    -1,    46,    -1,    -1,    -1,    -1,
      24,    -1,    -1,     3,    28,    29,    -1,    31,    59,    -1,
      -1,    11,    -1,    -1,    65,    -1,    16,    -1,    42,    -1,
      44,    -1,    46,    -1,    24,    -1,    -1,    -1,    28,    29,
       3,    31,    -1,    -1,    -1,    59,    -1,    -1,    11,    -1,
      -1,    65,    42,    16,    44,    -1,    46,    -1,    -1,    -1,
      -1,    24,    -1,    -1,     3,    28,    29,    -1,    31,    59,
      -1,    -1,    11,    -1,    -1,    65,    -1,    16,    -1,    42,
      -1,    44,    -1,    46,    -1,    24,    -1,    -1,    -1,    28,
      29,     3,    31,    -1,    -1,    -1,    59,    -1,    -1,    11,
      -1,    -1,    65,    42,    16,    44,    -1,    46,    -1,    -1,
      -1,    -1,    24,    -1,    -1,     3,    28,    29,    -1,    31,
      59,    -1,    -1,    11,    -1,    -1,    65,    -1,    16,     3,
      42,    -1,    44,    -1,    46,    -1,    24,    11,    -1,    -1,
      28,    29,    16,    31,    -1,    -1,     4,    59,     6,    -1,
      24,    -1,    10,    65,    42,    29,    44,    31,    46,    -1,
      18,    -1,    20,    -1,    -1,    -1,    -1,     4,    42,     6,
      44,    59,    46,    10,    -1,    -1,    -1,    65,    36,    -1,
      -1,    18,    -1,    20,    -1,    59,    -1,     4,    -1,     6,
      48,    65,    -1,    -1,    -1,    -1,    54,    -1,    -1,    36,
      58,    18,    -1,    20,    -1,    -1,     4,    65,     6,    -1,
       8,    48,    -1,    -1,    -1,    -1,    -1,    54,    -1,    36,
      18,    58,    20,    -1,    22,    -1,    -1,    -1,    65,    -1,
      -1,    48,    -1,    -1,    -1,    -1,    -1,    54,    36,    -1,
      -1,    58,    -1,    -1,    56,    -1,    -1,    -1,    65,    -1,
      48,    -1,    50,    -1,    -1,    -1,    54,    69,    -1,    -1,
      58,    -1,    74,    -1,    76,    77,    78,    79,    80,    -1,
      -1,    68,    69,    -1,    -1,    -1,    -1,    74,    -1,    76,
      77,    78,    79,    80,    96,    97,    98,    -1,   100,   101,
     102,   103,   104,   105,    -1,    -1,    -1,   109,    -1,    96,
      97,    98,    -1,   100,   101,   102,   103,   104,   105,    68,
      69,    -1,   109,    -1,    -1,    74,    -1,    76,    77,    78,
      79,    80,    -1,    -1,    69,    -1,    -1,    -1,    -1,    74,
      -1,    76,    77,    78,    79,    80,    -1,    96,    97,    98,
      -1,   100,   101,   102,   103,   104,   105,    -1,    -1,    -1,
     109,    96,    97,    98,    -1,   100,   101,   102,   103,   104,
     105,    69,   107,   108,   109,    70,    74,    -1,    76,    77,
      78,    79,    80,    -1,    -1,    -1,    81,    -1,    83,    84,
      85,    86,    87,    88,    -1,    90,    -1,    92,    96,    97,
      98,    -1,   100,   101,   102,   103,   104,   105,    69,   107,
     108,   109,    -1,    74,   109,    76,    77,    78,    79,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    93,    -1,    -1,    96,    97,    98,    -1,   100,
     101,   102,   103,   104,   105,    69,    -1,   108,   109,    -1,
      74,    -1,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,
      -1,    -1,    96,    97,    98,    -1,   100,   101,   102,   103,
     104,   105,    69,    -1,   108,   109,    -1,    74,    -1,    76,
      77,    78,    79,    80,    -1,    -1,    69,    -1,    -1,    -1,
      -1,    74,    -1,    76,    77,    78,    79,    80,    -1,    96,
      97,    98,    -1,   100,   101,   102,   103,   104,   105,    -1,
     107,    -1,   109,    96,    97,    98,    -1,   100,   101,   102,
     103,   104,   105,    69,   107,    -1,   109,    -1,    74,    -1,
      76,    77,    78,    79,    80,    -1,    -1,    -1,    69,    -1,
      -1,    -1,    -1,    74,    -1,    76,    77,    78,    79,    80,
      96,    97,    98,    -1,   100,   101,   102,   103,   104,   105,
      91,   107,    -1,   109,    -1,    96,    97,    98,    -1,   100,
     101,   102,   103,   104,   105,    69,    -1,    -1,   109,    -1,
      74,    -1,    76,    77,    78,    79,    80,    -1,    -1,    69,
      -1,    -1,    -1,    -1,    74,    -1,    76,    77,    78,    79,
      80,    95,    96,    97,    98,    -1,   100,   101,   102,   103,
     104,   105,    -1,    -1,    -1,   109,    96,    97,    98,    -1,
     100,   101,   102,   103,   104,   105,    69,   107,    -1,   109,
      -1,    74,    -1,    76,    77,    78,    79,    80,    -1,    -1,
      69,    -1,    -1,    -1,    -1,    74,    -1,    76,    77,    78,
      79,    80,    -1,    96,    97,    98,    -1,   100,   101,   102,
     103,   104,   105,    -1,   107,    -1,   109,    96,    97,    98,
      -1,   100,   101,   102,   103,   104,   105,    69,   107,    -1,
     109,    -1,    74,    -1,    76,    77,    78,    79,    80,    -1,
      -1,    69,    -1,    -1,    -1,    -1,    74,    -1,    76,    77,
      78,    79,    80,    -1,    96,    97,    98,    -1,   100,   101,
     102,   103,   104,   105,    -1,   107,    -1,   109,    96,    97,
      98,    -1,   100,   101,   102,   103,   104,   105,    69,    -1,
     108,   109,    -1,    74,    -1,    76,    77,    78,    79,    80,
      -1,    -1,    69,    -1,    -1,    -1,    -1,    74,    -1,    76,
      77,    78,    79,    80,    95,    96,    97,    98,    -1,   100,
     101,   102,   103,   104,   105,    -1,    -1,    -1,   109,    96,
      97,    98,    -1,   100,   101,   102,   103,   104,   105,    69,
     107,    -1,   109,    -1,    74,    -1,    76,    77,    78,    79,
      80,    -1,    -1,    69,    -1,    -1,    -1,    -1,    74,    -1,
      76,    77,    78,    79,    80,    -1,    96,    97,    98,    -1,
     100,   101,   102,   103,   104,   105,    -1,   107,    -1,   109,
      96,    97,    98,    -1,   100,   101,   102,   103,   104,   105,
      69,   107,    -1,   109,    -1,    74,    -1,    76,    77,    78,
      79,    80,    -1,    -1,    69,    -1,    -1,    -1,    -1,    74,
      -1,    76,    77,    78,    79,    80,    -1,    96,    97,    98,
      -1,   100,   101,   102,   103,   104,   105,    -1,    -1,    -1,
     109,    96,    97,    98,    -1,   100,   101,   102,   103,   104,
     105,    -1,    -1,    74,   109,    76,    77,    78,    -1,    80,
      -1,    -1,    -1,    74,    -1,    76,    77,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    97,    98,    -1,   100,
     101,   102,   103,   104,   105,    96,    97,    98,   109,   100,
     101,   102,   103,   104,   105,    -1,    -1,    74,   109,    76,
      77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      97,    98,    -1,   100,   101,   102,   103,   104,   105,    -1,
      -1,    -1,   109
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,   111,   140,     3,    11,    16,    24,    29,    31,
      42,    44,    46,    59,    60,    65,    94,   112,   135,   141,
     142,   143,   144,   145,   146,   147,   174,     0,   107,    65,
     141,   142,   143,    89,   107,   108,    65,   137,   138,    89,
     107,   108,   142,   143,    28,   142,    28,   142,   145,    57,
     108,   187,   108,   187,    23,   142,   143,    28,    28,     4,
       6,    10,    18,    20,    36,    48,    54,    58,   113,   114,
     137,   175,   177,   178,   179,    10,   113,    65,    69,    95,
     108,    95,   108,    10,   113,    10,   113,    65,    28,    28,
       8,     8,    65,   188,   147,   147,    22,    50,   114,   140,
     180,   181,   184,    28,    28,     8,     8,   113,    14,    14,
     177,    94,    70,   107,    12,    33,    47,   176,   113,    70,
     107,    65,   137,   137,   113,    70,   107,   113,    70,   107,
       8,     8,    17,    94,   189,   193,    41,   112,   172,   173,
     174,   187,   194,    14,    65,   185,   186,    65,   135,   182,
     183,   107,   107,     8,     8,    70,   113,   113,    47,   176,
      27,    53,    62,    63,    64,    66,    67,    90,    92,    94,
     102,   137,   148,   149,   150,   152,   153,   154,   155,   156,
     161,   169,   148,   126,   148,    47,    70,   139,   148,    70,
     148,    70,   139,   148,   113,    65,   135,   190,   191,   193,
       7,    17,    34,    37,    40,    45,    51,    52,    53,    55,
      65,   107,   115,   117,   118,   119,   125,   127,   128,   155,
     162,   163,   165,   166,   169,   170,    41,   172,    41,   172,
      57,   175,    70,    28,   108,    28,   108,    89,    89,    28,
     182,    28,   182,   148,   126,    47,   148,    64,    65,   148,
     157,   158,   159,   160,   139,   148,   148,    90,    92,   153,
      94,    69,    74,    76,    77,    78,    79,    80,    96,    97,
      98,   100,   101,   102,   103,   104,   105,   109,   106,    72,
      73,   151,    90,    92,   109,   137,   169,   127,   107,   109,
      68,    68,   126,   148,   107,   108,   107,   108,   148,   107,
     148,   107,   107,    89,    89,    95,   107,    95,   190,   148,
     107,   148,   137,   148,    65,   118,   162,    65,    13,    14,
     116,   148,   116,    89,    28,   162,   118,   162,    70,    81,
      83,    84,    85,    86,    87,    88,   164,    28,   162,   107,
     118,   162,   118,   162,   185,   186,   148,    22,   185,    22,
     185,   113,   113,    50,    50,   107,   126,    21,    71,    71,
      91,    91,   108,    91,   108,    91,   108,    91,   108,    93,
      93,    95,    64,    65,   148,    65,    95,   148,   167,   168,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   149,    64,   136,
     139,   148,   137,    93,   148,   148,   148,   107,   148,   148,
     107,   107,    49,    61,   113,   192,   113,   192,   190,   107,
      23,   107,   107,    19,    25,    30,   129,   130,   131,   132,
     133,   134,   134,    19,    89,   148,    65,   107,    21,   107,
     127,    28,    28,   148,    28,    28,    28,    28,    28,    28,
      70,   107,    70,   107,   148,   148,   148,   158,   158,   160,
     160,    70,    95,   108,    95,   108,    95,    91,   108,    91,
     108,    93,    93,    70,   113,    70,   113,   107,    13,   120,
     121,    89,   148,    94,   118,   162,   118,   162,   133,   130,
     132,   130,   132,    28,    28,    47,   113,   116,   118,   162,
     118,   162,     5,     5,   107,    22,    22,   148,   148,    56,
     148,   167,   167,    14,    64,    64,   148,    70,   148,    70,
      39,   122,   123,   124,   148,    28,   121,    28,   121,   113,
     137,    45,    45,    15,    19,   107,    28,    56,    28,    56,
      28,    28,   107,   107,   148,   113,   148,   148,    71,    89,
     123,    68,     7,     7,    19,    95,    47,   126,    53,   162,
      53,   118,   162,     5,     5,   118,   162,    89,   148,   148,
     118,   162,    15,    28,    28,    28,    53,    53,    53,   171,
      53,   148,    21,   118,   162,    56,   118,    28,    53
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   110,   111,   112,   112,   112,   112,   112,   112,   113,
     113,   114,   115,   115,   115,   116,   116,   117,   118,   118,
     119,   119,   120,   120,   121,   121,   122,   122,   123,   123,
     123,   124,   124,   125,   125,   125,   125,   126,   126,   127,
     127,   127,   127,   127,   127,   127,   128,   128,   129,   129,
     129,   130,   130,   131,   131,   132,   132,   133,   133,   134,
     134,   134,   135,   135,   136,   136,   137,   137,   138,   138,
     139,   139,   140,   140,   140,   140,   140,   140,   140,   140,
     141,   141,   142,   142,   143,   143,   144,   144,   144,   145,
     145,   145,   145,   146,   146,   147,   147,   147,   147,   147,
     147,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   149,   149,   150,   150,   151,   151,   152,   152,
     153,   153,   153,   153,   153,   153,   154,   154,   154,   154,
     154,   154,   155,   155,   155,   155,   155,   155,   156,   156,
     156,   156,   156,   156,   157,   157,   158,   159,   159,   160,
     161,   161,   161,   126,   126,   127,   127,   127,   127,   127,
     127,   127,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   163,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   165,   165,   166,   167,   167,   168,   168,   169,
     169,   169,   170,   170,   170,   170,   171,   170,   172,   172,
     172,   173,   173,   112,   112,   112,   112,   112,   112,   112,
     112,   113,   113,   174,   174,   114,   114,   114,   175,   175,
     175,   175,   175,   175,   175,   175,   176,   176,   177,   177,
     177,   177,   178,   178,   179,   180,   180,   180,   181,   181,
     182,   182,   182,   182,   183,   183,   184,   184,   184,   184,
     185,   185,   186,   186,   187,   188,   188,   188,   188,   189,
     189,   190,   190,   190,   190,   190,   190,   190,   190,   191,
     191,   192,   192,   193,   194,   194,   194,   194,   194,   194
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     7,     7,     6,     6,     4,     4,     1,
       1,     0,     3,     5,     3,     2,     0,     3,     2,     2,
       6,     6,     2,     2,     4,     4,     2,     1,     1,     3,
       1,     2,     3,     6,     6,     4,     4,     3,     3,     4,
       7,     4,     6,     5,     7,     2,     5,     5,     1,     2,
       2,     5,     5,     2,     2,     2,     2,     2,     2,     1,
       2,     1,     3,     3,     3,     3,     1,     3,     3,     3,
       3,     3,     6,     6,     5,     5,     5,     5,     4,     4,
       3,     3,     2,     1,     2,     2,     1,     1,     1,     1,
       1,     2,     2,     3,     3,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     3,     1,     2,     1,     1,     1,     2,
       1,     1,     1,     2,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     3,     4,     4,     4,     4,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     4,     6,     3,     3,     4,     7,     4,     6,     5,
       7,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     3,     2,     1,     3,     3,     3,     3,
       4,     4,     6,     6,     8,     8,     0,    17,     1,     1,
       1,     2,     2,     7,     7,     4,     6,     6,     4,     6,
       6,     1,     1,     5,     5,     1,     1,     1,     1,     2,
       3,     4,     5,     2,     3,     4,     1,     1,     1,     1,
       1,     1,     8,     3,     3,     1,     1,     1,     4,     4,
       4,     6,     4,     6,     2,     2,     4,     4,     6,     6,
       1,     3,     3,     3,     4,     1,     2,     2,     3,     3,
       3,     3,     4,     5,     6,     3,     4,     5,     6,     4,
       3,     1,     1,     2,     3,     3,     4,     4,     4,     4
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
#line 63 "simple.y" /* yacc.c:1646  */
    {printf("\nfin -> clase\n");}
#line 2130 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 67 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionObjeto -> IDENTIFICADOR : CONSTANTE especificacionTipo ASIGNACION expresion ;\n");}
#line 2136 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 68 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionObjeto -> identificadorMultiple : CONSTANTE especificacionTipo ASIGNACION expresion ;\n");}
#line 2142 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 70 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionObjeto -> IDENTIFICADOR : especificacionTipo ASIGNACION expresion ;\n");}
#line 2148 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 71 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionObjeto -> identificadorMultiple : especificacionTipo ASIGNACION expresion ;\n");}
#line 2154 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 72 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionObjeto -> IDENTIFICADOR : especificacionTipo ;\n");}
#line 2160 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 73 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionObjeto -> identificadorMultiple : especificacionTipo ;\n");}
#line 2166 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 76 "simple.y" /* yacc.c:1646  */
    {printf("\nespecificacionTipo -> nombre");}
#line 2172 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 77 "simple.y" /* yacc.c:1646  */
    {printf("\nespecificacionTipo -> tipoNoEstructurado");}
#line 2178 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 83 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionInterrupcion -> siguiente ; ");}
#line 2184 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 84 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionInterrupcion -> salir de IDENTIFICADOR cuando ; ");}
#line 2190 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 85 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionInterrupcion -> salir cuando(?) ; ");}
#line 2196 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 88 "simple.y" /* yacc.c:1646  */
    {printf("\ncuando -> CUANDO expresion");}
#line 2202 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 89 "simple.y" /* yacc.c:1646  */
    {printf("\ncuando -> nada ");}
#line 2208 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 92 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionLanzamientoExcepcion -> LANZA nombre ; ");}
#line 2214 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 95 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionMultiple -> instruccion instruccion");}
#line 2220 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 96 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionMultiple -> instruccionMultiple instruccion");}
#line 2226 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 99 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionCasos -> CASOS expresion ES caso FIN CASOS");}
#line 2232 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 100 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionCasos -> CASOS expresion ES casoMultiple FIN CASOS");}
#line 2238 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 102 "simple.y" /* yacc.c:1646  */
    {printf("\ncasoMultiple -> caso caso");}
#line 2244 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 103 "simple.y" /* yacc.c:1646  */
    {printf("\ncasoMultiple -> casoMultiple caso");}
#line 2250 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 105 "simple.y" /* yacc.c:1646  */
    {printf("\ncaso -> CUANDO entradas FLECHA instruccion");}
#line 2256 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 106 "simple.y" /* yacc.c:1646  */
    {printf("\ncaso -> CUANDO entradas FLECHA instruccionMultiple");}
#line 2262 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 108 "simple.y" /* yacc.c:1646  */
    {printf("\nentradas -> entrada : entrada");}
#line 2268 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 109 "simple.y" /* yacc.c:1646  */
    {printf("\nentradas -> entrada");}
#line 2274 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 111 "simple.y" /* yacc.c:1646  */
    {printf("\nentrada -> expresion");}
#line 2280 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 112 "simple.y" /* yacc.c:1646  */
    {printf("\nentrada -> expresion DOS_PUNTOS expresion");}
#line 2286 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 113 "simple.y" /* yacc.c:1646  */
    {printf("\nentrada -> OTRO");}
#line 2292 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 115 "simple.y" /* yacc.c:1646  */
    {printf("\nentradaDosP -> entrada : ");}
#line 2298 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 116 "simple.y" /* yacc.c:1646  */
    {printf("\nentradaDosP -> entradaDosP entrada : ");}
#line 2304 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 118 "simple.y" /* yacc.c:1646  */
    {printf("\nintsruccionBucle -> IDENTIFICADOR : clausulaIteracion instruccion FIN BUCLE");}
#line 2310 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 119 "simple.y" /* yacc.c:1646  */
    {printf("\nintsruccionBucle -> IDENTIFICADOR : clausulaIteracion instruccionMultiple FIN BUCLE");}
#line 2316 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 120 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionBucle -> clausulaIteracion instruccion FIN BUCLE");}
#line 2322 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 121 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionBucle -> clausulaIteracion instruccionMultiple FIN BUCLE");}
#line 2328 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 124 "simple.y" /* yacc.c:1646  */
    {printf("\nrango -> expresion DOS_PUNTOS expresion");}
#line 2334 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 125 "simple.y" /* yacc.c:1646  */
    {printf("\nrango -> rango DOS_PUNTOS expresion");}
#line 2340 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 128 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaIteracion -> PARA IDENTIFICADOR EN expresion");}
#line 2346 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 129 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaIteracion -> PARA IDENTIFICADOR EN ':' especifiacionTipo EN expresion");}
#line 2352 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 131 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaIteracion -> REPETIR IDENTIFICADOR EN RANGO");}
#line 2358 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 132 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaIteracion -> REPETIR IDENTIFICADOR ':' especificacionTipo EN rango");}
#line 2364 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 134 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaIteracion -> REPETIR IDENTIFICADOR EN RANGO DESCENDENTE");}
#line 2370 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 135 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaIteracion -> REPETIR IDENTIFICADOR ':' especificacionTipo EN RANGO DESCENDENTE");}
#line 2376 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 137 "simple.y" /* yacc.c:1646  */
    {printf("\nMIENTRAS expresion");}
#line 2382 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 140 "simple.y" /* yacc.c:1646  */
    {printf("\ninstrccuionCapturaDeExcepcion -> PRUEBA instruccion clausulas FIN PRUEBA");}
#line 2388 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 141 "simple.y" /* yacc.c:1646  */
    {printf("\ninstrccuionCapturaDeExcepcion -> prueba instruccion clausulas FIN PRUEBA");}
#line 2394 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 144 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulasExcepcion -> clausulaExcepcionGeneral");}
#line 2400 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 145 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulasExcepcion -> clausulaExcepcionEspecifica clausulaExcepcionGeneral");}
#line 2406 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 146 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulasExcepcion -> clausulaExcepcionEspecificaMultiple clausulaExcepcionGeneral");}
#line 2412 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 148 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaExcepcionEspecifica -> EXCEPCION ( nombre ) intruccion");}
#line 2418 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 149 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaExcepcionEspecifica -> EXCEPCION ( nombre ) instruccionMultiple");}
#line 2424 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 151 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaExcepcionEspecificaMultiple -> clausulaExcepcionEspecifica clausulaExcepcionEspecifica");}
#line 2430 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 152 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaExcepcionEspecificaMultiple -> clausulaExcepcionEspecificaMultiple clausulaExcepcionEspecifica");}
#line 2436 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 155 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaExcepcionGeneral -> EXCEPCION instruccion");}
#line 2442 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 156 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaExcepcionGeneral -> EXCEPCION instruccionMultiple");}
#line 2448 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 159 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaFinalmente -> FINALMENTE instruccion");}
#line 2454 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 160 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaFinalmente -> FINALMENTE instruccionMultiple");}
#line 2460 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 163 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulas -> clausulasExcepcion");}
#line 2466 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 164 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulas -> clausulasExcepcion clausulaFinalmente");}
#line 2472 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 165 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulas -> clausulaFinalmente");}
#line 2478 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 167 "simple.y" /* yacc.c:1646  */
    {printf("\nidentificadorMultiple -> IDENTIFICADOR ',' IDENTIFICADOR");}
#line 2484 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 168 "simple.y" /* yacc.c:1646  */
    {printf("\nidentificadorMultiple -> identificadorMultiple ',' IDENTIFICADOR");}
#line 2490 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 173 "simple.y" /* yacc.c:1646  */
    {printf("\ncadenaMult -> CTC_CADENA , CTC_CADENA");}
#line 2496 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 174 "simple.y" /* yacc.c:1646  */
    {printf("\ncadenaMult -> cadenaMult , CTC_CADENA");}
#line 2502 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 177 "simple.y" /* yacc.c:1646  */
    {printf("\nnombre -> IDENTIFICADOR");}
#line 2508 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 178 "simple.y" /* yacc.c:1646  */
    {printf("\nnombre -> nombre :: IDENTIFICADOR");}
#line 2514 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 180 "simple.y" /* yacc.c:1646  */
    {printf("\nnombreMultiple -> nombre , nombre");}
#line 2520 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 181 "simple.y" /* yacc.c:1646  */
    {printf("\nnombreMultiple -> nombreMultiple , nombre");}
#line 2526 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 183 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionMult -> expresionMult , expresion");}
#line 2532 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 184 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionMult -> expresion , expresion");}
#line 2538 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 186 "simple.y" /* yacc.c:1646  */
    {printf("\nclase -> CLASE ULTIMA superclase declaracionComponente FIN CLASE");}
#line 2544 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 187 "simple.y" /* yacc.c:1646  */
    {printf("\nclase -> CLASE ULTIMA superclase declaracionComponenteMultiple FIN CLASE");}
#line 2550 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 188 "simple.y" /* yacc.c:1646  */
    {printf("\nclase -> CLASE ULTIMA declaracionComponente FIN CLASE");}
#line 2556 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 189 "simple.y" /* yacc.c:1646  */
    {printf("\nclase -> CLASE ULTIMA declaracionComponenteMultiple FIN CLASE");}
#line 2562 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 190 "simple.y" /* yacc.c:1646  */
    {printf("\nclase -> CLASE superclase declaracionComponente FIN CLASE");}
#line 2568 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 191 "simple.y" /* yacc.c:1646  */
    {printf("\nclase -> CLASE superclase declaracionComponenteMultiple FIN CLASE");}
#line 2574 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 192 "simple.y" /* yacc.c:1646  */
    {printf("\nclase -> CLASE declaracionComponente FIN CLASE");}
#line 2580 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 193 "simple.y" /* yacc.c:1646  */
    {printf("\nclase -> CLASE declaracionComponenteMultiple FIN CLASE");}
#line 2586 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 196 "simple.y" /* yacc.c:1646  */
    {printf("\nsuperClase -> ( nombre )");}
#line 2592 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 197 "simple.y" /* yacc.c:1646  */
    {printf("\nsuperClase -> ( nombreMultiple )");}
#line 2598 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 199 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionComponente -> visibilidad  componente");}
#line 2604 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 200 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionComponente ->   componente");}
#line 2610 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 202 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionComponenteMultiple -> declaracionComponente  declaracionComponente");}
#line 2616 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 203 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionComponenteMultiple -> declaracionComponenteMultiple  declaracionComponente");}
#line 2622 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 205 "simple.y" /* yacc.c:1646  */
    {printf("\nvisibilidad -> PUBLICO");}
#line 2628 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 206 "simple.y" /* yacc.c:1646  */
    {printf("\nvisibilidad -> PUBLICO");}
#line 2634 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 207 "simple.y" /* yacc.c:1646  */
    {printf("\nvisibilidad -> PUBLICO");}
#line 2640 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 209 "simple.y" /* yacc.c:1646  */
    {printf("\ncomponente -> declaracionTipo");}
#line 2646 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 210 "simple.y" /* yacc.c:1646  */
    {printf("\ncomponente -> declaracionObjeto");}
#line 2652 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 211 "simple.y" /* yacc.c:1646  */
    {printf("\ncomponente -> modificador declaracionSubprograma");}
#line 2658 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 212 "simple.y" /* yacc.c:1646  */
    {printf("\ncomponente -> modificadorMult declaracionSubprograma");}
#line 2664 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 214 "simple.y" /* yacc.c:1646  */
    {printf("\nmodificadorMultiple -> modificador ',' modificador");}
#line 2670 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 215 "simple.y" /* yacc.c:1646  */
    {printf("\nmodificadorMultiple -> modificadorMultiple ',' modificador");}
#line 2676 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 217 "simple.y" /* yacc.c:1646  */
    {printf("\nmodificador -> CONSTRUCTOR");}
#line 2682 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 218 "simple.y" /* yacc.c:1646  */
    {printf("\nmodificador -> DESTRUCTOR");}
#line 2688 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 219 "simple.y" /* yacc.c:1646  */
    {printf("\nmodificador -> GENERIC");}
#line 2694 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 220 "simple.y" /* yacc.c:1646  */
    {printf("\nmodificador -> ABSTRACTO");}
#line 2700 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 221 "simple.y" /* yacc.c:1646  */
    {printf("\nmodificador -> ESPECIFICO");}
#line 2706 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 222 "simple.y" /* yacc.c:1646  */
    {printf("\nmodificador -> FINAL");}
#line 2712 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 225 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion '+' expresion");}
#line 2718 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 226 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion - expresion");}
#line 2724 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 227 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion / expresion");}
#line 2730 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 228 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion \\ expresion");}
#line 2736 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 229 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion * expresion");}
#line 2742 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 230 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion <- expresion");}
#line 2748 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 231 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion -> expresion");}
#line 2754 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 232 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion . expresion");}
#line 2760 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 233 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> [ expresion ] ");}
#line 2766 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 234 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> { expresion } ");}
#line 2772 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 235 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion :: expresion");}
#line 2778 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 236 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion < expresion");}
#line 2784 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 237 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion > expresion");}
#line 2790 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 238 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion <= expresion");}
#line 2796 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 239 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion >= expresion");}
#line 2802 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 240 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion = expresion");}
#line 2808 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 241 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion NEQ expresion");}
#line 2814 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 242 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion ~ expresion");}
#line 2820 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 243 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion AND expresion");}
#line 2826 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 244 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion OR expresion");}
#line 2832 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 245 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresionPotencia");}
#line 2838 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 247 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionPotencia -> expresionPosfija");}
#line 2844 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 248 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionPotencia -> expresionPosfija ^ expresionPotencia");}
#line 2850 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 250 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionPosfija -> expresionUnaria");}
#line 2856 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 251 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionPosfija -> expresionUnaria operadorPosfijo");}
#line 2862 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 253 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorPosfijo -> INC");}
#line 2868 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 254 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorPosfijo -> DEC");}
#line 2874 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 256 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionUnaria -> primario");}
#line 2880 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 257 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionUnaria -> '-' primario");}
#line 2886 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 260 "simple.y" /* yacc.c:1646  */
    {printf("\nprimario -> literal");}
#line 2892 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 261 "simple.y" /* yacc.c:1646  */
    {printf("\nprimario -> objeto");}
#line 2898 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 262 "simple.y" /* yacc.c:1646  */
    {printf("\nprimario -> llamada_subprograma");}
#line 2904 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 263 "simple.y" /* yacc.c:1646  */
    {printf("\nprimario -> OBJETO llamada_subprograma");}
#line 2910 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 264 "simple.y" /* yacc.c:1646  */
    {printf("\nprimario -> enumeraciones ");}
#line 2916 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 265 "simple.y" /* yacc.c:1646  */
    {printf("\nprimario -> ( expresion ) ");}
#line 2922 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 267 "simple.y" /* yacc.c:1646  */
    {printf("\nliteral -> VERDADERO");}
#line 2928 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 268 "simple.y" /* yacc.c:1646  */
    {printf("\nliteral -> FASLO");}
#line 2934 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 269 "simple.y" /* yacc.c:1646  */
    {printf("\nliteral -> CTC_ENTERA");}
#line 2940 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 270 "simple.y" /* yacc.c:1646  */
    {printf("\nliteral -> CTC_REAL");}
#line 2946 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 271 "simple.y" /* yacc.c:1646  */
    {printf("\nliteral -> CTC_CARACTER");}
#line 2952 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 272 "simple.y" /* yacc.c:1646  */
    {printf("\nliteral -> CTC_CADENA");}
#line 2958 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 276 "simple.y" /* yacc.c:1646  */
    {printf("\nobjeto -> objeto . nombre");}
#line 2964 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 277 "simple.y" /* yacc.c:1646  */
    {printf("\nobjeto -> objeto [ expresion ]");}
#line 2970 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 278 "simple.y" /* yacc.c:1646  */
    {printf("\nobjeto -> objeto [ expresionMult ]");}
#line 2976 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 279 "simple.y" /* yacc.c:1646  */
    {printf("\nobjeto -> objeto { CTC_CADENA }");}
#line 2982 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 280 "simple.y" /* yacc.c:1646  */
    {printf("\nobjeto -> objeto { cadenaMult }");}
#line 2988 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 284 "simple.y" /* yacc.c:1646  */
    {printf("\nenumeraciones -> [ expresionCondicional ]");}
#line 2994 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 285 "simple.y" /* yacc.c:1646  */
    {printf("\nenumeraciones -> [ expresionMult ]");}
#line 3000 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 286 "simple.y" /* yacc.c:1646  */
    {printf("\nenumeraciones -> [ claveValor ]");}
#line 3006 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 287 "simple.y" /* yacc.c:1646  */
    {printf("\nenumeraciones -> [ claveValorMultiple ]");}
#line 3012 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 288 "simple.y" /* yacc.c:1646  */
    {printf("\nenumeraciones -> [ campoValor ]");}
#line 3018 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 289 "simple.y" /* yacc.c:1646  */
    {printf("\nenumeraciones -> [ campoValorMultiple ]");}
#line 3024 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 292 "simple.y" /* yacc.c:1646  */
    {printf("\nclaveValorMult -> claveValor , claveValor");}
#line 3030 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 293 "simple.y" /* yacc.c:1646  */
    {printf("\nclaveValorMult -> claveValorMult , claveValor");}
#line 3036 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 296 "simple.y" /* yacc.c:1646  */
    {printf("\nclave_valor -> CTC_CADENA => expresion");}
#line 3042 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 298 "simple.y" /* yacc.c:1646  */
    {printf("\ncampoValorMult -> campo_valor , campo_valor");}
#line 3048 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 299 "simple.y" /* yacc.c:1646  */
    {printf("\ncampoValorMult -> campoValorMult , campo_valor");}
#line 3054 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 301 "simple.y" /* yacc.c:1646  */
    {printf("\ncampo_valor -> CTC_CADENA => expresion");}
#line 3060 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 303 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionCondicional -> expresion");}
#line 3066 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 304 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionCondicional -> si expresion entonces expresion");}
#line 3072 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 305 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionCondicional -> si expresion entonces expresion SINO expresion");}
#line 3078 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 308 "simple.y" /* yacc.c:1646  */
    {printf("\nrango -> expresion :: expresion");}
#line 3084 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 309 "simple.y" /* yacc.c:1646  */
    {printf("\nrango -> rango :: expresion");}
#line 3090 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 312 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaIteracion -> PARA IDENTIFICADOR EN expresion");}
#line 3096 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 313 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaIteracion -> PARA IDENTIFICADOR EN ':' especifiacionTipo EN expresion");}
#line 3102 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 315 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaIteracion -> REPETIR IDENTIFICADOR EN RANGO");}
#line 3108 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 316 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaIteracion -> REPETIR IDENTIFICADOR ':' especificacionTipo EN rango");}
#line 3114 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 318 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaIteracion -> REPETIR IDENTIFICADOR EN RANGO DESCENDENTE");}
#line 3120 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 319 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaIteracion -> REPETIR IDENTIFICADOR ':' especificacionTipo EN RANGO DESCENDENTE");}
#line 3126 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 321 "simple.y" /* yacc.c:1646  */
    {printf("\nMIENTRAS expresion");}
#line 3132 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 324 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionAsignacion");}
#line 3138 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 325 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionDevolver");}
#line 3144 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 326 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionLlamada");}
#line 3150 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 327 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionSi");}
#line 3156 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 328 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionCasos");}
#line 3162 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 329 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionBucle");}
#line 3168 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 330 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionInterrupcion");}
#line 3174 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 331 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionLanzamientoExcepcion");}
#line 3180 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 332 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionDeCapturaDeExcepcion");}
#line 3186 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 333 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> ';'");}
#line 3192 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 336 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionAsignacion -> objeto op_asignacion expresion ';'");}
#line 3198 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 339 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIGNACION");}
#line 3204 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 340 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIG_SUMA");}
#line 3210 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 341 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIG_RESTO");}
#line 3216 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 342 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIG_MULT");}
#line 3222 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 343 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIG_DIV");}
#line 3228 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 344 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIG_RESTO");}
#line 3234 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 345 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIG_POT");}
#line 3240 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 346 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIG_DESPI");}
#line 3246 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 347 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIG_DESPD");}
#line 3252 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 350 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionDevolver -> DEVOLVER ';'");}
#line 3258 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 351 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionDevolver -> DEVOLVER expresion ';'");}
#line 3264 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 354 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionLlamada -> llamadaSubprograma ';'");}
#line 3270 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 357 "simple.y" /* yacc.c:1646  */
    {printf("\ndefinicionParametro -> expresion");}
#line 3276 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 358 "simple.y" /* yacc.c:1646  */
    {printf("\ndefinicionParametro -> IDENTIFICADOR ASIGNACION expresion");}
#line 3282 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 361 "simple.y" /* yacc.c:1646  */
    {printf("\ndefinicionParametroMultiple -> definicionParametro ',' definicionParametro");}
#line 3288 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 362 "simple.y" /* yacc.c:1646  */
    {printf("\ndefinicionParametroMultiple -> definicionParametroMultiple ',' definicionParametro");}
#line 3294 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 366 "simple.y" /* yacc.c:1646  */
    {printf("\nllamadaSubprograma -> nombre '(' ')'");}
#line 3300 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 367 "simple.y" /* yacc.c:1646  */
    {printf("\nllamadaSubprograma -> nombre '(' definicionParametro ')'");}
#line 3306 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 368 "simple.y" /* yacc.c:1646  */
    {printf("\nllamadaSubprograma -> nombre '(' definicionParametroMultiple ')'");}
#line 3312 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 371 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionSi -> SI expresion ENTONCES instruccion FIN SI");}
#line 3318 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 372 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionSi -> SI expresion ENTONCES instruccionMultiple FIN SI");}
#line 3324 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 373 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionSi -> SI expresion ENTONCES instruccion SINO instruccion FIN SI");}
#line 3330 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 374 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionSi -> SI expresion ENTONCES instruccion SINO instruccionMultiple FIN SI");}
#line 3336 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 375 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionSi -> SI expresion ENTONCES instruccionMultiple SINO instruccion");}
#line 3342 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 376 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionSi -> SI expresion ENTONCES instruccionMultiple SINO instruccionMultiple");}
#line 3348 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 379 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracion -> declaracionObjeto");}
#line 3354 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 380 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracion -> declaracionTipo");}
#line 3360 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 381 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracion -> declaracionSubprograma");}
#line 3366 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 384 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionMultiple -> declaracion declaracion");}
#line 3372 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 385 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionMultiple -> declaracionMultiple declaracion");}
#line 3378 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 388 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionObjeto -> IDENTIFICADOR ';' CONSTANTE especificacionTipo ASIGNACION expresion ';'");}
#line 3384 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 389 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionObjeto -> IDENTIFICADOR ';' CONSTANTE especificacionTipo ASIGNACION expresion ';'");}
#line 3390 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 390 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionObjeto -> IDENTIFICADOR ';' especificacionTipo ';'");}
#line 3396 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 391 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionObjeto -> IDENTIFICADOR ';' especificacionTipo ASIGNACION expresion ';'");}
#line 3402 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 392 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionObjeto -> IDENTIFICADOR ';' especificacionTipo ASIGNACION expresionMult ';'");}
#line 3408 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 393 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionObjeto -> identificadorMultiple ';' especificacionTipo ';'");}
#line 3414 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 394 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionObjeto -> identificadorMultiple ';' especificacionTipo ASIGNACION expresion ';'");}
#line 3420 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 395 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionObjeto -> identificadorMultiple ';' especificacionTipo ASIGNACION expresionMult ';'");}
#line 3426 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 398 "simple.y" /* yacc.c:1646  */
    {printf("\nespecificacionTipo -> nombre");}
#line 3432 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 399 "simple.y" /* yacc.c:1646  */
    {printf("\nespecificacionTipo -> tipoNoEstructurado");}
#line 3438 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 402 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionTipo -> TIPO IDENTIFICADOR ES tipoNoEstructurado ';'");}
#line 3444 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 403 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionTipo -> TIPO IDENTIFICADOR ES tipoEstructurado ';'");}
#line 3450 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 406 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoNoEstructurado -> tipoEscalar");}
#line 3456 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 407 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoNoEstructurado -> tipoTabla");}
#line 3462 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 408 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoNoEstructurado -> tipoDiccionario");}
#line 3468 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 411 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEscalar -> tipoBasico");}
#line 3474 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 412 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEscalar -> SIGNO tipoBasico");}
#line 3480 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 413 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEscalar -> SIGNO tipoBasico longitud");}
#line 3486 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 414 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEscalar -> SIGNO tipoBasico RANGO rango");}
#line 3492 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 415 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEscalar -> SIGNO tipoBasico longitud RANGO rango");}
#line 3498 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 416 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEscalar -> tipoBasico longitud");}
#line 3504 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 417 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEscalar -> tipoBasico RANGO rango");}
#line 3510 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 418 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEscalar -> tipoBasico longitud RANGO rango");}
#line 3516 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 421 "simple.y" /* yacc.c:1646  */
    {printf("\nlongitud -> CORTO");}
#line 3522 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 422 "simple.y" /* yacc.c:1646  */
    {printf("\nlongitud -> LARGO");}
#line 3528 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 425 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoBasico -> BOOLEANO");}
#line 3534 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 426 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoBasico -> CARACTER");}
#line 3540 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 427 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoBasico -> ENTERO");}
#line 3546 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 428 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoBasico -> REAL");}
#line 3552 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 431 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoTabla -> TABLA '(' expresion '..' expresion ')' DE especificacionTipo");}
#line 3558 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 432 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoTabla -> LISTA DE especificacionTipo");}
#line 3564 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 435 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoDiccionario -> DICCIONARIO DE especificacionTipo");}
#line 3570 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 438 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEstructurado -> tipoRegistro");}
#line 3576 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 439 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEstructurado -> tipoEnumerado");}
#line 3582 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 440 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEstructurado -> clase");}
#line 3588 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 443 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoRegistro -> REGISTRO campo FIN REGISTRO");}
#line 3594 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 444 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoRegistro -> REGISTRO campoMultiple FIN REGISTRO");}
#line 3600 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 447 "simple.y" /* yacc.c:1646  */
    {printf("\ncampo -> IDENTIFICADOR ':' especificacionTipo ';'");}
#line 3606 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 448 "simple.y" /* yacc.c:1646  */
    {printf("\ncampo -> IDENTIFICADOR ':' especificacionTipo ASIGNACION expresion ';'");}
#line 3612 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 449 "simple.y" /* yacc.c:1646  */
    {printf("\ncampo -> identificadorMultiple ':' especificacionTipo ';'");}
#line 3618 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 450 "simple.y" /* yacc.c:1646  */
    {printf("\ncampo -> identificadorMultiple ':' especificacionTipo ASIGNACION expresion ';'");}
#line 3624 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 453 "simple.y" /* yacc.c:1646  */
    {printf("\ncampoMultiple -> campo campo");}
#line 3630 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 454 "simple.y" /* yacc.c:1646  */
    {printf("\ncampoMultiple -> campoMultiple campo");}
#line 3636 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 457 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEnumerado -> ENUMERACION elementoEnumeracion FIN ENUMERACION");}
#line 3642 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 458 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEnumerado -> ENUMERACION elementoEnumeracionMultiple FIN ENUMERACION");}
#line 3648 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 459 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEnumerado -> ENUMERACION DE tipoEscalar elementoEnumeracion FIN ENUMERACION");}
#line 3654 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 460 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEnumerado -> ENUMERACION DE tipoEscalar elementoEnumeracionMultiple FIN ENUMERACION");}
#line 3660 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 463 "simple.y" /* yacc.c:1646  */
    {printf("\nelementoEnumeracion -> IDENTIFICADOR");}
#line 3666 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 464 "simple.y" /* yacc.c:1646  */
    {printf("\nelementoEnumeracion -> IDENTIFICADOR ASIGNACION expresion");}
#line 3672 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 467 "simple.y" /* yacc.c:1646  */
    {printf("\nelementoEnumeracionMultiple -> elementoEnumeracion ',' elementoEnumeracion");}
#line 3678 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 468 "simple.y" /* yacc.c:1646  */
    {printf("\nelementoEnumeracionMultiple -> elementoEnumeracionMultiple ',' elementoEnumeracion");}
#line 3684 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 471 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionSubprograma -> SUBPROGRAMA cabeceraSubprograma cuerpoSubprograma SUBPROGRAMA");}
#line 3690 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 474 "simple.y" /* yacc.c:1646  */
    {printf("cabeceraSubprograma -> IDENTIFICADOR");}
#line 3696 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 475 "simple.y" /* yacc.c:1646  */
    {printf("cabeceraSubprograma -> IDENTIFICADOR parametrizacion");}
#line 3702 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 476 "simple.y" /* yacc.c:1646  */
    {printf("cabeceraSubprograma -> IDENTIFICADOR tipoResultado");}
#line 3708 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 477 "simple.y" /* yacc.c:1646  */
    {printf("cabeceraSubprograma -> IDENTIFICADOR parametrizacion tipoResultado");}
#line 3714 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 480 "simple.y" /* yacc.c:1646  */
    {printf("parametrizacion -> '(' declaracionParametros ')'");}
#line 3720 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 481 "simple.y" /* yacc.c:1646  */
    {printf("parametrizacion -> '(' declaracionParametrosMultiple ')'");}
#line 3726 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 484 "simple.y" /* yacc.c:1646  */
    {printf("declaracionParametros -> IDENTIFICADOR ':' especificacionTipo");}
#line 3732 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 485 "simple.y" /* yacc.c:1646  */
    {printf("declaracionParametros -> IDENTIFICADOR ':' modo especificacionTipo");}
#line 3738 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 486 "simple.y" /* yacc.c:1646  */
    {printf("declaracionParametros -> IDENTIFICADOR ':' especificacionTipo ASIGNACION expresion");}
#line 3744 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 487 "simple.y" /* yacc.c:1646  */
    {printf("declaracionParametros -> IDENTIFICADOR ':' modo especificacionTipo ASIGNACION expresion");}
#line 3750 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 488 "simple.y" /* yacc.c:1646  */
    {printf("declaracionParametros -> identificadorMultiple ':' especificacionTipo");}
#line 3756 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 489 "simple.y" /* yacc.c:1646  */
    {printf("declaracionParametros -> identificadorMultiple ':' modo especificacionTipo");}
#line 3762 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 490 "simple.y" /* yacc.c:1646  */
    {printf("declaracionParametros -> identificadorMultiple ':' especificacionTipo ASIGNACION expresion");}
#line 3768 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 491 "simple.y" /* yacc.c:1646  */
    {printf("declaracionParametros -> identificadorMultiple ':' modo especificacionTipo ASIGNACION expresion");}
#line 3774 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 494 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionParametrosMultiple -> declaracionParametros ';' declaracionParametros ';'");}
#line 3780 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 495 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionParametrosMultiple -> declaracionParametrosMultiple declaracionParametros ';'");}
#line 3786 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 498 "simple.y" /* yacc.c:1646  */
    {printf("\nmodo -> VALOR");}
#line 3792 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 499 "simple.y" /* yacc.c:1646  */
    {printf("\nmodo -> REFERENCIA");}
#line 3798 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 502 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoResultado -> DEVOLVER especificacionTipo");}
#line 3804 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 505 "simple.y" /* yacc.c:1646  */
    {printf("\ncuerpoSubprograma -> PRINCIPIO instruccion FIN");}
#line 3810 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 506 "simple.y" /* yacc.c:1646  */
    {printf("\ncuerpoSubprograma -> PRINCIPIO instruccionMultiple FIN");}
#line 3816 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 507 "simple.y" /* yacc.c:1646  */
    {printf("\ncuerpoSubprograma -> PRINCIPIO declaracion instruccion FIN");}
#line 3822 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 508 "simple.y" /* yacc.c:1646  */
    {printf("\ncuerpoSubprograma -> PRINCIPIO declaracion instruccionMultiple FIN");}
#line 3828 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 509 "simple.y" /* yacc.c:1646  */
    {printf("\ncuerpoSubprograma -> PRINCIPIO declaracionMultiple instruccion FIN");}
#line 3834 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 510 "simple.y" /* yacc.c:1646  */
    {printf("\ncuerpoSubprograma -> PRINCIPIO declaracionMultiple instruccionMultiple FIN");}
#line 3840 "simple.tab.c" /* yacc.c:1646  */
    break;


#line 3844 "simple.tab.c" /* yacc.c:1646  */
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
#line 516 "simple.y" /* yacc.c:1906  */


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
