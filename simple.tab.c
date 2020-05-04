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
    NEW = 344,
    MENOS_UNI = 345
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

#line 214 "simple.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SIMPLE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 231 "simple.tab.c" /* yacc.c:358  */

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
#define YYLAST   2421

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  111
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  91
/* YYNRULES -- Number of rules.  */
#define YYNRULES  296
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  612

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   345

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
      94,    95,   103,   101,   110,   102,   109,   104,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    89,   108,
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
      85,    86,    87,    88,    99,   107
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    60,    60,    61,    64,    67,    68,    69,    72,    73,
      74,    75,    77,    78,    81,    83,    84,    86,    87,    88,
      90,    91,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   116,   117,   120,   121,   123,   124,   127,
     128,   130,   131,   133,   134,   136,   137,   140,   141,   142,
     143,   144,   145,   147,   148,   149,   150,   151,   152,   155,
     156,   157,   158,   159,   160,   165,   166,   168,   169,   170,
     171,   175,   176,   177,   180,   181,   184,   187,   188,   191,
     192,   194,   195,   197,   198,   200,   201,   203,   204,   205,
     207,   208,   210,   211,   212,   213,   216,   217,   219,   220,
     222,   223,   224,   227,   228,   231,   232,   233,   235,   236,
     238,   239,   242,   243,   246,   247,   250,   251,   252,   254,
     255,   258,   259,   261,   262,   263,   264,   265,   266,   267,
     268,   271,   272,   274,   275,   277,   278,   280,   281,   282,
     284,   285,   286,   287,   288,   290,   291,   293,   294,   295,
     296,   297,   298,   303,   304,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   319,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   333,   334,   337,   340,   341,
     344,   345,   349,   350,   351,   354,   355,   356,   357,   358,
     359,   362,   363,   366,   367,   370,   371,   372,   375,   376,
     377,   378,   379,   380,   381,   382,   385,   386,   389,   390,
     391,   392,   395,   396,   399,   402,   403,   404,   407,   408,
     411,   412,   413,   414,   417,   418,   421,   422,   423,   424,
     427,   428,   431,   432,   435,   438,   439,   440,   441,   444,
     445,   448,   449,   450,   451,   452,   453,   454,   455,   458,
     459,   462,   463,   466,   469,   470,   471,   472,   473,   474,
     477,   478,   479,   480,   481,   482,   483,   484,   485,   486,
     487,   488,   492,   493,   494,   495,   496,   497,   500,   501,
     504,   506,   507,   509,   511,   512,   513
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
  "'\\\\'", "'^'", "MENOS_UNI", "';'", "'.'", "','", "$accept", "programa",
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
  "claveValorMult", "claveValor", "campoValorMult", "campoValor",
  "expresionCondicional", YY_NULLPTR
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
      61,    43,    45,    42,    47,    92,    94,   345,    59,    46,
      44
};
# endif

#define YYPACT_NINF -337

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-337)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -3,   -24,    57,   146,  -337,  -337,    66,    70,  -337,   123,
     216,   131,   119,   206,   227,   239,   -55,   123,   123,   336,
     336,   336,  -337,   -52,  -337,  -337,  -337,  1190,  -337,   216,
     216,   215,   236,  -337,   119,  -337,    24,   255,   119,     2,
     303,   285,  1713,   259,  -337,   336,   336,   336,  -337,   336,
     336,   336,  -337,  -337,   336,   336,  1714,   275,  1378,  1294,
     119,  1378,   278,  1190,   304,   321,  1378,   258,   277,  -337,
     -41,  2211,  -337,  -337,   363,  -337,  -337,  1190,  -337,   762,
    -337,  -337,  -337,   274,  -337,  -337,  -337,  1190,  1190,    -9,
     340,  -337,   119,  -337,   119,    -8,   163,   356,   419,  -337,
     390,  1733,  -337,  -337,   163,   437,  -337,   446,  -337,    23,
     368,   399,   -13,  -337,  -337,   138,  -337,  -337,  -337,   336,
     336,   336,   336,   163,    16,  -337,  -337,  1378,  -337,  -337,
    -337,  -337,  -337,  1384,  1378,  1378,  1448,   544,  -337,   364,
     210,  -337,  -337,    80,  -337,  -337,    75,  -337,  1912,   -27,
    2182,   450,   690,   690,    -4,  1378,   407,   365,  1236,   367,
      75,  1328,  -337,  -337,  -337,  -337,  -337,  -337,  -337,  -337,
    -337,   413,  1378,   119,  1378,  -337,  -337,   794,   816,  -337,
    -337,  -337,   848,   898,   924,   973,   416,  -337,   399,   399,
     423,  -337,  -337,    53,   125,   251,   269,  -337,  -337,  1223,
       3,   428,  -337,   386,   387,  -337,  -337,   430,   163,   163,
     153,  1378,  1378,  -337,  -337,  -337,  1378,   451,   431,  1378,
    -337,  1274,   435,   439,  1927,   -60,    65,   124,   176,  1734,
      58,  1964,   314,  1378,  -337,   495,  1378,  1378,  1378,  1378,
    1378,  1378,  1378,  1378,  1378,  1378,  1378,  1378,  1378,  1378,
    1378,  1378,  1378,  1378,  1426,  -337,  -337,  -337,   -41,  -337,
     418,  -337,  -337,    12,  1002,  1190,   479,   487,   487,  -337,
    -337,   492,   493,   475,   163,  2182,   258,  -337,  1190,  -337,
    1190,   456,  -337,  2182,   156,   166,   187,   203,  1771,    69,
     399,  1978,   522,   523,  -337,  -337,  -337,  -337,   284,   301,
     421,   438,   438,  -337,   356,  -337,   356,  -337,  -337,  -337,
    -337,  -337,  -337,  -337,  -337,  -337,  1235,   119,  -337,  1683,
    1520,  1530,   957,  -337,   -43,   -37,  -337,  -337,   248,   461,
     -22,   -21,   140,   155,    38,    89,  -337,  -337,  1378,  -337,
    -337,  1378,   485,  1809,  2015,  1823,   465,  1378,  1378,  2029,
    1378,  1378,  1378,  -337,  -337,   472,  -337,   472,  -337,   474,
    -337,   474,  -337,  1378,  -337,  1378,  -337,   435,   439,  1860,
     452,   286,   290,  2182,   581,   247,  2312,  2312,  2182,  2230,
    2266,  2276,  2312,  2312,  2312,   128,   128,   -53,   -53,   -53,
    2182,  -337,  -337,   163,  2182,   119,  1190,  1190,  1190,  1190,
    -337,  -337,  -337,  -337,  -337,   496,   498,   525,   529,   441,
     302,   712,  1024,  1063,  1378,  -337,  1432,  -337,  1432,  -337,
     486,  -337,   488,  -337,  -337,  -337,  -337,  -337,  -337,  -337,
    -337,  -337,  -337,   483,   163,   500,   163,  -337,   447,  1683,
    1562,  1572,   -59,   231,  1604,  1614,   548,  -337,   554,  -337,
    -337,   473,  -337,   473,  -337,   501,  1378,   541,   501,   546,
     501,   163,   163,   521,  -337,   524,  -337,  2066,   465,  1378,
    1378,  -337,  1378,  1378,   465,  2080,  -337,  1719,  2182,  2182,
    -337,  -337,  -337,  -337,  2182,  2182,  -337,  1875,   502,   489,
     452,   569,  -337,   570,  -337,   562,   -36,  -337,  -337,  -337,
    1362,  -337,   531,  1190,   533,  1190,   577,   582,  2182,  -337,
    -337,  -337,  -337,  1378,   518,  1378,   519,  -337,  1646,  1656,
     585,   586,  -337,  -337,   587,   591,  -337,  -337,  -337,  -337,
     -20,   -16,  2182,  -337,  -337,  -337,  -337,    39,    40,  -337,
    -337,  -337,   465,  2117,  2182,  2182,  -337,  1378,  1378,  1190,
    -337,   511,  -337,  -337,  1378,  1190,   575,   465,  -337,  1085,
    1114,  -337,  1136,  1168,  -337,  -337,  2182,  1378,  2182,  1378,
     595,   599,  -337,  -337,  -337,  -337,   589,   590,  1378,  -337,
    1378,  -337,   594,  2182,  2182,  1190,  1190,  -337,  2182,  1190,
    1190,  -337,   556,   561,   563,   564,  2182,  2182,  -337,  -337,
    -337,  -337,  2131,  2168,   163,  -337,  -337,  -337,  -337,  -337,
    -337,  -337
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     2,     3,     0,     0,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   281,
     280,     0,    17,     0,    18,    19,    14,     0,     4,     0,
       0,     0,     0,     7,     0,    45,     0,     0,     0,   245,
       0,     0,     0,     0,    12,   277,   276,     0,    13,   273,
     272,     0,    16,    15,   279,   278,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,     0,    85,    45,   174,
      69,     0,   171,   172,     0,   169,   170,     0,   173,     0,
     165,   166,   167,     0,   168,     6,     5,     0,     0,     0,
       0,    21,     0,    20,     0,     0,     0,     0,   246,   247,
       0,     0,   218,   219,     0,     0,   220,     0,   221,     0,
       0,   201,     0,   202,   205,   208,   206,   207,   129,   275,
     274,   271,   270,     0,     0,   130,    64,     0,    63,    67,
      68,    65,    66,     0,     0,     0,     0,     0,    42,    49,
      51,    55,    57,    58,    59,    61,     0,   185,     0,     0,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   176,   177,   181,   179,   180,   178,   182,   183,
     184,     0,     0,     0,     0,   265,    88,     0,     0,   264,
      87,   187,     0,     0,     0,     0,     0,    46,    47,    48,
       0,     9,   263,     0,     0,     0,     0,   248,   244,     0,
       0,     0,   227,     0,     0,   225,   226,     0,     0,     0,
     209,     0,     0,    79,   216,   217,     0,   213,     0,     0,
      80,     0,    68,    45,     0,     0,     0,     0,     0,   294,
       0,     0,     0,     0,    56,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    53,    54,    52,     0,    60,
       0,   186,    86,     0,     0,     0,   126,     0,     0,   115,
     128,     0,     0,     0,     0,    84,    85,    83,     0,    81,
       0,    45,   192,   188,     0,     0,     0,     0,     0,     0,
      70,     0,     0,     0,   269,   268,   267,   266,     0,     0,
       0,     0,     0,   249,     0,   250,     0,   160,   157,   158,
     161,   162,   159,   148,   149,   147,     0,     0,   151,     0,
       0,     0,     0,   144,     0,     0,   150,   152,     0,   240,
       0,     0,     0,     0,     0,     0,   203,   204,     0,   224,
     223,     0,   210,     0,     0,     0,   214,     0,     0,     0,
       0,     0,     0,    31,   285,     0,   284,     0,   287,     0,
     286,     0,    30,     0,   283,     0,    62,     0,     0,   294,
       0,     0,     0,    32,    27,    28,    35,    36,    38,    40,
      41,    39,    33,    34,    37,    22,    23,    26,    24,    25,
      29,    50,   282,     0,   106,     0,   123,   122,   125,   124,
     127,   120,   116,   121,   117,     0,     0,   108,     0,     0,
       0,     0,     0,     0,     0,   193,     0,   194,     0,    73,
       0,    74,     0,    71,    72,   175,   105,   104,    10,    11,
       8,   262,   261,   251,     0,   255,     0,   259,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   145,     0,   146,
     143,     0,   154,     0,   153,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   234,     0,   235,     0,   211,     0,
       0,    77,     0,     0,   215,     0,    78,   295,   290,   293,
     289,   288,   292,   291,   132,   131,    99,    97,     0,    96,
       0,     0,    92,     0,    91,     0,     0,   114,   113,   110,
       0,    82,     0,     0,     0,     0,     0,     0,   189,   190,
     191,    43,    44,     0,   252,     0,   256,   260,     0,     0,
       0,     0,   141,   142,     0,     0,   139,   140,   156,   155,
       0,     0,   241,   236,   242,   237,   243,     0,     0,   228,
     229,    75,   212,     0,   163,   164,    76,     0,     0,     0,
     100,    95,    90,    89,     0,     0,     0,   109,   196,     0,
       0,   195,     0,     0,   103,   102,   253,     0,   257,     0,
       0,     0,   135,   136,   137,   138,     0,     0,     0,   230,
       0,   232,     0,   296,    98,    94,    93,   101,   107,   119,
     118,   111,     0,     0,     0,     0,   254,   258,   133,   134,
     238,   239,     0,     0,     0,   200,   199,   198,   197,   231,
     233,   222
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -337,  -337,  -337,  -337,   366,   605,  -337,   270,   671,   381,
     424,  -337,   -12,   308,   372,  -337,  -337,  -337,   494,  -337,
      42,  -129,  -337,   -63,  -337,   -42,  -337,  -337,    41,  -337,
     143,  -337,  -337,   185,  -337,  -337,   159,  -337,   197,   371,
     476,   -88,   462,  -337,   322,  -196,  -303,  -337,   317,  -337,
     -19,  -336,    20,  -337,  -337,  -337,  -337,    19,  -337,   -25,
    -337,   -32,  -112,   549,   323,   442,   545,  -337,  -337,  -337,
    -337,   132,  -337,  -337,   -35,   200,  -181,  -337,  -337,   139,
    -337,   376,   560,   172,  -337,  -337,  -337,    91,  -337,    98,
    -337
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    28,    44,    18,     5,    31,    52,    21,
     345,   287,    70,    37,   138,   139,   257,   140,   141,   142,
     143,    22,    72,   157,    73,    74,    75,   371,   372,   488,
     489,   490,    76,    77,    78,   266,   267,   268,   269,   270,
     271,    23,   230,   202,   319,   447,   321,   322,   323,   324,
     325,   346,   176,    80,   174,    81,    82,   284,   285,   144,
      84,   112,    24,   113,   114,   217,   115,   116,   117,   204,
     205,   334,   335,   206,   330,   331,    25,    40,    98,   195,
     196,   434,    99,    33,    26,   145,   225,   226,   227,   228,
     146
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      36,   190,    83,   320,   159,   468,   457,   459,   576,   194,
      90,   474,   577,   441,    14,   273,   445,   328,   327,    96,
      14,   152,    89,   186,   124,   241,    95,   102,    90,   103,
     111,   354,     1,    90,    42,   177,   522,    56,    83,   126,
       2,     6,    90,   106,   111,   182,   184,    79,   149,    83,
     355,    92,    83,   161,    83,    43,   253,   212,    57,   555,
      90,    90,    83,    83,   192,   127,   463,   451,   329,    71,
     318,   108,   207,   453,   128,   129,   130,    35,   131,   132,
     188,   262,   189,   153,   111,   274,   219,   326,   458,   460,
     458,   218,   111,    90,   460,   213,    97,   178,   299,   180,
     191,   393,   133,   332,   134,    71,   135,   183,   185,   578,
     580,   111,    61,   333,   136,    62,    71,   465,   259,    71,
     440,    71,     7,   444,   220,   449,    64,    83,    83,    71,
      71,   258,    91,   542,    92,   327,   519,    11,   327,   327,
     327,   327,   301,   452,   454,    35,     8,   579,   581,    12,
     214,   364,    83,    83,   332,    13,   356,    83,    83,    83,
      83,   290,   424,    43,   557,   214,    34,   102,   365,   103,
     171,   215,   172,   180,     9,   357,   339,   340,    10,   365,
      14,   105,    15,   106,    35,   216,   215,   318,    16,   173,
     318,   318,   318,   318,    71,    71,   111,   111,   180,   107,
     341,    85,    86,   180,   326,   180,   241,   326,   326,   326,
     326,   108,   100,   409,   302,   358,   194,   109,   194,    71,
      71,   110,   396,   398,    71,    71,    71,    71,    35,   461,
      11,   250,   251,   252,   359,    57,   410,   253,   412,    83,
      83,    38,   408,   518,   462,   449,   333,   333,    13,   449,
      43,   415,   102,    83,   103,    83,    87,    27,   327,   327,
     327,   417,   111,   327,   327,    57,   416,   360,   106,   433,
     435,   155,    14,    14,    15,    15,   418,    88,   419,    19,
      16,    16,   255,   256,   397,   399,   361,    45,    49,   111,
     111,    54,    39,    14,   421,    15,   108,   420,   411,   370,
     413,    16,   109,   370,    41,   442,    71,    71,   101,    58,
     318,   318,   318,   422,   491,   318,   318,   119,   493,    59,
      71,   121,    71,   449,   118,   241,   523,   326,   326,   326,
     502,   260,   326,   326,   155,   156,    60,   327,   327,    61,
     125,    94,    62,   151,    27,   280,   303,    63,   248,   249,
     250,   251,   252,    64,    65,    66,   253,    67,   503,   304,
      14,   495,    15,    93,   305,    94,   160,    68,    16,   154,
      58,    83,    83,    83,    83,    17,    29,   306,   367,   368,
      59,   111,   181,   496,    48,    83,    83,    83,    83,   318,
     318,   175,   428,    14,    43,    15,    48,    60,    47,    51,
      61,    16,   514,    62,   516,   187,   326,   326,    63,   429,
      69,    57,   492,   494,    64,    65,    66,   180,    67,   180,
     530,   193,   111,   534,   111,   536,   401,   403,    68,   537,
     538,   180,   528,   180,   529,   509,    96,   510,    71,    71,
      71,    71,   102,   437,   103,   438,   480,   198,   481,   111,
     111,   208,    71,    71,    71,    71,   105,   482,   106,   483,
     209,   559,   211,   562,   402,   404,   464,   466,    90,   263,
     254,    69,   276,   277,   107,   279,   307,   286,    83,   126,
      83,   298,   137,   148,   308,   150,   108,   431,   300,   309,
     158,   486,   109,   332,   336,   337,   110,   310,   347,   432,
     338,   348,   311,    35,   312,   127,   351,   585,   370,   265,
     352,   392,   264,   589,   128,   129,   130,    35,   131,   132,
     405,   406,   407,   560,    83,   563,   414,   426,   427,   430,
      83,   456,   469,   473,    83,    83,   367,    83,    83,   368,
     499,   497,   133,   498,   134,    71,   135,    71,   500,   501,
     511,   221,   512,   513,   136,   517,   526,   224,   229,   231,
      83,    83,   527,   533,    83,    83,   329,   235,   535,   586,
     515,   539,   611,   549,   540,   590,   552,   553,   550,   275,
     180,   554,   564,   180,   558,   283,   561,   565,   567,   569,
     591,    71,   111,   572,   573,   574,   288,    71,   291,   575,
     587,    71,    71,   598,    71,    71,   180,   599,   604,   605,
     180,   600,   601,   236,   606,    30,   607,   608,   237,   238,
     239,   240,   241,   242,   243,   443,   391,    71,    71,   272,
     234,    71,    71,   551,   289,   343,   344,   400,   439,   450,
     244,   245,   246,   349,   247,   248,   249,   250,   251,   252,
     203,   455,   342,   253,   210,   531,   238,   369,   197,   241,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   436,     0,
      20,    32,   248,   249,   250,   251,   252,   394,    46,    50,
     253,    53,    55,     0,     0,     0,     0,    58,     0,     0,
      32,    32,     0,    53,     0,     0,     0,    59,     0,     0,
       0,    32,     0,     0,     0,   264,     0,    53,   120,    58,
     265,    53,   122,     0,    60,     0,    53,    61,     0,    59,
      62,     0,     0,     0,     0,    63,     0,     0,     0,     0,
     504,    64,    65,    66,     0,    67,    60,     0,     0,    61,
       0,     0,    62,     0,     0,    68,     0,    63,     0,     0,
       0,     0,   467,    64,    65,    66,     0,    67,   505,    58,
       0,     0,   475,     0,   477,   478,   479,    68,     0,    59,
       0,     0,     0,     0,     0,     0,     0,   484,     0,   485,
     179,    53,     0,    53,   487,     0,    60,     0,    69,    61,
       0,    58,    62,     0,     0,     0,     0,    63,     0,     0,
       0,    59,     0,    64,    65,    66,     0,    67,     0,     0,
      69,     0,   292,    58,     0,     0,     0,    68,    60,     0,
       0,    61,     0,    59,    62,     0,     0,     0,   508,    63,
     283,     0,   283,     0,   293,    64,    65,    66,     0,    67,
      60,     0,     0,    61,     0,    58,    62,     0,     0,    68,
       0,    63,     0,     0,     0,    59,     0,    64,    65,    66,
      69,    67,     0,     0,     0,     0,   294,     0,     0,     0,
     532,    68,    60,     0,     0,    61,     0,     0,    62,     0,
       0,     0,     0,    63,   543,     0,   544,   545,     0,    64,
      65,    66,    69,    67,     0,    58,     0,     0,     0,     0,
       0,     0,     0,    68,   487,    59,     0,     0,     0,     0,
       0,     0,     0,     0,    69,     0,   295,     0,     0,     0,
       0,    58,    60,     0,     0,    61,     0,   566,    62,   568,
       0,    59,     0,    63,     0,     0,     0,     0,     0,    64,
      65,    66,   296,    67,     0,     0,    69,     0,    60,     0,
     307,    61,     0,    68,    62,     0,     0,     0,   308,    63,
       0,   583,   584,   309,     0,    64,    65,    66,   588,    67,
      58,   310,     0,     0,     0,     0,   311,     0,   312,    68,
      59,   596,     0,   597,     0,     0,     0,     0,     0,     0,
       0,   297,   602,     0,   603,     0,    69,    60,     0,    58,
      61,     0,     0,    62,    14,     0,    15,     0,    63,    59,
       0,     0,    16,     0,    64,    65,    66,     0,    67,     0,
       0,    58,    69,     0,     0,     0,    60,     0,    68,    61,
       0,    59,    62,     0,     0,     0,     0,    63,     0,     0,
       0,     0,   506,    64,    65,    66,     0,    67,    60,     0,
       0,    61,     0,     0,    62,     0,     0,    68,     0,    63,
      58,     0,     0,     0,     0,    64,    65,    66,     0,    67,
      59,    69,     0,     0,     0,     0,     0,     0,     0,    68,
       0,   507,    58,     0,     0,     0,   395,    60,     0,     0,
      61,     0,    59,    62,     0,     0,     0,     0,    63,     0,
      69,     0,     0,   592,    64,    65,    66,     0,    67,    60,
       0,    58,    61,     0,     0,    62,     0,     0,    68,     0,
      63,    59,    69,     0,     0,     0,    64,    65,    66,     0,
      67,     0,   593,    58,     0,     0,     0,     0,    60,     0,
      68,    61,     0,    59,    62,     0,     0,     0,     0,    63,
       0,     0,     0,     0,   594,    64,    65,    66,     0,    67,
      60,    69,     0,    61,     0,    58,    62,     0,     0,    68,
       0,    63,     0,     0,     0,    59,     0,    64,    65,    66,
       0,    67,     0,    69,     0,     0,   595,    58,     0,     0,
       0,    68,    60,     0,     0,    61,     0,    59,    62,     0,
       0,     0,     0,    63,     0,     0,     0,     0,     0,    64,
      65,    66,    69,    67,    60,     0,   307,    61,     0,     0,
      62,     0,     0,    68,   308,    63,     0,     0,   307,   309,
       0,    64,    65,    66,    69,    67,   308,   310,     0,     0,
       0,   309,   311,     0,   312,    68,     0,   278,     0,   310,
       0,     0,     0,     0,   311,   313,   312,   314,     0,   315,
       0,     0,     0,     0,     0,     0,    69,   313,     0,   314,
      14,   315,    15,   316,     0,     0,     0,     0,    16,     0,
       0,     0,    14,     0,    15,   350,     0,     0,    69,     0,
      16,     0,     0,     0,     0,   236,     0,     0,     0,     0,
     237,   238,   239,   240,   241,   242,   243,   317,     0,     0,
       0,   126,     0,     0,     0,     0,     0,     0,     0,   317,
       0,     0,   244,   245,   246,     0,   247,   248,   249,   250,
     251,   252,     0,   236,     0,   253,     0,   127,   237,   238,
     239,   240,   241,   242,   243,   126,   128,   129,   130,    35,
     131,   132,     0,     0,     0,     0,     0,     0,     0,     0,
     244,   245,   246,     0,   247,   248,   249,   250,   251,   252,
       0,   127,     0,   253,   133,     0,   134,     0,   135,   126,
     128,   129,   130,   281,   131,   132,   136,     0,     0,     0,
       0,     0,   147,     0,     0,   126,     0,     0,     0,   556,
       0,   126,     0,     0,     0,   127,     0,     0,   133,     0,
     134,     0,   135,   282,   128,   129,   130,    35,   131,   132,
     136,   127,     0,     0,     0,     0,     0,   127,     0,     0,
     128,   129,   130,    35,   131,   132,   128,   129,   222,   223,
     131,   132,   133,   126,   134,     0,   135,     0,     0,   126,
       0,     0,     0,     0,   136,     0,     0,     0,   133,     0,
     134,     0,   135,     0,   133,   126,   134,     0,   135,   127,
     136,     0,     0,     0,     0,   127,   136,     0,   128,   129,
     130,    35,   131,   132,   128,   129,   130,   281,   131,   132,
       0,   127,     0,     0,     0,     0,     0,     0,     0,     0,
     128,   129,   130,    35,   131,   132,   232,     0,   233,     0,
     135,     0,   133,   307,   134,     0,   135,     0,   136,     0,
       0,   308,     0,   307,   136,     0,   309,     0,   232,     0,
     233,   308,   135,     0,   310,     0,   309,     0,   446,   311,
       0,   312,     0,     0,   310,     0,     0,     0,   448,   311,
       0,   312,   313,     0,   314,   307,   315,     0,     0,     0,
       0,     0,   313,   308,   314,   307,   315,    14,   309,    15,
       0,     0,     0,   308,     0,    16,   310,    14,   309,    15,
     520,   311,     0,   312,     0,    16,   310,     0,     0,     0,
     521,   311,     0,   312,   313,     0,   314,   307,   315,     0,
       0,     0,     0,     0,   313,   308,   314,   307,   315,    14,
     309,    15,     0,     0,     0,   308,     0,    16,   310,    14,
     309,    15,   524,   311,     0,   312,     0,    16,   310,     0,
       0,     0,   525,   311,     0,   312,   313,     0,   314,   307,
     315,     0,     0,     0,     0,     0,   313,   308,   314,   307,
     315,    14,   309,    15,     0,     0,     0,   308,     0,    16,
     310,    14,   309,    15,   570,   311,     0,   312,     0,    16,
     310,     0,     0,     0,   571,   311,   307,   312,   313,     0,
     314,     0,   315,     0,   308,     0,     0,     0,   313,   309,
     314,     0,   315,    14,     0,    15,     0,   310,     0,     0,
       0,    16,   311,    14,   312,    15,     0,   102,   102,   103,
     103,    16,     0,   104,   123,   313,     0,   314,     0,   315,
       0,   105,   105,   106,   106,     0,     0,   102,     0,   103,
      14,   199,    15,     0,     0,     0,     0,     0,    16,   107,
     107,   105,     0,   106,     0,   200,     0,     0,     0,     0,
       0,   108,   108,     0,     0,     0,     0,   109,   109,   107,
       0,   110,   110,     0,     0,   547,     0,     0,    35,    35,
       0,   108,     0,   201,     0,     0,     0,   109,   236,     0,
       0,   110,     0,   237,   238,   239,   240,   241,   242,   243,
       0,     0,     0,   236,     0,     0,     0,     0,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,     0,   247,
     248,   249,   250,   251,   252,     0,     0,   362,   253,     0,
     244,   245,   246,     0,   247,   248,   249,   250,   251,   252,
     236,     0,     0,   253,   363,   237,   238,   239,   240,   241,
     242,   243,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   423,     0,     0,   244,   245,   246,
       0,   247,   248,   249,   250,   251,   252,   470,   236,     0,
     253,   363,     0,   237,   238,   239,   240,   241,   242,   243,
       0,   472,   236,     0,     0,     0,     0,   237,   238,   239,
     240,   241,   242,   243,     0,   244,   245,   246,     0,   247,
     248,   249,   250,   251,   252,     0,     0,     0,   253,   244,
     245,   246,     0,   247,   248,   249,   250,   251,   252,   236,
       0,     0,   253,     0,   237,   238,   239,   240,   241,   242,
     243,     0,     0,   548,   236,     0,     0,     0,     0,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,     0,
     247,   248,   249,   250,   251,   252,     0,     0,     0,   253,
     363,   244,   245,   246,     0,   247,   248,   249,   250,   251,
     252,   236,     0,     0,   253,     0,   237,   238,   239,   240,
     241,   242,   243,     0,     0,     0,   236,     0,     0,     0,
       0,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,     0,   247,   248,   249,   250,   251,   252,   353,     0,
     261,   253,     0,   244,   245,   246,     0,   247,   248,   249,
     250,   251,   252,   236,     0,     0,   253,     0,   237,   238,
     239,   240,   241,   242,   243,     0,     0,   236,     0,     0,
       0,     0,   237,   238,   239,   240,   241,   242,   243,   366,
     244,   245,   246,     0,   247,   248,   249,   250,   251,   252,
       0,     0,     0,   253,   244,   245,   246,     0,   247,   248,
     249,   250,   251,   252,   236,     0,   425,   253,     0,   237,
     238,   239,   240,   241,   242,   243,     0,     0,   236,     0,
       0,     0,     0,   237,   238,   239,   240,   241,   242,   243,
       0,   244,   245,   246,     0,   247,   248,   249,   250,   251,
     252,     0,     0,   471,   253,   244,   245,   246,     0,   247,
     248,   249,   250,   251,   252,   236,     0,   476,   253,     0,
     237,   238,   239,   240,   241,   242,   243,     0,     0,   236,
       0,     0,     0,     0,   237,   238,   239,   240,   241,   242,
     243,     0,   244,   245,   246,     0,   247,   248,   249,   250,
     251,   252,     0,     0,   541,   253,   244,   245,   246,     0,
     247,   248,   249,   250,   251,   252,   236,     0,   546,   253,
       0,   237,   238,   239,   240,   241,   242,   243,     0,     0,
     236,     0,     0,     0,     0,   237,   238,   239,   240,   241,
     242,   243,   582,   244,   245,   246,     0,   247,   248,   249,
     250,   251,   252,     0,     0,     0,   253,   244,   245,   246,
       0,   247,   248,   249,   250,   251,   252,   236,     0,   609,
     253,     0,   237,   238,   239,   240,   241,   242,   243,     0,
       0,   236,     0,     0,     0,     0,   237,   238,   239,   240,
     241,   242,   243,     0,   244,   245,   246,     0,   247,   248,
     249,   250,   251,   252,     0,     0,   610,   253,   244,   245,
     246,   162,   247,   248,   249,   250,   251,   252,     0,     0,
       0,   253,   163,   164,   165,   166,   167,   168,   169,   170,
       0,   171,     0,   172,   237,   238,   239,   240,   241,   242,
     243,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     173,     0,     0,     0,     0,     0,   244,   245,   246,     0,
     247,   248,   249,   250,   251,   252,     0,     0,     0,   253,
     237,   238,   239,   240,   241,     0,   243,     0,     0,     0,
     237,   238,   239,   240,   241,     0,     0,     0,     0,     0,
       0,     0,   244,   245,   246,     0,   247,   248,   249,   250,
     251,   252,    -1,   245,   246,   253,   247,   248,   249,   250,
     251,   252,     0,     0,     0,   253,   237,   238,    -1,    -1,
     241,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    -1,
      -1,     0,    -1,   248,   249,   250,   251,   252,     0,     0,
       0,   253
};

static const yytype_int16 yycheck[] =
{
      12,     9,    27,   199,    67,   341,    28,    28,    28,    97,
      69,   347,    28,   316,    57,    19,   319,    14,   199,    17,
      57,    63,    34,    32,    56,    78,    38,     4,    69,     6,
      42,    91,    35,    69,    89,    77,    95,    89,    63,    27,
      43,    65,    69,    20,    56,    87,    88,    27,    60,    74,
     110,   110,    77,    94,    79,   110,   109,    70,   110,    95,
      69,    69,    87,    88,    96,    53,    28,   110,    65,    27,
     199,    48,   104,   110,    62,    63,    64,    65,    66,    67,
      92,   108,    94,    63,    96,    89,    70,   199,   110,   110,
     110,   123,   104,    69,   110,   108,    94,    77,   186,    79,
     108,    89,    90,    65,    92,    63,    94,    87,    88,    70,
      70,   123,    37,   201,   102,    40,    74,    28,   143,    77,
     316,    79,    65,   319,   108,   321,    51,   152,   153,    87,
      88,   143,   108,   469,   110,   316,   439,    14,   319,   320,
     321,   322,    89,   324,   325,    65,     0,   108,   108,    26,
      12,    93,   177,   178,    65,    32,    91,   182,   183,   184,
     185,   173,    93,   110,   500,    12,    35,     4,   110,     6,
      90,    33,    92,   153,   108,   110,   208,   209,   108,   110,
      57,    18,    59,    20,    65,    47,    33,   316,    65,   109,
     319,   320,   321,   322,   152,   153,   208,   209,   178,    36,
      47,    29,    30,   183,   316,   185,    78,   319,   320,   321,
     322,    48,    40,   276,    89,    91,   304,    54,   306,   177,
     178,    58,   264,   265,   182,   183,   184,   185,    65,    89,
      14,   103,   104,   105,   110,   110,   278,   109,   280,   264,
     265,    35,   274,   439,    89,   441,   334,   335,    32,   445,
     110,    95,     4,   278,     6,   280,    41,    41,   439,   440,
     441,    95,   274,   444,   445,   110,   110,    91,    20,   301,
     302,    13,    57,    57,    59,    59,   110,    41,    91,     9,
      65,    65,    72,    73,   264,   265,   110,    17,    18,   301,
     302,    21,    65,    57,    91,    59,    48,   110,   278,    13,
     280,    65,    54,    13,    65,   317,   264,   265,    23,     7,
     439,   440,   441,   110,    28,   444,   445,    47,    28,    17,
     278,    51,   280,   519,    65,    78,    95,   439,   440,   441,
      28,   146,   444,   445,    13,    14,    34,   518,   519,    37,
      65,   110,    40,    65,    41,   160,    95,    45,   101,   102,
     103,   104,   105,    51,    52,    53,   109,    55,    56,   108,
      57,   393,    59,   108,    95,   110,    89,    65,    65,    65,
       7,   396,   397,   398,   399,     9,    10,   108,    64,    65,
      17,   393,   108,   395,    18,   410,   411,   412,   413,   518,
     519,    28,   108,    57,   110,    59,    30,    34,    17,    18,
      37,    65,   434,    40,   436,    65,   518,   519,    45,   108,
     108,   110,   371,   372,    51,    52,    53,   397,    55,   399,
     455,    65,   434,   458,   436,   460,   267,   268,    65,   461,
     462,   411,   451,   413,   453,   416,    17,   418,   396,   397,
     398,   399,     4,   304,     6,   306,   355,    57,   357,   461,
     462,    14,   410,   411,   412,   413,    18,   359,    20,   361,
      14,   503,    94,   505,   267,   268,   334,   335,    69,    19,
     106,   108,    65,   108,    36,   108,     3,    64,   503,    27,
     505,    65,    58,    59,    11,    61,    48,    49,    65,    16,
      66,    39,    54,    65,   108,   108,    58,    24,    47,    61,
      70,    70,    29,    65,    31,    53,    71,   549,    13,    30,
      71,    93,    25,   555,    62,    63,    64,    65,    66,    67,
      28,    28,    47,   503,   549,   505,    70,     5,     5,   108,
     555,    70,    47,    68,   559,   560,    64,   562,   563,    65,
      15,    45,    90,    45,    92,   503,    94,   505,    19,   108,
      64,   127,    64,    70,   102,   108,     8,   133,   134,   135,
     585,   586,     8,    22,   589,   590,    65,    23,    22,   549,
      70,    50,   604,    71,    50,   555,     7,     7,    89,   155,
     560,    19,     5,   563,    53,   161,    53,     5,    70,    70,
      15,   549,   604,     8,     8,     8,   172,   555,   174,     8,
      89,   559,   560,     8,   562,   563,   586,     8,    14,    53,
     590,    22,    22,    69,    53,    10,    53,    53,    74,    75,
      76,    77,    78,    79,    80,   317,   254,   585,   586,   153,
     136,   589,   590,   490,   172,   211,   212,   266,   316,   322,
      96,    97,    98,   219,   100,   101,   102,   103,   104,   105,
     101,   328,   210,   109,   109,   455,    75,   233,    98,    78,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   302,    -1,
       9,    10,   101,   102,   103,   104,   105,   263,    17,    18,
     109,    20,    21,    -1,    -1,    -1,    -1,     7,    -1,    -1,
      29,    30,    -1,    32,    -1,    -1,    -1,    17,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    25,    -1,    46,    47,     7,
      30,    50,    51,    -1,    34,    -1,    55,    37,    -1,    17,
      40,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,
      28,    51,    52,    53,    -1,    55,    34,    -1,    -1,    37,
      -1,    -1,    40,    -1,    -1,    65,    -1,    45,    -1,    -1,
      -1,    -1,   338,    51,    52,    53,    -1,    55,    56,     7,
      -1,    -1,   348,    -1,   350,   351,   352,    65,    -1,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   363,    -1,   365,
      28,   120,    -1,   122,   370,    -1,    34,    -1,   108,    37,
      -1,     7,    40,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    17,    -1,    51,    52,    53,    -1,    55,    -1,    -1,
     108,    -1,    28,     7,    -1,    -1,    -1,    65,    34,    -1,
      -1,    37,    -1,    17,    40,    -1,    -1,    -1,   414,    45,
     416,    -1,   418,    -1,    28,    51,    52,    53,    -1,    55,
      34,    -1,    -1,    37,    -1,     7,    40,    -1,    -1,    65,
      -1,    45,    -1,    -1,    -1,    17,    -1,    51,    52,    53,
     108,    55,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
     456,    65,    34,    -1,    -1,    37,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    45,   470,    -1,   472,   473,    -1,    51,
      52,    53,   108,    55,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,   490,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   108,    -1,    28,    -1,    -1,    -1,
      -1,     7,    34,    -1,    -1,    37,    -1,   513,    40,   515,
      -1,    17,    -1,    45,    -1,    -1,    -1,    -1,    -1,    51,
      52,    53,    28,    55,    -1,    -1,   108,    -1,    34,    -1,
       3,    37,    -1,    65,    40,    -1,    -1,    -1,    11,    45,
      -1,   547,   548,    16,    -1,    51,    52,    53,   554,    55,
       7,    24,    -1,    -1,    -1,    -1,    29,    -1,    31,    65,
      17,   567,    -1,   569,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,   578,    -1,   580,    -1,   108,    34,    -1,     7,
      37,    -1,    -1,    40,    57,    -1,    59,    -1,    45,    17,
      -1,    -1,    65,    -1,    51,    52,    53,    -1,    55,    -1,
      -1,     7,   108,    -1,    -1,    -1,    34,    -1,    65,    37,
      -1,    17,    40,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    -1,    28,    51,    52,    53,    -1,    55,    34,    -1,
      -1,    37,    -1,    -1,    40,    -1,    -1,    65,    -1,    45,
       7,    -1,    -1,    -1,    -1,    51,    52,    53,    -1,    55,
      17,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      -1,    28,     7,    -1,    -1,    -1,    94,    34,    -1,    -1,
      37,    -1,    17,    40,    -1,    -1,    -1,    -1,    45,    -1,
     108,    -1,    -1,    28,    51,    52,    53,    -1,    55,    34,
      -1,     7,    37,    -1,    -1,    40,    -1,    -1,    65,    -1,
      45,    17,   108,    -1,    -1,    -1,    51,    52,    53,    -1,
      55,    -1,    28,     7,    -1,    -1,    -1,    -1,    34,    -1,
      65,    37,    -1,    17,    40,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    28,    51,    52,    53,    -1,    55,
      34,   108,    -1,    37,    -1,     7,    40,    -1,    -1,    65,
      -1,    45,    -1,    -1,    -1,    17,    -1,    51,    52,    53,
      -1,    55,    -1,   108,    -1,    -1,    28,     7,    -1,    -1,
      -1,    65,    34,    -1,    -1,    37,    -1,    17,    40,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    51,
      52,    53,   108,    55,    34,    -1,     3,    37,    -1,    -1,
      40,    -1,    -1,    65,    11,    45,    -1,    -1,     3,    16,
      -1,    51,    52,    53,   108,    55,    11,    24,    -1,    -1,
      -1,    16,    29,    -1,    31,    65,    -1,    21,    -1,    24,
      -1,    -1,    -1,    -1,    29,    42,    31,    44,    -1,    46,
      -1,    -1,    -1,    -1,    -1,    -1,   108,    42,    -1,    44,
      57,    46,    59,    60,    -1,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    57,    -1,    59,    21,    -1,    -1,   108,    -1,
      65,    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,
      74,    75,    76,    77,    78,    79,    80,    94,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,
      -1,    -1,    96,    97,    98,    -1,   100,   101,   102,   103,
     104,   105,    -1,    69,    -1,   109,    -1,    53,    74,    75,
      76,    77,    78,    79,    80,    27,    62,    63,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    97,    98,    -1,   100,   101,   102,   103,   104,   105,
      -1,    53,    -1,   109,    90,    -1,    92,    -1,    94,    27,
      62,    63,    64,    65,    66,    67,   102,    -1,    -1,    -1,
      -1,    -1,   108,    -1,    -1,    27,    -1,    -1,    -1,    47,
      -1,    27,    -1,    -1,    -1,    53,    -1,    -1,    90,    -1,
      92,    -1,    94,    95,    62,    63,    64,    65,    66,    67,
     102,    53,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      62,    63,    64,    65,    66,    67,    62,    63,    64,    65,
      66,    67,    90,    27,    92,    -1,    94,    -1,    -1,    27,
      -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,    90,    -1,
      92,    -1,    94,    -1,    90,    27,    92,    -1,    94,    53,
     102,    -1,    -1,    -1,    -1,    53,   102,    -1,    62,    63,
      64,    65,    66,    67,    62,    63,    64,    65,    66,    67,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    63,    64,    65,    66,    67,    90,    -1,    92,    -1,
      94,    -1,    90,     3,    92,    -1,    94,    -1,   102,    -1,
      -1,    11,    -1,     3,   102,    -1,    16,    -1,    90,    -1,
      92,    11,    94,    -1,    24,    -1,    16,    -1,    28,    29,
      -1,    31,    -1,    -1,    24,    -1,    -1,    -1,    28,    29,
      -1,    31,    42,    -1,    44,     3,    46,    -1,    -1,    -1,
      -1,    -1,    42,    11,    44,     3,    46,    57,    16,    59,
      -1,    -1,    -1,    11,    -1,    65,    24,    57,    16,    59,
      28,    29,    -1,    31,    -1,    65,    24,    -1,    -1,    -1,
      28,    29,    -1,    31,    42,    -1,    44,     3,    46,    -1,
      -1,    -1,    -1,    -1,    42,    11,    44,     3,    46,    57,
      16,    59,    -1,    -1,    -1,    11,    -1,    65,    24,    57,
      16,    59,    28,    29,    -1,    31,    -1,    65,    24,    -1,
      -1,    -1,    28,    29,    -1,    31,    42,    -1,    44,     3,
      46,    -1,    -1,    -1,    -1,    -1,    42,    11,    44,     3,
      46,    57,    16,    59,    -1,    -1,    -1,    11,    -1,    65,
      24,    57,    16,    59,    28,    29,    -1,    31,    -1,    65,
      24,    -1,    -1,    -1,    28,    29,     3,    31,    42,    -1,
      44,    -1,    46,    -1,    11,    -1,    -1,    -1,    42,    16,
      44,    -1,    46,    57,    -1,    59,    -1,    24,    -1,    -1,
      -1,    65,    29,    57,    31,    59,    -1,     4,     4,     6,
       6,    65,    -1,    10,    10,    42,    -1,    44,    -1,    46,
      -1,    18,    18,    20,    20,    -1,    -1,     4,    -1,     6,
      57,     8,    59,    -1,    -1,    -1,    -1,    -1,    65,    36,
      36,    18,    -1,    20,    -1,    22,    -1,    -1,    -1,    -1,
      -1,    48,    48,    -1,    -1,    -1,    -1,    54,    54,    36,
      -1,    58,    58,    -1,    -1,    56,    -1,    -1,    65,    65,
      -1,    48,    -1,    50,    -1,    -1,    -1,    54,    69,    -1,
      -1,    58,    -1,    74,    75,    76,    77,    78,    79,    80,
      -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    74,    75,
      76,    77,    78,    79,    80,    96,    97,    98,    -1,   100,
     101,   102,   103,   104,   105,    -1,    -1,    93,   109,    -1,
      96,    97,    98,    -1,   100,   101,   102,   103,   104,   105,
      69,    -1,    -1,   109,   110,    74,    75,    76,    77,    78,
      79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    93,    -1,    -1,    96,    97,    98,
      -1,   100,   101,   102,   103,   104,   105,    68,    69,    -1,
     109,   110,    -1,    74,    75,    76,    77,    78,    79,    80,
      -1,    68,    69,    -1,    -1,    -1,    -1,    74,    75,    76,
      77,    78,    79,    80,    -1,    96,    97,    98,    -1,   100,
     101,   102,   103,   104,   105,    -1,    -1,    -1,   109,    96,
      97,    98,    -1,   100,   101,   102,   103,   104,   105,    69,
      -1,    -1,   109,    -1,    74,    75,    76,    77,    78,    79,
      80,    -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    74,
      75,    76,    77,    78,    79,    80,    96,    97,    98,    -1,
     100,   101,   102,   103,   104,   105,    -1,    -1,    -1,   109,
     110,    96,    97,    98,    -1,   100,   101,   102,   103,   104,
     105,    69,    -1,    -1,   109,    -1,    74,    75,    76,    77,
      78,    79,    80,    -1,    -1,    -1,    69,    -1,    -1,    -1,
      -1,    74,    75,    76,    77,    78,    79,    80,    96,    97,
      98,    -1,   100,   101,   102,   103,   104,   105,    91,    -1,
     108,   109,    -1,    96,    97,    98,    -1,   100,   101,   102,
     103,   104,   105,    69,    -1,    -1,   109,    -1,    74,    75,
      76,    77,    78,    79,    80,    -1,    -1,    69,    -1,    -1,
      -1,    -1,    74,    75,    76,    77,    78,    79,    80,    95,
      96,    97,    98,    -1,   100,   101,   102,   103,   104,   105,
      -1,    -1,    -1,   109,    96,    97,    98,    -1,   100,   101,
     102,   103,   104,   105,    69,    -1,   108,   109,    -1,    74,
      75,    76,    77,    78,    79,    80,    -1,    -1,    69,    -1,
      -1,    -1,    -1,    74,    75,    76,    77,    78,    79,    80,
      -1,    96,    97,    98,    -1,   100,   101,   102,   103,   104,
     105,    -1,    -1,   108,   109,    96,    97,    98,    -1,   100,
     101,   102,   103,   104,   105,    69,    -1,   108,   109,    -1,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    69,
      -1,    -1,    -1,    -1,    74,    75,    76,    77,    78,    79,
      80,    -1,    96,    97,    98,    -1,   100,   101,   102,   103,
     104,   105,    -1,    -1,   108,   109,    96,    97,    98,    -1,
     100,   101,   102,   103,   104,   105,    69,    -1,   108,   109,
      -1,    74,    75,    76,    77,    78,    79,    80,    -1,    -1,
      69,    -1,    -1,    -1,    -1,    74,    75,    76,    77,    78,
      79,    80,    95,    96,    97,    98,    -1,   100,   101,   102,
     103,   104,   105,    -1,    -1,    -1,   109,    96,    97,    98,
      -1,   100,   101,   102,   103,   104,   105,    69,    -1,   108,
     109,    -1,    74,    75,    76,    77,    78,    79,    80,    -1,
      -1,    69,    -1,    -1,    -1,    -1,    74,    75,    76,    77,
      78,    79,    80,    -1,    96,    97,    98,    -1,   100,   101,
     102,   103,   104,   105,    -1,    -1,   108,   109,    96,    97,
      98,    70,   100,   101,   102,   103,   104,   105,    -1,    -1,
      -1,   109,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    90,    -1,    92,    74,    75,    76,    77,    78,    79,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     109,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,    -1,
     100,   101,   102,   103,   104,   105,    -1,    -1,    -1,   109,
      74,    75,    76,    77,    78,    -1,    80,    -1,    -1,    -1,
      74,    75,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    97,    98,    -1,   100,   101,   102,   103,
     104,   105,    96,    97,    98,   109,   100,   101,   102,   103,
     104,   105,    -1,    -1,    -1,   109,    74,    75,    76,    77,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,
      98,    -1,   100,   101,   102,   103,   104,   105,    -1,    -1,
      -1,   109
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    35,    43,   112,   113,   117,    65,    65,     0,   108,
     108,    14,    26,    32,    57,    59,    65,   115,   116,   118,
     119,   120,   132,   152,   173,   187,   195,    41,   114,   115,
     116,   118,   119,   194,    35,    65,   123,   124,    35,    65,
     188,    65,    89,   110,   115,   118,   119,   120,   115,   118,
     119,   120,   119,   119,   118,   119,    89,   110,     7,    17,
      34,    37,    40,    45,    51,    52,    53,    55,    65,   108,
     123,   131,   133,   135,   136,   137,   143,   144,   145,   163,
     164,   166,   167,   170,   171,   194,   194,    41,    41,   123,
      69,   108,   110,   108,   110,   123,    17,    94,   189,   193,
     194,    23,     4,     6,    10,    18,    20,    36,    48,    54,
      58,   123,   172,   174,   175,   177,   178,   179,    65,   118,
     119,   118,   119,    10,   172,    65,    27,    53,    62,    63,
      64,    66,    67,    90,    92,    94,   102,   121,   125,   126,
     128,   129,   130,   131,   170,   196,   201,   108,   121,   123,
     121,    65,   136,   163,    65,    13,    14,   134,   121,   134,
      89,    94,    70,    81,    82,    83,    84,    85,    86,    87,
      88,    90,    92,   109,   165,    28,   163,   136,   163,    28,
     163,   108,   136,   163,   136,   163,    32,    65,   123,   123,
       9,   108,   172,    65,   152,   190,   191,   193,    57,     8,
      22,    50,   154,   174,   180,   181,   184,   172,    14,    14,
     177,    94,    70,   108,    12,    33,    47,   176,   172,    70,
     108,   121,    64,    65,   121,   197,   198,   199,   200,   121,
     153,   121,    90,    92,   129,    23,    69,    74,    75,    76,
      77,    78,    79,    80,    96,    97,    98,   100,   101,   102,
     103,   104,   105,   109,   106,    72,    73,   127,   123,   170,
     144,   108,   108,    19,    25,    30,   146,   147,   148,   149,
     150,   151,   151,    19,    89,   121,    65,   108,    21,   108,
     144,    65,    95,   121,   168,   169,    64,   122,   121,   153,
     123,   121,    28,    28,    28,    28,    28,    28,    65,   152,
      65,    89,    89,    95,   108,    95,   108,     3,    11,    16,
      24,    29,    31,    42,    44,    46,    60,    94,   132,   155,
     156,   157,   158,   159,   160,   161,   173,   187,    14,    65,
     185,   186,    65,   152,   182,   183,   108,   108,    70,   172,
     172,    47,   176,   121,   121,   121,   162,    47,    70,   121,
      21,    71,    71,    91,    91,   110,    91,   110,    91,   110,
      91,   110,    93,   110,    93,   110,    95,    64,    65,   121,
      13,   138,   139,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   125,    93,    89,   121,    94,   136,   163,   136,   163,
     150,   147,   149,   147,   149,    28,    28,    47,   172,   134,
     136,   163,   136,   163,    70,    95,   110,    95,   110,    91,
     110,    91,   110,    93,    93,   108,     5,     5,   108,   108,
     108,    49,    61,   172,   192,   172,   192,   190,   190,   155,
     156,   157,   123,   124,   156,   157,    28,   156,    28,   156,
     159,   110,   187,   110,   187,   175,    70,    28,   110,    28,
     110,    89,    89,    28,   182,    28,   182,   121,   162,    47,
      68,   108,    68,    68,   162,   121,   108,   121,   121,   121,
     198,   198,   200,   200,   121,   121,    39,   121,   140,   141,
     142,    28,   139,    28,   139,   172,   123,    45,    45,    15,
      19,   108,    28,    56,    28,    56,    28,    28,   121,   168,
     168,    64,    64,    70,   172,    70,   172,   108,   156,   157,
      28,    28,    95,    95,    28,    28,     8,     8,   161,   161,
     185,   186,   121,    22,   185,    22,   185,   172,   172,    50,
      50,   108,   162,   121,   121,   121,   108,    56,    68,    71,
      89,   141,     7,     7,    19,    95,    47,   162,    53,   136,
     163,    53,   136,   163,     5,     5,   121,    70,   121,    70,
      28,    28,     8,     8,     8,     8,    28,    28,    70,   108,
      70,   108,    95,   121,   121,   136,   163,    89,   121,   136,
     163,    15,    28,    28,    28,    28,   121,   121,     8,     8,
      22,    22,   121,   121,    14,    53,    53,    53,    53,   108,
     108,   172
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   111,   112,   112,   113,   114,   114,   114,   115,   115,
     115,   115,   116,   116,   117,   118,   118,   119,   119,   119,
     120,   120,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   122,   122,   123,   123,   124,   124,   125,
     125,   126,   126,   127,   127,   128,   128,   129,   129,   129,
     129,   129,   129,   130,   130,   130,   130,   130,   130,   131,
     131,   131,   131,   131,   131,   132,   132,   132,   132,   132,
     132,   133,   133,   133,   134,   134,   135,   136,   136,   137,
     137,   138,   138,   139,   139,   140,   140,   141,   141,   141,
     142,   142,   143,   143,   143,   143,   144,   144,   144,   144,
     144,   144,   144,   145,   145,   146,   146,   146,   147,   147,
     148,   148,   149,   149,   150,   150,   151,   151,   151,   152,
     152,   153,   153,   154,   154,   154,   154,   154,   154,   154,
     154,   155,   155,   156,   156,   157,   157,   158,   158,   158,
     159,   159,   159,   159,   159,   160,   160,   161,   161,   161,
     161,   161,   161,   162,   162,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   164,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   166,   166,   167,   168,   168,
     169,   169,   170,   170,   170,   171,   171,   171,   171,   171,
     171,   172,   172,   173,   173,   174,   174,   174,   175,   175,
     175,   175,   175,   175,   175,   175,   176,   176,   177,   177,
     177,   177,   178,   178,   179,   180,   180,   180,   181,   181,
     182,   182,   182,   182,   183,   183,   184,   184,   184,   184,
     185,   185,   186,   186,   187,   188,   188,   188,   188,   189,
     189,   190,   190,   190,   190,   190,   190,   190,   190,   191,
     191,   192,   192,   193,   194,   194,   194,   194,   194,   194,
     195,   195,   195,   195,   195,   195,   195,   195,   195,   195,
     195,   195,   196,   196,   196,   196,   196,   196,   197,   197,
     198,   199,   199,   200,   201,   201,   201
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     4,     2,     2,     1,     6,     4,
       6,     6,     2,     2,     4,     2,     2,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       3,     1,     2,     1,     1,     1,     2,     1,     1,     1,
       2,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       3,     4,     4,     4,     4,     7,     7,     6,     6,     4,
       4,     3,     5,     3,     2,     0,     3,     2,     2,     6,
       6,     2,     2,     4,     4,     2,     1,     1,     3,     1,
       2,     3,     6,     6,     4,     4,     4,     7,     4,     6,
       5,     7,     2,     5,     5,     1,     2,     2,     5,     5,
       2,     2,     2,     2,     2,     2,     1,     2,     1,     3,
       3,     3,     3,     6,     6,     5,     5,     5,     5,     4,
       4,     3,     3,     2,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     2,     2,     3,     3,     1,     1,     1,
       1,     1,     1,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     3,     2,     1,     3,
       3,     3,     3,     4,     4,     6,     6,     8,     8,     8,
       8,     1,     1,     5,     5,     1,     1,     1,     1,     2,
       3,     4,     5,     2,     3,     4,     1,     1,     1,     1,
       1,     1,     8,     3,     3,     1,     1,     1,     4,     4,
       4,     6,     4,     6,     2,     2,     4,     4,     6,     6,
       1,     3,     3,     3,     4,     1,     2,     2,     3,     3,
       3,     3,     4,     5,     6,     3,     4,     5,     6,     3,
       4,     1,     1,     2,     3,     3,     4,     4,     4,     4,
       3,     3,     2,     2,     3,     3,     2,     2,     2,     2,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
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
#line 2130 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 61 "simple.y" /* yacc.c:1646  */
    {printf("\nprograma -> definicionLibreria");}
#line 2136 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 64 "simple.y" /* yacc.c:1646  */
    {printf("\ndefinicionPrograma -> PROGRAMA IDENTIFICADOR ; codigoPrograma");}
#line 2142 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 67 "simple.y" /* yacc.c:1646  */
    {printf("\ndefinicionPrograma -> libreriaMultiple cuerpoSubprograma");}
#line 2148 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 68 "simple.y" /* yacc.c:1646  */
    {printf("\ndefinicionPrograma -> libreria cuerpoSubprograma");}
#line 2154 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 69 "simple.y" /* yacc.c:1646  */
    {printf("\ndefinicionPrograma -> cuerpoSubprograma");}
#line 2160 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 72 "simple.y" /* yacc.c:1646  */
    {printf("\nlibreria -> IMPORTAR LIBRERIA nombre COMO IDENTIFICADOR");}
#line 2166 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 73 "simple.y" /* yacc.c:1646  */
    {printf("\nlibreria -> IMPORTAR LIBRERIA nombre ");}
#line 2172 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 74 "simple.y" /* yacc.c:1646  */
    {printf("\nlibreria -> DE LIBRERIA nombre IMPORTAR IDENTIFICADOR");}
#line 2178 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 75 "simple.y" /* yacc.c:1646  */
    {printf("\nlibreria -> DE LIBRERIA nombre IMPORTAR identificadorMultiple");}
#line 2184 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 77 "simple.y" /* yacc.c:1646  */
    {printf("\nlibreriaMultiple -> libreria libreria");}
#line 2190 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 78 "simple.y" /* yacc.c:1646  */
    {printf("\nlibreriaMultiple -> libreriaMultiple libreria");}
#line 2196 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 81 "simple.y" /* yacc.c:1646  */
    {printf("\ndefinicionLibreria -> LIBRERIA IDENTIFICADOR ; codigoLibreria");}
#line 2202 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 83 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionMultiple -> declaracion declaracion");}
#line 2208 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 84 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionMultiple -> declaracionMultiple declaracion");}
#line 2214 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 86 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracion -> declaracionObjeto");}
#line 2220 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 87 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracion -> declaracionTipo");}
#line 2226 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 88 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracion -> declaracionSubprograma");}
#line 2232 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 90 "simple.y" /* yacc.c:1646  */
    {printf("\nexportaciones -> EXPORTAR nombreMultiple");}
#line 2238 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 91 "simple.y" /* yacc.c:1646  */
    {printf("\nexportaciones -> EXPORTAR nombre");}
#line 2244 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 94 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion '+' expresion");}
#line 2250 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 95 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion - expresion");}
#line 2256 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 96 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion / expresion");}
#line 2262 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 97 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion \\ expresion");}
#line 2268 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 98 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion * expresion");}
#line 2274 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 99 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion <- expresion");}
#line 2280 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 100 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion -> expresion");}
#line 2286 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 101 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion . expresion");}
#line 2292 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 102 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> [ expresion ] ");}
#line 2298 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 103 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> { expresion } ");}
#line 2304 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 104 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion :: expresion");}
#line 2310 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 105 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion < expresion");}
#line 2316 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 106 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion > expresion");}
#line 2322 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 107 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion <= expresion");}
#line 2328 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 108 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion >= expresion");}
#line 2334 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 109 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion = expresion");}
#line 2340 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 110 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion NEQ expresion");}
#line 2346 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 111 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion ~ expresion");}
#line 2352 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 112 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion AND expresion");}
#line 2358 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 113 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion OR expresion");}
#line 2364 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 114 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresionPotencia");}
#line 2370 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 116 "simple.y" /* yacc.c:1646  */
    {printf("\ncadenaMult -> CTC_CADENA , CTC_CADENA");}
#line 2376 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 117 "simple.y" /* yacc.c:1646  */
    {printf("\ncadenaMult -> cadenaMult , CTC_CADENA");}
#line 2382 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 120 "simple.y" /* yacc.c:1646  */
    {printf("\nnombre -> IDENTIFICADOR");}
#line 2388 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 121 "simple.y" /* yacc.c:1646  */
    {printf("\nnombre -> nombre :: IDENTIFICADOR");}
#line 2394 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 123 "simple.y" /* yacc.c:1646  */
    {printf("\nnombreMultiple -> nombre , nombre");}
#line 2400 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 124 "simple.y" /* yacc.c:1646  */
    {printf("\nnombreMultiple -> nombreMultiple , nombre");}
#line 2406 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 127 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionPotencia -> expresionPosfija");}
#line 2412 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 128 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionPotencia -> expresionPosfija ^ expresionPotencia");}
#line 2418 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 130 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionPosfija -> expresionUnaria");}
#line 2424 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 131 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionPosfija -> expresionUnaria operadorPosfijo");}
#line 2430 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 133 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorPosfijo -> INC");}
#line 2436 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 134 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorPosfijo -> DEC");}
#line 2442 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 136 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionUnaria -> primario");}
#line 2448 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 137 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionUnaria -> '-' primario");}
#line 2454 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 140 "simple.y" /* yacc.c:1646  */
    {printf("\nprimario -> literal");}
#line 2460 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 141 "simple.y" /* yacc.c:1646  */
    {printf("\nprimario -> objeto");}
#line 2466 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 142 "simple.y" /* yacc.c:1646  */
    {printf("\nprimario -> llamada_subprograma");}
#line 2472 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 143 "simple.y" /* yacc.c:1646  */
    {printf("\nprimario -> OBJETO llamada_subprograma");}
#line 2478 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 144 "simple.y" /* yacc.c:1646  */
    {printf("\nprimario -> enumeraciones ");}
#line 2484 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 145 "simple.y" /* yacc.c:1646  */
    {printf("\nprimario -> ( expresion ) ");}
#line 2490 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 147 "simple.y" /* yacc.c:1646  */
    {printf("\nliteral -> VERDADERO");}
#line 2496 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 148 "simple.y" /* yacc.c:1646  */
    {printf("\nliteral -> FASLO");}
#line 2502 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 149 "simple.y" /* yacc.c:1646  */
    {printf("\nliteral -> CTC_ENTERA");}
#line 2508 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 150 "simple.y" /* yacc.c:1646  */
    {printf("\nliteral -> CTC_REAL");}
#line 2514 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 151 "simple.y" /* yacc.c:1646  */
    {printf("\nliteral -> CTC_CARACTER");}
#line 2520 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 152 "simple.y" /* yacc.c:1646  */
    {printf("\nliteral -> CTC_CADENA");}
#line 2526 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 155 "simple.y" /* yacc.c:1646  */
    {printf("\nobjeto -> nombre");}
#line 2532 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 156 "simple.y" /* yacc.c:1646  */
    {printf("\nobjeto -> objeto . nombre");}
#line 2538 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 157 "simple.y" /* yacc.c:1646  */
    {printf("\nobjeto -> objeto [ expresion ]");}
#line 2544 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 158 "simple.y" /* yacc.c:1646  */
    {printf("\nobjeto -> objeto [ expresionMult ]");}
#line 2550 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 159 "simple.y" /* yacc.c:1646  */
    {printf("\nobjeto -> objeto { CTC_CADENA }");}
#line 2556 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 160 "simple.y" /* yacc.c:1646  */
    {printf("\nobjeto -> objeto { cadenaMult }");}
#line 2562 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 165 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionObjeto -> IDENTIFICADOR : CONSTANTE especificacionTipo ASIGNACION expresion ;\n");}
#line 2568 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 166 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionObjeto -> identificadorMultiple : CONSTANTE especificacionTipo ASIGNACION expresion ;\n");}
#line 2574 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 168 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionObjeto -> IDENTIFICADOR : especificacionTipo ASIGNACION expresion ;\n");}
#line 2580 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 169 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionObjeto -> identificadorMultiple : especificacionTipo ASIGNACION expresion ;\n");}
#line 2586 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 170 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionObjeto -> IDENTIFICADOR : especificacionTipo ;\n");}
#line 2592 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 171 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionObjeto -> identificadorMultiple : especificacionTipo ;\n");}
#line 2598 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 175 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionInterrupcion -> siguiente ; ");}
#line 2604 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 176 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionInterrupcion -> salir de IDENTIFICADOR cuando ; ");}
#line 2610 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 177 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionInterrupcion -> salir cuando(?) ; ");}
#line 2616 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 180 "simple.y" /* yacc.c:1646  */
    {printf("\ncuando -> CUANDO expresion");}
#line 2622 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 181 "simple.y" /* yacc.c:1646  */
    {printf("\ncuando -> nada ");}
#line 2628 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 184 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionLanzamientoExcepcion -> LANZA nombre ; ");}
#line 2634 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 187 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionMultiple -> instruccion instruccion");}
#line 2640 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 188 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionMultiple -> instruccionMultiple instruccion");}
#line 2646 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 191 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionCasos -> CASOS expresion ES caso FIN CASOS");}
#line 2652 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 192 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionCasos -> CASOS expresion ES casoMultiple FIN CASOS");}
#line 2658 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 194 "simple.y" /* yacc.c:1646  */
    {printf("\ncasoMultiple -> caso caso");}
#line 2664 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 195 "simple.y" /* yacc.c:1646  */
    {printf("\ncasoMultiple -> casoMultiple caso");}
#line 2670 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 197 "simple.y" /* yacc.c:1646  */
    {printf("\ncaso -> CUANDO entradas FLECHA instruccion");}
#line 2676 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 198 "simple.y" /* yacc.c:1646  */
    {printf("\ncaso -> CUANDO entradas FLECHA instruccionMultiple");}
#line 2682 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 200 "simple.y" /* yacc.c:1646  */
    {printf("\nentradas -> entrada : entrada");}
#line 2688 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 201 "simple.y" /* yacc.c:1646  */
    {printf("\nentradas -> entrada");}
#line 2694 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 203 "simple.y" /* yacc.c:1646  */
    {printf("\nentrada -> expresion");}
#line 2700 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 204 "simple.y" /* yacc.c:1646  */
    {printf("\nentrada -> expresion DOS_PUNTOS expresion");}
#line 2706 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 205 "simple.y" /* yacc.c:1646  */
    {printf("\nentrada -> OTRO");}
#line 2712 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 207 "simple.y" /* yacc.c:1646  */
    {printf("\nentradaDosP -> entrada : ");}
#line 2718 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 208 "simple.y" /* yacc.c:1646  */
    {printf("\nentradaDosP -> entradaDosP entrada : ");}
#line 2724 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 210 "simple.y" /* yacc.c:1646  */
    {printf("\nintsruccionBucle -> IDENTIFICADOR : clausulaIteracion instruccion FIN BUCLE");}
#line 2730 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 211 "simple.y" /* yacc.c:1646  */
    {printf("\nintsruccionBucle -> IDENTIFICADOR : clausulaIteracion instruccionMultiple FIN BUCLE");}
#line 2736 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 212 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionBucle -> clausulaIteracion instruccion FIN BUCLE");}
#line 2742 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 213 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionBucle -> clausulaIteracion instruccionMultiple FIN BUCLE");}
#line 2748 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 216 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaIteracion -> PARA IDENTIFICADOR EN expresion");}
#line 2754 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 217 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaIteracion -> PARA IDENTIFICADOR EN ':' especifiacionTipo EN expresion");}
#line 2760 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 219 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaIteracion -> REPETIR IDENTIFICADOR EN RANGO");}
#line 2766 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 220 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaIteracion -> REPETIR IDENTIFICADOR ':' especificacionTipo EN rango");}
#line 2772 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 222 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaIteracion -> REPETIR IDENTIFICADOR EN RANGO DESCENDENTE");}
#line 2778 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 223 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaIteracion -> REPETIR IDENTIFICADOR ':' especificacionTipo EN RANGO DESCENDENTE");}
#line 2784 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 224 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaIteracion -> MIENTRAS expresion");}
#line 2790 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 227 "simple.y" /* yacc.c:1646  */
    {printf("\ninstrccuionCapturaDeExcepcion -> PRUEBA instruccion clausulas FIN PRUEBA");}
#line 2796 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 228 "simple.y" /* yacc.c:1646  */
    {printf("\ninstrccuionCapturaDeExcepcion -> prueba instruccion clausulas FIN PRUEBA");}
#line 2802 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 231 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulasExcepcion -> clausulaExcepcionGeneral");}
#line 2808 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 232 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulasExcepcion -> clausulaExcepcionEspecifica clausulaExcepcionGeneral");}
#line 2814 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 233 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulasExcepcion -> clausulaExcepcionEspecificaMultiple clausulaExcepcionGeneral");}
#line 2820 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 235 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaExcepcionEspecifica -> EXCEPCION ( nombre ) intruccion");}
#line 2826 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 236 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaExcepcionEspecifica -> EXCEPCION ( nombre ) instruccionMultiple");}
#line 2832 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 238 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaExcepcionEspecificaMultiple -> clausulaExcepcionEspecifica clausulaExcepcionEspecifica");}
#line 2838 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 239 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaExcepcionEspecificaMultiple -> clausulaExcepcionEspecificaMultiple clausulaExcepcionEspecifica");}
#line 2844 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 242 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaExcepcionGeneral -> EXCEPCION instruccion");}
#line 2850 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 243 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaExcepcionGeneral -> EXCEPCION instruccionMultiple");}
#line 2856 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 246 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaFinalmente -> FINALMENTE instruccion");}
#line 2862 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 247 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaFinalmente -> FINALMENTE instruccionMultiple");}
#line 2868 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 250 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulas -> clausulasExcepcion");}
#line 2874 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 251 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulas -> clausulasExcepcion clausulaFinalmente");}
#line 2880 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 252 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulas -> clausulaFinalmente");}
#line 2886 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 254 "simple.y" /* yacc.c:1646  */
    {printf("\nidentificadorMultiple -> IDENTIFICADOR ',' IDENTIFICADOR");}
#line 2892 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 255 "simple.y" /* yacc.c:1646  */
    {printf("\nidentificadorMultiple -> identificadorMultiple ',' IDENTIFICADOR");}
#line 2898 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 258 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionMult -> expresionMult , expresion");}
#line 2904 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 259 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionMult -> expresion , expresion");}
#line 2910 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 261 "simple.y" /* yacc.c:1646  */
    {printf("\nclase -> CLASE ULTIMA superclase declaracionComponente FIN CLASE");}
#line 2916 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 262 "simple.y" /* yacc.c:1646  */
    {printf("\nclase -> CLASE ULTIMA superclase declaracionComponenteMultiple FIN CLASE");}
#line 2922 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 263 "simple.y" /* yacc.c:1646  */
    {printf("\nclase -> CLASE ULTIMA declaracionComponente FIN CLASE");}
#line 2928 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 264 "simple.y" /* yacc.c:1646  */
    {printf("\nclase -> CLASE ULTIMA declaracionComponenteMultiple FIN CLASE");}
#line 2934 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 265 "simple.y" /* yacc.c:1646  */
    {printf("\nclase -> CLASE superclase declaracionComponente FIN CLASE");}
#line 2940 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 266 "simple.y" /* yacc.c:1646  */
    {printf("\nclase -> CLASE superclase declaracionComponenteMultiple FIN CLASE");}
#line 2946 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 267 "simple.y" /* yacc.c:1646  */
    {printf("\nclase -> CLASE declaracionComponente FIN CLASE");}
#line 2952 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 268 "simple.y" /* yacc.c:1646  */
    {printf("\nclase -> CLASE declaracionComponenteMultiple FIN CLASE");}
#line 2958 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 271 "simple.y" /* yacc.c:1646  */
    {printf("\nsuperClase -> ( nombre )");}
#line 2964 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 272 "simple.y" /* yacc.c:1646  */
    {printf("\nsuperClase -> ( nombreMultiple )");}
#line 2970 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 274 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionComponente -> visibilidad  componente");}
#line 2976 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 275 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionComponente ->   componente");}
#line 2982 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 277 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionComponenteMultiple -> declaracionComponente  declaracionComponente");}
#line 2988 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 278 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionComponenteMultiple -> declaracionComponenteMultiple  declaracionComponente");}
#line 2994 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 280 "simple.y" /* yacc.c:1646  */
    {printf("\nvisibilidad -> PUBLICO");}
#line 3000 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 281 "simple.y" /* yacc.c:1646  */
    {printf("\nvisibilidad -> PRIVADO");}
#line 3006 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 282 "simple.y" /* yacc.c:1646  */
    {printf("\nvisibilidad -> PROTEGIDO");}
#line 3012 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 284 "simple.y" /* yacc.c:1646  */
    {printf("\ncomponente -> declaracionTipo");}
#line 3018 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 285 "simple.y" /* yacc.c:1646  */
    {printf("\ncomponente -> declaracionObjeto");}
#line 3024 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 286 "simple.y" /* yacc.c:1646  */
    {printf("\ncomponente -> declaracionSubprograma");}
#line 3030 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 287 "simple.y" /* yacc.c:1646  */
    {printf("\ncomponente -> modificador declaracionSubprograma");}
#line 3036 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 288 "simple.y" /* yacc.c:1646  */
    {printf("\ncomponente -> modificadorMult declaracionSubprograma");}
#line 3042 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 290 "simple.y" /* yacc.c:1646  */
    {printf("\nmodificadorMultiple -> modificador ',' modificador");}
#line 3048 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 291 "simple.y" /* yacc.c:1646  */
    {printf("\nmodificadorMultiple -> modificadorMultiple ',' modificador");}
#line 3054 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 293 "simple.y" /* yacc.c:1646  */
    {printf("\nmodificador -> CONSTRUCTOR");}
#line 3060 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 294 "simple.y" /* yacc.c:1646  */
    {printf("\nmodificador -> DESTRUCTOR");}
#line 3066 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 295 "simple.y" /* yacc.c:1646  */
    {printf("\nmodificador -> GENERIC");}
#line 3072 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 296 "simple.y" /* yacc.c:1646  */
    {printf("\nmodificador -> ABSTRACTO");}
#line 3078 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 297 "simple.y" /* yacc.c:1646  */
    {printf("\nmodificador -> ESPECIFICO");}
#line 3084 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 298 "simple.y" /* yacc.c:1646  */
    {printf("\nmodificador -> FINAL");}
#line 3090 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 303 "simple.y" /* yacc.c:1646  */
    {printf("\nrango -> expresion :: expresion");}
#line 3096 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 304 "simple.y" /* yacc.c:1646  */
    {printf("\nrango -> rango :: expresion");}
#line 3102 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 307 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionAsignacion");}
#line 3108 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 308 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionDevolver");}
#line 3114 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 309 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionLlamada");}
#line 3120 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 310 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionSi");}
#line 3126 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 311 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionCasos");}
#line 3132 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 312 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionBucle");}
#line 3138 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 313 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionInterrupcion");}
#line 3144 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 314 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionLanzamientoExcepcion");}
#line 3150 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 315 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionDeCapturaDeExcepcion");}
#line 3156 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 316 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> ';'");}
#line 3162 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 319 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionAsignacion -> objeto op_asignacion expresion ';'");}
#line 3168 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 322 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIGNACION := ");}
#line 3174 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 323 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIG_SUMA :+");}
#line 3180 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 324 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIG_RESTO :\\");}
#line 3186 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 325 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIG_MULT :*");}
#line 3192 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 326 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIG_DIV :/");}
#line 3198 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 327 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIG_RESTA :-");}
#line 3204 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 328 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIG_POT :^");}
#line 3210 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 329 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIG_DESPI :< ");}
#line 3216 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 330 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIG_DESPD :> ");}
#line 3222 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 333 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionDevolver -> DEVOLVER ';'");}
#line 3228 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 334 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionDevolver -> DEVOLVER expresion ';'");}
#line 3234 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 337 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionLlamada -> llamadaSubprograma ';'");}
#line 3240 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 340 "simple.y" /* yacc.c:1646  */
    {printf("\ndefinicionParametro -> expresion");}
#line 3246 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 341 "simple.y" /* yacc.c:1646  */
    {printf("\ndefinicionParametro -> IDENTIFICADOR ASIGNACION expresion");}
#line 3252 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 344 "simple.y" /* yacc.c:1646  */
    {printf("\ndefinicionParametroMultiple -> definicionParametro ',' definicionParametro");}
#line 3258 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 345 "simple.y" /* yacc.c:1646  */
    {printf("\ndefinicionParametroMultiple -> definicionParametroMultiple ',' definicionParametro");}
#line 3264 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 349 "simple.y" /* yacc.c:1646  */
    {printf("\nllamadaSubprograma -> nombre '(' ')'");}
#line 3270 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 350 "simple.y" /* yacc.c:1646  */
    {printf("\nllamadaSubprograma -> nombre '(' definicionParametro ')'");}
#line 3276 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 351 "simple.y" /* yacc.c:1646  */
    {printf("\nllamadaSubprograma -> nombre '(' definicionParametroMultiple ')'");}
#line 3282 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 354 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionSi -> SI expresion ENTONCES instruccion FIN SI");}
#line 3288 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 355 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionSi -> SI expresion ENTONCES instruccionMultiple FIN SI");}
#line 3294 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 356 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionSi -> SI expresion ENTONCES instruccion SINO instruccion FIN SI");}
#line 3300 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 357 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionSi -> SI expresion ENTONCES instruccion SINO instruccionMultiple FIN SI");}
#line 3306 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 358 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionSi -> SI expresion ENTONCES instruccionMultiple SINO instruccion");}
#line 3312 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 359 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionSi -> SI expresion ENTONCES instruccionMultiple SINO instruccionMultiple");}
#line 3318 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 362 "simple.y" /* yacc.c:1646  */
    {printf("\nespecificacionTipo -> nombre");}
#line 3324 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 363 "simple.y" /* yacc.c:1646  */
    {printf("\nespecificacionTipo -> tipoNoEstructurado");}
#line 3330 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 366 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionTipo -> TIPO IDENTIFICADOR ES tipoNoEstructurado ';'");}
#line 3336 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 367 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionTipo -> TIPO IDENTIFICADOR ES tipoEstructurado ';'");}
#line 3342 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 370 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoNoEstructurado -> tipoEscalar");}
#line 3348 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 371 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoNoEstructurado -> tipoTabla");}
#line 3354 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 372 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoNoEstructurado -> tipoDiccionario");}
#line 3360 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 375 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEscalar -> tipoBasico");}
#line 3366 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 376 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEscalar -> SIGNO tipoBasico");}
#line 3372 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 377 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEscalar -> SIGNO tipoBasico longitud");}
#line 3378 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 378 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEscalar -> SIGNO tipoBasico RANGO rango");}
#line 3384 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 379 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEscalar -> SIGNO tipoBasico longitud RANGO rango");}
#line 3390 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 380 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEscalar -> tipoBasico longitud");}
#line 3396 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 381 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEscalar -> tipoBasico RANGO rango");}
#line 3402 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 382 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEscalar -> tipoBasico longitud RANGO rango");}
#line 3408 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 385 "simple.y" /* yacc.c:1646  */
    {printf("\nlongitud -> CORTO");}
#line 3414 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 386 "simple.y" /* yacc.c:1646  */
    {printf("\nlongitud -> LARGO");}
#line 3420 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 389 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoBasico -> BOOLEANO");}
#line 3426 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 390 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoBasico -> CARACTER");}
#line 3432 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 391 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoBasico -> ENTERO");}
#line 3438 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 392 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoBasico -> REAL");}
#line 3444 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 395 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoTabla -> TABLA '(' expresion '..' expresion ')' DE especificacionTipo");}
#line 3450 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 396 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoTabla -> LISTA DE especificacionTipo");}
#line 3456 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 399 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoDiccionario -> DICCIONARIO DE especificacionTipo");}
#line 3462 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 402 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEstructurado -> tipoRegistro");}
#line 3468 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 403 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEstructurado -> tipoEnumerado");}
#line 3474 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 404 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEstructurado -> clase");}
#line 3480 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 407 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoRegistro -> REGISTRO campo FIN REGISTRO");}
#line 3486 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 408 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoRegistro -> REGISTRO campoMultiple FIN REGISTRO");}
#line 3492 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 411 "simple.y" /* yacc.c:1646  */
    {printf("\ncampo -> IDENTIFICADOR ':' especificacionTipo ';'");}
#line 3498 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 412 "simple.y" /* yacc.c:1646  */
    {printf("\ncampo -> IDENTIFICADOR ':' especificacionTipo ASIGNACION expresion ';'");}
#line 3504 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 413 "simple.y" /* yacc.c:1646  */
    {printf("\ncampo -> identificadorMultiple ':' especificacionTipo ';'");}
#line 3510 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 414 "simple.y" /* yacc.c:1646  */
    {printf("\ncampo -> identificadorMultiple ':' especificacionTipo ASIGNACION expresion ';'");}
#line 3516 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 417 "simple.y" /* yacc.c:1646  */
    {printf("\ncampoMultiple -> campo campo");}
#line 3522 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 418 "simple.y" /* yacc.c:1646  */
    {printf("\ncampoMultiple -> campoMultiple campo");}
#line 3528 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 421 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEnumerado -> ENUMERACION elementoEnumeracion FIN ENUMERACION");}
#line 3534 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 422 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEnumerado -> ENUMERACION elementoEnumeracionMultiple FIN ENUMERACION");}
#line 3540 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 423 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEnumerado -> ENUMERACION DE tipoEscalar elementoEnumeracion FIN ENUMERACION");}
#line 3546 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 424 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEnumerado -> ENUMERACION DE tipoEscalar elementoEnumeracionMultiple FIN ENUMERACION");}
#line 3552 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 427 "simple.y" /* yacc.c:1646  */
    {printf("\nelementoEnumeracion -> IDENTIFICADOR");}
#line 3558 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 428 "simple.y" /* yacc.c:1646  */
    {printf("\nelementoEnumeracion -> IDENTIFICADOR ASIGNACION expresion");}
#line 3564 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 431 "simple.y" /* yacc.c:1646  */
    {printf("\nelementoEnumeracionMultiple -> elementoEnumeracion ',' elementoEnumeracion");}
#line 3570 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 432 "simple.y" /* yacc.c:1646  */
    {printf("\nelementoEnumeracionMultiple -> elementoEnumeracionMultiple ',' elementoEnumeracion");}
#line 3576 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 435 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionSubprograma -> SUBPROGRAMA cabeceraSubprograma cuerpoSubprograma SUBPROGRAMA");}
#line 3582 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 438 "simple.y" /* yacc.c:1646  */
    {printf("\ncabeceraSubprograma -> IDENTIFICADOR");}
#line 3588 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 439 "simple.y" /* yacc.c:1646  */
    {printf("\ncabeceraSubprograma -> IDENTIFICADOR parametrizacion");}
#line 3594 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 440 "simple.y" /* yacc.c:1646  */
    {printf("\ncabeceraSubprograma -> IDENTIFICADOR tipoResultado");}
#line 3600 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 441 "simple.y" /* yacc.c:1646  */
    {printf("\ncabeceraSubprograma -> IDENTIFICADOR parametrizacion tipoResultado");}
#line 3606 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 444 "simple.y" /* yacc.c:1646  */
    {printf("\nparametrizacion -> '(' declaracionParametros ')'");}
#line 3612 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 445 "simple.y" /* yacc.c:1646  */
    {printf("\nparametrizacion -> '(' declaracionParametrosMultiple ')'");}
#line 3618 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 448 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionParametros -> IDENTIFICADOR ':' especificacionTipo");}
#line 3624 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 449 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionParametros -> IDENTIFICADOR ':' modo especificacionTipo");}
#line 3630 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 450 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionParametros -> IDENTIFICADOR ':' especificacionTipo ASIGNACION expresion");}
#line 3636 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 451 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionParametros -> IDENTIFICADOR ':' modo especificacionTipo ASIGNACION expresion");}
#line 3642 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 452 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionParametros -> identificadorMultiple ':' especificacionTipo");}
#line 3648 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 453 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionParametros -> identificadorMultiple ':' modo especificacionTipo");}
#line 3654 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 454 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionParametros -> identificadorMultiple ':' especificacionTipo ASIGNACION expresion");}
#line 3660 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 455 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionParametros -> identificadorMultiple ':' modo especificacionTipo ASIGNACION expresion");}
#line 3666 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 458 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionParametrosMultiple -> declaracionParametros ';' declaracionParametros ';'");}
#line 3672 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 459 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionParametrosMultiple -> declaracionParametrosMultiple declaracionParametros ';'");}
#line 3678 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 462 "simple.y" /* yacc.c:1646  */
    {printf("\nmodo -> VALOR");}
#line 3684 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 463 "simple.y" /* yacc.c:1646  */
    {printf("\nmodo -> REFERENCIA");}
#line 3690 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 466 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoResultado -> DEVOLVER especificacionTipo");}
#line 3696 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 469 "simple.y" /* yacc.c:1646  */
    {printf("\ncuerpoSubprograma -> PRINCIPIO instruccion FIN");}
#line 3702 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 470 "simple.y" /* yacc.c:1646  */
    {printf("\ncuerpoSubprograma -> PRINCIPIO instruccionMultiple FIN");}
#line 3708 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 471 "simple.y" /* yacc.c:1646  */
    {printf("\ncuerpoSubprograma -> PRINCIPIO declaracion instruccion FIN");}
#line 3714 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 472 "simple.y" /* yacc.c:1646  */
    {printf("\ncuerpoSubprograma -> PRINCIPIO declaracion instruccionMultiple FIN");}
#line 3720 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 473 "simple.y" /* yacc.c:1646  */
    {printf("\ncuerpoSubprograma -> PRINCIPIO declaracionMultiple instruccion FIN");}
#line 3726 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 474 "simple.y" /* yacc.c:1646  */
    {printf("\ncuerpoSubprograma -> PRINCIPIO declaracionMultiple instruccionMultiple FIN");}
#line 3732 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 477 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> libreriaMultiple exportaciones declaracion");}
#line 3738 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 478 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> libreriaMultiple exportaciones declaracionMultiple");}
#line 3744 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 479 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> libreriaMultiple declaracion");}
#line 3750 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 480 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> libreriaMultiple declaracionMultiple");}
#line 3756 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 481 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> libreria exportaciones declaracion");}
#line 3762 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 482 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> libreria exportaciones declaracionMultiple");}
#line 3768 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 483 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> libreria declaracion");}
#line 3774 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 484 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> libreria declaracionMultiple");}
#line 3780 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 485 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> exportaciones declaracion");}
#line 3786 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 486 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> exportaciones declaracionMultiple");}
#line 3792 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 487 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> declaracion");}
#line 3798 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 488 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> declaracionMultiple");}
#line 3804 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 492 "simple.y" /* yacc.c:1646  */
    {printf("\nenumeraciones -> [ expresionCondicional ]");}
#line 3810 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 493 "simple.y" /* yacc.c:1646  */
    {printf("\nenumeraciones -> [ expresionMult ]");}
#line 3816 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 494 "simple.y" /* yacc.c:1646  */
    {printf("\nenumeraciones -> [ claveValor ]");}
#line 3822 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 495 "simple.y" /* yacc.c:1646  */
    {printf("\nenumeraciones -> [ claveValorMultiple ]");}
#line 3828 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 496 "simple.y" /* yacc.c:1646  */
    {printf("\nenumeraciones -> [ campoValor ]");}
#line 3834 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 497 "simple.y" /* yacc.c:1646  */
    {printf("\nenumeraciones -> [ campoValorMultiple ]");}
#line 3840 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 500 "simple.y" /* yacc.c:1646  */
    {printf("\nclaveValorMult -> claveValor , claveValor");}
#line 3846 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 501 "simple.y" /* yacc.c:1646  */
    {printf("\nclaveValorMult -> claveValorMult , claveValor");}
#line 3852 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 504 "simple.y" /* yacc.c:1646  */
    {printf("\nclave_valor -> CTC_CADENA => expresion");}
#line 3858 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 506 "simple.y" /* yacc.c:1646  */
    {printf("\ncampoValorMult -> campo_valor , campo_valor");}
#line 3864 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 507 "simple.y" /* yacc.c:1646  */
    {printf("\ncampoValorMult -> campoValorMult , campo_valor");}
#line 3870 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 509 "simple.y" /* yacc.c:1646  */
    {printf("\ncampo_valor -> CTC_CADENA => expresion");}
#line 3876 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 511 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionCondicional -> expresion");}
#line 3882 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 512 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionCondicional -> si expresion entonces expresion");}
#line 3888 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 513 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionCondicional -> si expresion entonces expresion SINO expresion");}
#line 3894 "simple.tab.c" /* yacc.c:1646  */
    break;


#line 3898 "simple.tab.c" /* yacc.c:1646  */
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

  yydebug = 1;

  if (argc < 2) {
    printf("Uso: ./simple NombreArchivo\n");
    }
  else {
    yyin = fopen(argv[1],"r");
    yyparse();
    }
  }
