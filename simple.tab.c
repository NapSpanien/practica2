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
    ERROR = 344
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
#define YYFINAL  19
/* YYLAST -- Last index in YYTABLE.  */
<<<<<<< HEAD
#define YYLAST   97
=======
#define YYLAST   141
>>>>>>> ba3984b3331e7ae27da7e6d8e6b9ae3b2efd033b

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  99
/* YYNNTS -- Number of nonterminals.  */
<<<<<<< HEAD
#define YYNNTS  10
/* YYNRULES -- Number of rules.  */
#define YYNRULES  32
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  53
=======
#define YYNNTS  16
/* YYNRULES -- Number of rules.  */
#define YYNRULES  45
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  82
>>>>>>> ba3984b3331e7ae27da7e6d8e6b9ae3b2efd033b

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
<<<<<<< HEAD
      91,    92,     2,     2,    90,     2,    93,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    98,     2,
=======
      92,    93,     2,     2,    91,     2,    94,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
>>>>>>> ba3984b3331e7ae27da7e6d8e6b9ae3b2efd033b
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    95,     2,    96,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    90,     2,    97,     2,     2,     2,     2,
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
      85,    86,    87,    88,    89
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
<<<<<<< HEAD
       0,    38,    38,    39,    40,    41,    56,    57,    58,    60,
      61,    64,    65,    66,    68,    70,    71,    75,    77,    78,
      79,    80,    81,    82,    85,    86,    87,    88,    89,    90,
     100,   101,   102
=======
       0,    39,    39,    40,    41,    42,    49,    50,    51,    53,
      54,    57,    58,    59,    61,    63,    64,    68,    70,    71,
      72,    73,    74,    75,    78,    79,    80,    81,    82,    83,
      86,    89,    90,    91,    92,    93,    94,    97,    98,   100,
     102,   103,   105,   107,   108,   109
>>>>>>> ba3984b3331e7ae27da7e6d8e6b9ae3b2efd033b
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
<<<<<<< HEAD
  "ASIG_DESPI", "ASIG_DESPD", "IDENTIFICADOR", "','", "'('", "')'", "'.'",
  "'['", "']'", "'{'", "'}'", "':'", "$accept", "fin", "cadenaMult",
  "nombre", "expresionMult", "expresion", "primario", "literal", "objeto",
  "expresionCondicional", YY_NULLPTR
=======
  "ASIG_DESPI", "ASIG_DESPD", "ERROR", "'{'", "','", "'('", "')'", "'.'",
  "'['", "']'", "'}'", "$accept", "fin", "cadenaMult", "nombre",
  "expresionMult", "expresion", "primario", "literal", "objeto",
  "clausulaIteracion", "enumeraciones", "claveValorMult", "claveValor",
  "campoValorMult", "campoValor", "expresionCondicional", YY_NULLPTR
>>>>>>> ba3984b3331e7ae27da7e6d8e6b9ae3b2efd033b
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
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
<<<<<<< HEAD
      44,    40,    41,    46,    91,    93,   123,   125,    58
=======
     123,    44,    40,    41,    46,    91,    93,   125
>>>>>>> ba3984b3331e7ae27da7e6d8e6b9ae3b2efd033b
};
# endif

#define YYPACT_NINF -90

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-90)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
<<<<<<< HEAD
     -15,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -15,     0,
     -63,   -90,   -90,   -72,   -78,   -90,   -90,   -15,   -73,   -67,
     -90,   -90,   -90,   -71,   -64,   -15,   -38,   -90,     7,   -35,
       1,   -90,   -63,   -85,   -75,   -89,   -81,   -15,   -90,   -90,
     -90,   -15,   -90,     6,   -90,   -90,   -90,   -26,   -90,   -90,
     -90,   -15,   -90
=======
      49,   -90,    15,   -90,   -90,   -90,   -90,   -90,   -90,    15,
       0,   -63,   -90,   -90,   -90,   -72,   -90,    -4,   -69,   -90,
     -30,    49,   -72,   -90,   -90,   -37,   -25,   -24,    15,    15,
     -90,   -28,   -27,   -89,   -88,   -87,   -86,   -66,   -46,   -90,
     -90,   -78,   -76,   -63,   -65,   -59,   -10,    15,    15,   -17,
     -90,   -17,   -90,   -16,   -90,   -16,   -90,    15,   -90,     6,
     -45,   -14,   -90,    19,   -90,   -90,   -90,    15,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90
>>>>>>> ba3984b3331e7ae27da7e6d8e6b9ae3b2efd033b
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
<<<<<<< HEAD
       0,    19,    18,    22,    23,    20,    21,     9,     0,     0,
      24,     2,    15,    16,     0,    14,     1,     0,    23,     4,
      30,     3,     5,     0,     0,     0,     0,    17,     0,     0,
       0,    10,    25,     0,     0,     0,     0,     0,     6,     8,
       7,     0,    27,     0,    26,    28,    29,    31,    11,    13,
      12,     0,    32
=======
       0,    19,     0,    18,    22,    23,     9,    20,    21,     0,
       0,    24,    43,    14,    15,    16,     2,     0,     0,     1,
       0,     0,     5,     3,     4,     0,     0,     0,     0,     0,
      17,     0,     0,     0,     0,     0,     0,     0,    43,    30,
      10,     0,     0,    25,     0,     0,    44,     0,     0,     0,
      34,     0,    33,     0,    36,     0,    35,     0,    32,     0,
       0,     0,    28,     0,    29,    27,    26,     0,    39,    42,
      38,    37,    41,    40,    11,    13,    12,    31,     6,     8,
       7,    45
>>>>>>> ba3984b3331e7ae27da7e6d8e6b9ae3b2efd033b
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
<<<<<<< HEAD
     -90,   -90,     8,    12,   -90,    -6,     4,   -90,   -90,   -90
=======
     -90,   -90,   -90,    25,    26,    27,   -90,   -90,    47,   -90,
     -90,   -90,   -35,   -90,   -15,    -9
>>>>>>> ba3984b3331e7ae27da7e6d8e6b9ae3b2efd033b
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
<<<<<<< HEAD
      -1,     9,    19,    10,    33,    14,    15,    12,    13,    22
=======
      -1,    10,    42,    11,    37,    12,    13,    14,    15,    60,
      23,    33,    34,    35,    36,    16
>>>>>>> ba3984b3331e7ae27da7e6d8e6b9ae3b2efd033b
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
<<<<<<< HEAD
      16,    29,    39,    20,    11,    41,    23,    49,    45,    30,
      42,    28,     1,    21,    27,    43,    46,    29,    31,    34,
      44,    24,    25,    30,    26,     7,    35,     1,    37,    38,
      51,    47,     0,     1,    36,    48,    32,    50,     0,     0,
       0,     0,     0,     0,     0,    52,     0,     2,     3,     4,
       0,     5,     6,    17,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     3,    18,    40,     5,     6,     2,     3,
       4,     0,     5,     6,     7,     0,     8,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     7,
       0,     8,     0,     0,     0,     7,     0,     8
=======
      19,    24,    49,    51,    53,    55,    25,    75,    50,    52,
      54,    56,    39,    61,    70,    63,    71,    29,    26,    62,
      79,    64,    27,    28,    30,    57,    57,     1,    40,    17,
      58,    65,    59,     1,    31,    32,    18,    66,    72,    41,
      73,     6,     1,    47,    48,    59,    67,    31,    38,    32,
      78,    77,    43,     2,    44,    45,    46,    22,     0,     0,
       0,     0,     3,     4,     5,     6,     7,     8,     3,     4,
       5,     6,     7,     8,    68,    69,     1,     3,     4,     5,
       6,     7,     8,    80,    74,     0,    76,     0,     0,     0,
      20,     0,     9,     0,    81,    21,     0,     0,     9,     0,
       0,     0,     2,     0,     0,     0,     0,     9,     0,     0,
       0,     3,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     9
>>>>>>> ba3984b3331e7ae27da7e6d8e6b9ae3b2efd033b
};

static const yytype_int8 yycheck[] =
{
<<<<<<< HEAD
       0,    90,     1,     9,     0,    90,    69,     1,    97,    90,
      95,    17,    27,     9,    92,    90,    97,    90,    89,    25,
      95,    93,    94,    90,    96,    89,    64,    27,    21,    64,
      56,    37,    -1,    27,    26,    41,    24,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    -1,    62,    63,    64,
      -1,    66,    67,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    63,    64,    64,    66,    67,    62,    63,
      64,    -1,    66,    67,    89,    -1,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    91,    -1,    -1,    -1,    89,    -1,    91
=======
       0,    10,    91,    91,    91,    91,    69,     1,    97,    97,
      97,    97,    21,    91,    49,    91,    51,    21,    90,    97,
       1,    97,    94,    95,    93,    91,    91,    27,    65,     2,
      96,    96,    91,    27,    64,    65,     9,    96,    53,    64,
      55,    65,    27,    71,    71,    91,    56,    64,    21,    65,
      64,    96,    27,    53,    28,    28,    29,    10,    -1,    -1,
      -1,    -1,    62,    63,    64,    65,    66,    67,    62,    63,
      64,    65,    66,    67,    47,    48,    27,    62,    63,    64,
      65,    66,    67,    64,    57,    -1,    59,    -1,    -1,    -1,
      90,    -1,    92,    -1,    67,    95,    -1,    -1,    92,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    92,    -1,    -1,
      -1,    62,    63,    64,    65,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    92
>>>>>>> ba3984b3331e7ae27da7e6d8e6b9ae3b2efd033b
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
<<<<<<< HEAD
       0,    27,    62,    63,    64,    66,    67,    89,    91,   100,
     102,   105,   106,   107,   104,   105,     0,    53,    64,   101,
     104,   105,   108,    69,    93,    94,    96,    92,   104,    90,
      90,    89,   102,   103,   104,    64,   101,    21,    64,     1,
      64,    90,    95,    90,    95,    97,    97,   104,   104,     1,
     104,    56,   104
=======
       0,    27,    53,    62,    63,    64,    65,    66,    67,    92,
      99,   101,   103,   104,   105,   106,   113,   103,   103,     0,
      90,    95,   106,   108,   113,    69,    90,    94,    95,    21,
      93,    64,    65,   109,   110,   111,   112,   102,   103,   113,
      65,    64,   100,   101,   102,   103,   103,    71,    71,    91,
      97,    91,    97,    91,    97,    91,    97,    91,    96,    91,
     107,    91,    97,    91,    97,    96,    96,    56,   103,   103,
     110,   110,   112,   112,   103,     1,   103,    96,    64,     1,
      64,   103
>>>>>>> ba3984b3331e7ae27da7e6d8e6b9ae3b2efd033b
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
<<<<<<< HEAD
       0,    99,   100,   100,   100,   100,   101,   101,   101,   102,
     102,   103,   103,   103,   104,   105,   105,   105,   106,   106,
     106,   106,   106,   106,   107,   107,   107,   107,   107,   107,
     108,   108,   108
=======
       0,    98,    99,    99,    99,    99,   100,   100,   100,   101,
     101,   102,   102,   102,   103,   104,   104,   104,   105,   105,
     105,   105,   105,   105,   106,   106,   106,   106,   106,   106,
     107,   108,   108,   108,   108,   108,   108,   109,   109,   110,
     111,   111,   112,   113,   113,   113
>>>>>>> ba3984b3331e7ae27da7e6d8e6b9ae3b2efd033b
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     3,     3,     3,     1,
       3,     3,     3,     3,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     3,     4,     4,     4,     4,
<<<<<<< HEAD
       1,     4,     6
=======
       0,     4,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     4,     6
>>>>>>> ba3984b3331e7ae27da7e6d8e6b9ae3b2efd033b
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
<<<<<<< HEAD
        case 2:
#line 38 "simple.y" /* yacc.c:1646  */
    {printf("\nfin -> primario\n");}
#line 1371 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 39 "simple.y" /* yacc.c:1646  */
    {printf("\nfin -> fin primario\n");}
#line 1377 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 40 "simple.y" /* yacc.c:1646  */
    {printf("\nfin -> fin cadenaMult\n");}
#line 1383 "simple.tab.c" /* yacc.c:1646  */
=======
        case 3:
#line 40 "simple.y" /* yacc.c:1646  */
    {printf("\nfin -> enumeraciones\n");}
#line 1396 "simple.tab.c" /* yacc.c:1646  */
>>>>>>> ba3984b3331e7ae27da7e6d8e6b9ae3b2efd033b
    break;

  case 4:
#line 41 "simple.y" /* yacc.c:1646  */
<<<<<<< HEAD
    { printf("\nfin -> fin expresionCondicional\n");}
#line 1389 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 56 "simple.y" /* yacc.c:1646  */
    {printf("\ncadenaMult -> CTC_CADENA , CTC_CADENA");}
#line 1395 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 57 "simple.y" /* yacc.c:1646  */
    {printf("\ncadenaMult -> cadenaMult , CTC_CADENA");}
#line 1401 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 58 "simple.y" /* yacc.c:1646  */
    {yyerrok; printf("\ncadenaMult -> cadenaMult , error "); }
#line 1407 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 60 "simple.y" /* yacc.c:1646  */
    {printf("\nnombre -> IDENTIFICADOR");}
#line 1413 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 61 "simple.y" /* yacc.c:1646  */
    {printf("\nnombre -> nombre :: IDENTIFICADOR");}
#line 1419 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 64 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionMult -> expresionMult , expresion");}
#line 1425 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 65 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionMult -> expresion , expresion");}
#line 1431 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 66 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionMult -> expresion , error");}
#line 1437 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 68 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> primario");}
#line 1443 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 70 "simple.y" /* yacc.c:1646  */
    {printf("\nprimario -> literal");}
#line 1449 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 71 "simple.y" /* yacc.c:1646  */
    {printf("\nprimario -> objeto");}
#line 1455 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 75 "simple.y" /* yacc.c:1646  */
    {printf("\nprimario -> ( expresion ) ");}
#line 1461 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 77 "simple.y" /* yacc.c:1646  */
    {printf("\nliteral -> VERDADERO");}
#line 1467 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 78 "simple.y" /* yacc.c:1646  */
    {printf("\nliteral -> FASLO");}
#line 1473 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 79 "simple.y" /* yacc.c:1646  */
    {printf("\nliteral -> CTC_ENTERA");}
#line 1479 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 80 "simple.y" /* yacc.c:1646  */
    {printf("\nliteral -> CTC_REAL");}
#line 1485 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 81 "simple.y" /* yacc.c:1646  */
    {printf("\nliteral -> CTC_CARACTER");}
#line 1491 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 82 "simple.y" /* yacc.c:1646  */
    {printf("\nliteral -> CTC_CADENA");}
#line 1497 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 86 "simple.y" /* yacc.c:1646  */
    {printf("\nobjeto -> objeto . nombre");}
#line 1503 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 87 "simple.y" /* yacc.c:1646  */
    {printf("\nobjeto -> objeto [ expresion ]");}
#line 1509 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 88 "simple.y" /* yacc.c:1646  */
    {printf("\nobjeto -> objeto [ expresionMult ]");}
#line 1515 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 89 "simple.y" /* yacc.c:1646  */
    {printf("\nobjeto -> objeto { CTC_CADENA }");}
#line 1521 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 90 "simple.y" /* yacc.c:1646  */
    {printf("\nobjeto -> objeto { cadenaMult }");}
#line 1527 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 100 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionCondicional -> expresion");}
#line 1533 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 101 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionCondicional -> si expresion entonces expresion");}
#line 1539 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 102 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionCondicional -> si expresion entonces expresion SINO expresion");}
#line 1545 "simple.tab.c" /* yacc.c:1646  */
    break;


#line 1549 "simple.tab.c" /* yacc.c:1646  */
=======
    {printf("\nfin -> expresionCondicional\n");}
#line 1402 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 42 "simple.y" /* yacc.c:1646  */
    {printf("\nfin -> objeto\n");}
#line 1408 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 49 "simple.y" /* yacc.c:1646  */
    {printf("\ncadenaMult -> CTC_CADENA , CTC_CADENA");}
#line 1414 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 50 "simple.y" /* yacc.c:1646  */
    {printf("\ncadenaMult -> cadenaMult , CTC_CADENA");}
#line 1420 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 51 "simple.y" /* yacc.c:1646  */
    {yyerrok; printf("\ncadenaMult -> cadenaMult , error "); }
#line 1426 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 53 "simple.y" /* yacc.c:1646  */
    {printf("\nnombre -> IDENTIFICADOR");}
#line 1432 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 54 "simple.y" /* yacc.c:1646  */
    {printf("\nnombre -> nombre :: IDENTIFICADOR");}
#line 1438 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 57 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionMult -> expresionMult , expresion");}
#line 1444 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 58 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionMult -> expresion , expresion");}
#line 1450 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 59 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionMult -> expresion , error");}
#line 1456 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 61 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresion -> primario");}
#line 1462 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 63 "simple.y" /* yacc.c:1646  */
    {printf("\nprimario -> literal");}
#line 1468 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 64 "simple.y" /* yacc.c:1646  */
    {printf("\nprimario -> objeto");}
#line 1474 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 68 "simple.y" /* yacc.c:1646  */
    {printf("\nprimario -> ( expresion ) ");}
#line 1480 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 70 "simple.y" /* yacc.c:1646  */
    {printf("\nliteral -> VERDADERO");}
#line 1486 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 71 "simple.y" /* yacc.c:1646  */
    {printf("\nliteral -> FASLO");}
#line 1492 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 72 "simple.y" /* yacc.c:1646  */
    {printf("\nliteral -> CTC_ENTERA");}
#line 1498 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 73 "simple.y" /* yacc.c:1646  */
    {printf("\nliteral -> CTC_REAL");}
#line 1504 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 74 "simple.y" /* yacc.c:1646  */
    {printf("\nliteral -> CTC_CARACTER");}
#line 1510 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 75 "simple.y" /* yacc.c:1646  */
    {printf("\nliteral -> CTC_CADENA");}
#line 1516 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 79 "simple.y" /* yacc.c:1646  */
    {printf("\nobjeto -> objeto . nombre");}
#line 1522 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 80 "simple.y" /* yacc.c:1646  */
    {printf("\nobjeto -> objeto [ expresion ]");}
#line 1528 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 81 "simple.y" /* yacc.c:1646  */
    {printf("\nobjeto -> objeto [ expresionMult ]");}
#line 1534 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 82 "simple.y" /* yacc.c:1646  */
    {printf("\nobjeto -> objeto { CTC_CADENA }");}
#line 1540 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 83 "simple.y" /* yacc.c:1646  */
    {printf("\nobjeto -> objeto { cadenaMult }");}
#line 1546 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 89 "simple.y" /* yacc.c:1646  */
    {printf("\nenumeraciones -> [ expresionCondicional ]");}
#line 1552 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 90 "simple.y" /* yacc.c:1646  */
    {printf("\nenumeraciones -> [ expresionMult ]");}
#line 1558 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 91 "simple.y" /* yacc.c:1646  */
    {printf("\nenumeraciones -> [ claveValor ]");}
#line 1564 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 92 "simple.y" /* yacc.c:1646  */
    {printf("\nenumeraciones -> [ claveValorMultiple ]");}
#line 1570 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 93 "simple.y" /* yacc.c:1646  */
    {printf("\nenumeraciones -> [ campoValor ]");}
#line 1576 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 94 "simple.y" /* yacc.c:1646  */
    {printf("\nenumeraciones -> [ campoValorMultiple ]");}
#line 1582 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 97 "simple.y" /* yacc.c:1646  */
    {printf("\nclaveValorMult -> claveValor , claveValor");}
#line 1588 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 98 "simple.y" /* yacc.c:1646  */
    {printf("\nclaveValorMult -> claveValorMult , claveValor");}
#line 1594 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 100 "simple.y" /* yacc.c:1646  */
    {printf("\nclave_valor -> CTC_CADENA => expresion");}
#line 1600 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 102 "simple.y" /* yacc.c:1646  */
    {printf("\ncampoValorMult -> campo_valor , campo_valor");}
#line 1606 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 103 "simple.y" /* yacc.c:1646  */
    {printf("\ncampoValorMult -> campoValorMult , campo_valor");}
#line 1612 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 105 "simple.y" /* yacc.c:1646  */
    {printf("\ncampo_valor -> CTC_CADENA => expresion");}
#line 1618 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 107 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionCondicional -> expresion");}
#line 1624 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 108 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionCondicional -> si expresion entonces expresion");}
#line 1630 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 109 "simple.y" /* yacc.c:1646  */
    {printf("\nexpresionCondicional -> si expresion entonces expresion SINO expresion");}
#line 1636 "simple.tab.c" /* yacc.c:1646  */
    break;


#line 1640 "simple.tab.c" /* yacc.c:1646  */
>>>>>>> ba3984b3331e7ae27da7e6d8e6b9ae3b2efd033b
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
<<<<<<< HEAD
#line 120 "simple.y" /* yacc.c:1906  */

=======
#line 112 "simple.y" /* yacc.c:1906  */
>>>>>>> ba3984b3331e7ae27da7e6d8e6b9ae3b2efd033b


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
