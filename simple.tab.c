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
#define YYLAST   2768

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  111
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  94
/* YYNRULES -- Number of rules.  */
#define YYNRULES  302
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  622

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
     312,   313,   314,   315,   316,   317,   320,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   334,   335,   338,   341,
     342,   345,   346,   350,   351,   352,   355,   356,   357,   358,
     359,   360,   363,   364,   367,   368,   371,   372,   373,   376,
     377,   378,   379,   380,   381,   382,   383,   386,   387,   390,
     391,   392,   393,   396,   397,   400,   403,   404,   405,   408,
     409,   412,   413,   414,   415,   418,   419,   422,   423,   424,
     425,   428,   429,   432,   433,   436,   437,   440,   441,   442,
     443,   446,   447,   450,   451,   452,   453,   454,   455,   456,
     457,   460,   461,   464,   465,   468,   471,   472,   473,   474,
     475,   476,   479,   480,   481,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   493,   494,   495,   496,   497,   498,
     501,   502,   505,   507,   508,   510,   512,   513,   514,   517,
     518,   521,   524
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
  "expresionCondicional", "reductora", "finSubprogramaError",
  "finInstruccionError", YY_NULLPTR
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

#define YYPACT_NINF -374

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-374)))

#define YYTABLE_NINF -284

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-284)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     123,    49,    61,   206,  -374,  -374,   104,   136,  -374,   631,
     749,  1725,   133,   210,   249,   260,   273,   121,   631,   631,
      18,   122,    15,  -374,   180,  -374,  -374,  -374,    27,  -374,
    1535,  -374,   749,   749,   360,   769,  -374,  -374,   210,  1725,
    -374,  -374,  -374,  -374,  -374,  -374,  1732,  1725,  1725,  1725,
    1826,  2603,    94,  -374,   182,   -30,  -374,  -374,   289,  -374,
    -374,   497,   210,   -48,    51,   210,    14,   836,   373,   927,
     338,  -374,   203,   226,    15,  -374,   271,   299,    15,  -374,
    -374,   317,   426,  1899,   359,  -374,   405,  1725,   342,   210,
    1725,   401,  1535,   413,    34,  1725,   466,   397,  -374,  1531,
    -374,  -374,   943,  -374,  -374,  1535,  -374,   983,  -374,  -374,
    -374,   388,  -374,     2,  -374,  -374,  -374,  1535,  1535,    94,
    -374,  1570,   430,   443,  2314,   160,   306,   327,   354,  2138,
      60,  2351,  2649,   233,  1725,  -374,  1725,  1725,  1725,  1725,
    1725,  1725,  1725,  1725,  1725,  1725,  1725,  1725,  1725,  1725,
    1725,  1725,  1725,   451,   709,  1793,  -374,  -374,  -374,   456,
    1725,   210,   432,    -5,  -374,   210,  -374,   210,    -1,  1001,
     464,   513,  -374,   474,  2139,  -374,  -374,  1001,   530,  -374,
     533,  -374,   351,   442,   484,   -47,  -374,  -374,   185,  -374,
    -374,  -374,   476,   509,   522,   545,  1001,   -35,  -374,  -374,
    1646,  -374,  2364,   -43,  2603,   535,   168,   168,    -4,  1725,
     490,   450,  1607,   459,   497,  -374,  -374,  -374,  -374,  -374,
    -374,  -374,  -374,  -374,  1725,  -374,  -374,  1005,  1045,  -374,
    -374,  -374,  -374,  1067,  1107,  1129,  1169,  1725,  1725,  1725,
    -374,  -374,   511,  -374,   511,  -374,   508,  -374,   508,  -374,
    1725,  -374,  1725,  -374,   430,   443,  2212,  2603,  1024,   582,
    2659,  2659,  2603,  2613,  2649,  2659,  2659,  2659,   402,   402,
      46,    46,    46,  2603,  -374,   506,  -374,  2603,    55,   112,
    -374,   393,   408,  2175,   106,   484,  -374,   512,   484,   484,
     523,  -374,  -374,   197,   217,   -45,   144,  -374,  -374,   308,
       6,   524,  -374,   470,   482,  -374,  -374,   521,  1001,  1001,
     202,  1725,  1725,  -374,  -374,  -374,  1725,   546,   526,  1725,
    -374,   579,  -374,  -374,  1599,  1191,  1535,   564,   578,   578,
    -374,  -374,   577,   580,  1725,  1001,  2603,   466,  -374,  1535,
    -374,  1535,  2401,   601,   602,  -374,  -374,  -374,  -374,  2125,
    2603,  2603,  -374,  -374,  -374,  -374,  2603,  2603,  1725,  -374,
    1776,  -374,  1776,  -374,   547,  -374,   548,  -374,  -374,   237,
     262,   501,  2119,  2119,  -374,   464,  -374,   464,  -374,  -374,
    -374,  -374,  -374,  -374,  -374,  -374,  -374,  1565,   210,  -374,
    2076,  1883,  1921,  1188,  -374,     9,    10,  -374,  -374,   205,
     543,   -21,   -19,   223,   234,     4,    17,  -374,  -374,  1725,
    -374,  -374,  1725,   571,  2226,  2414,  2264,   552,  1725,  1725,
    2451,  1675,    23,   227,  1001,  2603,   210,   688,   808,  1231,
    1253,  -374,  -374,  -374,  -374,  -374,   576,   581,    19,   603,
     515,   834,   874,  1293,  1315,  -374,  -374,  -374,  1725,  2603,
    -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,   554,
    1001,   555,  1001,  -374,   519,  2076,  1930,  1968,    52,   198,
    2000,  2038,   625,  -374,   629,  -374,  -374,   841,  -374,   841,
    -374,   573,  1725,   619,   573,   620,   573,  1001,  1001,   593,
    -374,   594,  -374,  2464,   552,  1725,  1725,  -374,  1725,  1725,
     552,  2501,  -374,  -374,  2277,   600,   559,  1675,   642,  -374,
     643,  -374,   645,   155,  -374,  -374,  -374,  1725,  -374,   621,
    1535,   626,  1535,   668,   675,  2603,  1725,   611,  1725,   612,
    -374,  2047,  2085,   684,   685,  -374,  -374,   686,   689,  -374,
    -374,  -374,  -374,   -15,    -6,  2603,  -374,  -374,  -374,  -374,
      36,    41,  -374,  -374,  -374,   552,  2516,  2603,  2603,  -374,
    1725,  1535,  -374,   609,  -374,  -374,  1725,  1535,    26,  -374,
    1355,  1377,  -374,  1417,  1439,  -374,  -374,  2603,  1725,  2603,
    1725,   691,   694,  -374,  -374,  -374,  -374,   681,   690,  1725,
    -374,  1725,  -374,   692,  2603,   487,   921,  -374,  2603,  1476,
    1498,  -374,   655,   660,   667,   671,  2603,  2603,  -374,  -374,
    -374,  -374,  2553,  2566,  1001,  -374,  -374,  -374,  -374,  -374,
    -374,  -374
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     2,     3,     0,     0,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    17,     0,    18,    19,    14,     0,   246,
       0,     4,     0,     0,     0,     0,     7,    64,     0,     0,
      63,    67,    68,    45,    65,    66,     0,     0,     0,     0,
       0,   299,    69,    42,    49,    51,    55,    57,    58,    59,
      61,     0,     0,     0,     0,     0,   247,     0,     0,     0,
       0,    12,     0,     0,     0,    13,     0,     0,     0,    16,
      15,     0,     0,     0,     0,   300,     0,     0,     0,     0,
       0,     0,     0,     0,    85,     0,    85,    45,   174,     0,
     171,   172,     0,   169,   170,     0,   173,     0,   165,   166,
     167,     0,   168,     0,   175,     6,     5,     0,     0,     0,
      60,     0,    68,    45,     0,     0,     0,     0,     0,   296,
       0,     0,    39,     0,     0,    56,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    53,    54,    52,     0,
       0,     0,     0,     0,    21,     0,    20,     0,     0,     0,
       0,   248,   249,     0,     0,   219,   220,     0,     0,   221,
       0,   222,     0,     0,   202,     0,   203,   206,   209,   207,
     208,   129,     0,     0,     0,     0,     0,     0,   130,   301,
       0,   186,     0,     0,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   177,   178,   182,   180,   181,
     179,   183,   184,   185,     0,   267,    88,     0,     0,   266,
      87,   188,   302,     0,     0,     0,     0,     0,     0,     0,
      31,   287,     0,   286,     0,   289,     0,   288,     0,    30,
       0,   285,     0,    62,     0,     0,   296,    32,    27,    28,
      35,    36,    38,    40,    41,    33,    34,    37,    22,    23,
      26,    24,    25,    29,    46,    45,   193,   189,     0,     0,
      50,     0,     0,     0,     0,    70,   284,     0,    47,    48,
       0,     9,   265,     0,     0,     0,     0,   250,   245,     0,
       0,     0,   228,     0,     0,   226,   227,     0,     0,     0,
     210,     0,     0,    79,   217,   218,     0,   214,     0,     0,
      80,     0,   187,    86,     0,     0,     0,   126,     0,     0,
     115,   128,     0,     0,     0,     0,    84,    85,    83,     0,
      81,     0,     0,     0,     0,   271,   270,   269,   268,   297,
     292,   295,   291,   290,   294,   293,   132,   131,     0,   194,
       0,   195,     0,    73,     0,    74,     0,    71,    72,     0,
       0,     0,     0,     0,   251,     0,   252,     0,   160,   157,
     158,   161,   162,   159,   148,   149,   147,     0,     0,   151,
       0,     0,     0,     0,   144,     0,     0,   150,   152,     0,
     241,     0,     0,     0,     0,     0,     0,   204,   205,     0,
     225,   224,     0,   211,     0,     0,     0,   215,     0,     0,
       0,     0,     0,     0,     0,   106,     0,     0,     0,     0,
       0,   127,   120,   116,   121,   117,     0,     0,   108,     0,
       0,     0,     0,     0,     0,   176,   105,   104,     0,   190,
     191,   192,    43,    44,    10,    11,     8,   264,   263,   253,
       0,   257,     0,   261,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   145,     0,   146,   143,     0,   154,     0,
     153,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     235,     0,   236,     0,   212,     0,     0,    77,     0,     0,
     216,     0,    78,    99,    97,     0,    96,     0,     0,    92,
       0,    91,     0,     0,   114,   113,   110,     0,    82,     0,
       0,     0,     0,     0,     0,   298,     0,   254,     0,   258,
     262,     0,     0,     0,     0,   141,   142,     0,     0,   139,
     140,   156,   155,     0,     0,   242,   237,   243,   238,   244,
       0,     0,   229,   230,    75,   213,     0,   163,   164,    76,
       0,     0,   100,    95,    90,    89,     0,     0,   109,   197,
       0,     0,   196,     0,     0,   103,   102,   255,     0,   259,
       0,     0,     0,   135,   136,   137,   138,     0,     0,     0,
     231,     0,   233,     0,    98,     0,     0,   101,   107,     0,
       0,   111,     0,     0,     0,     0,   256,   260,   133,   134,
     239,   240,     0,     0,     0,   201,   200,   199,   198,   232,
     234,   223
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -374,  -374,  -374,  -374,   268,   711,  -374,    35,   637,   302,
      -9,  -374,   -13,   343,   583,  -374,  -374,  -374,   682,  -374,
     187,  -275,  -374,   -95,  -374,   -59,  -374,  -374,   -88,  -374,
     228,  -374,  -374,   -57,  -374,  -374,   127,  -374,   141,   407,
     538,  -141,   589,  -374,   350,  -287,  -373,  -374,   349,  -374,
     -92,  -328,   336,  -374,  -374,  -374,  -374,    73,  -374,   156,
    -374,     5,   169,   585,   366,   457,   586,  -374,  -374,  -374,
    -374,    66,  -374,  -374,  -138,   288,  -294,  -374,  -374,    11,
    -374,   404,   608,   214,  -374,  -374,  -374,   204,  -374,   194,
    -374,   224,  -374,  -374
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    31,    71,    19,     5,    34,    79,    22,
     416,   282,    52,    64,    53,    54,   158,    55,    56,    57,
      58,    23,   100,   211,   101,   102,   103,   422,   423,   505,
     506,   507,   104,   105,   106,   327,   328,   329,   330,   331,
     332,    24,   130,   302,   390,   473,   392,   393,   394,   395,
     396,   417,   226,   108,   224,   109,   110,   278,   279,    59,
     112,   185,    25,   186,   187,   317,   188,   189,   190,   304,
     305,   405,   406,   306,   401,   402,    26,    67,   171,   295,
     296,   460,   172,    36,    27,    60,   125,   126,   127,   128,
      61,    28,    29,   114
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      63,   213,    51,    85,   162,   398,   438,   483,   290,   485,
      11,    11,   391,   587,   467,   334,    11,   471,  -283,    11,
     399,   153,   588,   312,   389,   119,   153,   287,    85,   294,
     121,   169,   489,   206,   516,   319,   421,   124,   129,   131,
     132,   601,   156,   157,    20,   491,   227,   209,   210,   163,
     374,   508,   168,    72,    76,    86,   184,    81,   233,   235,
     164,   313,   165,   375,   153,   323,    15,    15,   153,   403,
     184,   400,    15,   320,    16,    15,   203,    16,   200,   202,
      17,   204,   403,    17,   494,   335,   212,   499,   197,   484,
     500,   486,   532,   398,   499,   484,   398,   398,   398,   398,
     466,   478,   480,   470,   486,   475,   589,   291,   170,   192,
     232,   591,   389,   194,     6,   389,   389,   389,   389,   477,
     479,   153,  -282,    11,   141,   256,     7,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   590,   277,   370,   535,   285,   592,
     359,   283,   288,   251,   289,   152,   184,   341,     1,   166,
     404,   167,   165,   153,   184,   360,     2,   555,    62,    11,
     252,   398,   398,   398,   292,    87,   398,   398,   531,    15,
     475,    16,   307,   184,   475,    88,   111,    17,   154,   568,
     389,   389,   389,   325,   120,   389,   389,   314,   326,   368,
     336,   318,    89,  -279,    11,    90,     8,   361,    91,   175,
      69,   176,     9,    92,   314,   342,   252,    99,   315,    93,
      94,    95,   362,    96,   153,   179,  -278,    11,   349,   350,
     351,    70,   316,    97,   294,   315,   294,   398,   398,   376,
     421,   356,   440,   357,    10,   475,   115,   116,   111,   412,
     567,   241,   377,   181,   113,   510,   389,   389,   111,   182,
      15,   111,    16,   111,   404,   404,   427,   429,    17,    83,
     242,  -275,    11,   111,   111,    43,    98,    18,    32,    99,
     441,   173,   443,    15,    65,    16,   372,    75,   155,    99,
      84,    17,    99,   536,    99,   184,   184,   254,   255,  -274,
      11,    75,   414,   415,    99,    99,   373,    70,   167,    11,
     420,   378,   487,   410,   411,   425,   113,  -281,    11,   379,
      74,    78,   184,   488,   380,    66,   113,    84,    15,   113,
      16,   113,   381,    70,   509,   511,    17,   382,    68,   383,
     439,   113,   113,   543,    84,   454,   547,    70,   549,   449,
     384,   277,   385,   277,   386,   175,    15,   176,    16,   184,
     184,    11,   111,   111,    17,    15,   107,    16,   387,    37,
     455,   179,    84,    17,    15,   468,    16,   459,   461,   159,
      38,   160,    17,   111,   111,   541,   463,   542,   464,   111,
     111,   111,   111,    99,    99,    39,   174,   243,   161,   181,
     493,   117,   388,   191,    40,    41,    42,    43,    44,    45,
     501,   184,   504,   513,    99,    99,   244,    15,   245,    16,
      99,    99,    99,    99,   198,    17,  -280,    11,   207,   512,
     113,   113,    46,   450,    47,   451,    48,   246,    49,   525,
     354,   228,   355,   230,    50,   247,   352,   184,   353,   184,
     201,   113,   113,   234,   236,   432,   434,   113,   113,   113,
     113,   570,   199,   573,   248,   527,   205,   529,   397,   433,
     435,   490,   492,   545,   184,   184,  -277,    11,   208,   209,
     141,   111,   111,    15,   363,    16,   214,   556,    11,   557,
     558,    17,   550,   551,    87,   111,   231,   111,   504,   365,
     -94,   238,   595,   364,    88,   149,   150,   151,   599,  -276,
      11,   152,    99,    99,   239,   -94,   274,   577,   366,   579,
     281,    89,  -273,    11,    90,   286,    99,    91,    99,   293,
     169,   298,    92,    15,    90,    16,   311,    91,    93,    94,
      95,    17,    96,   230,   308,  -272,    11,   309,    93,   113,
     113,   594,    97,   153,   324,   337,   397,   598,   338,   397,
     397,   397,   397,   113,   230,   113,    15,   340,    16,   606,
     230,   607,   230,   255,    17,   254,   358,   369,   407,    15,
     612,    16,   613,   111,   111,   111,   111,    17,   371,   403,
     408,   409,   421,   418,   326,    98,   419,   111,   111,   111,
     111,   184,    15,   325,    16,   436,   446,   447,   437,   456,
      17,   452,   453,   482,    99,    99,    99,    99,   495,   621,
     499,   514,   517,   518,   526,   528,   515,   530,    99,    99,
      99,    99,    11,   539,   397,   397,   397,   540,   400,   397,
     397,   546,   548,   552,   553,    12,    21,    35,   562,   564,
     565,   113,   113,   113,   113,    73,    77,    13,    80,    82,
     141,   428,   430,    14,   566,   113,   113,   113,   113,    35,
      35,   561,    80,   575,   569,   442,   111,   444,   111,   572,
     576,   578,   580,   147,   148,   149,   150,   151,    15,    11,
      16,   152,   583,   584,   585,    87,    17,   586,   597,   608,
     397,   397,   609,   610,    35,    88,   614,    99,   615,    99,
      80,   193,   611,   616,    80,   195,  -123,   111,  -123,    80,
     617,    33,    89,   111,   618,    90,   111,   111,    91,   111,
     111,   469,   135,    92,   431,   563,    37,   465,   280,    93,
      94,    95,   476,    96,   113,   333,   113,    38,    99,   284,
      11,   111,   111,    97,    99,   111,   111,    99,    99,   303,
      99,    99,    39,    12,   230,   481,   230,   413,   310,   544,
      11,    40,    41,    42,   275,    44,    45,   462,   230,   297,
     230,    14,    99,    99,     0,   113,    99,    99,     0,     0,
      30,   113,     0,     0,   113,   113,    98,   113,   113,    46,
       0,    47,     0,    48,   276,    49,    15,     0,    16,    11,
     118,    50,     0,     0,    17,    87,     0,     0,     0,   113,
     113,     0,     0,   113,   113,    88,    15,     0,    16,     0,
      80,     0,    80,     0,    17,    11,  -122,    11,  -122,     0,
       0,    87,    89,     0,   378,    90,     0,     0,    91,     0,
       0,    88,   379,    92,     0,     0,   571,   380,   574,    93,
      94,    95,   519,    96,     0,   381,     0,     0,    89,     0,
     382,    90,   383,    97,    91,    11,     0,    30,     0,    92,
       0,    87,     0,     0,     0,    93,    94,    95,     0,    96,
     520,    88,     0,    15,     0,    16,     0,   596,     0,    97,
       0,    17,   521,   600,     0,     0,     0,   230,    89,     0,
     230,    90,     0,     0,    91,     0,    98,     0,     0,    92,
       0,     0,    11,     0,     0,    93,    94,    95,    87,    96,
     522,   175,   230,   176,   -93,     0,   230,   177,    88,    97,
       0,     0,    98,     0,    11,   178,     0,   179,     0,   -93,
      87,     0,     0,     0,     0,    89,     0,     0,    90,     0,
      88,    91,     0,   180,     0,     0,    92,     0,     0,     0,
       0,   225,    93,    94,    95,   181,    96,    89,     0,     0,
      90,   182,    98,    91,    11,   183,    97,     0,    92,     0,
      87,     0,    43,     0,    93,    94,    95,     0,    96,     0,
      88,     0,     0,     0,     0,   175,    11,   176,    97,     0,
       0,   229,    87,     0,     0,     0,     0,    89,     0,   178,
      90,   179,    88,    91,     0,     0,     0,     0,    92,    98,
       0,     0,     0,   343,    93,    94,    95,   180,    96,    89,
       0,     0,    90,     0,     0,    91,    11,     0,    97,   181,
      92,    98,    87,     0,     0,   182,    93,    94,    95,   183,
      96,     0,    88,     0,     0,     0,    43,     0,    11,     0,
      97,     0,     0,   344,    87,     0,     0,     0,     0,    89,
       0,     0,    90,     0,    88,    91,     0,     0,     0,     0,
      92,    98,     0,     0,     0,   345,    93,    94,    95,   138,
      96,    89,   141,     0,    90,     0,     0,    91,    11,     0,
      97,     0,    92,    98,    87,     0,     0,     0,    93,    94,
      95,     0,    96,     0,    88,   147,   148,   149,   150,   151,
      11,     0,    97,   152,     0,   346,    87,     0,     0,     0,
       0,    89,     0,     0,    90,     0,    88,    91,     0,     0,
       0,     0,    92,    98,     0,     0,     0,   347,    93,    94,
      95,     0,    96,    89,     0,     0,    90,     0,     0,    91,
      11,     0,    97,     0,    92,    98,    87,     0,     0,     0,
      93,    94,    95,     0,    96,     0,    88,     0,     0,    11,
       0,   378,    11,     0,    97,     0,     0,   348,    87,   379,
       0,     0,     0,    89,   380,     0,    90,     0,    88,    91,
       0,     0,   381,     0,    92,    98,     0,   382,     0,   383,
      93,    94,    95,     0,    96,    89,     0,     0,    90,     0,
       0,    91,    11,     0,    97,     0,    92,    98,    87,     0,
       0,     0,    93,    94,    95,    15,    96,    16,    88,     0,
       0,     0,     0,    17,    11,     0,    97,     0,     0,  -125,
      87,     0,     0,     0,     0,    89,     0,     0,    90,     0,
      88,    91,     0,     0,     0,     0,    92,    98,     0,     0,
       0,  -124,    93,    94,    95,   426,    96,    89,     0,     0,
      90,     0,     0,    91,    11,     0,    97,     0,    92,    98,
      87,     0,     0,     0,    93,    94,    95,     0,    96,     0,
      88,     0,     0,     0,     0,     0,    11,     0,    97,     0,
       0,   523,    87,     0,     0,     0,     0,    89,     0,     0,
      90,     0,    88,    91,     0,     0,     0,     0,    92,    98,
       0,     0,     0,   524,    93,    94,    95,     0,    96,    89,
       0,     0,    90,     0,     0,    91,    11,     0,    97,     0,
      92,    98,    87,     0,     0,     0,    93,    94,    95,     0,
      96,     0,    88,     0,     0,     0,     0,     0,    11,     0,
      97,     0,     0,   602,    87,     0,     0,     0,     0,    89,
       0,     0,    90,     0,    88,    91,     0,     0,     0,     0,
      92,    98,     0,     0,     0,   603,    93,    94,    95,     0,
      96,    89,     0,     0,    90,     0,     0,    91,    11,     0,
      97,     0,    92,    98,    87,     0,     0,     0,    93,    94,
      95,     0,    96,     0,    88,     0,     0,     0,     0,     0,
      11,     0,    97,     0,     0,   604,    87,     0,     0,     0,
       0,    89,     0,     0,    90,     0,    88,    91,     0,     0,
       0,     0,    92,    98,     0,     0,     0,   605,    93,    94,
      95,     0,    96,    89,     0,     0,    90,    11,     0,    91,
       0,     0,    97,    87,    92,    98,     0,     0,     0,     0,
      93,    94,    95,    88,    96,     0,     0,     0,     0,    11,
       0,  -119,     0,     0,    97,    87,     0,     0,     0,     0,
      89,     0,     0,    90,     0,    88,    91,     0,     0,     0,
       0,    92,     0,  -118,     0,    98,     0,    93,    94,    95,
       0,    96,    89,     0,     0,    90,    11,     0,    91,     0,
       0,    97,    87,    92,     0,     0,     0,    98,     0,    93,
      94,    95,    88,    96,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    97,     0,     0,    11,     0,   378,    89,
       0,     0,    90,     0,     0,    91,   379,     0,     0,     0,
      92,   380,     0,     0,    98,     0,    93,    94,    95,   381,
      96,   237,     0,     0,   382,     0,   383,     0,     0,     0,
      97,   215,     0,     0,     0,     0,    98,   384,     0,   385,
       0,   386,   216,   217,   218,   219,   220,   221,   222,   223,
       0,   159,    15,   160,    16,     0,    37,     0,   339,     0,
      17,     0,     0,     0,     0,     0,     0,    38,     0,   136,
     161,     0,     0,    98,   137,   138,   139,   140,   141,   142,
     143,     0,    39,     0,     0,     0,     0,     0,     0,   388,
       0,    40,    41,    42,    43,    44,    45,   144,   145,   321,
     146,   147,   148,   149,   150,   151,   136,     0,     0,   152,
       0,   137,   138,   139,   140,   141,   142,   143,   424,    46,
       0,    47,     0,    48,     0,    49,     0,     0,     0,     0,
       0,    50,    37,     0,   144,   145,     0,   146,   147,   148,
     149,   150,   151,    38,   503,   136,   152,     0,     0,     0,
     137,   138,   139,   140,   141,   142,   143,     0,    39,     0,
       0,     0,     0,     0,     0,     0,     0,    40,    41,    42,
      43,    44,    45,   144,   145,     0,   146,   147,   148,   149,
     150,   151,    37,     0,     0,   152,     0,     0,     0,    37,
       0,     0,     0,    38,     0,    46,     0,    47,     0,    48,
      38,    49,     0,     0,     0,     0,     0,    50,    39,     0,
       0,     0,     0,     0,     0,    39,     0,    40,    41,    42,
      43,    44,    45,     0,    40,    41,   122,   123,    44,    45,
       0,     0,     0,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    38,    46,     0,    47,     0,    48,
      37,    49,    46,     0,    47,     0,    48,    50,    49,    39,
       0,    38,     0,     0,    50,     0,     0,     0,    40,    41,
      42,   275,    44,    45,     0,     0,    39,     0,     0,     0,
       0,     0,     0,    37,     0,    40,    41,    42,    43,    44,
      45,     0,     0,     0,    38,     0,    46,     0,    47,     0,
      48,     0,    49,     0,     0,     0,     0,     0,    50,    39,
       0,     0,     0,   133,    11,   134,   378,    48,    40,    41,
      42,    43,    44,    45,   379,    50,     0,     0,     0,   380,
       0,     0,     0,   175,     0,   176,     0,   381,     0,   196,
       0,   472,   382,     0,   383,     0,   133,   178,   134,   179,
      48,     0,    11,     0,   378,   384,     0,   385,     0,   386,
       0,    11,   379,   378,     0,   180,     0,   380,     0,     0,
      15,   379,    16,     0,     0,   381,   380,   181,    17,   474,
     382,     0,   383,   182,   381,     0,     0,   183,   533,   382,
       0,   383,     0,   384,    43,   385,     0,   386,     0,    11,
       0,   378,   384,     0,   385,     0,   386,     0,    15,   379,
      16,     0,     0,     0,   380,     0,    17,    15,     0,    16,
       0,     0,   381,     0,     0,    17,   534,   382,     0,   383,
       0,    11,     0,   378,     0,     0,     0,     0,     0,     0,
     384,   379,   385,     0,   386,     0,   380,     0,     0,     0,
       0,     0,     0,     0,   381,    15,     0,    16,   537,   382,
       0,   383,     0,    17,     0,     0,     0,     0,     0,    11,
       0,   378,   384,     0,   385,     0,   386,     0,    11,   379,
     378,     0,     0,     0,   380,     0,     0,    15,   379,    16,
       0,     0,   381,   380,     0,    17,   538,   382,     0,   383,
       0,   381,     0,     0,     0,   581,   382,    11,   383,   378,
     384,     0,   385,     0,   386,     0,    11,   379,   378,   384,
       0,   385,   380,   386,     0,    15,   379,    16,     0,     0,
     381,   380,     0,    17,    15,   382,    16,   383,     0,   381,
       0,     0,    17,   582,   382,     0,   383,     0,   384,     0,
     385,     0,   386,   175,     0,   176,     0,   384,     0,   385,
       0,   386,     0,    15,     0,    16,     0,   178,     0,   179,
       0,    17,    15,   175,    16,   176,     0,   299,     0,     0,
      17,     0,     0,     0,     0,   180,     0,   178,     0,   179,
       0,   300,     0,     0,     0,     0,     0,   181,   457,     0,
       0,     0,     0,   182,     0,   180,     0,   183,     0,     0,
     458,   448,     0,     0,    43,     0,     0,   181,     0,   301,
       0,     0,     0,   182,   136,     0,     0,   183,     0,   137,
     138,   139,   140,   141,   142,   143,     0,   136,     0,     0,
       0,     0,   137,   138,   139,   140,   141,   142,   143,     0,
       0,     0,   144,   145,     0,   146,   147,   148,   149,   150,
     151,   249,     0,     0,   152,   144,   145,     0,   146,   147,
     148,   149,   150,   151,   136,     0,     0,   152,   250,   137,
     138,   139,   140,   141,   142,   143,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   367,     0,
       0,     0,   144,   145,     0,   146,   147,   148,   149,   150,
     151,   136,     0,     0,   152,   250,   137,   138,   139,   140,
     141,   142,   143,     0,   496,   136,     0,     0,     0,     0,
     137,   138,   139,   140,   141,   142,   143,     0,     0,   144,
     145,     0,   146,   147,   148,   149,   150,   151,     0,     0,
       0,   152,   250,   144,   145,     0,   146,   147,   148,   149,
     150,   151,   498,   136,     0,   152,     0,     0,   137,   138,
     139,   140,   141,   142,   143,   560,   136,     0,     0,     0,
       0,   137,   138,   139,   140,   141,   142,   143,     0,     0,
       0,   144,   145,     0,   146,   147,   148,   149,   150,   151,
       0,     0,     0,   152,   144,   145,     0,   146,   147,   148,
     149,   150,   151,   136,     0,     0,   152,     0,   137,   138,
     139,   140,   141,   142,   143,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   240,     0,     0,     0,     0,
       0,   144,   145,     0,   146,   147,   148,   149,   150,   151,
     136,     0,     0,   152,     0,   137,   138,   139,   140,   141,
     142,   143,     0,   136,     0,     0,     0,     0,   137,   138,
     139,   140,   141,   142,   143,     0,   253,     0,   144,   145,
       0,   146,   147,   148,   149,   150,   151,     0,     0,     0,
     152,   144,   145,     0,   146,   147,   148,   149,   150,   151,
     136,     0,   322,   152,     0,   137,   138,   139,   140,   141,
     142,   143,     0,   136,     0,     0,     0,     0,   137,   138,
     139,   140,   141,   142,   143,     0,     0,     0,   144,   145,
       0,   146,   147,   148,   149,   150,   151,     0,     0,   445,
     152,   144,   145,     0,   146,   147,   148,   149,   150,   151,
     136,     0,   497,   152,     0,   137,   138,   139,   140,   141,
     142,   143,     0,   136,     0,     0,     0,     0,   137,   138,
     139,   140,   141,   142,   143,     0,     0,     0,   144,   145,
       0,   146,   147,   148,   149,   150,   151,     0,     0,   502,
     152,   144,   145,     0,   146,   147,   148,   149,   150,   151,
     136,     0,   554,   152,     0,   137,   138,   139,   140,   141,
     142,   143,     0,     0,     0,   136,     0,     0,     0,     0,
     137,   138,   139,   140,   141,   142,   143,     0,   144,   145,
       0,   146,   147,   148,   149,   150,   151,     0,     0,   559,
     152,   593,     0,   144,   145,     0,   146,   147,   148,   149,
     150,   151,   136,     0,     0,   152,     0,   137,   138,   139,
     140,   141,   142,   143,     0,   136,     0,     0,     0,     0,
     137,   138,   139,   140,   141,   142,   143,     0,     0,     0,
     144,   145,     0,   146,   147,   148,   149,   150,   151,     0,
       0,   619,   152,   144,   145,     0,   146,   147,   148,   149,
     150,   151,   136,     0,   620,   152,     0,   137,   138,   139,
     140,   141,   142,   143,     0,     0,     0,   137,   138,   139,
     140,   141,     0,   143,     0,     0,     0,     0,     0,     0,
     144,   145,     0,   146,   147,   148,   149,   150,   151,     0,
     144,   145,   152,   146,   147,   148,   149,   150,   151,     0,
       0,     0,   152,   137,   138,   139,   140,   141,     0,     0,
       0,     0,     0,   137,   138,  -284,  -284,   141,     0,     0,
       0,     0,     0,     0,     0,     0,   144,   145,     0,   146,
     147,   148,   149,   150,   151,     0,  -284,  -284,   152,  -284,
     147,   148,   149,   150,   151,     0,     0,     0,   152
};

static const yytype_int16 yycheck[] =
{
      13,    96,    11,     1,    61,   299,   334,    28,     9,    28,
       1,     1,   299,    28,   387,    19,     1,   390,     0,     1,
      14,    69,    28,    70,   299,    38,    69,    32,     1,   170,
      39,    17,    28,    92,    15,    70,    13,    46,    47,    48,
      49,    15,    72,    73,     9,    28,   105,    13,    14,    62,
      95,    28,    65,    18,    19,    28,    69,    22,   117,   118,
     108,   108,   110,   108,    69,   108,    57,    57,    69,    65,
      83,    65,    57,   108,    59,    57,    89,    59,    87,    88,
      65,    90,    65,    65,   412,    89,    95,    68,    83,   110,
     418,   110,   465,   387,    68,   110,   390,   391,   392,   393,
     387,   395,   396,   390,   110,   392,    70,   108,    94,    74,
     108,    70,   387,    78,    65,   390,   391,   392,   393,   110,
     110,    69,     0,     1,    78,   134,    65,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   108,   154,   287,    95,   161,   108,
      95,   160,   165,    93,   167,   109,   169,   214,    35,   108,
     301,   110,   110,    69,   177,   110,    43,   495,    35,     1,
     110,   465,   466,   467,   169,     7,   470,   471,   465,    57,
     467,    59,   177,   196,   471,    17,    30,    65,    94,   517,
     465,   466,   467,    25,    38,   470,   471,    12,    30,    93,
     209,   196,    34,     0,     1,    37,     0,    95,    40,     4,
      89,     6,   108,    45,    12,   224,   110,    30,    33,    51,
      52,    53,   110,    55,    69,    20,     0,     1,   237,   238,
     239,   110,    47,    65,   375,    33,   377,   531,   532,    95,
      13,   250,   337,   252,   108,   532,    32,    33,    92,    47,
      95,    91,   108,    48,    30,    28,   531,   532,   102,    54,
      57,   105,    59,   107,   405,   406,   325,   326,    65,    89,
     110,     0,     1,   117,   118,    65,   108,     9,    10,    92,
     339,    67,   341,    57,    35,    59,    89,    19,   106,   102,
     110,    65,   105,    95,   107,   308,   309,    64,    65,     0,
       1,    33,   311,   312,   117,   118,    89,   110,   110,     1,
     319,     3,    89,   308,   309,   324,    92,     0,     1,    11,
      18,    19,   335,    89,    16,    65,   102,   110,    57,   105,
      59,   107,    24,   110,   422,   423,    65,    29,    65,    31,
     335,   117,   118,   481,   110,   108,   484,   110,   486,   358,
      42,   360,    44,   362,    46,     4,    57,     6,    59,   372,
     373,     1,   206,   207,    65,    57,    30,    59,    60,    27,
     108,    20,   110,    65,    57,   388,    59,   372,   373,    90,
      38,    92,    65,   227,   228,   477,   375,   479,   377,   233,
     234,   235,   236,   206,   207,    53,    23,    91,   109,    48,
     409,    41,    94,    65,    62,    63,    64,    65,    66,    67,
     419,   424,   421,   426,   227,   228,   110,    57,    91,    59,
     233,   234,   235,   236,    65,    65,     0,     1,    92,   424,
     206,   207,    90,   360,    92,   362,    94,   110,    96,   448,
     246,   105,   248,   107,   102,    91,   242,   460,   244,   462,
     108,   227,   228,   117,   118,   328,   329,   233,   234,   235,
     236,   520,    57,   522,   110,   460,    65,   462,   299,   328,
     329,   405,   406,   482,   487,   488,     0,     1,    65,    13,
      78,   325,   326,    57,    91,    59,    89,   496,     1,   498,
     499,    65,   487,   488,     7,   339,   108,   341,   507,    91,
      13,    71,   561,   110,    17,   103,   104,   105,   567,     0,
       1,   109,   325,   326,    71,    28,    65,   526,   110,   528,
      64,    34,     0,     1,    37,    93,   339,    40,   341,    65,
      17,    57,    45,    57,    37,    59,    94,    40,    51,    52,
      53,    65,    55,   207,    14,     0,     1,    14,    51,   325,
     326,   560,    65,    69,    19,    65,   387,   566,   108,   390,
     391,   392,   393,   339,   228,   341,    57,   108,    59,   578,
     234,   580,   236,    65,    65,    64,    70,    65,   108,    57,
     589,    59,   591,   427,   428,   429,   430,    65,    65,    65,
     108,    70,    13,    47,    30,   108,    70,   441,   442,   443,
     444,   614,    57,    25,    59,    28,     5,     5,    28,   108,
      65,    64,    64,    70,   427,   428,   429,   430,    47,   614,
      68,    45,    19,   108,    70,    70,    45,   108,   441,   442,
     443,   444,     1,     8,   465,   466,   467,     8,    65,   470,
     471,    22,    22,    50,    50,    14,     9,    10,    89,     7,
       7,   427,   428,   429,   430,    18,    19,    26,    21,    22,
      78,   325,   326,    32,    19,   441,   442,   443,   444,    32,
      33,    71,    35,     5,    53,   339,   520,   341,   522,    53,
       5,    70,    70,   101,   102,   103,   104,   105,    57,     1,
      59,   109,     8,     8,     8,     7,    65,     8,    89,     8,
     531,   532,     8,    22,    67,    17,    14,   520,    53,   522,
      73,    74,    22,    53,    77,    78,    28,   561,    30,    82,
      53,    10,    34,   567,    53,    37,   570,   571,    40,   573,
     574,   388,    50,    45,   327,   507,    27,   387,   155,    51,
      52,    53,   393,    55,   520,   207,   522,    38,   561,   160,
       1,   595,   596,    65,   567,   599,   600,   570,   571,   174,
     573,   574,    53,    14,   428,   399,   430,   310,   182,   481,
       1,    62,    63,    64,    65,    66,    67,   373,   442,   171,
     444,    32,   595,   596,    -1,   561,   599,   600,    -1,    -1,
      41,   567,    -1,    -1,   570,   571,   108,   573,   574,    90,
      -1,    92,    -1,    94,    95,    96,    57,    -1,    59,     1,
      41,   102,    -1,    -1,    65,     7,    -1,    -1,    -1,   595,
     596,    -1,    -1,   599,   600,    17,    57,    -1,    59,    -1,
     193,    -1,   195,    -1,    65,     1,    28,     1,    30,    -1,
      -1,     7,    34,    -1,     3,    37,    -1,    -1,    40,    -1,
      -1,    17,    11,    45,    -1,    -1,   520,    16,   522,    51,
      52,    53,    28,    55,    -1,    24,    -1,    -1,    34,    -1,
      29,    37,    31,    65,    40,     1,    -1,    41,    -1,    45,
      -1,     7,    -1,    -1,    -1,    51,    52,    53,    -1,    55,
      56,    17,    -1,    57,    -1,    59,    -1,   561,    -1,    65,
      -1,    65,    28,   567,    -1,    -1,    -1,   571,    34,    -1,
     574,    37,    -1,    -1,    40,    -1,   108,    -1,    -1,    45,
      -1,    -1,     1,    -1,    -1,    51,    52,    53,     7,    55,
      56,     4,   596,     6,    13,    -1,   600,    10,    17,    65,
      -1,    -1,   108,    -1,     1,    18,    -1,    20,    -1,    28,
       7,    -1,    -1,    -1,    -1,    34,    -1,    -1,    37,    -1,
      17,    40,    -1,    36,    -1,    -1,    45,    -1,    -1,    -1,
      -1,    28,    51,    52,    53,    48,    55,    34,    -1,    -1,
      37,    54,   108,    40,     1,    58,    65,    -1,    45,    -1,
       7,    -1,    65,    -1,    51,    52,    53,    -1,    55,    -1,
      17,    -1,    -1,    -1,    -1,     4,     1,     6,    65,    -1,
      -1,    28,     7,    -1,    -1,    -1,    -1,    34,    -1,    18,
      37,    20,    17,    40,    -1,    -1,    -1,    -1,    45,   108,
      -1,    -1,    -1,    28,    51,    52,    53,    36,    55,    34,
      -1,    -1,    37,    -1,    -1,    40,     1,    -1,    65,    48,
      45,   108,     7,    -1,    -1,    54,    51,    52,    53,    58,
      55,    -1,    17,    -1,    -1,    -1,    65,    -1,     1,    -1,
      65,    -1,    -1,    28,     7,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    37,    -1,    17,    40,    -1,    -1,    -1,    -1,
      45,   108,    -1,    -1,    -1,    28,    51,    52,    53,    75,
      55,    34,    78,    -1,    37,    -1,    -1,    40,     1,    -1,
      65,    -1,    45,   108,     7,    -1,    -1,    -1,    51,    52,
      53,    -1,    55,    -1,    17,   101,   102,   103,   104,   105,
       1,    -1,    65,   109,    -1,    28,     7,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    37,    -1,    17,    40,    -1,    -1,
      -1,    -1,    45,   108,    -1,    -1,    -1,    28,    51,    52,
      53,    -1,    55,    34,    -1,    -1,    37,    -1,    -1,    40,
       1,    -1,    65,    -1,    45,   108,     7,    -1,    -1,    -1,
      51,    52,    53,    -1,    55,    -1,    17,    -1,    -1,     1,
      -1,     3,     1,    -1,    65,    -1,    -1,    28,     7,    11,
      -1,    -1,    -1,    34,    16,    -1,    37,    -1,    17,    40,
      -1,    -1,    24,    -1,    45,   108,    -1,    29,    -1,    31,
      51,    52,    53,    -1,    55,    34,    -1,    -1,    37,    -1,
      -1,    40,     1,    -1,    65,    -1,    45,   108,     7,    -1,
      -1,    -1,    51,    52,    53,    57,    55,    59,    17,    -1,
      -1,    -1,    -1,    65,     1,    -1,    65,    -1,    -1,    28,
       7,    -1,    -1,    -1,    -1,    34,    -1,    -1,    37,    -1,
      17,    40,    -1,    -1,    -1,    -1,    45,   108,    -1,    -1,
      -1,    28,    51,    52,    53,    94,    55,    34,    -1,    -1,
      37,    -1,    -1,    40,     1,    -1,    65,    -1,    45,   108,
       7,    -1,    -1,    -1,    51,    52,    53,    -1,    55,    -1,
      17,    -1,    -1,    -1,    -1,    -1,     1,    -1,    65,    -1,
      -1,    28,     7,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      37,    -1,    17,    40,    -1,    -1,    -1,    -1,    45,   108,
      -1,    -1,    -1,    28,    51,    52,    53,    -1,    55,    34,
      -1,    -1,    37,    -1,    -1,    40,     1,    -1,    65,    -1,
      45,   108,     7,    -1,    -1,    -1,    51,    52,    53,    -1,
      55,    -1,    17,    -1,    -1,    -1,    -1,    -1,     1,    -1,
      65,    -1,    -1,    28,     7,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    37,    -1,    17,    40,    -1,    -1,    -1,    -1,
      45,   108,    -1,    -1,    -1,    28,    51,    52,    53,    -1,
      55,    34,    -1,    -1,    37,    -1,    -1,    40,     1,    -1,
      65,    -1,    45,   108,     7,    -1,    -1,    -1,    51,    52,
      53,    -1,    55,    -1,    17,    -1,    -1,    -1,    -1,    -1,
       1,    -1,    65,    -1,    -1,    28,     7,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    37,    -1,    17,    40,    -1,    -1,
      -1,    -1,    45,   108,    -1,    -1,    -1,    28,    51,    52,
      53,    -1,    55,    34,    -1,    -1,    37,     1,    -1,    40,
      -1,    -1,    65,     7,    45,   108,    -1,    -1,    -1,    -1,
      51,    52,    53,    17,    55,    -1,    -1,    -1,    -1,     1,
      -1,    25,    -1,    -1,    65,     7,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    37,    -1,    17,    40,    -1,    -1,    -1,
      -1,    45,    -1,    25,    -1,   108,    -1,    51,    52,    53,
      -1,    55,    34,    -1,    -1,    37,     1,    -1,    40,    -1,
      -1,    65,     7,    45,    -1,    -1,    -1,   108,    -1,    51,
      52,    53,    17,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    -1,    -1,     1,    -1,     3,    34,
      -1,    -1,    37,    -1,    -1,    40,    11,    -1,    -1,    -1,
      45,    16,    -1,    -1,   108,    -1,    51,    52,    53,    24,
      55,    21,    -1,    -1,    29,    -1,    31,    -1,    -1,    -1,
      65,    70,    -1,    -1,    -1,    -1,   108,    42,    -1,    44,
      -1,    46,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    90,    57,    92,    59,    -1,    27,    -1,    21,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    69,
     109,    -1,    -1,   108,    74,    75,    76,    77,    78,    79,
      80,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    94,
      -1,    62,    63,    64,    65,    66,    67,    97,    98,    23,
     100,   101,   102,   103,   104,   105,    69,    -1,    -1,   109,
      -1,    74,    75,    76,    77,    78,    79,    80,    89,    90,
      -1,    92,    -1,    94,    -1,    96,    -1,    -1,    -1,    -1,
      -1,   102,    27,    -1,    97,    98,    -1,   100,   101,   102,
     103,   104,   105,    38,    39,    69,   109,    -1,    -1,    -1,
      74,    75,    76,    77,    78,    79,    80,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,
      65,    66,    67,    97,    98,    -1,   100,   101,   102,   103,
     104,   105,    27,    -1,    -1,   109,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    38,    -1,    90,    -1,    92,    -1,    94,
      38,    96,    -1,    -1,    -1,    -1,    -1,   102,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    62,    63,    64,
      65,    66,    67,    -1,    62,    63,    64,    65,    66,    67,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    90,    -1,    92,    -1,    94,
      27,    96,    90,    -1,    92,    -1,    94,   102,    96,    53,
      -1,    38,    -1,    -1,   102,    -1,    -1,    -1,    62,    63,
      64,    65,    66,    67,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    62,    63,    64,    65,    66,
      67,    -1,    -1,    -1,    38,    -1,    90,    -1,    92,    -1,
      94,    -1,    96,    -1,    -1,    -1,    -1,    -1,   102,    53,
      -1,    -1,    -1,    90,     1,    92,     3,    94,    62,    63,
      64,    65,    66,    67,    11,   102,    -1,    -1,    -1,    16,
      -1,    -1,    -1,     4,    -1,     6,    -1,    24,    -1,    10,
      -1,    28,    29,    -1,    31,    -1,    90,    18,    92,    20,
      94,    -1,     1,    -1,     3,    42,    -1,    44,    -1,    46,
      -1,     1,    11,     3,    -1,    36,    -1,    16,    -1,    -1,
      57,    11,    59,    -1,    -1,    24,    16,    48,    65,    28,
      29,    -1,    31,    54,    24,    -1,    -1,    58,    28,    29,
      -1,    31,    -1,    42,    65,    44,    -1,    46,    -1,     1,
      -1,     3,    42,    -1,    44,    -1,    46,    -1,    57,    11,
      59,    -1,    -1,    -1,    16,    -1,    65,    57,    -1,    59,
      -1,    -1,    24,    -1,    -1,    65,    28,    29,    -1,    31,
      -1,     1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    11,    44,    -1,    46,    -1,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    57,    -1,    59,    28,    29,
      -1,    31,    -1,    65,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,    42,    -1,    44,    -1,    46,    -1,     1,    11,
       3,    -1,    -1,    -1,    16,    -1,    -1,    57,    11,    59,
      -1,    -1,    24,    16,    -1,    65,    28,    29,    -1,    31,
      -1,    24,    -1,    -1,    -1,    28,    29,     1,    31,     3,
      42,    -1,    44,    -1,    46,    -1,     1,    11,     3,    42,
      -1,    44,    16,    46,    -1,    57,    11,    59,    -1,    -1,
      24,    16,    -1,    65,    57,    29,    59,    31,    -1,    24,
      -1,    -1,    65,    28,    29,    -1,    31,    -1,    42,    -1,
      44,    -1,    46,     4,    -1,     6,    -1,    42,    -1,    44,
      -1,    46,    -1,    57,    -1,    59,    -1,    18,    -1,    20,
      -1,    65,    57,     4,    59,     6,    -1,     8,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    36,    -1,    18,    -1,    20,
      -1,    22,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,
      -1,    -1,    -1,    54,    -1,    36,    -1,    58,    -1,    -1,
      61,    56,    -1,    -1,    65,    -1,    -1,    48,    -1,    50,
      -1,    -1,    -1,    54,    69,    -1,    -1,    58,    -1,    74,
      75,    76,    77,    78,    79,    80,    -1,    69,    -1,    -1,
      -1,    -1,    74,    75,    76,    77,    78,    79,    80,    -1,
      -1,    -1,    97,    98,    -1,   100,   101,   102,   103,   104,
     105,    93,    -1,    -1,   109,    97,    98,    -1,   100,   101,
     102,   103,   104,   105,    69,    -1,    -1,   109,   110,    74,
      75,    76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    -1,
      -1,    -1,    97,    98,    -1,   100,   101,   102,   103,   104,
     105,    69,    -1,    -1,   109,   110,    74,    75,    76,    77,
      78,    79,    80,    -1,    68,    69,    -1,    -1,    -1,    -1,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    97,
      98,    -1,   100,   101,   102,   103,   104,   105,    -1,    -1,
      -1,   109,   110,    97,    98,    -1,   100,   101,   102,   103,
     104,   105,    68,    69,    -1,   109,    -1,    -1,    74,    75,
      76,    77,    78,    79,    80,    68,    69,    -1,    -1,    -1,
      -1,    74,    75,    76,    77,    78,    79,    80,    -1,    -1,
      -1,    97,    98,    -1,   100,   101,   102,   103,   104,   105,
      -1,    -1,    -1,   109,    97,    98,    -1,   100,   101,   102,
     103,   104,   105,    69,    -1,    -1,   109,    -1,    74,    75,
      76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,
      -1,    97,    98,    -1,   100,   101,   102,   103,   104,   105,
      69,    -1,    -1,   109,    -1,    74,    75,    76,    77,    78,
      79,    80,    -1,    69,    -1,    -1,    -1,    -1,    74,    75,
      76,    77,    78,    79,    80,    -1,    95,    -1,    97,    98,
      -1,   100,   101,   102,   103,   104,   105,    -1,    -1,    -1,
     109,    97,    98,    -1,   100,   101,   102,   103,   104,   105,
      69,    -1,   108,   109,    -1,    74,    75,    76,    77,    78,
      79,    80,    -1,    69,    -1,    -1,    -1,    -1,    74,    75,
      76,    77,    78,    79,    80,    -1,    -1,    -1,    97,    98,
      -1,   100,   101,   102,   103,   104,   105,    -1,    -1,   108,
     109,    97,    98,    -1,   100,   101,   102,   103,   104,   105,
      69,    -1,   108,   109,    -1,    74,    75,    76,    77,    78,
      79,    80,    -1,    69,    -1,    -1,    -1,    -1,    74,    75,
      76,    77,    78,    79,    80,    -1,    -1,    -1,    97,    98,
      -1,   100,   101,   102,   103,   104,   105,    -1,    -1,   108,
     109,    97,    98,    -1,   100,   101,   102,   103,   104,   105,
      69,    -1,   108,   109,    -1,    74,    75,    76,    77,    78,
      79,    80,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,
      74,    75,    76,    77,    78,    79,    80,    -1,    97,    98,
      -1,   100,   101,   102,   103,   104,   105,    -1,    -1,   108,
     109,    95,    -1,    97,    98,    -1,   100,   101,   102,   103,
     104,   105,    69,    -1,    -1,   109,    -1,    74,    75,    76,
      77,    78,    79,    80,    -1,    69,    -1,    -1,    -1,    -1,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      97,    98,    -1,   100,   101,   102,   103,   104,   105,    -1,
      -1,   108,   109,    97,    98,    -1,   100,   101,   102,   103,
     104,   105,    69,    -1,   108,   109,    -1,    74,    75,    76,
      77,    78,    79,    80,    -1,    -1,    -1,    74,    75,    76,
      77,    78,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      97,    98,    -1,   100,   101,   102,   103,   104,   105,    -1,
      97,    98,   109,   100,   101,   102,   103,   104,   105,    -1,
      -1,    -1,   109,    74,    75,    76,    77,    78,    -1,    -1,
      -1,    -1,    -1,    74,    75,    76,    77,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    97,    98,    -1,   100,
     101,   102,   103,   104,   105,    -1,    97,    98,   109,   100,
     101,   102,   103,   104,   105,    -1,    -1,    -1,   109
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    35,    43,   112,   113,   117,    65,    65,     0,   108,
     108,     1,    14,    26,    32,    57,    59,    65,   115,   116,
     118,   119,   120,   132,   152,   173,   187,   195,   202,   203,
      41,   114,   115,   116,   118,   119,   194,    27,    38,    53,
      62,    63,    64,    65,    66,    67,    90,    92,    94,    96,
     102,   121,   123,   125,   126,   128,   129,   130,   131,   170,
     196,   201,    35,   123,   124,    35,    65,   188,    65,    89,
     110,   115,   118,   119,   120,   115,   118,   119,   120,   119,
     119,   118,   119,    89,   110,     1,    28,     7,    17,    34,
      37,    40,    45,    51,    52,    53,    55,    65,   108,   131,
     133,   135,   136,   137,   143,   144,   145,   163,   164,   166,
     167,   170,   171,   202,   204,   194,   194,    41,    41,   123,
     170,   121,    64,    65,   121,   197,   198,   199,   200,   121,
     153,   121,   121,    90,    92,   129,    69,    74,    75,    76,
      77,    78,    79,    80,    97,    98,   100,   101,   102,   103,
     104,   105,   109,    69,    94,   106,    72,    73,   127,    90,
      92,   109,   144,   123,   108,   110,   108,   110,   123,    17,
      94,   189,   193,   194,    23,     4,     6,    10,    18,    20,
      36,    48,    54,    58,   123,   172,   174,   175,   177,   178,
     179,    65,   118,   119,   118,   119,    10,   172,    65,    57,
     121,   108,   121,   123,   121,    65,   136,   163,    65,    13,
      14,   134,   121,   134,    89,    70,    81,    82,    83,    84,
      85,    86,    87,    88,   165,    28,   163,   136,   163,    28,
     163,   108,   108,   136,   163,   136,   163,    21,    71,    71,
      91,    91,   110,    91,   110,    91,   110,    91,   110,    93,
     110,    93,   110,    95,    64,    65,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,    65,    65,    95,   121,   168,   169,
     125,    64,   122,   121,   153,   123,    93,    32,   123,   123,
       9,   108,   172,    65,   152,   190,   191,   193,    57,     8,
      22,    50,   154,   174,   180,   181,   184,   172,    14,    14,
     177,    94,    70,   108,    12,    33,    47,   176,   172,    70,
     108,    23,   108,   108,    19,    25,    30,   146,   147,   148,
     149,   150,   151,   151,    19,    89,   121,    65,   108,    21,
     108,   144,   121,    28,    28,    28,    28,    28,    28,   121,
     121,   121,   198,   198,   200,   200,   121,   121,    70,    95,
     110,    95,   110,    91,   110,    91,   110,    93,    93,    65,
     152,    65,    89,    89,    95,   108,    95,   108,     3,    11,
      16,    24,    29,    31,    42,    44,    46,    60,    94,   132,
     155,   156,   157,   158,   159,   160,   161,   173,   187,    14,
      65,   185,   186,    65,   152,   182,   183,   108,   108,    70,
     172,   172,    47,   176,   121,   121,   121,   162,    47,    70,
     121,    13,   138,   139,    89,   121,    94,   136,   163,   136,
     163,   150,   147,   149,   147,   149,    28,    28,   162,   172,
     134,   136,   163,   136,   163,   108,     5,     5,    56,   121,
     168,   168,    64,    64,   108,   108,   108,    49,    61,   172,
     192,   172,   192,   190,   190,   155,   156,   157,   123,   124,
     156,   157,    28,   156,    28,   156,   159,   110,   187,   110,
     187,   175,    70,    28,   110,    28,   110,    89,    89,    28,
     182,    28,   182,   121,   162,    47,    68,   108,    68,    68,
     162,   121,   108,    39,   121,   140,   141,   142,    28,   139,
      28,   139,   172,   123,    45,    45,    15,    19,   108,    28,
      56,    28,    56,    28,    28,   121,    70,   172,    70,   172,
     108,   156,   157,    28,    28,    95,    95,    28,    28,     8,
       8,   161,   161,   185,   186,   121,    22,   185,    22,   185,
     172,   172,    50,    50,   108,   162,   121,   121,   121,   108,
      68,    71,    89,   141,     7,     7,    19,    95,   162,    53,
     136,   163,    53,   136,   163,     5,     5,   121,    70,   121,
      70,    28,    28,     8,     8,     8,     8,    28,    28,    70,
     108,    70,   108,    95,   121,   136,   163,    89,   121,   136,
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
     163,   163,   163,   163,   163,   163,   164,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   166,   166,   167,   168,
     168,   169,   169,   170,   170,   170,   171,   171,   171,   171,
     171,   171,   172,   172,   173,   173,   174,   174,   174,   175,
     175,   175,   175,   175,   175,   175,   175,   176,   176,   177,
     177,   177,   177,   178,   178,   179,   180,   180,   180,   181,
     181,   182,   182,   182,   182,   183,   183,   184,   184,   184,
     184,   185,   185,   186,   186,   187,   187,   188,   188,   188,
     188,   189,   189,   190,   190,   190,   190,   190,   190,   190,
     190,   191,   191,   192,   192,   193,   194,   194,   194,   194,
     194,   194,   195,   195,   195,   195,   195,   195,   195,   195,
     195,   195,   195,   195,   196,   196,   196,   196,   196,   196,
     197,   197,   198,   199,   199,   200,   201,   201,   201,   202,
     202,   203,   204
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     4,     2,     2,     1,     6,     4,
       6,     6,     2,     2,     4,     2,     2,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
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
       1,     1,     1,     1,     1,     1,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     3,     2,     1,
       3,     3,     3,     3,     4,     4,     6,     6,     8,     8,
       8,     8,     1,     1,     5,     5,     1,     1,     1,     1,
       2,     3,     4,     5,     2,     3,     4,     1,     1,     1,
       1,     1,     1,     8,     3,     3,     1,     1,     1,     4,
       4,     4,     6,     4,     6,     2,     2,     4,     4,     6,
       6,     1,     3,     3,     3,     4,     1,     1,     2,     2,
       3,     3,     3,     3,     4,     5,     6,     3,     4,     5,
       6,     3,     4,     1,     1,     2,     3,     3,     4,     4,
       4,     4,     3,     3,     2,     2,     3,     3,     2,     2,
       2,     2,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     4,     6,     2,
       2,     3,     2
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
#line 2205 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 61 "simple.y" /* yacc.c:1646  */
    {printf("\nprograma -> definicionLibreria");}
#line 2211 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 64 "simple.y" /* yacc.c:1646  */
    {printf("\ndefinicionPrograma -> PROGRAMA IDENTIFICADOR ; codigoPrograma");}
#line 2217 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 67 "simple.y" /* yacc.c:1646  */
    {printf("\ndefinicionPrograma -> libreriaMultiple cuerpoSubprograma");}
#line 2223 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 68 "simple.y" /* yacc.c:1646  */
    {printf("\ndefinicionPrograma -> libreria cuerpoSubprograma");}
#line 2229 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 69 "simple.y" /* yacc.c:1646  */
    {printf("\ndefinicionPrograma -> cuerpoSubprograma");}
#line 2235 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 72 "simple.y" /* yacc.c:1646  */
    {printf("\nlibreria -> IMPORTAR LIBRERIA nombre COMO IDENTIFICADOR");}
#line 2241 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 73 "simple.y" /* yacc.c:1646  */
    {printf("\nlibreria -> IMPORTAR LIBRERIA nombre ");}
#line 2247 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 74 "simple.y" /* yacc.c:1646  */
    {printf("\nlibreria -> DE LIBRERIA nombre IMPORTAR IDENTIFICADOR");}
#line 2253 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 75 "simple.y" /* yacc.c:1646  */
    {printf("\nlibreria -> DE LIBRERIA nombre IMPORTAR identificadorMultiple");}
#line 2259 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 77 "simple.y" /* yacc.c:1646  */
    {printf("\nlibreriaMultiple -> libreria libreria");}
#line 2265 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 78 "simple.y" /* yacc.c:1646  */
    {printf("\nlibreriaMultiple -> libreriaMultiple libreria");}
#line 2271 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 81 "simple.y" /* yacc.c:1646  */
    {printf("\ndefinicionLibreria -> LIBRERIA IDENTIFICADOR ; codigoLibreria");}
#line 2277 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 83 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionMultiple -> declaracion declaracion");}
#line 2283 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 84 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionMultiple -> declaracionMultiple declaracion");}
#line 2289 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 86 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracion -> declaracionObjeto");}
#line 2295 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 87 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracion -> declaracionTipo");}
#line 2301 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 88 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracion -> declaracionSubprograma");}
#line 2307 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 90 "simple.y" /* yacc.c:1646  */
    {printf("\nexportaciones -> EXPORTAR nombreMultiple");}
#line 2313 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 91 "simple.y" /* yacc.c:1646  */
    {printf("\nexportaciones -> EXPORTAR nombre");}
#line 2319 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 94 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion '+' expresion");}
#line 2325 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 95 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion - expresion");}
#line 2331 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 96 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion / expresion");}
#line 2337 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 97 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion \\ expresion");}
#line 2343 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 98 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion * expresion");}
#line 2349 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 99 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion <- expresion");}
#line 2355 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 100 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion -> expresion");}
#line 2361 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 101 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion . expresion");}
#line 2367 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 102 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> [ expresion ] ");}
#line 2373 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 103 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> { expresion } ");}
#line 2379 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 104 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion :: expresion");}
#line 2385 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 105 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion < expresion");}
#line 2391 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 106 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion > expresion");}
#line 2397 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 107 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion <= expresion");}
#line 2403 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 108 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion >= expresion");}
#line 2409 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 109 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion = expresion");}
#line 2415 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 110 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion NEQ expresion");}
#line 2421 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 111 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion ~ expresion");}
#line 2427 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 112 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion AND expresion");}
#line 2433 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 113 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresion OR expresion");}
#line 2439 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 114 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> expresionPotencia");}
#line 2445 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 116 "simple.y" /* yacc.c:1646  */
    {printf("\ncadenaMult -> CTC_CADENA , CTC_CADENA");}
#line 2451 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 117 "simple.y" /* yacc.c:1646  */
    {printf("\ncadenaMult -> cadenaMult , CTC_CADENA");}
#line 2457 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 120 "simple.y" /* yacc.c:1646  */
    {printf("\nnombre -> IDENTIFICADOR");}
#line 2463 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 121 "simple.y" /* yacc.c:1646  */
    {printf("\nnombre -> nombre :: IDENTIFICADOR");}
#line 2469 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 123 "simple.y" /* yacc.c:1646  */
    {printf("\nnombreMultiple -> nombre , nombre");}
#line 2475 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 124 "simple.y" /* yacc.c:1646  */
    {printf("\nnombreMultiple -> nombreMultiple , nombre");}
#line 2481 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 127 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionPotencia -> expresionPosfija");}
#line 2487 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 128 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionPotencia -> expresionPosfija ^ expresionPotencia");}
#line 2493 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 130 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionPosfija -> expresionUnaria");}
#line 2499 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 131 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionPosfija -> expresionUnaria operadorPosfijo");}
#line 2505 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 133 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorPosfijo -> INC");}
#line 2511 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 134 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorPosfijo -> DEC");}
#line 2517 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 136 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionUnaria -> primario");}
#line 2523 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 137 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionUnaria -> '-' primario");}
#line 2529 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 140 "simple.y" /* yacc.c:1646  */
    {printf("\nprimario -> literal");}
#line 2535 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 141 "simple.y" /* yacc.c:1646  */
    {printf("\nprimario -> objeto");}
#line 2541 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 142 "simple.y" /* yacc.c:1646  */
    {printf("\nprimario -> llamada_subprograma");}
#line 2547 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 143 "simple.y" /* yacc.c:1646  */
    {printf("\nprimario -> OBJETO llamada_subprograma");}
#line 2553 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 144 "simple.y" /* yacc.c:1646  */
    {printf("\nprimario -> enumeraciones ");}
#line 2559 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 145 "simple.y" /* yacc.c:1646  */
    {printf("\nprimario -> ( expresion ) ");}
#line 2565 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 147 "simple.y" /* yacc.c:1646  */
    {printf("\nliteral -> VERDADERO");}
#line 2571 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 148 "simple.y" /* yacc.c:1646  */
    {printf("\nliteral -> FASLO");}
#line 2577 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 149 "simple.y" /* yacc.c:1646  */
    {printf("\nliteral -> CTC_ENTERA");}
#line 2583 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 150 "simple.y" /* yacc.c:1646  */
    {printf("\nliteral -> CTC_REAL");}
#line 2589 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 151 "simple.y" /* yacc.c:1646  */
    {printf("\nliteral -> CTC_CARACTER");}
#line 2595 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 152 "simple.y" /* yacc.c:1646  */
    {printf("\nliteral -> CTC_CADENA");}
#line 2601 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 155 "simple.y" /* yacc.c:1646  */
    {printf("\nobjeto -> nombre");}
#line 2607 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 156 "simple.y" /* yacc.c:1646  */
    {printf("\nobjeto -> objeto . nombre");}
#line 2613 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 157 "simple.y" /* yacc.c:1646  */
    {printf("\nobjeto -> objeto [ expresion ]");}
#line 2619 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 158 "simple.y" /* yacc.c:1646  */
    {printf("\nobjeto -> objeto [ expresionMult ]");}
#line 2625 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 159 "simple.y" /* yacc.c:1646  */
    {printf("\nobjeto -> objeto { CTC_CADENA }");}
#line 2631 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 160 "simple.y" /* yacc.c:1646  */
    {printf("\nobjeto -> objeto { cadenaMult }");}
#line 2637 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 165 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionObjeto -> IDENTIFICADOR : CONSTANTE especificacionTipo ASIGNACION expresion ;\n");}
#line 2643 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 166 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionObjeto -> identificadorMultiple : CONSTANTE especificacionTipo ASIGNACION expresion ;\n");}
#line 2649 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 168 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionObjeto -> IDENTIFICADOR : especificacionTipo ASIGNACION expresion ;\n");}
#line 2655 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 169 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionObjeto -> identificadorMultiple : especificacionTipo ASIGNACION expresion ;\n");}
#line 2661 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 170 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionObjeto -> IDENTIFICADOR : especificacionTipo ;\n");}
#line 2667 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 171 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionObjeto -> identificadorMultiple : especificacionTipo ;\n");}
#line 2673 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 175 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionInterrupcion -> siguiente ; ");}
#line 2679 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 176 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionInterrupcion -> salir de IDENTIFICADOR cuando ; ");}
#line 2685 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 177 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionInterrupcion -> salir cuando(?) ; ");}
#line 2691 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 180 "simple.y" /* yacc.c:1646  */
    {printf("\ncuando -> CUANDO expresion");}
#line 2697 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 181 "simple.y" /* yacc.c:1646  */
    {printf("\ncuando -> nada ");}
#line 2703 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 184 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionLanzamientoExcepcion -> LANZA nombre ; ");}
#line 2709 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 187 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionMultiple -> instruccion instruccion");}
#line 2715 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 188 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionMultiple -> instruccionMultiple instruccion");}
#line 2721 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 191 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionCasos -> CASOS expresion ES caso FIN CASOS");}
#line 2727 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 192 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionCasos -> CASOS expresion ES casoMultiple FIN CASOS");}
#line 2733 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 194 "simple.y" /* yacc.c:1646  */
    {printf("\ncasoMultiple -> caso caso");}
#line 2739 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 195 "simple.y" /* yacc.c:1646  */
    {printf("\ncasoMultiple -> casoMultiple caso");}
#line 2745 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 197 "simple.y" /* yacc.c:1646  */
    {printf("\ncaso -> CUANDO entradas FLECHA instruccion");}
#line 2751 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 198 "simple.y" /* yacc.c:1646  */
    {printf("\ncaso -> CUANDO entradas FLECHA instruccionMultiple");}
#line 2757 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 200 "simple.y" /* yacc.c:1646  */
    {printf("\nentradas -> entrada : entrada");}
#line 2763 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 201 "simple.y" /* yacc.c:1646  */
    {printf("\nentradas -> entrada");}
#line 2769 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 203 "simple.y" /* yacc.c:1646  */
    {printf("\nentrada -> expresion");}
#line 2775 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 204 "simple.y" /* yacc.c:1646  */
    {printf("\nentrada -> expresion DOS_PUNTOS expresion");}
#line 2781 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 205 "simple.y" /* yacc.c:1646  */
    {printf("\nentrada -> OTRO");}
#line 2787 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 207 "simple.y" /* yacc.c:1646  */
    {printf("\nentradaDosP -> entrada : ");}
#line 2793 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 208 "simple.y" /* yacc.c:1646  */
    {printf("\nentradaDosP -> entradaDosP entrada : ");}
#line 2799 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 210 "simple.y" /* yacc.c:1646  */
    {printf("\nintsruccionBucle -> IDENTIFICADOR : clausulaIteracion instruccion FIN BUCLE");}
#line 2805 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 211 "simple.y" /* yacc.c:1646  */
    {printf("\nintsruccionBucle -> IDENTIFICADOR : clausulaIteracion instruccionMultiple FIN BUCLE");}
#line 2811 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 212 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionBucle -> clausulaIteracion instruccion FIN BUCLE");}
#line 2817 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 213 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionBucle -> clausulaIteracion instruccionMultiple FIN BUCLE");}
#line 2823 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 216 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaIteracion -> PARA IDENTIFICADOR EN expresion");}
#line 2829 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 217 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaIteracion -> PARA IDENTIFICADOR EN ':' especifiacionTipo EN expresion");}
#line 2835 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 219 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaIteracion -> REPETIR IDENTIFICADOR EN RANGO");}
#line 2841 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 220 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaIteracion -> REPETIR IDENTIFICADOR ':' especificacionTipo EN rango");}
#line 2847 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 222 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaIteracion -> REPETIR IDENTIFICADOR EN rango DESCENDENTE");}
#line 2853 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 223 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaIteracion -> REPETIR IDENTIFICADOR ':' especificacionTipo EN rango DESCENDENTE");}
#line 2859 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 224 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaIteracion -> MIENTRAS expresion");}
#line 2865 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 227 "simple.y" /* yacc.c:1646  */
    {printf("\ninstrccuionCapturaDeExcepcion -> PRUEBA instruccion clausulas FIN PRUEBA");}
#line 2871 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 228 "simple.y" /* yacc.c:1646  */
    {printf("\ninstrccuionCapturaDeExcepcion -> prueba instruccion clausulas FIN PRUEBA");}
#line 2877 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 231 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulasExcepcion -> clausulaExcepcionGeneral");}
#line 2883 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 232 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulasExcepcion -> clausulaExcepcionEspecifica clausulaExcepcionGeneral");}
#line 2889 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 233 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulasExcepcion -> clausulaExcepcionEspecificaMultiple clausulaExcepcionGeneral");}
#line 2895 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 235 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaExcepcionEspecifica -> EXCEPCION ( nombre ) intruccion");}
#line 2901 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 236 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaExcepcionEspecifica -> EXCEPCION ( nombre ) instruccionMultiple");}
#line 2907 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 238 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaExcepcionEspecificaMultiple -> clausulaExcepcionEspecifica clausulaExcepcionEspecifica");}
#line 2913 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 239 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaExcepcionEspecificaMultiple -> clausulaExcepcionEspecificaMultiple clausulaExcepcionEspecifica");}
#line 2919 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 242 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaExcepcionGeneral -> EXCEPCION instruccion");}
#line 2925 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 243 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaExcepcionGeneral -> EXCEPCION instruccionMultiple");}
#line 2931 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 246 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaFinalmente -> FINALMENTE instruccion");}
#line 2937 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 247 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulaFinalmente -> FINALMENTE instruccionMultiple");}
#line 2943 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 250 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulas -> clausulasExcepcion");}
#line 2949 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 251 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulas -> clausulasExcepcion clausulaFinalmente");}
#line 2955 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 252 "simple.y" /* yacc.c:1646  */
    {printf("\nclausulas -> clausulaFinalmente");}
#line 2961 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 254 "simple.y" /* yacc.c:1646  */
    {printf("\nidentificadorMultiple -> IDENTIFICADOR ',' IDENTIFICADOR");}
#line 2967 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 255 "simple.y" /* yacc.c:1646  */
    {printf("\nidentificadorMultiple -> identificadorMultiple ',' IDENTIFICADOR");}
#line 2973 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 258 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionMult -> expresionMult , expresion");}
#line 2979 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 259 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionMult -> expresion , expresion");}
#line 2985 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 261 "simple.y" /* yacc.c:1646  */
    {printf("\nclase -> CLASE ULTIMA superclase declaracionComponente FIN CLASE");}
#line 2991 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 262 "simple.y" /* yacc.c:1646  */
    {printf("\nclase -> CLASE ULTIMA superclase declaracionComponenteMultiple FIN CLASE");}
#line 2997 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 263 "simple.y" /* yacc.c:1646  */
    {printf("\nclase -> CLASE ULTIMA declaracionComponente FIN CLASE");}
#line 3003 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 264 "simple.y" /* yacc.c:1646  */
    {printf("\nclase -> CLASE ULTIMA declaracionComponenteMultiple FIN CLASE");}
#line 3009 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 265 "simple.y" /* yacc.c:1646  */
    {printf("\nclase -> CLASE superclase declaracionComponente FIN CLASE");}
#line 3015 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 266 "simple.y" /* yacc.c:1646  */
    {printf("\nclase -> CLASE superclase declaracionComponenteMultiple FIN CLASE");}
#line 3021 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 267 "simple.y" /* yacc.c:1646  */
    {printf("\nclase -> CLASE declaracionComponente FIN CLASE");}
#line 3027 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 268 "simple.y" /* yacc.c:1646  */
    {printf("\nclase -> CLASE declaracionComponenteMultiple FIN CLASE");}
#line 3033 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 271 "simple.y" /* yacc.c:1646  */
    {printf("\nsuperClase -> ( nombre )");}
#line 3039 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 272 "simple.y" /* yacc.c:1646  */
    {printf("\nsuperClase -> ( nombreMultiple )");}
#line 3045 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 274 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionComponente -> visibilidad  componente");}
#line 3051 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 275 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionComponente ->   componente");}
#line 3057 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 277 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionComponenteMultiple -> declaracionComponente  declaracionComponente");}
#line 3063 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 278 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionComponenteMultiple -> declaracionComponenteMultiple  declaracionComponente");}
#line 3069 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 280 "simple.y" /* yacc.c:1646  */
    {printf("\nvisibilidad -> PUBLICO");}
#line 3075 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 281 "simple.y" /* yacc.c:1646  */
    {printf("\nvisibilidad -> PRIVADO");}
#line 3081 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 282 "simple.y" /* yacc.c:1646  */
    {printf("\nvisibilidad -> PROTEGIDO");}
#line 3087 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 284 "simple.y" /* yacc.c:1646  */
    {printf("\ncomponente -> declaracionTipo");}
#line 3093 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 285 "simple.y" /* yacc.c:1646  */
    {printf("\ncomponente -> declaracionObjeto");}
#line 3099 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 286 "simple.y" /* yacc.c:1646  */
    {printf("\ncomponente -> declaracionSubprograma");}
#line 3105 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 287 "simple.y" /* yacc.c:1646  */
    {printf("\ncomponente -> modificador declaracionSubprograma");}
#line 3111 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 288 "simple.y" /* yacc.c:1646  */
    {printf("\ncomponente -> modificadorMult declaracionSubprograma");}
#line 3117 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 290 "simple.y" /* yacc.c:1646  */
    {printf("\nmodificadorMultiple -> modificador ',' modificador");}
#line 3123 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 291 "simple.y" /* yacc.c:1646  */
    {printf("\nmodificadorMultiple -> modificadorMultiple ',' modificador");}
#line 3129 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 293 "simple.y" /* yacc.c:1646  */
    {printf("\nmodificador -> CONSTRUCTOR");}
#line 3135 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 294 "simple.y" /* yacc.c:1646  */
    {printf("\nmodificador -> DESTRUCTOR");}
#line 3141 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 295 "simple.y" /* yacc.c:1646  */
    {printf("\nmodificador -> GENERIC");}
#line 3147 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 296 "simple.y" /* yacc.c:1646  */
    {printf("\nmodificador -> ABSTRACTO");}
#line 3153 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 297 "simple.y" /* yacc.c:1646  */
    {printf("\nmodificador -> ESPECIFICO");}
#line 3159 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 298 "simple.y" /* yacc.c:1646  */
    {printf("\nmodificador -> FINAL");}
#line 3165 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 303 "simple.y" /* yacc.c:1646  */
    {printf("\nrango -> expresion :: expresion");}
#line 3171 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 304 "simple.y" /* yacc.c:1646  */
    {printf("\nrango -> rango :: expresion");}
#line 3177 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 307 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionAsignacion");}
#line 3183 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 308 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionDevolver");}
#line 3189 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 309 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionLlamada");}
#line 3195 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 310 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionSi");}
#line 3201 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 311 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionCasos");}
#line 3207 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 312 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionBucle");}
#line 3213 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 313 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionInterrupcion");}
#line 3219 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 314 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionLanzamientoExcepcion");}
#line 3225 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 315 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> instruccionDeCapturaDeExcepcion");}
#line 3231 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 316 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> ';'");}
#line 3237 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 317 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccion -> finInstruccionError");}
#line 3243 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 320 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionAsignacion -> objeto op_asignacion expresion ';'");}
#line 3249 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 323 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIGNACION := ");}
#line 3255 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 324 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIG_SUMA :+");}
#line 3261 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 325 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIG_RESTO :\\");}
#line 3267 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 326 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIG_MULT :*");}
#line 3273 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 327 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIG_DIV :/");}
#line 3279 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 328 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIG_RESTA :-");}
#line 3285 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 329 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIG_POT :^");}
#line 3291 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 330 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIG_DESPI :< ");}
#line 3297 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 331 "simple.y" /* yacc.c:1646  */
    {printf("\noperadorAsignacion -> ASIG_DESPD :> ");}
#line 3303 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 334 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionDevolver -> DEVOLVER ';'");}
#line 3309 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 335 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionDevolver -> DEVOLVER expresion ';'");}
#line 3315 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 338 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionLlamada -> llamadaSubprograma ';'");}
#line 3321 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 341 "simple.y" /* yacc.c:1646  */
    {printf("\ndefinicionParametro -> expresion");}
#line 3327 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 342 "simple.y" /* yacc.c:1646  */
    {printf("\ndefinicionParametro -> IDENTIFICADOR ASIGNACION expresion");}
#line 3333 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 345 "simple.y" /* yacc.c:1646  */
    {printf("\ndefinicionParametroMultiple -> definicionParametro ',' definicionParametro");}
#line 3339 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 346 "simple.y" /* yacc.c:1646  */
    {printf("\ndefinicionParametroMultiple -> definicionParametroMultiple ',' definicionParametro");}
#line 3345 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 350 "simple.y" /* yacc.c:1646  */
    {printf("\nllamadaSubprograma -> nombre '(' ')'");}
#line 3351 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 351 "simple.y" /* yacc.c:1646  */
    {printf("\nllamadaSubprograma -> nombre '(' definicionParametro ')'");}
#line 3357 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 352 "simple.y" /* yacc.c:1646  */
    {printf("\nllamadaSubprograma -> nombre '(' definicionParametroMultiple ')'");}
#line 3363 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 355 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionSi -> SI expresion ENTONCES instruccion FIN SI");}
#line 3369 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 356 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionSi -> SI expresion ENTONCES instruccionMultiple FIN SI");}
#line 3375 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 357 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionSi -> SI expresion ENTONCES instruccion SINO instruccion FIN SI");}
#line 3381 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 358 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionSi -> SI expresion ENTONCES instruccion SINO instruccionMultiple FIN SI");}
#line 3387 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 359 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionSi -> SI expresion ENTONCES instruccionMultiple SINO instruccion");}
#line 3393 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 360 "simple.y" /* yacc.c:1646  */
    {printf("\ninstruccionSi -> SI expresion ENTONCES instruccionMultiple SINO instruccionMultiple");}
#line 3399 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 363 "simple.y" /* yacc.c:1646  */
    {printf("\nespecificacionTipo -> nombre");}
#line 3405 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 364 "simple.y" /* yacc.c:1646  */
    {printf("\nespecificacionTipo -> tipoNoEstructurado");}
#line 3411 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 367 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionTipo -> TIPO IDENTIFICADOR ES tipoNoEstructurado ';'");}
#line 3417 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 368 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionTipo -> TIPO IDENTIFICADOR ES tipoEstructurado ';'");}
#line 3423 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 371 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoNoEstructurado -> tipoEscalar");}
#line 3429 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 372 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoNoEstructurado -> tipoTabla");}
#line 3435 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 373 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoNoEstructurado -> tipoDiccionario");}
#line 3441 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 376 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEscalar -> tipoBasico");}
#line 3447 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 377 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEscalar -> SIGNO tipoBasico");}
#line 3453 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 378 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEscalar -> SIGNO tipoBasico longitud");}
#line 3459 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 379 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEscalar -> SIGNO tipoBasico RANGO rango");}
#line 3465 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 380 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEscalar -> SIGNO tipoBasico longitud RANGO rango");}
#line 3471 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 381 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEscalar -> tipoBasico longitud");}
#line 3477 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 382 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEscalar -> tipoBasico RANGO rango");}
#line 3483 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 383 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEscalar -> tipoBasico longitud RANGO rango");}
#line 3489 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 386 "simple.y" /* yacc.c:1646  */
    {printf("\nlongitud -> CORTO");}
#line 3495 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 387 "simple.y" /* yacc.c:1646  */
    {printf("\nlongitud -> LARGO");}
#line 3501 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 390 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoBasico -> BOOLEANO");}
#line 3507 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 391 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoBasico -> CARACTER");}
#line 3513 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 392 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoBasico -> ENTERO");}
#line 3519 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 393 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoBasico -> REAL");}
#line 3525 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 396 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoTabla -> TABLA '(' expresion '..' expresion ')' DE especificacionTipo");}
#line 3531 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 397 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoTabla -> LISTA DE especificacionTipo");}
#line 3537 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 400 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoDiccionario -> DICCIONARIO DE especificacionTipo");}
#line 3543 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 403 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEstructurado -> tipoRegistro");}
#line 3549 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 404 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEstructurado -> tipoEnumerado");}
#line 3555 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 405 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEstructurado -> clase");}
#line 3561 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 408 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoRegistro -> REGISTRO campo FIN REGISTRO");}
#line 3567 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 409 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoRegistro -> REGISTRO campoMultiple FIN REGISTRO");}
#line 3573 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 412 "simple.y" /* yacc.c:1646  */
    {printf("\ncampo -> IDENTIFICADOR ':' especificacionTipo ';'");}
#line 3579 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 413 "simple.y" /* yacc.c:1646  */
    {printf("\ncampo -> IDENTIFICADOR ':' especificacionTipo ASIGNACION expresion ';'");}
#line 3585 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 414 "simple.y" /* yacc.c:1646  */
    {printf("\ncampo -> identificadorMultiple ':' especificacionTipo ';'");}
#line 3591 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 415 "simple.y" /* yacc.c:1646  */
    {printf("\ncampo -> identificadorMultiple ':' especificacionTipo ASIGNACION expresion ';'");}
#line 3597 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 418 "simple.y" /* yacc.c:1646  */
    {printf("\ncampoMultiple -> campo campo");}
#line 3603 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 419 "simple.y" /* yacc.c:1646  */
    {printf("\ncampoMultiple -> campoMultiple campo");}
#line 3609 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 422 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEnumerado -> ENUMERACION elementoEnumeracion FIN ENUMERACION");}
#line 3615 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 423 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEnumerado -> ENUMERACION elementoEnumeracionMultiple FIN ENUMERACION");}
#line 3621 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 424 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEnumerado -> ENUMERACION DE tipoEscalar elementoEnumeracion FIN ENUMERACION");}
#line 3627 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 425 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoEnumerado -> ENUMERACION DE tipoEscalar elementoEnumeracionMultiple FIN ENUMERACION");}
#line 3633 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 428 "simple.y" /* yacc.c:1646  */
    {printf("\nelementoEnumeracion -> IDENTIFICADOR");}
#line 3639 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 429 "simple.y" /* yacc.c:1646  */
    {printf("\nelementoEnumeracion -> IDENTIFICADOR ASIGNACION expresion");}
#line 3645 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 432 "simple.y" /* yacc.c:1646  */
    {printf("\nelementoEnumeracionMultiple -> elementoEnumeracion ',' elementoEnumeracion");}
#line 3651 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 433 "simple.y" /* yacc.c:1646  */
    {printf("\nelementoEnumeracionMultiple -> elementoEnumeracionMultiple ',' elementoEnumeracion");}
#line 3657 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 436 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionSubprograma -> SUBPROGRAMA cabeceraSubprograma cuerpoSubprograma SUBPROGRAMA");}
#line 3663 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 437 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionSubprograma -> finSubprogramaError");}
#line 3669 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 440 "simple.y" /* yacc.c:1646  */
    {printf("\ncabeceraSubprograma -> IDENTIFICADOR");}
#line 3675 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 441 "simple.y" /* yacc.c:1646  */
    {printf("\ncabeceraSubprograma -> IDENTIFICADOR parametrizacion");}
#line 3681 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 442 "simple.y" /* yacc.c:1646  */
    {printf("\ncabeceraSubprograma -> IDENTIFICADOR tipoResultado");}
#line 3687 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 443 "simple.y" /* yacc.c:1646  */
    {printf("\ncabeceraSubprograma -> IDENTIFICADOR parametrizacion tipoResultado");}
#line 3693 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 446 "simple.y" /* yacc.c:1646  */
    {printf("\nparametrizacion -> '(' declaracionParametros ')'");}
#line 3699 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 447 "simple.y" /* yacc.c:1646  */
    {printf("\nparametrizacion -> '(' declaracionParametrosMultiple ')'");}
#line 3705 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 450 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionParametros -> IDENTIFICADOR ':' especificacionTipo");}
#line 3711 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 451 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionParametros -> IDENTIFICADOR ':' modo especificacionTipo");}
#line 3717 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 452 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionParametros -> IDENTIFICADOR ':' especificacionTipo ASIGNACION expresion");}
#line 3723 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 453 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionParametros -> IDENTIFICADOR ':' modo especificacionTipo ASIGNACION expresion");}
#line 3729 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 454 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionParametros -> identificadorMultiple ':' especificacionTipo");}
#line 3735 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 455 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionParametros -> identificadorMultiple ':' modo especificacionTipo");}
#line 3741 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 456 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionParametros -> identificadorMultiple ':' especificacionTipo ASIGNACION expresion");}
#line 3747 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 457 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionParametros -> identificadorMultiple ':' modo especificacionTipo ASIGNACION expresion");}
#line 3753 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 460 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionParametrosMultiple -> declaracionParametros ';' declaracionParametros ';'");}
#line 3759 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 461 "simple.y" /* yacc.c:1646  */
    {printf("\ndeclaracionParametrosMultiple -> declaracionParametrosMultiple declaracionParametros ';'");}
#line 3765 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 464 "simple.y" /* yacc.c:1646  */
    {printf("\nmodo -> VALOR");}
#line 3771 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 465 "simple.y" /* yacc.c:1646  */
    {printf("\nmodo -> REFERENCIA");}
#line 3777 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 468 "simple.y" /* yacc.c:1646  */
    {printf("\ntipoResultado -> DEVOLVER especificacionTipo");}
#line 3783 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 471 "simple.y" /* yacc.c:1646  */
    {printf("\ncuerpoSubprograma -> PRINCIPIO instruccion FIN");}
#line 3789 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 472 "simple.y" /* yacc.c:1646  */
    {printf("\ncuerpoSubprograma -> PRINCIPIO instruccionMultiple FIN");}
#line 3795 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 473 "simple.y" /* yacc.c:1646  */
    {printf("\ncuerpoSubprograma -> PRINCIPIO declaracion instruccion FIN");}
#line 3801 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 474 "simple.y" /* yacc.c:1646  */
    {printf("\ncuerpoSubprograma -> PRINCIPIO declaracion instruccionMultiple FIN");}
#line 3807 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 475 "simple.y" /* yacc.c:1646  */
    {printf("\ncuerpoSubprograma -> PRINCIPIO declaracionMultiple instruccion FIN");}
#line 3813 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 476 "simple.y" /* yacc.c:1646  */
    {printf("\ncuerpoSubprograma -> PRINCIPIO declaracionMultiple instruccionMultiple FIN");}
#line 3819 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 479 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> libreriaMultiple exportaciones declaracion");}
#line 3825 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 480 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> libreriaMultiple exportaciones declaracionMultiple");}
#line 3831 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 481 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> libreriaMultiple declaracion");}
#line 3837 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 482 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> libreriaMultiple declaracionMultiple");}
#line 3843 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 483 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> libreria exportaciones declaracion");}
#line 3849 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 484 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> libreria exportaciones declaracionMultiple");}
#line 3855 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 485 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> libreria declaracion");}
#line 3861 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 486 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> libreria declaracionMultiple");}
#line 3867 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 487 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> exportaciones declaracion");}
#line 3873 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 488 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> exportaciones declaracionMultiple");}
#line 3879 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 489 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> declaracion");}
#line 3885 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 490 "simple.y" /* yacc.c:1646  */
    {printf("\ncodigoLibreria -> declaracionMultiple");}
#line 3891 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 493 "simple.y" /* yacc.c:1646  */
    {printf("\nenumeraciones -> [ expresionCondicional ]");}
#line 3897 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 494 "simple.y" /* yacc.c:1646  */
    {printf("\nenumeraciones -> [ expresionMult ]");}
#line 3903 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 495 "simple.y" /* yacc.c:1646  */
    {printf("\nenumeraciones -> [ claveValor ]");}
#line 3909 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 496 "simple.y" /* yacc.c:1646  */
    {printf("\nenumeraciones -> [ claveValorMultiple ]");}
#line 3915 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 497 "simple.y" /* yacc.c:1646  */
    {printf("\nenumeraciones -> [ campoValor ]");}
#line 3921 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 498 "simple.y" /* yacc.c:1646  */
    {printf("\nenumeraciones -> [ campoValorMultiple ]");}
#line 3927 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 501 "simple.y" /* yacc.c:1646  */
    {printf("\nclaveValorMult -> claveValor , claveValor");}
#line 3933 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 502 "simple.y" /* yacc.c:1646  */
    {printf("\nclaveValorMult -> claveValorMult , claveValor");}
#line 3939 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 505 "simple.y" /* yacc.c:1646  */
    {printf("\nclave_valor -> CTC_CADENA => expresion");}
#line 3945 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 507 "simple.y" /* yacc.c:1646  */
    {printf("\ncampoValorMult -> campo_valor , campo_valor");}
#line 3951 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 508 "simple.y" /* yacc.c:1646  */
    {printf("\ncampoValorMult -> campoValorMult , campo_valor");}
#line 3957 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 510 "simple.y" /* yacc.c:1646  */
    {printf("\ncampo_valor -> CTC_CADENA => expresion");}
#line 3963 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 512 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionCondicional -> expresion");}
#line 3969 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 513 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionCondicional -> si expresion entonces expresion");}
#line 3975 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 514 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionCondicional -> si expresion entonces expresion SINO expresion");}
#line 3981 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 517 "simple.y" /* yacc.c:1646  */
    {printf("\nreductora -> error expresion");}
#line 3987 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 518 "simple.y" /* yacc.c:1646  */
    {printf("\nreductora -> error expresion");}
#line 3993 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 521 "simple.y" /* yacc.c:1646  */
    {printf("\nfinSubprogramaError -> reductora FIN SUBPROGRAMA");}
#line 3999 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 524 "simple.y" /* yacc.c:1646  */
    {printf("\nfinInstruccionError -> reductora ';'");}
#line 4005 "simple.tab.c" /* yacc.c:1646  */
    break;


#line 4009 "simple.tab.c" /* yacc.c:1646  */
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
#line 529 "simple.y" /* yacc.c:1906  */


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
