/**
@file a68g.h
@author J. Marcel van der Veer
@brief General definitions for Algol 68 Genie.
@section Copyright

This file is part of Algol 68 Genie - an Algol 68 compiler-interpreter.
Copyright 2001-2016 J. Marcel van der Veer <algol68g@xs4all.nl>.

@section License

This program is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation; either version 3 of the License, or (at your option) any later
version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with 
this program. If not, see <http://www.gnu.org/licenses/>.

@section Description

Top level include file.
**/

/**
@mainpage Introduction to Algol 68 Genie
**/

#if ! defined A68G_ALGOL68G_H
#define A68G_ALGOL68G_H

/*****************/
/* Configuration */
/*****************/

#include "a68g-config.h"

/*************************/
/* Derived configuration */
/*************************/

/* Do we have a compiler? */
#if (! defined HAVE_GCC || defined NO_MINUS_C_MINUS_O || ! defined HAVE_DL)
#undef HAVE_COMPILER
#elif (! HAVE_MAC_OS_X && ! defined HAVE_EXPORT_DYNAMIC)
#undef HAVE_COMPILER
#elif ((defined HAVE_LINUX || defined HAVE_MAC_OS_X) && defined HAVE_DL)
#define HAVE_COMPILER 1
#elif (defined HAVE_FREEBSD || defined HAVE_NETBSD)
#define HAVE_COMPILER 1
#else
#undef HAVE_COMPILER
#endif

/* Can we access the internet? */

#if (defined HAVE_NETDB_H && defined HAVE_NETINET_IN_H && defined HAVE_SYS_SOCKET_H)
#if (defined HAVE_LINUX || defined HAVE_MAC_OS_X || defined HAVE_FREEBSD || defined HAVE_NETBSD)
#define HAVE_HTTP
#endif
#endif

/************/
/* Includes */
/************/

#if defined HAVE_SYS_TYPES_H 
#include <sys/types.h> 
#endif

#if defined HAVE_STDIO_H 
#include <stdio.h> 
#endif

#if defined HAVE_LIMITS_H 
#include <limits.h> 
#endif

#if defined HAVE_ASSERT_H 
#include <assert.h> 
#endif

#if defined HAVE_CONIO_H 
#include <conio.h> 
#endif

#if defined HAVE_CTYPE_H 
#include <ctype.h> 
#endif

#if defined HAVE_CURSES_H 
#include <curses.h> 
#elif defined HAVE_NCURSES_CURSES_H
#include <ncurses/curses.h>
#endif

#if defined HAVE_READLINE_READLINE_H
#include <readline/readline.h>
#endif

#if defined HAVE_READLINE_HISTORY_H
#include <readline/history.h>
#endif

#if defined HAVE_DIRENT_H 
#include <dirent.h> 
#endif

#if defined HAVE_DL 
#include <dlfcn.h> 
#endif

#if defined HAVE_ERRNO_H 
#include <errno.h> 
#endif

#if defined HAVE_FCNTL_H 
#include <fcntl.h> 
#endif

#if defined HAVE_FLOAT_H 
#include <float.h> 
#endif

#if defined HAVE_LIBPQ-FE_H 
#include <libpq-fe.h> 
#endif

#if defined HAVE_MATH_H 
#include <math.h> 
#endif

#if defined HAVE_NETDB_H 
#include <netdb.h> 
#endif

#if defined HAVE_NETINET_IN_H 
#include <netinet/in.h> 
#endif

#if defined HAVE_GNU_PLOTUTILS
#include <plot.h> 
#endif

#if defined HAVE_PTHREAD_H 
#include <pthread.h> 
#endif

#if defined HAVE_REGEX_H 
#include <regex.h> 
#endif

#if defined HAVE_SETJMP_H 
#include <setjmp.h> 
#endif

#if defined HAVE_SIGNAL_H 
#include <signal.h> 
#endif

#if defined HAVE_STDARG_H 
#include <stdarg.h> 
#endif

#if defined HAVE_STDDEF_H 
#include <stddef.h> 
#endif

#if defined HAVE_STDLIB_H 
#include <stdlib.h> 
#endif

#if defined HAVE_STRING_H 
#include <string.h> 
#endif

#if defined HAVE_STRINGS_H 
#include <strings.h> 
#endif

#if (defined HAVE_TERMIOS_H && ! defined TIOCGWINSZ)
#include <termios.h> 
#elif (defined HAVE_TERMIOS_H && ! defined GWINSZ_IN_SYS_IOCTL) 
#include <termios.h> 
#endif

#if defined HAVE_TIME_H 
#include <time.h> 
#endif

#if defined HAVE_UNISTD_H 
#include <unistd.h> 
#endif

#if defined HAVE_SYS_IOCTL_H
#include <sys/ioctl.h>
#endif

#if defined HAVE_SYS_RESOURCE_H 
#include <sys/resource.h> 
#endif

#if defined HAVE_SYS_SOCKET_H 
#include <sys/socket.h> 
#endif

#if defined HAVE_SYS_STAT_H 
#include <sys/stat.h> 
#endif

#if defined HAVE_SYS_TIME_H 
#include <sys/time.h> 
#endif

#if defined HAVE_SYS_WAIT_H 
#include <sys/wait.h> 
#endif

#if defined HAVE_GSL_GSL_BLAS_H 
#include <gsl/gsl_blas.h> 
#endif

#if defined HAVE_GSL_GSL_COMPLEX_H 
#include <gsl/gsl_complex.h> 
#endif

#if defined HAVE_GSL_GSL_COMPLEX_H 
#include <gsl/gsl_complex.h> 
#endif

#if defined HAVE_GSL_GSL_COMPLEX_H 
#include <gsl/gsl_complex.h> 
#endif

#if defined HAVE_GSL_GSL_COMPLEX_MATH_H 
#include <gsl/gsl_complex_math.h> 
#endif

#if defined HAVE_GSL_GSL_COMPLEX_MATH_H 
#include <gsl/gsl_complex_math.h> 
#endif

#if defined HAVE_GSL_GSL_COMPLEX_MATH_H 
#include <gsl/gsl_complex_math.h> 
#endif

#if defined HAVE_GSL_GSL_ERRNO_H 
#include <gsl/gsl_errno.h> 
#endif

#if defined HAVE_GSL_GSL_ERRNO_H 
#include <gsl/gsl_errno.h> 
#endif

#if defined HAVE_GSL_GSL_ERRNO_H 
#include <gsl/gsl_errno.h> 
#endif

#if defined HAVE_GSL_GSL_FFT_COMPLEX_H
#include <gsl/gsl_fft_complex.h> 
#endif

#if defined HAVE_GSL_GSL_INTEGRATION_H 
#include <gsl/gsl_integration.h> 
#endif

#if defined HAVE_GSL_GSL_LINALG_H 
#include <gsl/gsl_linalg.h> 
#endif

#if defined HAVE_GSL_GSL_MATH_H 
#include <gsl/gsl_math.h> 
#endif

#if defined HAVE_GSL_GSL_MATH_H 
#include <gsl/gsl_math.h> 
#endif

#if defined HAVE_GSL_GSL_MATH_H 
#include <gsl/gsl_math.h> 
#endif

#if defined HAVE_GSL_GSL_MATRIX_H 
#include <gsl/gsl_matrix.h> 
#endif

#if defined HAVE_GSL_GSL_PERMUTATION_H 
#include <gsl/gsl_permutation.h> 
#endif

#if defined HAVE_GSL_GSL_SF_H 
#include <gsl/gsl_sf.h> 
#endif

#if defined HAVE_GSL_GSL_SF_H 
#include <gsl/gsl_sf.h> 
#endif

#if defined HAVE_GSL_GSL_SF_H 
#include <gsl/gsl_sf.h> 
#endif

#if defined HAVE_GSL_GSL_VECTOR_H 
#include <gsl/gsl_vector.h> 
#endif

/*****************/
/* Compatibility */
/*****************/

#if ! defined HAVE_SNPRINTF
#define snprintf a68g_snprintf
extern int a68g_snprintf (char *, size_t, char *, ...);
#endif

#if ! defined O_BINARY
#define O_BINARY 0x0000
#endif

/*************/
/* Constants */
/*************/

#define A68_DIR ".a68g"
#define A68_FALSE ((BOOL_T) 0)
#define A68_HISTORY_FILE ".a68g.edit.hist"
#define A68_MAX_BITS (UINT_MAX)
#define A68_MAX_INT (INT_MAX)
#define A68_MAX_UNT (UINT_MAX)
#define A68_NO_FILENO ((FILE_T) -1)
#define A68_PI 3.1415926535897932384626433832795029
#define A68_PROTECTION (S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH) /* -rw-r--r-- */
#define A68_READ_ACCESS (O_RDONLY)
#define A68_TRUE ((BOOL_T) 1)
#define A68_WRITE_ACCESS (O_WRONLY | O_CREAT | O_TRUNC)
#define BACKSLASH_CHAR '\\'
#define BINARY_EXTENSION ".o"
#define BLANK_CHAR ' '
#define BUFFER_SIZE (KILOBYTE)
#define BYTES_WIDTH 32
#define CR_CHAR '\r'
#define DEFAULT_DOUBLE_DIGITS 5
#define DEFAULT_MP_RADIX 10000000
#define DEFAULT_WIDTH (-1)
#define DIGIT_BLANK ((unsigned) 0x2)
#define DIGIT_NORMAL ((unsigned) 0x1)
#define DOUBLE_ACCURACY (DBL_DIG - 1)
#define EMBEDDED_FORMAT A68_TRUE
#define EOF_CHAR (EOF)
#define ERROR_CHAR '*'
#define ESCAPE_CHAR '\033'
#define EXPONENT_CHAR 'e'
#define FLIP_CHAR 'T'
#define FLOP_CHAR 'F'
#define FORMFEED_CHAR '\f'
#define GIGABYTE (KILOBYTE * MEGABYTE)
#define HIDDEN_TEMP_FILE_NAME ".a68g.tmp"
#define INSERTION_BLANK ((unsigned) 0x20)
#define INSERTION_NORMAL ((unsigned) 0x10)
#define ITEM_NOT_USED (-1)
#define KILOBYTE ((int) 1024)
#define LIBRARY_EXTENSION ".so"
#define LISTING_EXTENSION ".l"
#define LOG2_10	3.321928094887362347870319430
#define LOG_MP_BASE 7
#define LONGLONG_EXP_WIDTH (EXP_WIDTH)
#define LONG_BYTES_WIDTH 256
#define LONG_EXP_WIDTH (EXP_WIDTH)
#define LONG_MP_DIGITS DEFAULT_DOUBLE_DIGITS
#define MAX_ERRORS 8
#define MAX_MP_EXPONENT 142857 /* Arbitrary. Let M = MAX_REPR_INT then the largest range is M / Log M / LOG_MP_BASE */
#define MAX_OPEN_FILES 64 /* Some OS's won't open more than this number */
#define MAX_PRIORITY 9
#define MAX_REPR_INT 9007199254740992.0	/* 2^53, max int in a double */
#define MAX_TERM_HEIGTH 24
#define MAX_TERM_WIDTH (BUFFER_SIZE / 2)
#define MAX_TRANSPUT_BUFFER (MAX_OPEN_FILES)
#define MEGABYTE (KILOBYTE * KILOBYTE)
#define MIN_MEM_SIZE (128 * KILOBYTE)
#define MOID_ERROR_WIDTH 80
#define MOID_WIDTH 80
#define MONADS "%^&+-~!?"
#define MP_BITS_BITS 23
#define MP_BITS_RADIX 8388608 /* Max power of two smaller than MP_RADIX */
#define MP_RADIX DEFAULT_MP_RADIX
#define NEWLINE_CHAR '\n'
#define NEWLINE_STRING "\n"
#define NOMADS "></=*"
#define NOT_EMBEDDED_FORMAT A68_FALSE
#define NOT_PRINTED 1
#define NULL_CHAR '\0'
#define OBJECT_EXTENSION ".c"
#define POINT_CHAR '.'
#define PRETTY_EXTENSION ".f"
#define PRIMAL_SCOPE 0
#define QUOTE_CHAR '"'
#define RADIX_CHAR 'r'
#define REAL_WIDTH (DBL_DIG)
#define SCRIPT_EXTENSION ".sh"
#define SKIP_PATTERN A68_FALSE
#define SMALL_BUFFER_SIZE 128
#define SNPRINTF_SIZE ((size_t) BUFFER_SIZE)
#define TAB_CHAR '\t'
#define TRANSPUT_BUFFER_SIZE BUFFER_SIZE
#define WANT_PATTERN A68_TRUE

/* Error codes */

#define A68_NO_DIAGNOSTICS ((STATUS_MASK) 0x0)
#define A68_ERROR ((STATUS_MASK) 0x1)
#define A68_SYNTAX_ERROR ((STATUS_MASK) 0x2)
#define A68_MATH_ERROR ((STATUS_MASK) 0x4)
#define A68_WARNING ((STATUS_MASK) 0x8)
#define A68_RUNTIME_ERROR ((STATUS_MASK) 0x10)
#define A68_SUPPRESS_SEVERITY ((STATUS_MASK) 0x20)
#define A68_ALL_DIAGNOSTICS ((STATUS_MASK) 0x40)
#define A68_RERUN ((STATUS_MASK) 0x80)
#define A68_FORCE_DIAGNOSTICS ((STATUS_MASK) 0x100)
#define A68_FORCE_QUIT ((STATUS_MASK) 0x200)
#define A68_NO_SYNTHESIS ((STATUS_MASK) 0x400)

/* Various forms of NIL */

#define NO_ARRAY ((A68_ARRAY *) NULL)
#define NO_A68_REF ((A68_REF *) NULL)
#define NO_BOOK ((BOOK_T *) NULL)
#define NO_BOOL ((BOOL_T *) NULL)
#define NO_BYTE ((BYTE_T *) NULL)
#define NO_CONSTANT ((void *) NULL)
#define NO_DEC ((DEC_T *) NULL)
#define NO_DIAGNOSTIC ((DIAGNOSTIC_T *) NULL)
#define NO_EDLIN ((EDLIN_T *) NULL)
#define NO_FILE ((FILE *) NULL)
#define NO_FORMAT ((A68_FORMAT *) NULL)
#define NO_GINFO ((GINFO_T *) NULL)
#define NO_GPROC ((void (*) (NODE_T *)) NULL)
#define NO_HANDLE ((A68_HANDLE *) NULL)
#define NO_INT ((int *) NULL)
#define NO_JMP_BUF ((jmp_buf *) NULL)
#define NO_KEYWORD ((KEYWORD_T *) NULL)
#define NO_LINE ((LINE_T *) NULL)
#define NO_MOID ((MOID_T *) NULL)
#define NO_MP ((MP_T *) NULL)
#define NO_NINFO ((NODE_INFO_T *) NULL)
#define NO_NODE ((NODE_T *) NULL)
#define NO_NOTE ((void (*) (NODE_T *)) NULL)
#define NO_OPTION_LIST ((OPTION_LIST_T *) NULL)
#define NO_PACK ((PACK_T *) NULL)
#define NO_POSTULATE ((POSTULATE_T *) NULL)
#define NO_PPROC ((PROP_T (*) (NODE_T *)) NULL)
#define NO_PROCEDURE ((A68_PROCEDURE *) NULL)
#define NO_REAL ((double *) NULL)
#define NO_REFINEMENT ((REFINEMENT_T *) NULL)
#define NO_REGMATCH ((regmatch_t *) NULL)
#define NO_SCOPE ((SCOPE_T *) NULL)
#define NO_SOID ((SOID_T *) NULL)
#define NO_SOUND ((A68_SOUND *) NULL)
#define NO_STREAM NO_FILE
#define NO_TABLE ((TABLE_T *) NULL)
#define NO_TAG ((TAG_T *) NULL)
#define NO_TEXT ((char *) NULL)
#define NO_TICK ((BOOL_T *) NULL)
#define NO_TOKEN ((TOKEN_T *) NULL)
#define NO_TUPLE ((A68_TUPLE *) NULL)
#define NO_VAR (NULL)

/* Status Masks */

#define NULL_MASK ((STATUS_MASK) 0x00000000)
#define IN_HEAP_MASK ((STATUS_MASK) 0x00000001)
#define IN_FRAME_MASK ((STATUS_MASK) 0x00000002)
#define IN_STACK_MASK ((STATUS_MASK) 0x00000004)
#define INIT_MASK ((STATUS_MASK) 0x00000010)
#define CONSTANT_MASK ((STATUS_MASK) 0x00000020)
#define BLOCK_GC_MASK ((STATUS_MASK) 0x00000040)
#define COOKIE_MASK ((STATUS_MASK) 0x00000100)
#define SCOPE_ERROR_MASK ((STATUS_MASK) 0x00000100)
#define ALLOCATED_MASK ((STATUS_MASK) 0x00000400)
#define STANDENV_PROC_MASK ((STATUS_MASK) 0x00000800)
#define COLOUR_MASK ((STATUS_MASK) 0x00001000)
#define OPTIMAL_MASK ((STATUS_MASK) 0x00004000)
#define SERIAL_MASK ((STATUS_MASK) 0x00008000)
#define CROSS_REFERENCE_MASK ((STATUS_MASK) 0x00010000)
#define TREE_MASK ((STATUS_MASK) 0x00020000)
#define CODE_MASK ((STATUS_MASK) 0x00040000)
#define NOT_NEEDED_MASK ((STATUS_MASK) 0x00080000)
#define SOURCE_MASK ((STATUS_MASK) 0x00100000)
#define ASSERT_MASK ((STATUS_MASK) 0x00200000)
#define NIL_MASK ((STATUS_MASK) 0x00400000)
#define SKIP_PROCEDURE_MASK ((STATUS_MASK) 0x00800000)
#define SKIP_FORMAT_MASK ((STATUS_MASK) 0x00800000)
#define SKIP_ROW_MASK	((STATUS_MASK) 0x00800000)
#define INTERRUPTIBLE_MASK ((STATUS_MASK) 0x01000000)
#define BREAKPOINT_MASK ((STATUS_MASK) 0x02000000)
#define BREAKPOINT_TEMPORARY_MASK ((STATUS_MASK) 0x04000000)
#define BREAKPOINT_INTERRUPT_MASK ((STATUS_MASK) 0x08000000)
#define BREAKPOINT_WATCH_MASK ((STATUS_MASK) 0x10000000)
#define BREAKPOINT_TRACE_MASK ((STATUS_MASK) 0x20000000)
#define SEQUENCE_MASK ((STATUS_MASK) 0x40000000)
#define BREAKPOINT_ERROR_MASK ((STATUS_MASK) 0xffffffff)

/* CODEX masks */

#define PROC_DECLARATION_MASK ((STATUS_MASK) 0x00000001)

/************************/
/* Enumerated constants */
/************************/

enum {UPPER_STROPPING = 1, QUOTE_STROPPING};
enum {MP_PI, MP_TWO_PI, MP_HALF_PI};

enum
{
  STOP = 0,
  A68_PATTERN,
  ACCO_SYMBOL,
  ACTUAL_DECLARER_MARK,
  ALIF_IF_PART,
  ALIF_PART,
  ALIF_SYMBOL,
  ALT_DO_PART,
  ALT_DO_SYMBOL,
  ALT_EQUALS_SYMBOL,
  ALT_FORMAL_BOUNDS_LIST,
  ANDF_SYMBOL,
  AND_FUNCTION,
  ANONYMOUS,
  ARGUMENT,
  ARGUMENT_LIST,
  ASSERTION,
  ASSERT_SYMBOL,
  ASSIGNATION,
  ASSIGN_SYMBOL,
  ASSIGN_TO_SYMBOL,
  AT_SYMBOL,
  BEGIN_SYMBOL,
  BITS_C_PATTERN,
  BITS_DENOTATION,
  BITS_PATTERN,
  BITS_SYMBOL,
  BOLD_COMMENT_SYMBOL,
  BOLD_PRAGMAT_SYMBOL,
  BOLD_TAG,
  BOOLEAN_PATTERN,
  BOOL_SYMBOL,
  BOUND,
  BOUNDS,
  BOUNDS_LIST,
  BRIEF_OUSE_PART,
  BRIEF_CONFORMITY_OUSE_PART,
  BRIEF_ELIF_PART,
  BRIEF_OPERATOR_DECLARATION,
  BUS_SYMBOL,
  BYTES_SYMBOL,
  BY_PART,
  BY_SYMBOL,
  CALL,
  CASE_CHOICE_CLAUSE,
  CASE_CLAUSE,
  CASE_IN_PART,
  CASE_OUSE_PART,
  CASE_PART,
  CASE_SYMBOL,
  CAST,
  CHANNEL_SYMBOL,
  CHAR_C_PATTERN,
  CHAR_SYMBOL,
  CHOICE,
  CHOICE_PATTERN,
  CLASS_SYMBOL,
  CLOSED_CLAUSE,
  CLOSE_SYMBOL,
  CODE_CLAUSE,
  CODE_LIST,
  CODE_SYMBOL,
  COLLATERAL_CLAUSE,
  COLLECTION,
  COLON_SYMBOL,
  COLUMN_FUNCTION,
  COLUMN_SYMBOL,
  COMMA_SYMBOL,
  COMPLEX_PATTERN,
  COMPLEX_SYMBOL,
  COMPL_SYMBOL,
  CONDITIONAL_CLAUSE,
  CONFORMITY_CHOICE,
  CONFORMITY_CLAUSE,
  CONFORMITY_IN_PART,
  CONFORMITY_OUSE_PART,
  CONSTRUCT,
  DECLARATION_LIST,
  DECLARER,
  DEFINING_IDENTIFIER,
  DEFINING_INDICANT,
  DEFINING_OPERATOR,
  DENOTATION,
  DEPROCEDURING,
  DEREFERENCING,
  DIAGONAL_FUNCTION,
  DIAGONAL_SYMBOL,
  DOTDOT_SYMBOL,
  DOWNTO_SYMBOL,
  DO_PART,
  DO_SYMBOL,
  DYNAMIC_REPLICATOR,
  EDOC_SYMBOL,
  ELIF_IF_PART,
  ELIF_PART,
  ELIF_SYMBOL,
  ELSE_BAR_SYMBOL,
  ELSE_OPEN_PART,
  ELSE_PART,
  ELSE_SYMBOL,
  EMPTY_SYMBOL,
  ENCLOSED_CLAUSE,
  END_SYMBOL,
  ENQUIRY_CLAUSE,
  ENVIRON_NAME,
  ENVIRON_SYMBOL,
  EQUALS_SYMBOL,
  ERROR,
  ERROR_IDENTIFIER,
  ESAC_SYMBOL,
  EXIT_SYMBOL,
  EXPONENT_FRAME,
  FALSE_SYMBOL,
  FIELD,
  FIELD_IDENTIFIER,
  FILE_SYMBOL,
  FIRM,
  FIXED_C_PATTERN,
  FI_SYMBOL,
  FLEX_SYMBOL,
  FLOAT_C_PATTERN,
  FORMAL_BOUNDS,
  FORMAL_BOUNDS_LIST,
  FORMAL_DECLARERS,
  FORMAL_DECLARERS_LIST,
  FORMAL_DECLARER_MARK,
  FORMAT_A_FRAME,
  FORMAT_CLOSE_SYMBOL,
  FORMAT_DELIMITER_SYMBOL,
  FORMAT_D_FRAME,
  FORMAT_E_FRAME,
  FORMAT_IDENTIFIER,
  FORMAT_ITEM_A,
  FORMAT_ITEM_B,
  FORMAT_ITEM_C,
  FORMAT_ITEM_D,
  FORMAT_ITEM_E,
  FORMAT_ITEM_ESCAPE,
  FORMAT_ITEM_F,
  FORMAT_ITEM_G,
  FORMAT_ITEM_H,
  FORMAT_ITEM_I,
  FORMAT_ITEM_J,
  FORMAT_ITEM_K,
  FORMAT_ITEM_L,
  FORMAT_ITEM_M,
  FORMAT_ITEM_MINUS,
  FORMAT_ITEM_N,
  FORMAT_ITEM_O,
  FORMAT_ITEM_P,
  FORMAT_ITEM_PLUS,
  FORMAT_ITEM_POINT,
  FORMAT_ITEM_Q,
  FORMAT_ITEM_R,
  FORMAT_ITEM_S,
  FORMAT_ITEM_T,
  FORMAT_ITEM_U,
  FORMAT_ITEM_V,
  FORMAT_ITEM_W,
  FORMAT_ITEM_X,
  FORMAT_ITEM_Y,
  FORMAT_ITEM_Z,
  FORMAT_I_FRAME,
  FORMAT_OPEN_SYMBOL,
  FORMAT_PATTERN,
  FORMAT_POINT_FRAME,
  FORMAT_SYMBOL,
  FORMAT_TEXT,
  FORMAT_Z_FRAME,
  FORMULA,
  FOR_PART,
  FOR_SYMBOL,
  FROM_PART,
  FROM_SYMBOL,
  GENERAL_C_PATTERN,
  GENERAL_PATTERN,
  GENERATOR,
  GENERIC_ARGUMENT,
  GENERIC_ARGUMENT_LIST,
  GOTO_SYMBOL,
  GO_SYMBOL,
  GUARDED_CONDITIONAL_CLAUSE,
  GUARDED_LOOP_CLAUSE,
  HEAP_SYMBOL,
  IDENTIFIER,
  IDENTITY_DECLARATION,
  IDENTITY_RELATION,
  IF_PART,
  IF_SYMBOL,
  INDICANT,
  INITIALISER_SERIES,
  INSERTION,
  INTEGRAL_C_PATTERN,
  INTEGRAL_MOULD,
  INTEGRAL_PATTERN,
  INT_DENOTATION,
  INT_SYMBOL,
  IN_SYMBOL,
  IN_TYPE_MODE,
  ISNT_SYMBOL,
  IS_SYMBOL,
  JUMP,
  KEYWORD,
  LABEL,
  LABELED_UNIT,
  LABEL_IDENTIFIER,
  LABEL_SEQUENCE,
  LITERAL,
  LOCAL_LABEL,
  LOC_SYMBOL,
  LONGETY,
  LONG_SYMBOL,
  LOOP_CLAUSE,
  LOOP_IDENTIFIER,
  MAIN_SYMBOL,
  MEEK,
  MODE_BITS,
  MODE_BOOL,
  MODE_BYTES,
  MODE_CHAR,
  MODE_COMPLEX,
  MODE_DECLARATION,
  MODE_FILE,
  MODE_FORMAT,
  MODE_INT,
  MODE_LONGLONG_BITS,
  MODE_LONGLONG_COMPLEX,
  MODE_LONGLONG_INT,
  MODE_LONGLONG_REAL,
  MODE_LONG_BITS,
  MODE_LONG_BYTES,
  MODE_LONG_COMPLEX,
  MODE_LONG_INT,
  MODE_LONG_REAL,
  MODE_NO_CHECK,
  MODE_PIPE,
  MODE_REAL,
  MODE_SOUND,
  MODE_SYMBOL,
  MONADIC_FORMULA,
  MONAD_SEQUENCE,
  NEW_SYMBOL,
  NIHIL,
  NIL_SYMBOL,
  NORMAL_IDENTIFIER,
  NO_SORT,
  OCCA_SYMBOL,
  OD_SYMBOL,
  OF_SYMBOL,
  OPEN_PART,
  OPEN_SYMBOL,
  OPERATOR,
  OPERATOR_DECLARATION,
  OPERATOR_PLAN,
  OP_SYMBOL,
  ORF_SYMBOL,
  OR_FUNCTION,
  OUSE_PART,
  OUSE_SYMBOL,
  OUT_PART,
  OUT_SYMBOL,
  OUT_TYPE_MODE,
  PARALLEL_CLAUSE,
  PARAMETER,
  PARAMETER_IDENTIFIER,
  PARAMETER_LIST,
  PARAMETER_PACK,
  PARTICULAR_PROGRAM,
  PAR_SYMBOL,
  PICTURE,
  PICTURE_LIST,
  PIPE_SYMBOL,
  POINT_SYMBOL,
  PRIMARY,
  PRIORITY,
  PRIORITY_DECLARATION,
  PRIO_SYMBOL,
  PROCEDURE_DECLARATION,
  PROCEDURE_VARIABLE_DECLARATION,
  PROCEDURING,
  PROC_SYMBOL,
  QUALIFIER,
  RADIX_FRAME,
  REAL_DENOTATION,
  REAL_PATTERN,
  REAL_SYMBOL,
  REF_SYMBOL,
  REPLICATOR,
  ROUTINE_TEXT,
  ROUTINE_UNIT,
  ROWING,
  ROWS_SYMBOL,
  ROW_CHAR_DENOTATION,
  ROW_FUNCTION,
  ROW_SYMBOL,
  SECONDARY,
  SELECTION,
  SELECTOR,
  SEMA_SYMBOL,
  SEMI_SYMBOL,
  SERIAL_CLAUSE,
  SERIES_MODE,
  SHORTETY,
  SHORT_SYMBOL,
  SIGN_MOULD,
  SKIP,
  SKIP_SYMBOL,
  SLICE,
  SOFT,
  SOME_CLAUSE,
  SOUND_SYMBOL,
  SPECIFICATION,
  SPECIFIED_UNIT,
  SPECIFIED_UNIT_LIST,
  SPECIFIED_UNIT_UNIT,
  SPECIFIER,
  SPECIFIER_IDENTIFIER,
  STANDARD,
  STATIC_REPLICATOR,
  STOWED_MODE,
  STRING_C_PATTERN,
  STRING_PATTERN,
  STRING_SYMBOL,
  STRONG,
  STRUCTURED_FIELD,
  STRUCTURED_FIELD_LIST,
  STRUCTURE_PACK,
  STRUCT_SYMBOL,
  STYLE_II_COMMENT_SYMBOL,
  STYLE_I_COMMENT_SYMBOL,
  STYLE_I_PRAGMAT_SYMBOL,
  SUB_SYMBOL,
  SUB_UNIT,
  TERTIARY,
  THEN_BAR_SYMBOL,
  THEN_PART,
  THEN_SYMBOL,
  TO_PART,
  TO_SYMBOL,
  TRANSPOSE_FUNCTION,
  TRANSPOSE_SYMBOL,
  TRIMMER,
  TRUE_SYMBOL,
  UNION_DECLARER_LIST,
  UNION_PACK,
  UNION_SYMBOL,
  UNIT,
  UNITING,
  UNIT_LIST,
  UNIT_SERIES,
  UNTIL_PART,
  UNTIL_SYMBOL,
  VARIABLE_DECLARATION,
  VIRTUAL_DECLARER_MARK,
  VOIDING,
  VOID_SYMBOL,
  WEAK,
  WHILE_PART,
  WHILE_SYMBOL,
  WIDENING,
  WILDCARD
};

enum
{
  INPUT_BUFFER = 0, OUTPUT_BUFFER, EDIT_BUFFER, UNFORMATTED_BUFFER, 
  FORMATTED_BUFFER, DOMAIN_BUFFER, PATH_BUFFER, REQUEST_BUFFER, 
  CONTENT_BUFFER, STRING_BUFFER, PATTERN_BUFFER, REPLACE_BUFFER, 
  FIXED_TRANSPUT_BUFFERS
};

enum 
{ 
  NO_DEFLEXING = 1, SAFE_DEFLEXING, ALIAS_DEFLEXING, FORCE_DEFLEXING, 
  SKIP_DEFLEXING 
};

/*****************************************************************************/
/* Type definitions                                                          */
/*****************************************************************************/

typedef double MP_T;
typedef int *A68_ALIGN_T;
typedef int ADDR_T, BOOL_T, FILE_T, LEAP_T;
typedef unsigned STATUS_MASK;
typedef unsigned char BYTE_T;
typedef MP_T A68_LONG[DEFAULT_DOUBLE_DIGITS + 2]; 
typedef A68_LONG A68_LONG_COMPLEX[2];
typedef BYTE_T * A68_STRUCT;
typedef struct A68_ARRAY A68_ARRAY;
typedef struct A68_BITS A68_BITS;
typedef struct A68_BOOL A68_BOOL;
typedef struct A68_BYTES A68_BYTES;
typedef struct A68_CHANNEL A68_CHANNEL;
typedef struct A68_CHAR A68_CHAR;
typedef struct A68_COLLITEM A68_COLLITEM;
typedef struct A68_FILE A68_FILE;
typedef struct A68_FORMAT A68_FORMAT;
typedef struct A68_HANDLE A68_HANDLE;
typedef struct A68_INT A68_INT;
typedef struct A68_LONG_BYTES A68_LONG_BYTES;
typedef struct A68_PROCEDURE A68_PROCEDURE;
typedef struct A68_REAL A68_REAL;
typedef struct A68_REF A68_REF, A68_ROW;
typedef struct A68_SOUND A68_SOUND;
typedef struct A68_STREAM A68_STREAM;
typedef struct A68_TUPLE A68_TUPLE;
typedef struct A68_UNION A68_UNION;
typedef struct DIAGNOSTIC_T DIAGNOSTIC_T;
typedef struct FILES_T FILES_T;
typedef struct GINFO_T GINFO_T;
typedef struct KEYWORD_T KEYWORD_T;
typedef struct MODES_T MODES_T;
typedef struct MODULE_T MODULE_T;
typedef struct MOID_T MOID_T;
typedef struct NODE_INFO_T NODE_INFO_T;
typedef struct NODE_T NODE_T;
typedef struct OPTIONS_T OPTIONS_T;
typedef struct OPTION_LIST_T OPTION_LIST_T;
typedef struct PACK_T PACK_T;
typedef struct POSTULATE_T POSTULATE_T;
typedef struct PROP_T PROP_T;
typedef struct REFINEMENT_T REFINEMENT_T;
typedef struct SOID_T SOID_T;
typedef struct LINE_T LINE_T;
typedef struct TABLE_T TABLE_T;
typedef struct TAG_T TAG_T;
typedef struct TOKEN_T TOKEN_T;
typedef void GPROC (NODE_T *);
typedef struct ACTIVATION_RECORD ACTIVATION_RECORD;

struct ACTIVATION_RECORD
{
  ADDR_T static_link, dynamic_link, dynamic_scope, parameters;
  NODE_T *node;
  jmp_buf *jump_stat;
  BOOL_T proc_frame;
  int frame_no, frame_level, parameter_level;
#if defined HAVE_PARALLEL_CLAUSE
  pthread_t thread_id;
#endif
};

typedef PROP_T PROP_PROC (NODE_T *);

struct PROP_T
{
  PROP_PROC *unit;
  NODE_T *source;
};

struct A68_STREAM
{
  char *name;
  FILE_T fd;
  BOOL_T opened, writemood;
};

struct DIAGNOSTIC_T
{
  int attribute, number;
  NODE_T *where;
  LINE_T *line;
  char *text, *symbol;
  DIAGNOSTIC_T *next;
};


struct FILES_T
{
  char *path, *initial_name, *generic_name;
  struct A68_STREAM binary, diags, library, script, object, source, listing, pretty;
};

struct KEYWORD_T
{
  int attribute;
  char *text;
  KEYWORD_T *less, *more;
};


struct MODES_T
{
  MOID_T *BITS, *BOOL, *BYTES, *CHANNEL, *CHAR, *COLLITEM, *COMPL, *COMPLEX,
  *C_STRING, *ERROR, *FILE, *FORMAT, *HIP, *INT, *LONG_BITS, *LONG_BYTES,
  *LONG_COMPL, *LONG_COMPLEX, *LONG_INT, *LONGLONG_BITS, *LONGLONG_COMPL,
  *LONGLONG_COMPLEX, *LONGLONG_INT, *LONGLONG_REAL, *LONG_REAL, *NUMBER, *PIPE, 
  *PROC_REAL_REAL, *PROC_REF_FILE_BOOL, *PROC_REF_FILE_VOID, *PROC_ROW_CHAR,
  *PROC_STRING, *PROC_VOID, *REAL, *REF_BITS, *REF_BOOL, *REF_BYTES,
  *REF_CHAR, *REF_COMPL, *REF_COMPLEX, *REF_FILE, *REF_FORMAT, *REF_INT,
  *REF_LONG_BITS, *REF_LONG_BYTES, *REF_LONG_COMPL, *REF_LONG_COMPLEX,
  *REF_LONG_INT, *REF_LONGLONG_BITS, *REF_LONGLONG_COMPL,
  *REF_LONGLONG_COMPLEX, *REF_LONGLONG_INT, *REF_LONGLONG_REAL,
  *REF_LONG_REAL, *REF_PIPE, *REF_REAL, *REF_REF_FILE, *REF_ROW_CHAR,
  *REF_ROW_COMPLEX, *REF_ROW_INT, *REF_ROW_REAL, *REF_ROWROW_COMPLEX,
  *REF_ROWROW_REAL, *REF_SOUND, *REF_STRING, *ROW_BITS, *ROW_BOOL, *ROW_CHAR,
  *ROW_COMPLEX, *ROW_INT, *ROW_LONG_BITS, *ROW_LONGLONG_BITS, *ROW_REAL,
  *ROW_ROW_CHAR, *ROWROW_COMPLEX, *ROWROW_REAL, *ROWS, *ROW_SIMPLIN,
  *ROW_SIMPLOUT, *ROW_STRING, *SEMA, *SIMPLIN, *SIMPLOUT, *SOUND, *SOUND_DATA,
  *STRING, *FLEX_ROW_CHAR, *FLEX_ROW_BOOL, *UNDEFINED, *VACUUM, *VOID;
};

struct OPTIONS_T
{
  OPTION_LIST_T *list;
  BOOL_T backtrace, brackets, check_only, clock, cross_reference, debug, compile, keep, fold, local, moid_listing, object_listing, optimise, portcheck, pragmat_sema, pretty, reductions, regression_test, run, rerun, run_script, source_listing, standard_prelude_listing, statistics_listing, strict, stropping, trace, tree_listing, unused, verbose, version, no_warnings, quiet; 
  int time_limit, opt_level, indent;
  STATUS_MASK nodemask;
};

struct MODULE_T
{
  BOOL_T tree_listing_safe, cross_reference_safe;
  FILES_T files;
  NODE_T *top_node;
  MOID_T *top_moid, *standenv_moid;
  OPTIONS_T options;
  PROP_T global_prop;
  REFINEMENT_T *top_refinement;
  LINE_T *top_line;
  int error_count, warning_count, source_scan;
  jmp_buf rendez_vous;
  struct {
    LINE_T *save_l;
    char *save_s, save_c;
  } scan_state;
};

struct MOID_T
{
  int attribute, dim, number, short_id, size, digits, sizec, digitsc;
  BOOL_T has_rows, use, portable, derivate;
  NODE_T *node;
  PACK_T *pack;
  MOID_T *sub, *equivalent_mode, *slice, *deflexed_mode, *name, *multiple_mode, *next, *rowed, *trim;
};

struct NODE_T
{
  GINFO_T *genie;
  int number, attribute, annotation;
  MOID_T *type;
  NODE_INFO_T *info;
  NODE_T *next, *previous, *sub, *sequence, *nest;
  PACK_T *pack;
  STATUS_MASK status, codex;
  TABLE_T *symbol_table, *non_local;
  TAG_T *tag;
};

struct NODE_INFO_T
{
  int procedure_level, priority, pragment_type;
  char *char_in_line, *symbol, *pragment, *expr;
  LINE_T *line;
};

struct GINFO_T
{
  PROP_T propagator;
  BOOL_T is_coercion, is_new_lexical_level, need_dns;
  BYTE_T *offset;
  MOID_T *partial_proc, *partial_locale;
  NODE_T *parent;
  char *compile_name;
  int level, argsize, size, compile_node;
  void *constant;
};

struct OPTION_LIST_T
{
  char *str;
  int scan;
  BOOL_T processed;
  LINE_T *line;
  OPTION_LIST_T *next;
};

struct PACK_T
{
  MOID_T *type;
  char *text;
  NODE_T *node;
  PACK_T *next, *previous;
  int size;
  ADDR_T offset;
};

struct POSTULATE_T
{
  MOID_T *a, *b;
  POSTULATE_T *next;
};

struct REFINEMENT_T
{
  REFINEMENT_T *next;
  char *name;
  LINE_T *line_defined, *line_applied;
  int applications;
  NODE_T *node_defined, *begin, *end;
};

struct SOID_T
{
  int attribute, sort, cast;
  MOID_T *type;
  NODE_T *node;
  SOID_T *next;
};

struct LINE_T
{
  char marker[6], *string, *filename;
  DIAGNOSTIC_T *diagnostics;
  int number, print_status;
  BOOL_T list;
  LINE_T *next, *previous;
};

struct TABLE_T
{
  int level, nest, attribute;
  BOOL_T initialise_frame, initialise_anon, proc_ops;
  ADDR_T ap_increment;
  TABLE_T *previous, *outer;
  TAG_T *identifiers, *operators, *priority, *indicants, *labels, *anonymous;
  NODE_T *jump_to, *sequence;
};

struct TAG_T
{
  STATUS_MASK status, codex;
  TABLE_T *symbol_table;
  MOID_T *type;
  NODE_T *node, *unit;
  char *value;
  GPROC *procedure;
  BOOL_T scope_assigned, use, in_proc, a68g_standenv_proc, loc_assigned, portable;
  int priority, heap, scope, size, youngest_environ, number;
  ADDR_T offset;
  TAG_T *next, *body;
};

struct TOKEN_T
{
  char *text;
  TOKEN_T *less, *more;
};

/**
@struct A68_HANDLE
@brief Handle for REF into the HEAP.
@details
A REF into the HEAP points at a HANDLE.
The HANDLE points at the actual object in the HEAP.
Garbage collection modifies HANDLEs, but not REFs.
**/

struct A68_HANDLE
{
  STATUS_MASK status;
  BYTE_T *pointer;
  int size;
  MOID_T *type;
  A68_HANDLE *next, *previous;
};

/**
@struct A68_REF
@brief Fat A68 pointer.
**/

struct A68_REF
{
  STATUS_MASK status;
  ADDR_T offset;
  ADDR_T scope; /**< Dynamic scope. **/
  A68_HANDLE *handle; 
};

/**
@struct A68_ARRAY
@brief A68 array descriptor. 
@details
A row is an A68_REF to an A68_ARRAY.

An A68_ARRAY is followed by one A68_TUPLE per dimension.

@verbatim
A68_REF row -> A68_ARRAY ----+   ARRAY: Description of row, ref to elements
               A68_TUPLE 1   |   TUPLE: Bounds, one for every dimension
               ...           |
               A68_TUPLE dim |
               ...           |
               ...           |
               Element 1 <---+   Element: Sequential row elements, in the heap
               ...                        Not always contiguous - trims!
@endverbatim
**/

struct A68_ARRAY
{
  MOID_T *type;
  int dim, elem_size;
  ADDR_T slice_offset, field_offset;
  A68_REF array;
};

struct A68_BITS
{
  STATUS_MASK status;
  unsigned value;
};

struct A68_BYTES
{
  STATUS_MASK status;
  char value[BYTES_WIDTH + 1];
};

struct A68_CHANNEL
{
  STATUS_MASK status;
  BOOL_T reset, set, get, put, bin, draw, compress;
};

struct A68_BOOL
{
  STATUS_MASK status;
  int value;
};

struct A68_CHAR
{
  STATUS_MASK status;
  int value;
};

struct A68_COLLITEM
{
  STATUS_MASK status;
  int count;
};

struct A68_INT
{
  STATUS_MASK status;
  int value;
};

/**
@struct A68_FORMAT
@brief A68 format descriptor.
@details
A format behaves very much like a procedure.
**/

struct A68_FORMAT
{
  STATUS_MASK status;
  NODE_T *body; /**< Entry point in syntax tree. **/
  ADDR_T environ; /**< Frame pointer to environ. **/
};

struct A68_LONG_BYTES
{
  STATUS_MASK status;
  char value[LONG_BYTES_WIDTH + 1];
};

/**
@struct A68_PROCEDURE
@brief A68 procedure descriptor.
**/

struct A68_PROCEDURE
{
  STATUS_MASK status;
  union {NODE_T *node; GPROC *procedure;} body;
  /**< Entry point in syntax tree or precompiled C procedure. **/
  A68_HANDLE *locale; /**< Locale for partial parametrisation. **/
  MOID_T *type;
  ADDR_T environ; /**< Frame pointer to environ. **/
};

struct A68_REAL
{
  STATUS_MASK status;
  double value;
};

typedef A68_REAL A68_COMPLEX[2];

/**
@struct A68_TUPLE
@brief A tuple containing bounds etcetera for one dimension.
**/

struct A68_TUPLE
{
  int upper_bound, lower_bound, shift, span, k;
};

struct A68_UNION
{
  STATUS_MASK status;
  void *value;
};

struct A68_SOUND
{
  STATUS_MASK status;
  unsigned num_channels, sample_rate, bits_per_sample, num_samples, data_size;
  A68_REF data;
};

struct A68_FILE
{
  STATUS_MASK status;
  A68_CHANNEL channel;
  A68_FORMAT format;
  A68_PROCEDURE file_end_mended, page_end_mended, line_end_mended, value_error_mended, open_error_mended, transput_error_mended, format_end_mended, format_error_mended;
  A68_REF identification, terminator, string;
  ADDR_T frame_pointer, stack_pointer; /* Since formats open frames*/
  BOOL_T read_mood, write_mood, char_mood, draw_mood, opened, open_exclusive, end_of_file, tmp_file;
  FILE_T fd;
  int transput_buffer, strpos, file_entry;
  struct
  {
    FILE *stream;
#if defined HAVE_GNU_PLOTUTILS
    plPlotter *plotter;
    plPlotterParams *plotter_params;
#endif
    BOOL_T device_made, device_opened;
    A68_REF device, page_size;
    int device_handle /* deprecated*/ , window_x_size, window_y_size;
    double x_coord, y_coord, red, green, blue;
  }
  device;
#if defined HAVE_POSTGRESQL
  PGconn *connection;
  PGresult *result;
#endif
};

/*****************************************************************************/
/* Macros                                                                    */
/*****************************************************************************/

#define COPY(d, s, n) {\
  int _m_k = (n); BYTE_T *_m_u = (BYTE_T *) (d), *_m_v = (BYTE_T *) (s);\
  while (_m_k--) {*_m_u++ = *_m_v++;}}

#define COPY_ALIGNED(d, s, n) {\
  int _m_k = (n); A68_ALIGN_T *_m_u = (A68_ALIGN_T *) (d), *_m_v = (A68_ALIGN_T *) (s);\
  while (_m_k > 0) {*_m_u++ = *_m_v++; _m_k -= A68_ALIGNMENT;}}

#define MOVE(d, s, n) {\
  int _m_k = (int) (n); BYTE_T *_m_d = (BYTE_T *) (d), *_m_s = (BYTE_T *) (s);\
  if (_m_s < _m_d) {\
    _m_d += _m_k; _m_s += _m_k;\
    while (_m_k--) {*(--_m_d) = *(--_m_s);}\
  } else {\
    while (_m_k--) {*(_m_d++) = *(_m_s++);}\
  }}

#define FILL(d, s, n) {\
   int _m_k = (n); BYTE_T *_m_u = (BYTE_T *) (d), _m_v = (BYTE_T) (s);\
   while (_m_k--) {*_m_u++ = _m_v;}}

#define FILL_ALIGNED(d, s, n) {\
   int _m_k = (n); A68_ALIGN_T *_m_u = (A68_ALIGN_T *) (d), _m_v = (A68_ALIGN_T) (s);\
   while (_m_k > 0) {*_m_u++ = _m_v; _m_k -= A68_ALIGNMENT;}}

#define ABEND(p, reason, info) {\
  if (p) {\
    abend ((char *) reason, (char *) info, __FILE__, __LINE__);\
  }}

#if defined HAVE_CURSES
#define ASSERT(f) {\
  if (!(f)) {\
    if (a68g_curses_mode == A68_TRUE) {\
      (void) attrset (A_NORMAL);\
      (void) endwin ();\
      a68g_curses_mode = A68_FALSE;\
    }\
    ABEND(A68_TRUE, "Return value failure", error_specification ())\
  }}
#else
#define ASSERT(f) {\
  ABEND((!(f)), "Return value failure", error_specification ())\
  }
#endif

/*
Some macros to overcome the ambiguity in having signed or unsigned char 
on various systems. PDP-11s and IBM 370s are still haunting us with this.
*/

#define IS_ALNUM(c) isalnum ((unsigned char) (c))
#define IS_ALPHA(c) isalpha ((unsigned char) (c))
#define IS_CNTRL(c) iscntrl ((unsigned char) (c))
#define IS_DIGIT(c) isdigit ((unsigned char) (c))
#define IS_GRAPH(c) isgraph ((unsigned char) (c))
#define IS_LOWER(c) islower ((unsigned char) (c))
#define IS_PRINT(c) isprint ((unsigned char) (c))
#define IS_PUNCT(c) ispunct ((unsigned char) (c))
#define IS_SPACE(c) isspace ((unsigned char) (c))
#define IS_UPPER(c) isupper ((unsigned char) (c))
#define IS_XDIGIT(c) isxdigit ((unsigned char) (c))
#define TO_LOWER(c) (char) tolower ((unsigned char) (c))
#define TO_UCHAR(c) ((c) >= 0 ? (int) (c) : (int) (UCHAR_MAX + (int) (c) + 1))
#define TO_UPPER(c) (char) toupper ((unsigned char) (c))

/* Macro's for fat A68 pointers */

#define ADDRESS(z) (&((IS_IN_HEAP (z) ? REF_POINTER (z) : stack_segment)[REF_OFFSET (z)]))
#define ARRAY_ADDRESS(z) (&(REF_POINTER (z)[REF_OFFSET (z)]))
#define DEREF(mode, expr) ((mode *) ADDRESS (expr))
#define FILE_DEREF(p) DEREF (A68_FILE, (p))
#define HEAP_ADDRESS(n) ((BYTE_T *) & (heap_segment[n]))
#define IS_IN_FRAME(z) (STATUS (z) & IN_FRAME_MASK)
#define IS_IN_HEAP(z) (STATUS (z) & IN_HEAP_MASK)
#define IS_IN_STACK(z) (STATUS (z) & IN_STACK_MASK)
#define IS_NIL(p) ((BOOL_T) ((STATUS (&(p)) & NIL_MASK) != 0))
#define LOCAL_ADDRESS(z) (& stack_segment[REF_OFFSET (z)])
#define REF_HANDLE(z) (HANDLE (z))
#define REF_OFFSET(z) (OFFSET (z))
#define REF_POINTER(z) (POINTER (REF_HANDLE (z)))
#define REF_SCOPE(z) (SCOPE (z))
#define STACK_ADDRESS(n) ((BYTE_T *) &(stack_segment[(n)]))
#define STACK_OFFSET(n) (STACK_ADDRESS (stack_pointer + (int) (n)))
#define STACK_TOP (STACK_ADDRESS (stack_pointer))

/* Miscellaneous macros */

#define SIZE_AL(p) ((int) A68_ALIGN (sizeof (p)))
#define A68_REF_SIZE (SIZE_AL (A68_REF))
#define A68_UNION_SIZE (SIZE_AL (A68_UNION))

#define A68_ALIGN(s) ((int) ((s) % A68_ALIGNMENT) == 0 ? (s) : ((s) - (s) % A68_ALIGNMENT + A68_ALIGNMENT))
#define A68_ALIGNMENT ((int) (sizeof (A68_ALIGN_T)))
#define A68_ALIGN_8(s) ((int) ((s) % 8) == 0 ? (s) : ((s) - (s) % 8 + 8))
#define A68_SOUND_BYTES(s) ((int) (BITS_PER_SAMPLE (s)) / 8 + (int) (BITS_PER_SAMPLE (s) % 8 == 0 ? 0 : 1))
#define A68_SOUND_DATA_SIZE(s) ((int) (NUM_SAMPLES (s)) * (int) (NUM_CHANNELS (s)) * (int) (A68_SOUND_BYTES (s)))
#define ABS(n) ((n) >= 0 ? (n) : -(n))
#define BACKWARD(p) (p = PREVIOUS (p))
#define BITS_WIDTH ((int) (1 + ceil (log ((double) A68_MAX_INT) / log((double) 2))))
#define DEFLEX(p) (DEFLEXED (p) != NO_MOID ? DEFLEXED(p) : (p))
#define EXP_WIDTH ((int) (1 + log10 ((double) DBL_MAX_10_EXP)))
#define FORWARD(p) ((p) = NEXT (p))
#define INT_WIDTH ((int) (1 + floor (log ((double) A68_MAX_INT) / log ((double) 10))))
#define LONGLONG_INT_WIDTH (1 + LONGLONG_WIDTH)
#define LONGLONG_REAL_WIDTH ((varying_mp_digits - 1) * LOG_MP_BASE)
#define LONGLONG_WIDTH (varying_mp_digits * LOG_MP_BASE)
#define LONG_INT_WIDTH (1 + LONG_WIDTH)
#define LONG_REAL_WIDTH ((LONG_MP_DIGITS - 1) * LOG_MP_BASE)
#define LONG_WIDTH (LONG_MP_DIGITS * LOG_MP_BASE)
#define MP_BITS_WIDTH(k) ((int) ceil((k) * LOG_MP_BASE * LOG2_10) - 1)
#define MP_BITS_WORDS(k) ((int) ceil ((double) MP_BITS_WIDTH (k) / (double) MP_BITS_BITS))
#define PM(m) (moid_to_string (m, 132, NO_NODE))
#define SIGN(n) ((n) == 0 ? 0 : ((n) > 0 ? 1 : -1))
#define STATUS_CLEAR(p, q) {STATUS (p) &= (~(q));}
#define STATUS_SET(p, q) {STATUS (p) |= (q);}
#define STATUS_TEST(p, q) ((STATUS (p) & (q)) != (unsigned) 0)
#define WIS(p) where_in_source (STDOUT_FILENO, (p))
#define WRITE(f, s) io_write_string ((f), (s));
#define WRITELN(f, s) {io_close_tty_line (); WRITE ((f), (s));}

/* Access macros */

#define A(p) ((p)->a)
#define A68G_STANDENV_PROC(p) ((p)->a68g_standenv_proc)
#define ACTION(p) ((p)->action)
#define ACTIVE(p) ((p)->active)
#define ADDR(p) ((p)->addr)
#define ANNOTATION(p) ((p)->annotation)
#define ANONYMOUS(p) ((p)->anonymous)
#define APPLICATIONS(p) ((p)->applications)
#define AP_INCREMENT(p) ((p)->ap_increment)
#define ARGSIZE(p) ((p)->argsize)
#define ARRAY(p) ((p)->array)
#define ATTRIBUTE(p) ((p)->attribute)
#define B(p) ((p)->b)
#define BEGIN(p) ((p)->begin)
#define BIN(p) ((p)->bin)
#define BITS_PER_SAMPLE(p) ((p)->bits_per_sample)
#define BLUE(p) ((p)->blue)
#define BODY(p) ((p)->body)
#define BSTATE(p) ((p)->bstate)
#define BYTES(p) ((p)->bytes)
#define CAST(p) ((p)->cast)
#define CAT(p) ((p)->cat)
#define CHANNEL(p) ((p)->channel)
#define CHAR_IN_LINE(p) ((p)->char_in_line)
#define CHAR_MOOD(p) ((p)->char_mood)
#define CMD(p) ((p)->cmd)
#define CMD_ROW(p) ((p)->cmd_row)
#define CODE(p) ((p)->code)
#define CODEX(p) ((p)->codex)
#define COLLECT(p) ((p)->collect)
#define COMPILED(p) ((p)->compiled)
#define COMPILE_NAME(p) ((p)->compile_name)
#define COMPILE_NODE(p) ((p)->compile_node)
#define COMPRESS(p) ((p)->compress)
#define CONNECTION(p) ((p)->connection)
#define CONSTANT(p) ((p)->constant)
#define COUNT(p) ((p)->count)
#define CROSS_REFERENCE_SAFE(p) ((p)->cross_reference_safe)
#define CUR_PTR(p) ((p)->cur_ptr)
#define DATA(p) ((p)->data)
#define DATA_SIZE(p) ((p)->data_size)
#define DATE(p) ((p)->date)
#define DEF(p) ((p)->def)
#define DEFLEXED(p) ((p)->deflexed_mode)
#define DERIVATE(p) ((p)->derivate)
#define DEVICE(p) ((p)->device)
#define DEVICE_HANDLE(p) ((p)->device_handle)
#define DEVICE_MADE(p) ((p)->device_made)
#define DEVICE_OPENED(p) ((p)->device_opened)
#define DIAGNOSTICS(p) ((p)->diagnostics)
#define DIGITS(p) ((p)->digits)
#define DIGITSC(p) ((p)->digitsc)
#define DIM(p) ((p)->dim)
#define DISPLAY(p) ((p)->display)
#define DRAW(p) ((p)->draw)
#define DRAW_MOOD(p) ((p)->draw_mood)
#define DUMP(p) ((p)->dump)
#define DYNAMIC_LINK(p) ((p)->dynamic_link)
#define DYNAMIC_SCOPE(p) ((p)->dynamic_scope)
#define D_NAME(p) ((p)->d_name)
#define ELEM_SIZE(p) ((p)->elem_size)
#define END(p) ((p)->end)
#define END_OF_FILE(p) ((p)->end_of_file)
#define ENVIRON(p) ((p)->environ)
#define EQUIVALENT(p) ((p)->equivalent_mode)
#define EQUIVALENT_MODE(p) ((p)->equivalent_mode)
#define ERROR_COUNT(p) ((p)->error_count)
#define RENDEZ_VOUS(p) ((p)->rendez_vous)
#define EXPR(p) ((p)->expr)
#define F(p) ((p)->f)
#define FACTOR(p) ((p)->factor)
#define FD(p) ((p)->fd)
#define FIELD_OFFSET(p) ((p)->field_offset)
#define FILENAME(p) ((p)->filename)
#define FILES(p) ((p)->files)
#define FILE_BINARY_NAME(p) (FILES (p).binary.name)
#define FILE_BINARY_OPENED(p) (FILES (p).binary.opened)
#define FILE_BINARY_WRITEMOOD(p) (FILES (p).binary.writemood)
#define FILE_DIAGS_FD(p) (FILES (p).diags.fd)
#define FILE_DIAGS_NAME(p) (FILES (p).diags.name)
#define FILE_DIAGS_OPENED(p) (FILES (p).diags.opened)
#define FILE_DIAGS_WRITEMOOD(p) (FILES (p).diags.writemood)
#define FILE_END_MENDED(p) ((p)->file_end_mended)
#define FILE_ENTRY(p) ((p)->file_entry)
#define FILE_GENERIC_NAME(p) (FILES (p).generic_name)
#define FILE_INITIAL_NAME(p) (FILES (p).initial_name)
#define FILE_LIBRARY_NAME(p) (FILES (p).library.name)
#define FILE_LIBRARY_OPENED(p) (FILES (p).library.opened)
#define FILE_LIBRARY_WRITEMOOD(p) (FILES (p).library.writemood)
#define FILE_LISTING_FD(p) (FILES (p).listing.fd)
#define FILE_LISTING_NAME(p) (FILES (p).listing.name)
#define FILE_LISTING_OPENED(p) (FILES (p).listing.opened)
#define FILE_LISTING_WRITEMOOD(p) (FILES (p).listing.writemood)
#define FILE_OBJECT_FD(p) (FILES (p).object.fd)
#define FILE_OBJECT_NAME(p) (FILES (p).object.name)
#define FILE_OBJECT_OPENED(p) (FILES (p).object.opened)
#define FILE_OBJECT_WRITEMOOD(p) (FILES (p).object.writemood)
#define FILE_PATH(p) (FILES (p).path)
#define FILE_PRETTY_FD(p) (FILES (p).pretty.fd)
#define FILE_PRETTY_NAME(p) (FILES (p).pretty.name)
#define FILE_PRETTY_OPENED(p) (FILES (p).pretty.opened)
#define FILE_PRETTY_WRITEMOOD(p) (FILES (p).pretty.writemood)
#define FILE_SCRIPT_NAME(p) (FILES (p).script.name)
#define FILE_SCRIPT_OPENED(p) (FILES (p).script.opened)
#define FILE_SCRIPT_WRITEMOOD(p) (FILES (p).script.writemood)
#define FILE_SOURCE_FD(p) (FILES (p).source.fd)
#define FILE_SOURCE_NAME(p) (FILES (p).source.name)
#define FILE_SOURCE_OPENED(p) (FILES (p).source.opened)
#define FILE_SOURCE_WRITEMOOD(p) (FILES (p).source.writemood)
#define FIND(p) ((p)->find)
#define FORMAT(p) ((p)->format)
#define FORMAT_END_MENDED(p) ((p)->format_end_mended)
#define FORMAT_ERROR_MENDED(p) ((p)->format_error_mended)
#define FRAME(p) ((p)->frame)
#define FRAME_LEVEL(p) ((p)->frame_level)
#define FRAME_NO(p) ((p)->frame_no)
#define FRAME_POINTER(p) ((p)->frame_pointer)
#define FUNCTION(p) ((p)->function)
#define G(p) ((p)->g)
#define GINFO(p) ((p)->genie)
#define GET(p) ((p)->get)
#define GLOBAL_PROP(p) ((p)->global_prop)
#define GPARENT(p) (PARENT (GINFO (p)))
#define GREEN(p) ((p)->green)
#define H(p) ((p)->h)
#define HANDLE(p) ((p)->handle)
#define HAS_ROWS(p) ((p)->has_rows)
#define HEAP(p) ((p)->heap)
#define HEAP_POINTER(p) ((p)->heap_pointer)
#define H_ADDR(p) ((p)->h_addr)
#define H_LENGTH(p) ((p)->h_length)
#define ID(p) ((p)->id)
#define IDENTIFICATION(p) ((p)->identification)
#define IDENTIFIERS(p) ((p)->identifiers)
#define IDF(p) ((p)->idf)
#define IM(z) (VALUE (&(z)[1]))
#define IN(p) ((p)->in)
#define INDEX(p) ((p)->index)
#define INDICANTS(p) ((p)->indicants)
#define INFO(p) ((p)->info)
#define INITIALISE_ANON(p) ((p)->initialise_anon)
#define INITIALISE_FRAME(p) ((p)->initialise_frame)
#define INI_PTR(p) ((p)->ini_ptr)
#define INS_MODE(p) ((p)->ins_mode)
#define IN_CMD(p) ((p)->in_cmd)
#define IN_FORBIDDEN(p) ((p)->in_forbidden)
#define IN_PREFIX(p) ((p)->in_prefix)
#define IN_PROC(p) ((p)->in_proc)
#define IN_TEXT(p) ((p)->in_text)
#define IS_COMPILED(p) ((p)->is_compiled)
#define IS_OPEN(p) ((p)->is_open)
#define IS_TMP(p) ((p)->is_tmp)
#define JUMP_STAT(p) ((p)->jump_stat)
#define JUMP_TO(p) ((p)->jump_to)
#define K(q) ((q)->k)
#define LABELS(p) ((p)->labels)
#define LAST(p) ((p)->last)
#define LAST_LINE(p) ((p)->last_line)
#define LESS(p) ((p)->less)
#define LEVEL(p) ((p)->level)
#define LEX_LEVEL(p) (LEVEL (TABLE (p)))
#define LINBUF(p) ((p)->linbuf)
#define LINE(p) ((p)->line)
#define LINE_APPLIED(p) ((p)->line_applied)
#define LINE_DEFINED(p) ((p)->line_defined)
#define LINE_END_MENDED(p) ((p)->line_end_mended)
#define LINE_NUMBER(p) (NUMBER (LINE (INFO (p))))
#define LINSIZ(p) ((p)->linsiz)
#define LIST(p) ((p)->list)
#define LOCALE(p) ((p)->locale)
#define LOC_ASSIGNED(p) ((p)->loc_assigned)
#define LOWER_BOUND(p) ((p)->lower_bound)
#define LWB(p) ((p)->lower_bound)
#define MARKER(p) ((p)->marker)
#define MATCH(p) ((p)->match)
#define MODE(p) (a68_modes.p)
#define MODIFIED(p) ((p)->modified)
#define MOID(p) ((p)->type)
#define MORE(p) ((p)->more)
#define MSGS(p) ((p)->msgs)
#define MULTIPLE(p) ((p)->multiple_mode)
#define MULTIPLE_MODE(p) ((p)->multiple_mode)
#define M_EO(p) ((p)->m_eo)
#define M_MATCH(p) ((p)->match)
#define M_SO(p) ((p)->m_so)
#define NAME(p) ((p)->name)
#define NEED_DNS(p) ((p)->need_dns)
#define NEGATE(p) ((p)->negate)
#define NEST(p) ((p)->nest)
#define NEW_FILE(p) ((p)->new_file)
#define NEXT(p) ((p)->next)
#define NEXT_NEXT(p) (NEXT (NEXT (p)))
#define NEXT_NEXT_NEXT(p) (NEXT (NEXT_NEXT (p)))
#define NEXT_SUB(p) (NEXT (SUB (p)))
#define NF(p) ((p)->nf)
#define NODE(p) ((p)->node)
#define NODE_DEFINED(p) ((p)->node_defined)
#define NODE_PACK(p) ((p)->pack)
#define NON_LOCAL(p) ((p)->non_local)
#define NCHAR_IN_LINE(p) (CHAR_IN_LINE (INFO (p)))
#define NPRAGMENT(p) (PRAGMENT (INFO (p)))
#define NPRAGMENT_TYPE(p) (PRAGMENT_TYPE (INFO (p)))
#define NSYMBOL(p) (SYMBOL (INFO (p)))
#define NUM(p) ((p)->num)
#define NUMBER(p) ((p)->number)
#define NUM_CHANNELS(p) ((p)->num_channels)
#define NUM_MATCH(p) ((p)->num_match)
#define NUM_SAMPLES(p) ((p)->num_samples)
#define OFFSET(p) ((p)->offset)
#define OPENED(p) ((p)->opened)
#define OPEN_ERROR_MENDED(p) ((p)->open_error_mended)
#define OPEN_EXCLUSIVE(p) ((p)->open_exclusive)
#define OPER(p) ((p)->oper)
#define OPERATORS(p) ((p)->operators)
#define OPTIONS(p) ((p)->options)
#define OPTION_BACKTRACE(p) (OPTIONS (p).backtrace)
#define OPTION_BRACKETS(p) (OPTIONS (p).brackets)
#define OPTION_CHECK_ONLY(p) (OPTIONS (p).check_only)
#define OPTION_CLOCK(p) (OPTIONS (p).clock)
#define OPTION_COMPILE(p) (OPTIONS (p).compile)
#define OPTION_CROSS_REFERENCE(p) (OPTIONS (p).cross_reference)
#define OPTION_DEBUG(p) (OPTIONS (p).debug)
#define OPTION_FOLD(p) (OPTIONS (p).fold)
#define OPTION_INDENT(p) (OPTIONS (p).indent)
#define OPTION_KEEP(p) (OPTIONS (p).keep)
#define OPTION_LIST(p) (OPTIONS (p).list)
#define OPTION_LOCAL(p) (OPTIONS (p).local)
#define OPTION_MOID_LISTING(p) (OPTIONS (p).moid_listing)
#define OPTION_NODEMASK(p) (OPTIONS (p).nodemask)
#define OPTION_NO_WARNINGS(p) (OPTIONS (p).no_warnings)
#define OPTION_OBJECT_LISTING(p) (OPTIONS (p).object_listing)
#define OPTION_OPTIMISE(p) (OPTIONS (p).optimise)
#define OPTION_OPT_LEVEL(p) (OPTIONS (p).opt_level)
#define OPTION_PORTCHECK(p) (OPTIONS (p).portcheck)
#define OPTION_PRAGMAT_SEMA(p) (OPTIONS (p).pragmat_sema)
#define OPTION_PRETTY(p) (OPTIONS (p).pretty)
#define OPTION_QUIET(p) (OPTIONS (p).quiet)
#define OPTION_REDUCTIONS(p) (OPTIONS (p).reductions)
#define OPTION_REGRESSION_TEST(p) (OPTIONS (p).regression_test)
#define OPTION_RERUN(p) (OPTIONS (p).rerun)
#define OPTION_RUN(p) (OPTIONS (p).run)
#define OPTION_RUN_SCRIPT(p) (OPTIONS (p).run_script)
#define OPTION_SOURCE_LISTING(p) (OPTIONS (p).source_listing)
#define OPTION_STANDARD_PRELUDE_LISTING(p) (OPTIONS (p).standard_prelude_listing)
#define OPTION_STATISTICS_LISTING(p) (OPTIONS (p).statistics_listing)
#define OPTION_STRICT(p) (OPTIONS (p).strict)
#define OPTION_STROPPING(p) (OPTIONS (p).stropping)
#define OPTION_TIME_LIMIT(p) (OPTIONS (p).time_limit)
#define OPTION_TRACE(p) (OPTIONS (p).trace)
#define OPTION_TREE_LISTING(p) (OPTIONS (p).tree_listing)
#define OPTION_UNUSED(p) (OPTIONS (p).unused)
#define OPTION_VERBOSE(p) (OPTIONS (p).verbose)
#define OPTION_VERSION(p) (OPTIONS (p).version)
#define OUT(p) ((p)->out)
#define OUTER(p) ((p)->outer)
#define P(q) ((q)->p)
#define PACK(p) ((p)->pack)
#define PAGE_END_MENDED(p) ((p)->page_end_mended)
#define A68_PAGE_SIZE(p) ((p)->page_size)
#define PARAMETERS(p) ((p)->parameters)
#define PARAMETER_LEVEL(p) ((p)->parameter_level)
#define GSL_PARAMS(p) ((p)->params)
#define PARENT(p) ((p)->parent)
#define PARTIAL_LOCALE(p) ((p)->partial_locale)
#define PARTIAL_PROC(p) ((p)->partial_proc)
#define PATTERN(p) ((p)->pattern)
#define PERM(p) ((p)->perm)
#define PERMS(p) ((p)->perms)
#define IDF_ROW(p) ((p)->idf_row)
#define PHASE(p) ((p)->phase)
#define PLOTTER(p) ((p)->plotter)
#define PLOTTER_PARAMS(p) ((p)->plotter_params)
#define POINTER(p) ((p)->pointer)
#define PORTABLE(p) ((p)->portable)
#define POS(p) ((p)->pos)
#define PRAGMENT(p) ((p)->pragment)
#define PRAGMENT_TYPE(p) ((p)->pragment_type)
#define PRECMD(p) ((p)->precmd)
#define PREVIOUS(p) ((p)->previous)
#define PRINT_STATUS(p) ((p)->print_status)
#define PRIO(p) ((p)->priority)
#define PROCEDURE(p) ((p)->procedure)
#define PROCEDURE_LEVEL(p) ((p)->procedure_level)
#define PROCESSED(p) ((p)->processed)
#define PROC_FRAME(p) ((p)->proc_frame)
#define PROC_OPS(p) ((p)->proc_ops)
#define GPROP(p) (GINFO (p)->propagator)
#define PROP(p) ((p)->propagator)
#define PS(p) ((p)->ps)
#define PUT(p) ((p)->put)
#define P_PROTO(p) ((p)->p_proto)
#define R(p) ((p)->r)
#define RE(z) (VALUE (&(z)[0]))
#define READ_MOOD(p) ((p)->read_mood)
#define RED(p) ((p)->red)
#define REPL(p) ((p)->repl)
#define RESERVED(p) ((p)->reserved)
#define RESET(p) ((p)->reset)
#define RESET_ERRNO {errno = 0;}
#define RESULT(p) ((p)->result)
#define RE_NSUB(p) ((p)->re_nsub)
#define RLIM_CUR(p) ((p)->rlim_cur)
#define RLIM_MAX(p) ((p)->rlim_max)
#define RM_EO(p) ((p)->rm_eo)
#define RM_SO(p) ((p)->rm_so)
#define ROWED(p) ((p)->rowed)
#define S(p) ((p)->s)
#define SAMPLE_RATE(p) ((p)->sample_rate)
#define SCAN_STATE_C(p) ((p)->scan_state.save_c)
#define SCAN_STATE_L(p) ((p)->scan_state.save_l)
#define SCAN_STATE_S(p) ((p)->scan_state.save_s)
#define SCALE_ROW(p) ((p)->scale_row)
#define SCAN(p) ((p)->scan)
#define SCAN_ERROR(c, u, v, txt) if (c) {scan_error (u, v, txt);}
#define SCOPE(p) ((p)->scope)
#define SCOPE_ASSIGNED(p) ((p)->scope_assigned)
#define SEARCH(p) ((p)->search)
#define SELECT(p) ((p)->select)
#define SEQUENCE(p) ((p)->sequence)
#define SET(p) ((p)->set)
#define SHIFT(p) ((p)->shift)
#define SHORT_ID(p) ((p)->short_id)
#define SIN_ADDR(p) ((p)->sin_addr)
#define SIN_FAMILY(p) ((p)->sin_family)
#define SIN_PORT(p) ((p)->sin_port)
#define SIZE(p) ((p)->size)
#define SIZE1(p) ((p)->size1)
#define SIZE2(p) ((p)->size2)
#define SIZEC(p) ((p)->sizec)
#define SLICE(p) ((p)->slice)
#define SLICE_OFFSET(p) ((p)->slice_offset)
#define SO(p) ((p)->so)
#define SORT(p) ((p)->sort)
#define SOURCE(p) ((p)->source)
#define SOURCE_SCAN(p) ((p)->source_scan)
#define SPAN(p) ((p)->span)
#define STACK(p) ((p)->stack)
#define STACK_POINTER(p) ((p)->stack_pointer)
#define STACK_USED(p) ((p)->stack_used)
#define STANDENV_MOID(p) ((p)->standenv_moid)
#define START(p) ((p)->start)
#define STATIC_LINK(p) ((p)->static_link)
#define STATUS(p) ((p)->status)
#define STATUS_IM(z) (STATUS (&(z)[1]))
#define STATUS_RE(z) (STATUS (&(z)[0]))
#define STR(p) ((p)->str)
#define STREAM(p) ((p)->stream)
#define STRING(p) ((p)->string)
#define STRPOS(p) ((p)->strpos)
#define ST_MODE(p) ((p)->st_mode)
#define ST_MTIME(p) ((p)->st_mtime)
#define SUB(p) ((p)->sub)
#define SUBSET(p) ((p)->subset)
#define SUB_MOID(p) (SUB (MOID (p)))
#define SUB_NEXT(p) (SUB (NEXT (p)))
#define SUB_SUB(p) (SUB (SUB (p)))
#define SWAP(p) ((p)->swap)
#define SYMBOL(p) ((p)->symbol)
#define SYNC(p) ((p)->sync)
#define SYNC_INDEX(p) ((p)->sync_index)
#define SYNC_LINE(p) ((p)->sync_line)
#define S_PORT(p) ((p)->s_port)
#define TABLE(p) ((p)->symbol_table)
#define TABS(p) ((p)->tabs)
#define TAG_LEX_LEVEL(p) (LEVEL (TAG_TABLE (p)))
#define TAG_TABLE(p) ((p)->symbol_table)
#define TAX(p) ((p)->tag)
#define TERM(p) ((p)->term)
#define TERMINATOR(p) ((p)->terminator)
#define TEXT(p) ((p)->text)
#define THREAD_ID(p) ((p)->thread_id)
#define THREAD_STACK_OFFSET(p) ((p)->thread_stack_offset)
#define TMP_FILE(p) ((p)->tmp_file)
#define TMP_TEXT(p) ((p)->tmp_text)
#define TM_HOUR(p) ((p)->tm_hour)
#define TM_ISDST(p) ((p)->tm_isdst)
#define TM_MDAY(p) ((p)->tm_mday)
#define TM_MIN(p) ((p)->tm_min)
#define TM_MON(p) ((p)->tm_mon)
#define TM_SEC(p) ((p)->tm_sec)
#define TM_WDAY(p) ((p)->tm_wday)
#define TM_YEAR(p) ((p)->tm_year)
#define TOF(p) ((p)->tof)
#define TOP_LINE(p) ((p)->top_line)
#define TOP_MOID(p) ((p)->top_moid)
#define TOP_NODE(p) ((p)->top_node)
#define TOP_REFINEMENT(p) ((p)->top_refinement)
#define TRANS(p) ((p)->trans)
#define TRANSIENT(p) ((p)->transient)
#define TRANSPUT_BUFFER(p) ((p)->transput_buffer)
#define TRANSPUT_ERROR_MENDED(p) ((p)->transput_error_mended)
#define TREE_LISTING_SAFE(p) ((p)->tree_listing_safe)
#define TRIM(p) ((p)->trim)
#define TUPLE(p) ((p)->tuple)
#define TV_SEC(p) ((p)->tv_sec)
#define TV_USEC(p) ((p)->tv_usec)
#define UNDO(p) ((p)->undo)
#define UNDO_LINE(p) ((p)->undo_line)
#define UNION_OFFSET (SIZE_AL (A68_UNION))
#define UNIT(p) ((p)->unit)
#define UPB(p) ((p)->upper_bound)
#define UPPER_BOUND(p) ((p)->upper_bound)
#define USE(p) ((p)->use)
#define VAL(p) ((p)->val)
#define VALUE(p) ((p)->value)
#define VALUE_ERROR_MENDED(p) ((p)->value_error_mended)
#define WARNING_COUNT(p) ((p)->warning_count)
#define WHERE(p) ((p)->where)
#define IS(p, s) (ATTRIBUTE (p) == (s))
#define IS_COERCION(p) ((p)->is_coercion)
#define IS_LITERALLY(p, s) (strcmp (NSYMBOL (p), s) == 0)
#define IS_NEW_LEXICAL_LEVEL(p) ((p)->is_new_lexical_level)
#define ISNT(p, s) (! IS (p, s))
#define IS_REF_FLEX(m)\
  (IS (m, REF_SYMBOL) && IS (SUB (m), FLEX_SYMBOL))
#define WINDOW_X_SIZE(p) ((p)->window_x_size)
#define WINDOW_Y_SIZE(p) ((p)->window_y_size)
#define WRITE_MOOD(p) ((p)->write_mood)
#define X(p) ((p)->x)
#define X_COORD(p) ((p)->x_coord)
#define Y(p) ((p)->y)
#define YOUNGEST_ENVIRON(p) ((p)->youngest_environ)
#define Y_COORD(p) ((p)->y_coord)

/***********************************/
/* Interpreter related definitions */
/***********************************/

/* Prelude errors can also occur in the constant folder */

#define PRELUDE_ERROR(cond, p, txt, add)\
  if (cond) {\
    errno = ERANGE;\
    if (in_execution) {\
      diagnostic_node (A68_RUNTIME_ERROR, p, txt, add);\
      exit_genie (p, A68_RUNTIME_ERROR);\
    } else {\
      diagnostic_node (A68_MATH_ERROR, p, txt, add);\
    }}

/* Check on a NIL name */

#define CHECK_REF(p, z, m)\
  if (! INITIALISED (&z)) {\
    diagnostic_node (A68_RUNTIME_ERROR, (p), ERROR_EMPTY_VALUE_FROM, (m));\
    exit_genie ((p), A68_RUNTIME_ERROR);\
  } else if (IS_NIL (z)) {\
    diagnostic_node (A68_RUNTIME_ERROR, (p), ERROR_ACCESSING_NIL, (m));\
    exit_genie ((p), A68_RUNTIME_ERROR);\
  }

/***************************/
/* Macros for row-handling */
/***************************/

#define GET_DESCRIPTOR(a, t, p)\
  a = (A68_ARRAY *) ARRAY_ADDRESS (p);\
  t = (A68_TUPLE *) & (((BYTE_T *) (a)) [SIZE_AL (A68_ARRAY)]);

#define GET_DESCRIPTOR2(a, t1, t2, p)\
  a = (A68_ARRAY *) ARRAY_ADDRESS (p);\
  t1 = (A68_TUPLE *) & (((BYTE_T *) (a)) [SIZE_AL (A68_ARRAY)]);\
  t2 = (A68_TUPLE *) & (((BYTE_T *) (a)) [SIZE_AL (A68_ARRAY) + sizeof (A68_TUPLE)]);

#define PUT_DESCRIPTOR(a, t1, p) {\
  BYTE_T *a_p = ARRAY_ADDRESS (p);\
  *(A68_ARRAY *) a_p = (a);\
  *(A68_TUPLE *) &(((BYTE_T *) (a_p)) [SIZE_AL (A68_ARRAY)]) = (t1);\
  }

#define PUT_DESCRIPTOR2(a, t1, t2, p) {\
  BYTE_T *a_p = ARRAY_ADDRESS (p);\
  *(A68_ARRAY *) a_p = (a);\
  *(A68_TUPLE *) &(((BYTE_T *) (a_p)) [SIZE_AL (A68_ARRAY)]) = (t1);\
  *(A68_TUPLE *) &(((BYTE_T *) (a_p)) [SIZE_AL (A68_ARRAY) + sizeof (A68_TUPLE)]) = (t2);\
  }

#define ROW_SIZE(t) ((UPB (t) >= LWB (t)) ? (UPB (t) - LWB (t) + 1) : 0)
#define ROW_ELEMENT(a, k) (((ADDR_T) k + SLICE_OFFSET (a)) * ELEM_SIZE (a) + FIELD_OFFSET (a))
#define INDEX_1_DIM(a, t, k) ROW_ELEMENT (a, (SPAN (t) * (int) (k) - SHIFT (t)))

/*************/
/* Execution */
/*************/

#define EXECUTE_UNIT_2(p, dest) {\
  PROP_T *_prop_ = &GPROP (p);\
  last_unit = p;\
  dest = (*(UNIT (_prop_))) (SOURCE (_prop_));}

#define EXECUTE_UNIT(p) {\
  PROP_T *_prop_ = &GPROP (p);\
  last_unit = p;\
  (void) (*(UNIT (_prop_))) (SOURCE (_prop_));}

#define EXECUTE_UNIT_TRACE(p) {\
  if (STATUS_TEST (p, (BREAKPOINT_MASK | BREAKPOINT_TEMPORARY_MASK | \
      BREAKPOINT_INTERRUPT_MASK | BREAKPOINT_WATCH_MASK | BREAKPOINT_TRACE_MASK))) {\
    single_step ((p), STATUS (p));\
  }\
  EXECUTE_UNIT (p);}

/***********************************/
/* Stuff for the garbage collector */
/***********************************/

/* Check whether the heap fills */

#define PREEMPTIVE_GC {\
  double f = (double) heap_pointer / (double) heap_size;\
  double h = (double) free_handle_count / (double) max_handle_count;\
  if ((f > 0.8 || h < 0.2) && stack_pointer == stack_start) {\
    gc_heap ((NODE_T *) p, frame_pointer);\
  }}

/* Save a handle from the GC */

#define BLOCK_GC_HANDLE(z) {\
  if (IS_IN_HEAP (z)) {\
    STATUS_SET (REF_HANDLE(z), BLOCK_GC_MASK);\
  }}

#define UNBLOCK_GC_HANDLE(z) {\
  if (IS_IN_HEAP (z)) {\
    STATUS_CLEAR (REF_HANDLE (z), BLOCK_GC_MASK);\
  }}

/* Tests for objects of mode INT */

#define CHECK_INT_ADDITION(p, i, j)\
  PRELUDE_ERROR (\
    ((j) > 0 && (i) > (INT_MAX - (j))) || ((j) < 0 && (i) < (-INT_MAX - (j))),\
    p, ERROR_MATH, MODE (INT))
#define CHECK_INT_SUBTRACTION(p, i, j)\
  CHECK_INT_ADDITION(p, i, -(j))
#define CHECK_INT_MULTIPLICATION(p, i, j)\
  PRELUDE_ERROR (\
    (j) != 0 && ABS (i) > INT_MAX / ABS (j),\
    p, ERROR_MATH, MODE (INT))
#define CHECK_INT_DIVISION(p, i, j)\
  PRELUDE_ERROR ((j) == 0, p, ERROR_DIVISION_BY_ZERO, MODE (INT))

#define CHECK_INDEX(p, k, t) {\
  if (VALUE (k) < LWB (t) || VALUE (k) > UPB (t)) {\
    diagnostic_node (A68_RUNTIME_ERROR, p, ERROR_INDEX_OUT_OF_BOUNDS);\
    exit_genie (p, A68_RUNTIME_ERROR);\
  }}

/* Tests for objects of mode REAL */

#if defined HAVE_IEEE_754

#define NOT_A_REAL(x) (!finite (x))
#define CHECK_REAL_REPRESENTATION(p, u) PRELUDE_ERROR (NOT_A_REAL (u), p, ERROR_MATH, MODE (REAL))
#define CHECK_REAL_ADDITION(p, u, v) CHECK_REAL_REPRESENTATION (p, (u) + (v))
#define CHECK_REAL_SUBTRACTION(p, u, v) CHECK_REAL_REPRESENTATION (p, (u) - (v))
#define CHECK_REAL_MULTIPLICATION(p, u, v) CHECK_REAL_REPRESENTATION (p, (u) * (v))
#define CHECK_REAL_DIVISION(p, u, v)\
  PRELUDE_ERROR ((v) == 0, p, ERROR_DIVISION_BY_ZERO, MODE (REAL))
#define CHECK_COMPLEX_REPRESENTATION(p, u, v)\
  PRELUDE_ERROR (NOT_A_REAL (u) || NOT_A_REAL (v), p, ERROR_MATH, MODE (COMPLEX))
#else
#define CHECK_REAL_REPRESENTATION(p, u) {;}
#define CHECK_REAL_ADDITION(p, u, v) {;}
#define CHECK_REAL_SUBTRACTION(p, u, v) {;}
#define CHECK_REAL_MULTIPLICATION(p, u, v) {;}
#define CHECK_REAL_DIVISION(p, u, v) {;}
#define CHECK_COMPLEX_REPRESENTATION(p, u, v) {;}
#endif

#define MATH_RTE(p, z, m, t)\
   PRELUDE_ERROR (z, (p), (t == NO_TEXT ? ERROR_MATH : t), (m))

/*
Macro's for stack checking. Since the stacks grow by small amounts at a time
(A68 rows are in the heap), we check the stacks only at certain points: where
A68 recursion may set in, or in the garbage collector. We check whether there
still is sufficient overhead to make it to the next check.
*/

#define TOO_COMPLEX "program too complex"

#define SYSTEM_STACK_USED (ABS ((int) (system_stack_offset - &stack_offset)))
#define LOW_SYSTEM_STACK_ALERT(p) {\
  BYTE_T stack_offset;\
  if (stack_size > 0 && SYSTEM_STACK_USED >= stack_limit) {\
    errno = 0;\
    if ((p) == NO_NODE) {\
      ABEND (A68_TRUE, TOO_COMPLEX, ERROR_STACK_OVERFLOW);\
    } else {\
      diagnostic_node (A68_RUNTIME_ERROR, (p), ERROR_STACK_OVERFLOW);\
      exit_genie ((p), A68_RUNTIME_ERROR);\
  }}}

#define LOW_STACK_ALERT(p) {\
  LOW_SYSTEM_STACK_ALERT (p);\
  if ((p) != NO_NODE && (frame_pointer >= frame_stack_limit || stack_pointer >= expr_stack_limit)) { \
    errno = 0;\
    diagnostic_node (A68_RUNTIME_ERROR, (p), ERROR_STACK_OVERFLOW);\
    exit_genie ((p), A68_RUNTIME_ERROR);\
  }}

/******************************/
/* Operations on stack frames */
/******************************/

#define FRAME_ADDRESS(n) ((BYTE_T *) &(stack_segment[n]))
#define FACT(n) ((ACTIVATION_RECORD *) FRAME_ADDRESS (n))
#define FRAME_CLEAR(m) FILL ((BYTE_T *) FRAME_OFFSET (FRAME_INFO_SIZE), 0, (m))
#define FRAME_BLOCKS(n) (BLOCKS (FACT (n)))
#define FRAME_DYNAMIC_LINK(n) (DYNAMIC_LINK (FACT (n)))
#define FRAME_DNS(n) (DYNAMIC_SCOPE (FACT (n)))
#define FRAME_INCREMENT(n) (AP_INCREMENT (TABLE (FRAME_TREE(n))))
#define FRAME_INFO_SIZE (A68_ALIGN_8 ((int) sizeof (ACTIVATION_RECORD)))
#define FRAME_JUMP_STAT(n) (JUMP_STAT (FACT (n)))
#define FRAME_LEXICAL_LEVEL(n) (FRAME_LEVEL (FACT (n)))
#define FRAME_LOCAL(n, m) (FRAME_ADDRESS ((n) + FRAME_INFO_SIZE + (m)))
#define FRAME_NUMBER(n) (FRAME_NO (FACT (n)))
#define FRAME_OBJECT(n) (FRAME_OFFSET (FRAME_INFO_SIZE + (n)))
#define FRAME_OFFSET(n) (FRAME_ADDRESS (frame_pointer + (n)))
#define FRAME_PARAMETER_LEVEL(n) (PARAMETER_LEVEL (FACT (n)))
#define FRAME_PARAMETERS(n) (PARAMETERS (FACT (n)))
#define FRAME_PROC_FRAME(n) (PROC_FRAME (FACT (n)))
#define FRAME_SIZE(fp) (FRAME_INFO_SIZE + FRAME_INCREMENT (fp))
#define FRAME_STATIC_LINK(n) (STATIC_LINK (FACT (n)))
#define FRAME_TREE(n) (NODE (FACT (n)))

#if defined HAVE_PARALLEL_CLAUSE
#define FRAME_THREAD_ID(n) (THREAD_ID (FACT (n)))
#endif

#define FOLLOW_SL(dest, l) {\
  (dest) = frame_pointer;\
  if ((l) <= FRAME_PARAMETER_LEVEL ((dest))) {\
    (dest) = FRAME_PARAMETERS ((dest));\
  }\
  while ((l) != FRAME_LEXICAL_LEVEL ((dest))) {\
    (dest) = FRAME_STATIC_LINK ((dest));\
  }}

#define FOLLOW_STATIC_LINK(dest, l) {\
  if ((l) == global_level && global_pointer > 0) {\
    (dest) = global_pointer;\
  } else {\
    FOLLOW_SL (dest, l)\
  }}

#define FRAME_GET(dest, cast, p) {\
  ADDR_T _m_z;\
  FOLLOW_STATIC_LINK (_m_z, LEVEL (GINFO (p)));\
  (dest) = (cast *) & (OFFSET (GINFO (p))[_m_z]);\
  }

#define GET_FRAME(dest, cast, level, offset) {\
  ADDR_T _m_z;\
  FOLLOW_SL (_m_z, (level));\
  (dest) = (cast *) & (stack_segment [_m_z + FRAME_INFO_SIZE + (offset)]);\
  }

#define GET_GLOBAL(dest, cast, offset) {\
  (dest) = (cast *) & (stack_segment [global_pointer + FRAME_INFO_SIZE + (offset)]);\
  }

/* Opening of stack frames is in-line */

/* 
STATIC_LINK_FOR_FRAME: determine static link for stack frame.
new_lex_lvl: lexical level of new stack frame.
returns: static link for stack frame at 'new_lex_lvl'. 
*/

#define STATIC_LINK_FOR_FRAME(dest, new_lex_lvl) {\
  int _m_cur_lex_lvl = FRAME_LEXICAL_LEVEL (frame_pointer);\
  if (_m_cur_lex_lvl == (new_lex_lvl)) {\
    (dest) = FRAME_STATIC_LINK (frame_pointer);\
  } else if (_m_cur_lex_lvl > (new_lex_lvl)) {\
    ADDR_T _m_static_link = frame_pointer;\
    while (FRAME_LEXICAL_LEVEL (_m_static_link) >= (new_lex_lvl)) {\
      _m_static_link = FRAME_STATIC_LINK (_m_static_link);\
    }\
    (dest) = _m_static_link;\
  } else {\
    (dest) = frame_pointer;\
  }}

#define INIT_STATIC_FRAME(p) {\
  FRAME_CLEAR (AP_INCREMENT (TABLE (p)));\
  if (INITIALISE_FRAME (TABLE (p))) {\
    initialise_frame (p);\
  }}

#define INIT_GLOBAL_POINTER(p) {\
  if (LEX_LEVEL (p) == global_level) {\
    global_pointer = frame_pointer;\
  }}

#if defined HAVE_PARALLEL_CLAUSE
#define OPEN_STATIC_FRAME(p) {\
  ADDR_T dynamic_link = frame_pointer, static_link;\
  ACTIVATION_RECORD *act, *pre;\
  STATIC_LINK_FOR_FRAME (static_link, LEX_LEVEL (p));\
  pre = FACT (frame_pointer);\
  frame_pointer += FRAME_SIZE (dynamic_link);\
  act = FACT (frame_pointer);\
  FRAME_NO (act) = FRAME_NO (pre) + 1;\
  FRAME_LEVEL (act) = LEX_LEVEL (p);\
  PARAMETER_LEVEL (act) = PARAMETER_LEVEL (pre);\
  PARAMETERS (act) = PARAMETERS (pre);\
  STATIC_LINK (act) = static_link;\
  DYNAMIC_LINK (act) = dynamic_link;\
  DYNAMIC_SCOPE (act) = frame_pointer;\
  NODE (act) = p;\
  JUMP_STAT (act) = NO_JMP_BUF;\
  PROC_FRAME (act) = A68_FALSE;\
  THREAD_ID (act) = pthread_self ();\
  }
#else
#define OPEN_STATIC_FRAME(p) {\
  ADDR_T dynamic_link = frame_pointer, static_link;\
  ACTIVATION_RECORD *act, *pre;\
  STATIC_LINK_FOR_FRAME (static_link, LEX_LEVEL (p));\
  pre = FACT (frame_pointer);\
  frame_pointer += FRAME_SIZE (dynamic_link);\
  act = FACT (frame_pointer);\
  FRAME_NO (act) = FRAME_NO (pre) + 1;\
  FRAME_LEVEL (act) = LEX_LEVEL (p);\
  PARAMETER_LEVEL (act) = PARAMETER_LEVEL (pre);\
  PARAMETERS (act) = PARAMETERS (pre);\
  STATIC_LINK (act) = static_link;\
  DYNAMIC_LINK (act) = dynamic_link;\
  DYNAMIC_SCOPE (act) = frame_pointer;\
  NODE (act) = p;\
  JUMP_STAT (act) = NO_JMP_BUF;\
  PROC_FRAME (act) = A68_FALSE;\
  }
#endif

/**
@def OPEN_PROC_FRAME
@brief Open a stack frame for a procedure.
**/

#if defined HAVE_PARALLEL_CLAUSE
#define OPEN_PROC_FRAME(p, environ) {\
  ADDR_T dynamic_link = frame_pointer, static_link;\
  ACTIVATION_RECORD *act;\
  LOW_STACK_ALERT (p);\
  static_link = (environ > 0 ? environ : frame_pointer);\
  if (frame_pointer < static_link) {\
    diagnostic_node (A68_RUNTIME_ERROR, (p), ERROR_SCOPE_DYNAMIC_0);\
    exit_genie (p, A68_RUNTIME_ERROR);\
  }\
  frame_pointer += FRAME_SIZE (dynamic_link);\
  act = FACT (frame_pointer);\
  FRAME_NO (act) = FRAME_NUMBER (dynamic_link) + 1;\
  FRAME_LEVEL (act) = LEX_LEVEL (p);\
  PARAMETER_LEVEL (act) = LEX_LEVEL (p);\
  PARAMETERS (act) = frame_pointer;\
  STATIC_LINK (act) = static_link;\
  DYNAMIC_LINK (act) = dynamic_link;\
  DYNAMIC_SCOPE (act) = frame_pointer;\
  NODE (act) = p;\
  JUMP_STAT (act) = NO_JMP_BUF;\
  PROC_FRAME (act) = A68_TRUE;\
  THREAD_ID (act) = pthread_self ();\
  }
#else
#define OPEN_PROC_FRAME(p, environ) {\
  ADDR_T dynamic_link = frame_pointer, static_link;\
  ACTIVATION_RECORD *act;\
  LOW_STACK_ALERT (p);\
  static_link = (environ > 0 ? environ : frame_pointer);\
  if (frame_pointer < static_link) {\
    diagnostic_node (A68_RUNTIME_ERROR, (p), ERROR_SCOPE_DYNAMIC_0);\
    exit_genie (p, A68_RUNTIME_ERROR);\
  }\
  frame_pointer += FRAME_SIZE (dynamic_link);\
  act = FACT (frame_pointer);\
  FRAME_NO (act) = FRAME_NUMBER (dynamic_link) + 1;\
  FRAME_LEVEL (act) = LEX_LEVEL (p);\
  PARAMETER_LEVEL (act) = LEX_LEVEL (p);\
  PARAMETERS (act) = frame_pointer;\
  STATIC_LINK (act) = static_link;\
  DYNAMIC_LINK (act) = dynamic_link;\
  DYNAMIC_SCOPE (act) = frame_pointer;\
  NODE (act) = p;\
  JUMP_STAT (act) = NO_JMP_BUF;\
  PROC_FRAME (act) = A68_TRUE;\
  }
#endif

#define CLOSE_FRAME {\
  ACTIVATION_RECORD *act = FACT (frame_pointer);\
  frame_pointer = DYNAMIC_LINK (act);\
  }

/* Macros for check on initialisation of values */

#define CHECK_INIT(p, c, q)\
  if (!(c)) {\
    diagnostic_node (A68_RUNTIME_ERROR, (p), ERROR_EMPTY_VALUE_FROM, (q));\
    exit_genie ((p), A68_RUNTIME_ERROR);\
  }

#define CHECK_DNS2(p, scope, limit, mode)\
  if (scope > limit) {\
    char txt[BUFFER_SIZE];\
    ASSERT (snprintf (txt, SNPRINTF_SIZE, ERROR_SCOPE_DYNAMIC_1) >= 0);\
    diagnostic_node (A68_RUNTIME_ERROR, p, txt, mode);\
    exit_genie (p, A68_RUNTIME_ERROR);\
  }

#define CHECK_DNS(p, m, w, limit)\
  if (NEED_DNS (GINFO (p))) {\
    ADDR_T _lim = ((limit) < global_pointer ? global_pointer : (limit));\
    if (IS ((m), REF_SYMBOL)) {\
      CHECK_DNS2 (p, (REF_SCOPE ((A68_REF *) (w))), _lim, (m));\
    } else if (IS ((m), PROC_SYMBOL)) {\
      CHECK_DNS2 (p, ENVIRON ((A68_PROCEDURE *) (w)), _lim, (m));\
    } else if (IS ((m), FORMAT_SYMBOL)) {\
      CHECK_DNS2 (p, ENVIRON ((A68_FORMAT *) w), _lim, (m));\
  }}

/* 
The void * cast in next macro is to stop warnings about dropping a volatile
qualifier to a pointer. This is safe here.
*/

#define STACK_DNS(p, m, limit)\
  if (p != NO_NODE && GINFO (p) != NO_GINFO) {\
    CHECK_DNS ((NODE_T *)(void *)(p), (m),\
               (STACK_OFFSET (-SIZE (m))), (limit));\
  }

/***********************************/
/* Macros for the evaluation stack */
/***********************************/

#define INCREMENT_STACK_POINTER(err, i)\
  {stack_pointer += (ADDR_T) A68_ALIGN (i); (void) (err);}

#define DECREMENT_STACK_POINTER(err, i)\
  {stack_pointer -= A68_ALIGN (i); (void) (err);}

#define PUSH(p, addr, size) {\
  BYTE_T *_sp_ = STACK_TOP;\
  INCREMENT_STACK_POINTER ((p), (int) (size));\
  COPY (_sp_, (BYTE_T *) (addr), (int) (size));\
  }

#define POP(p, addr, size) {\
  DECREMENT_STACK_POINTER((p), (int) (size));\
  COPY ((BYTE_T *) (addr), STACK_TOP, (int) (size));\
  }

#define POP_ALIGNED(p, addr, size) {\
  DECREMENT_STACK_POINTER((p), (int) (size));\
  COPY_ALIGNED ((BYTE_T *) (addr), STACK_TOP, (int) (size));\
  }

#define POP_ADDRESS(p, addr, type) {\
  DECREMENT_STACK_POINTER((p), (int) SIZE_AL (type));\
  (addr) = (type *) STACK_TOP;\
  }

#define POP_OPERAND_ADDRESS(p, i, type) {\
  (void) (p);\
  (i) = (type *) (STACK_OFFSET (-SIZE_AL (type)));\
  }

#define POP_OPERAND_ADDRESSES(p, i, j, type) {\
  DECREMENT_STACK_POINTER ((p), (int) SIZE_AL (type));\
  (j) = (type *) STACK_TOP;\
  (i) = (type *) (STACK_OFFSET (-SIZE_AL (type)));\
  }

#define POP_3_OPERAND_ADDRESSES(p, i, j, k, type) {\
  DECREMENT_STACK_POINTER ((p), (int) (2 * SIZE_AL (type)));\
  (k) = (type *) (STACK_OFFSET (SIZE_AL (type)));\
  (j) = (type *) STACK_TOP;\
  (i) = (type *) (STACK_OFFSET (-SIZE_AL (type)));\
  }

#define PUSH_PRIMITIVE(p, z, mode) {\
  mode *_x_ = (mode *) STACK_TOP;\
  STATUS (_x_) = INIT_MASK;\
  VALUE (_x_) = (z);\
  INCREMENT_STACK_POINTER ((p), SIZE_AL (mode));\
  }

#define PUSH_PRIMAL(p, z, m) {\
  A68_##m *_x_ = (A68_##m *) STACK_TOP;\
  int _size_ = SIZE_AL (A68_##m);\
  STATUS (_x_) = INIT_MASK;\
  VALUE (_x_) = (z);\
  INCREMENT_STACK_POINTER ((p), _size_);\
  }

#define PUSH_OBJECT(p, z, mode) {\
  *(mode *) STACK_TOP = (z);\
  INCREMENT_STACK_POINTER (p, SIZE_AL (mode));\
  }

#define POP_OBJECT(p, z, mode) {\
  DECREMENT_STACK_POINTER((p), SIZE_AL (mode));\
  (*(z)) = *((mode *) STACK_TOP);\
  }

#define PUSH_COMPLEX(p, re, im) {\
  PUSH_PRIMAL (p, re, REAL);\
  PUSH_PRIMAL (p, im, REAL);\
  }

#define POP_COMPLEX(p, re, im) {\
  POP_OBJECT (p, im, A68_REAL);\
  POP_OBJECT (p, re, A68_REAL);\
  }

#define PUSH_BYTES(p, k) {\
  A68_BYTES *_z_ = (A68_BYTES *) STACK_TOP;\
  STATUS (_z_) = INIT_MASK;\
  strncpy (VALUE (_z_), k, BYTES_WIDTH);\
  INCREMENT_STACK_POINTER((p), SIZE_AL (A68_BYTES));\
  }

#define PUSH_LONG_BYTES(p, k) {\
  A68_LONG_BYTES *_z_ = (A68_LONG_BYTES *) STACK_TOP;\
  STATUS (_z_) = INIT_MASK;\
  strncpy (VALUE (_z_), k, LONG_BYTES_WIDTH);\
  INCREMENT_STACK_POINTER((p), SIZE_AL (A68_LONG_BYTES));\
  }

#define PUSH_REF(p, z) PUSH_OBJECT (p, z, A68_REF)
#define PUSH_PROCEDURE(p, z) PUSH_OBJECT (p, z, A68_PROCEDURE)
#define PUSH_FORMAT(p, z) PUSH_OBJECT (p, z, A68_FORMAT)

#define POP_REF(p, z) POP_OBJECT (p, z, A68_REF)
#define POP_PROCEDURE(p, z) POP_OBJECT (p, z, A68_PROCEDURE)

#define PUSH_UNION(p, z) {\
  A68_UNION *_x_ = (A68_UNION *) STACK_TOP;\
  STATUS (_x_) = INIT_MASK;\
  VALUE (_x_) = (z);\
  INCREMENT_STACK_POINTER ((p), SIZE_AL (A68_UNION));\
  }


/* Macro's for standard environ */

#define A68_ENV_INT(n, k) void n (NODE_T *p) {PUSH_PRIMAL (p, (k), INT);}
#define A68_ENV_REAL(n, z) void n (NODE_T *p) {PUSH_PRIMAL (p, (z), REAL);}

/* Interpreter macros */

#define INITIALISED(z) ((BOOL_T) (STATUS (z) & INIT_MASK))
#define LHS_MODE(p) (MOID (PACK (MOID (p))))
#define RHS_MODE(p) (MOID (NEXT (PACK (MOID (p)))))

/* Transput related macros */

#define IS_NIL_FORMAT(f) ((BOOL_T) (BODY (f) == NO_NODE && ENVIRON (f) == 0))

/* MP Macros */

#define MP_STATUS(z) ((z)[0])
#define MP_EXPONENT(z) ((z)[1])
#define MP_DIGIT(z, n) ((z)[(n) + 1])
#define SIZE_MP(digits) ((2 + digits) * SIZE_AL (MP_T))
#define IS_ZERO_MP(z) (MP_DIGIT (z, 1) == (MP_T) 0)

#define MOVE_MP(z, x, digits) {\
  MP_T *_m_d = (z), *_m_s = (x); int _m_k = digits + 2;\
  while (_m_k--) {*_m_d++ = *_m_s++;}\
  }

#define MOVE_DIGITS(z, x, digits) {\
  MP_T *_m_d = (z), *_m_s = (x); int _m_k = digits;\
  while (_m_k--) {*_m_d++ = *_m_s++;}\
  }

#define CHECK_MP_EXPONENT(p, z) {\
  MP_T _expo_ = fabs (MP_EXPONENT (z));\
  if (_expo_ > MAX_MP_EXPONENT || (_expo_ == MAX_MP_EXPONENT && ABS (MP_DIGIT (z, 1)) > 1.0)) {\
      errno = ERANGE;\
      diagnostic_node (A68_RUNTIME_ERROR, p, ERROR_MP_OUT_OF_BOUNDS, NULL);\
      exit_genie (p, A68_RUNTIME_ERROR);\
  }}

#define SET_MP_ZERO(z, digits) {\
  MP_T *_m_d = &MP_DIGIT ((z), 1); int _m_k = digits;\
  MP_STATUS (z) = (MP_T) INIT_MASK;\
  MP_EXPONENT (z) = 0.0;\
  while (_m_k--) {*_m_d++ = 0.0;}\
  }

/* stack_mp: allocate temporary space in the evaluation stack */

#define STACK_MP(dest, p, digits) {\
  ADDR_T stack_mp_sp = stack_pointer;\
  if ((stack_pointer += SIZE_MP (digits)) > expr_stack_limit) {\
    diagnostic_node (A68_RUNTIME_ERROR, p, ERROR_STACK_OVERFLOW);\
    exit_genie (p, A68_RUNTIME_ERROR);\
  }\
  dest = (MP_T *) STACK_ADDRESS (stack_mp_sp);\
}

/******************************/
/* Library for code generator */
/*****************************/

/* Operators that are inlined in compiled code */

#define a68g_eq_complex(/* A68_REAL * */ x, y) (RE (x) == RE (y) && IM (x) == IM (y))
#define a68g_ne_complex(/* A68_REAL * */ x, y) (! a68g_eq_complex (x, y))
#define a68g_mod_int(/* int */ i, j) (((i) % (j)) >= 0 ? ((i) % (j)) : ((i) % (j)) + labs (j))
#define a68g_plusab_int(/* A68_REF * */ i, /* int */ j) (VALUE ((A68_INT *) ADDRESS (i)) += (j), (i))
#define a68g_minusab_int(/* A68_REF * */ i, /* int */ j) (VALUE ((A68_INT *) ADDRESS (i)) -= (j), (i))
#define a68g_timesab_int(/* A68_REF * */ i, /* int */ j) (VALUE ((A68_INT *) ADDRESS (i)) *= (j), (i))
#define a68g_overab_int(/* A68_REF * */ i, /* int */ j) (VALUE ((A68_INT *) ADDRESS (i)) /= (j), (i))
#define a68g_entier(/* double */ x) ((int) floor (x))
#define a68g_plusab_real(/* A68_REF * */ i, /* double */ j) (VALUE ((A68_REAL *) ADDRESS (i)) += (j), (i))
#define a68g_minusab_real(/* A68_REF * */ i, /* double */ j) (VALUE ((A68_REAL *) ADDRESS (i)) -= (j), (i))
#define a68g_timesab_real(/* A68_REF * */ i, /* double */ j) (VALUE ((A68_REAL *) ADDRESS (i)) *= (j), (i))
#define a68g_divab_real(/* A68_REF * */ i, /* double */ j) (VALUE ((A68_REAL *) ADDRESS (i)) /= (j), (i))
#define a68g_re_complex(/* A68_REAL * */ z) (RE (z))
#define a68g_im_complex(/* A68_REAL * */ z) (IM (z))
#define a68g_abs_complex(/* A68_REAL * */ z) a68g_hypot (RE (z), IM (z))
#define a68g_arg_complex(/* A68_REAL * */ z) atan2 (IM (z), RE (z))

#define a68g_i_complex(/* A68_REAL * */ z, /* double */ re, im) {\
  STATUS_RE (z) = INIT_MASK;\
  STATUS_IM (z) = INIT_MASK;\
  RE (z) = re;\
  IM (z) = im;}

#define a68g_minus_complex(/* A68_REAL * */ z, x) {\
  STATUS_RE (z) = INIT_MASK;\
  STATUS_IM (z) = INIT_MASK;\
  RE (z) = -RE (x);\
  IM (z) = -IM (x);}

#define a68g_conj_complex(/* A68_REAL * */ z, x) {\
  STATUS_RE (z) = INIT_MASK;\
  STATUS_IM (z) = INIT_MASK;\
  RE (z) = RE (x);\
  IM (z) = -IM (x);}

#define a68g_add_complex(/* A68_REAL * */ z, x, y) {\
  STATUS_RE (z) = INIT_MASK;\
  STATUS_IM (z) = INIT_MASK;\
  RE (z) = RE (x) + RE (y);\
  IM (z) = IM (x) + IM (y);}

#define a68g_sub_complex(/* A68_REAL * */ z, x, y) {\
  STATUS_RE (z) = INIT_MASK;\
  STATUS_IM (z) = INIT_MASK;\
  RE (z) = RE (x) - RE (y);\
  IM (z) = IM (x) - IM (y);}

#define a68g_mul_complex(/* A68_REAL * */ z, x, y) {\
  STATUS_RE (z) = INIT_MASK;\
  STATUS_IM (z) = INIT_MASK;\
  RE (z) = RE (x) * RE (y) - IM (x) * IM (y);\
  IM (z) = IM (x) * RE (y) + RE (x) * IM (y);}

/********************************/
/* All kind of constants ex GSL */
/********************************/

#define GSL_CONST_NUM_FINE_STRUCTURE (7.297352533e-3) /* 1 */
#define GSL_CONST_NUM_AVOGADRO (6.02214199e23) /* 1 / mol */
#define GSL_CONST_NUM_YOTTA (1e24) /* 1 */
#define GSL_CONST_NUM_ZETTA (1e21) /* 1 */
#define GSL_CONST_NUM_EXA (1e18) /* 1 */
#define GSL_CONST_NUM_PETA (1e15) /* 1 */
#define GSL_CONST_NUM_TERA (1e12) /* 1 */
#define GSL_CONST_NUM_GIGA (1e9) /* 1 */
#define GSL_CONST_NUM_MEGA (1e6) /* 1 */
#define GSL_CONST_NUM_KILO (1e3) /* 1 */
#define GSL_CONST_NUM_MILLI (1e-3) /* 1 */
#define GSL_CONST_NUM_MICRO (1e-6) /* 1 */
#define GSL_CONST_NUM_NANO (1e-9) /* 1 */
#define GSL_CONST_NUM_PICO (1e-12) /* 1 */
#define GSL_CONST_NUM_FEMTO (1e-15) /* 1 */
#define GSL_CONST_NUM_ATTO (1e-18) /* 1 */
#define GSL_CONST_NUM_ZEPTO (1e-21) /* 1 */
#define GSL_CONST_NUM_YOCTO (1e-24) /* 1 */
#define GSL_CONST_CGSM_GAUSS (1.0) /* cm / A s^2  */
#define GSL_CONST_CGSM_SPEED_OF_LIGHT (2.99792458e10) /* cm / s */
#define GSL_CONST_CGSM_GRAVITATIONAL_CONSTANT (6.673e-8) /* cm^3 / g s^2 */
#define GSL_CONST_CGSM_ASTRONOMICAL_UNIT (1.49597870691e13) /* cm */
#define GSL_CONST_CGSM_LIGHT_YEAR (9.46053620707e17) /* cm */
#define GSL_CONST_CGSM_PARSEC (3.08567758135e18) /* cm */
#define GSL_CONST_CGSM_GRAV_ACCEL (9.80665e2) /* cm / s^2 */
#define GSL_CONST_CGSM_ELECTRON_VOLT (1.602176487e-12) /* g cm^2 / s^2 */
#define GSL_CONST_CGSM_MASS_ELECTRON (9.10938188e-28) /* g */
#define GSL_CONST_CGSM_MASS_MUON (1.88353109e-25) /* g */
#define GSL_CONST_CGSM_MASS_PROTON (1.67262158e-24) /* g */
#define GSL_CONST_CGSM_MASS_NEUTRON (1.67492716e-24) /* g */
#define GSL_CONST_CGSM_RYDBERG (2.17987196968e-11) /* g cm^2 / s^2 */
#define GSL_CONST_CGSM_BOLTZMANN (1.3806504e-16) /* g cm^2 / K s^2 */
#define GSL_CONST_CGSM_MOLAR_GAS (8.314472e7) /* g cm^2 / K mol s^2 */
#define GSL_CONST_CGSM_STANDARD_GAS_VOLUME (2.2710981e4) /* cm^3 / mol */
#define GSL_CONST_CGSM_MINUTE (6e1) /* s */
#define GSL_CONST_CGSM_HOUR (3.6e3) /* s */
#define GSL_CONST_CGSM_DAY (8.64e4) /* s */
#define GSL_CONST_CGSM_WEEK (6.048e5) /* s */
#define GSL_CONST_CGSM_INCH (2.54e0) /* cm */
#define GSL_CONST_CGSM_FOOT (3.048e1) /* cm */
#define GSL_CONST_CGSM_YARD (9.144e1) /* cm */
#define GSL_CONST_CGSM_MILE (1.609344e5) /* cm */
#define GSL_CONST_CGSM_NAUTICAL_MILE (1.852e5) /* cm */
#define GSL_CONST_CGSM_FATHOM (1.8288e2) /* cm */
#define GSL_CONST_CGSM_MIL (2.54e-3) /* cm */
#define GSL_CONST_CGSM_POINT (3.52777777778e-2) /* cm */
#define GSL_CONST_CGSM_TEXPOINT (3.51459803515e-2) /* cm */
#define GSL_CONST_CGSM_MICRON (1e-4) /* cm */
#define GSL_CONST_CGSM_ANGSTROM (1e-8) /* cm */
#define GSL_CONST_CGSM_HECTARE (1e8) /* cm^2 */
#define GSL_CONST_CGSM_ACRE (4.04685642241e7) /* cm^2 */
#define GSL_CONST_CGSM_BARN (1e-24) /* cm^2 */
#define GSL_CONST_CGSM_LITER (1e3) /* cm^3 */
#define GSL_CONST_CGSM_US_GALLON (3.78541178402e3) /* cm^3 */
#define GSL_CONST_CGSM_QUART (9.46352946004e2) /* cm^3 */
#define GSL_CONST_CGSM_PINT (4.73176473002e2) /* cm^3 */
#define GSL_CONST_CGSM_CUP (2.36588236501e2) /* cm^3 */
#define GSL_CONST_CGSM_FLUID_OUNCE (2.95735295626e1) /* cm^3 */
#define GSL_CONST_CGSM_TABLESPOON (1.47867647813e1) /* cm^3 */
#define GSL_CONST_CGSM_TEASPOON (4.92892159375e0) /* cm^3 */
#define GSL_CONST_CGSM_CANADIAN_GALLON (4.54609e3) /* cm^3 */
#define GSL_CONST_CGSM_UK_GALLON (4.546092e3) /* cm^3 */
#define GSL_CONST_CGSM_MILES_PER_HOUR (4.4704e1) /* cm / s */
#define GSL_CONST_CGSM_KILOMETERS_PER_HOUR (2.77777777778e1) /* cm / s */
#define GSL_CONST_CGSM_KNOT (5.14444444444e1) /* cm / s */
#define GSL_CONST_CGSM_POUND_MASS (4.5359237e2) /* g */
#define GSL_CONST_CGSM_OUNCE_MASS (2.8349523125e1) /* g */
#define GSL_CONST_CGSM_TON (9.0718474e5) /* g */
#define GSL_CONST_CGSM_METRIC_TON (1e6) /* g */
#define GSL_CONST_CGSM_UK_TON (1.0160469088e6) /* g */
#define GSL_CONST_CGSM_TROY_OUNCE (3.1103475e1) /* g */
#define GSL_CONST_CGSM_CARAT (2e-1) /* g */
#define GSL_CONST_CGSM_UNIFIED_ATOMIC_MASS (1.660538782e-24) /* g */
#define GSL_CONST_CGSM_GRAM_FORCE (9.80665e2) /* cm g / s^2 */
#define GSL_CONST_CGSM_POUND_FORCE (4.44822161526e5) /* cm g / s^2 */
#define GSL_CONST_CGSM_KILOPOUND_FORCE (4.44822161526e8) /* cm g / s^2 */
#define GSL_CONST_CGSM_POUNDAL (1.38255e4) /* cm g / s^2 */
#define GSL_CONST_CGSM_CALORIE (4.1868e7) /* g cm^2 / s^2 */
#define GSL_CONST_CGSM_BTU (1.05505585262e10) /* g cm^2 / s^2 */
#define GSL_CONST_CGSM_THERM (1.05506e15) /* g cm^2 / s^2 */
#define GSL_CONST_CGSM_HORSEPOWER (7.457e9) /* g cm^2 / s^3 */
#define GSL_CONST_CGSM_BAR (1e6) /* g / cm s^2 */
#define GSL_CONST_CGSM_STD_ATMOSPHERE (1.01325e6) /* g / cm s^2 */
#define GSL_CONST_CGSM_TORR (1.33322368421e3) /* g / cm s^2 */
#define GSL_CONST_CGSM_METER_OF_MERCURY (1.33322368421e6) /* g / cm s^2 */
#define GSL_CONST_CGSM_INCH_OF_MERCURY (3.38638815789e4) /* g / cm s^2 */
#define GSL_CONST_CGSM_INCH_OF_WATER (2.490889e3) /* g / cm s^2 */
#define GSL_CONST_CGSM_PSI (6.89475729317e4) /* g / cm s^2 */
#define GSL_CONST_CGSM_POISE (1e0) /* g / cm s */
#define GSL_CONST_CGSM_STOKES (1e0) /* cm^2 / s */
#define GSL_CONST_CGSM_STILB (1e0) /* cd / cm^2 */
#define GSL_CONST_CGSM_LUMEN (1e0) /* cd sr */
#define GSL_CONST_CGSM_LUX (1e-4) /* cd sr / cm^2 */
#define GSL_CONST_CGSM_PHOT (1e0) /* cd sr / cm^2 */
#define GSL_CONST_CGSM_FOOTCANDLE (1.076e-3) /* cd sr / cm^2 */
#define GSL_CONST_CGSM_LAMBERT (1e0) /* cd sr / cm^2 */
#define GSL_CONST_CGSM_FOOTLAMBERT (1.07639104e-3) /* cd sr / cm^2 */
#define GSL_CONST_CGSM_CURIE (3.7e10) /* 1 / s */
#define GSL_CONST_CGSM_ROENTGEN (2.58e-8) /* abamp s / g */
#define GSL_CONST_CGSM_RAD (1e2) /* cm^2 / s^2 */
#define GSL_CONST_CGSM_SOLAR_MASS (1.98892e33) /* g */
#define GSL_CONST_CGSM_BOHR_RADIUS (5.291772083e-9) /* cm */
#define GSL_CONST_CGSM_NEWTON (1e5) /* cm g / s^2 */
#define GSL_CONST_CGSM_DYNE (1e0) /* cm g / s^2 */
#define GSL_CONST_CGSM_JOULE (1e7) /* g cm^2 / s^2 */
#define GSL_CONST_CGSM_ERG (1e0) /* g cm^2 / s^2 */
#define GSL_CONST_CGSM_BOHR_MAGNETON (9.27400899e-21) /* abamp cm^2 */
#define GSL_CONST_CGSM_NUCLEAR_MAGNETON (5.05078317e-24) /* abamp cm^2 */
#define GSL_CONST_CGSM_ELECTRON_MAGNETIC_MOMENT (9.28476362e-21) /* abamp cm^2 */
#define GSL_CONST_CGSM_PROTON_MAGNETIC_MOMENT (1.410606633e-23) /* abamp cm^2 */
#define GSL_CONST_CGSM_FARADAY (9.64853429775e3) /* abamp s / mol */
#define GSL_CONST_CGSM_ELECTRON_CHARGE (1.602176487e-20) /* abamp s */
#define GSL_CONST_MKS_SPEED_OF_LIGHT (2.99792458e8) /* m / s */
#define GSL_CONST_MKS_GRAVITATIONAL_CONSTANT (6.673e-11) /* m^3 / kg s^2 */
#define GSL_CONST_MKS_ASTRONOMICAL_UNIT (1.49597870691e11) /* m */
#define GSL_CONST_MKS_LIGHT_YEAR (9.46053620707e15) /* m */
#define GSL_CONST_MKS_PARSEC (3.08567758135e16) /* m */
#define GSL_CONST_MKS_GRAV_ACCEL (9.80665e0) /* m / s^2 */
#define GSL_CONST_MKS_ELECTRON_VOLT (1.602176487e-19) /* kg m^2 / s^2 */
#define GSL_CONST_MKS_MASS_ELECTRON (9.10938188e-31) /* kg */
#define GSL_CONST_MKS_MASS_MUON (1.88353109e-28) /* kg */
#define GSL_CONST_MKS_MASS_PROTON (1.67262158e-27) /* kg */
#define GSL_CONST_MKS_MASS_NEUTRON (1.67492716e-27) /* kg */
#define GSL_CONST_MKS_RYDBERG (2.17987196968e-18) /* kg m^2 / s^2 */
#define GSL_CONST_MKS_BOLTZMANN (1.3806504e-23) /* kg m^2 / K s^2 */
#define GSL_CONST_MKS_MOLAR_GAS (8.314472e0) /* kg m^2 / K mol s^2 */
#define GSL_CONST_MKS_STANDARD_GAS_VOLUME (2.2710981e-2) /* m^3 / mol */
#define GSL_CONST_MKS_MINUTE (6e1) /* s */
#define GSL_CONST_MKS_HOUR (3.6e3) /* s */
#define GSL_CONST_MKS_DAY (8.64e4) /* s */
#define GSL_CONST_MKS_WEEK (6.048e5) /* s */
#define GSL_CONST_MKS_INCH (2.54e-2) /* m */
#define GSL_CONST_MKS_FOOT (3.048e-1) /* m */
#define GSL_CONST_MKS_YARD (9.144e-1) /* m */
#define GSL_CONST_MKS_MILE (1.609344e3) /* m */
#define GSL_CONST_MKS_NAUTICAL_MILE (1.852e3) /* m */
#define GSL_CONST_MKS_FATHOM (1.8288e0) /* m */
#define GSL_CONST_MKS_MIL (2.54e-5) /* m */
#define GSL_CONST_MKS_POINT (3.52777777778e-4) /* m */
#define GSL_CONST_MKS_TEXPOINT (3.51459803515e-4) /* m */
#define GSL_CONST_MKS_MICRON (1e-6) /* m */
#define GSL_CONST_MKS_ANGSTROM (1e-10) /* m */
#define GSL_CONST_MKS_HECTARE (1e4) /* m^2 */
#define GSL_CONST_MKS_ACRE (4.04685642241e3) /* m^2 */
#define GSL_CONST_MKS_BARN (1e-28) /* m^2 */
#define GSL_CONST_MKS_LITER (1e-3) /* m^3 */
#define GSL_CONST_MKS_US_GALLON (3.78541178402e-3) /* m^3 */
#define GSL_CONST_MKS_QUART (9.46352946004e-4) /* m^3 */
#define GSL_CONST_MKS_PINT (4.73176473002e-4) /* m^3 */
#define GSL_CONST_MKS_CUP (2.36588236501e-4) /* m^3 */
#define GSL_CONST_MKS_FLUID_OUNCE (2.95735295626e-5) /* m^3 */
#define GSL_CONST_MKS_TABLESPOON (1.47867647813e-5) /* m^3 */
#define GSL_CONST_MKS_TEASPOON (4.92892159375e-6) /* m^3 */
#define GSL_CONST_MKS_CANADIAN_GALLON (4.54609e-3) /* m^3 */
#define GSL_CONST_MKS_UK_GALLON (4.546092e-3) /* m^3 */
#define GSL_CONST_MKS_MILES_PER_HOUR (4.4704e-1) /* m / s */
#define GSL_CONST_MKS_KILOMETERS_PER_HOUR (2.77777777778e-1) /* m / s */
#define GSL_CONST_MKS_KNOT (5.14444444444e-1) /* m / s */
#define GSL_CONST_MKS_POUND_MASS (4.5359237e-1) /* kg */
#define GSL_CONST_MKS_OUNCE_MASS (2.8349523125e-2) /* kg */
#define GSL_CONST_MKS_TON (9.0718474e2) /* kg */
#define GSL_CONST_MKS_METRIC_TON (1e3) /* kg */
#define GSL_CONST_MKS_UK_TON (1.0160469088e3) /* kg */
#define GSL_CONST_MKS_TROY_OUNCE (3.1103475e-2) /* kg */
#define GSL_CONST_MKS_CARAT (2e-4) /* kg */
#define GSL_CONST_MKS_UNIFIED_ATOMIC_MASS (1.660538782e-27) /* kg */
#define GSL_CONST_MKS_GRAM_FORCE (9.80665e-3) /* kg m / s^2 */
#define GSL_CONST_MKS_POUND_FORCE (4.44822161526e0) /* kg m / s^2 */
#define GSL_CONST_MKS_KILOPOUND_FORCE (4.44822161526e3) /* kg m / s^2 */
#define GSL_CONST_MKS_POUNDAL (1.38255e-1) /* kg m / s^2 */
#define GSL_CONST_MKS_CALORIE (4.1868e0) /* kg m^2 / s^2 */
#define GSL_CONST_MKS_BTU (1.05505585262e3) /* kg m^2 / s^2 */
#define GSL_CONST_MKS_THERM (1.05506e8) /* kg m^2 / s^2 */
#define GSL_CONST_MKS_HORSEPOWER (7.457e2) /* kg m^2 / s^3 */
#define GSL_CONST_MKS_BAR (1e5) /* kg / m s^2 */
#define GSL_CONST_MKS_STD_ATMOSPHERE (1.01325e5) /* kg / m s^2 */
#define GSL_CONST_MKS_TORR (1.33322368421e2) /* kg / m s^2 */
#define GSL_CONST_MKS_METER_OF_MERCURY (1.33322368421e5) /* kg / m s^2 */
#define GSL_CONST_MKS_INCH_OF_MERCURY (3.38638815789e3) /* kg / m s^2 */
#define GSL_CONST_MKS_INCH_OF_WATER (2.490889e2) /* kg / m s^2 */
#define GSL_CONST_MKS_PSI (6.89475729317e3) /* kg / m s^2 */
#define GSL_CONST_MKS_POISE (1e-1) /* kg m^-1 s^-1 */
#define GSL_CONST_MKS_STOKES (1e-4) /* m^2 / s */
#define GSL_CONST_MKS_STILB (1e4) /* cd / m^2 */
#define GSL_CONST_MKS_LUMEN (1e0) /* cd sr */
#define GSL_CONST_MKS_LUX (1e0) /* cd sr / m^2 */
#define GSL_CONST_MKS_PHOT (1e4) /* cd sr / m^2 */
#define GSL_CONST_MKS_FOOTCANDLE (1.076e1) /* cd sr / m^2 */
#define GSL_CONST_MKS_LAMBERT (1e4) /* cd sr / m^2 */
#define GSL_CONST_MKS_FOOTLAMBERT (1.07639104e1) /* cd sr / m^2 */
#define GSL_CONST_MKS_CURIE (3.7e10) /* 1 / s */
#define GSL_CONST_MKS_ROENTGEN (2.58e-4) /* A s / kg */
#define GSL_CONST_MKS_RAD (1e-2) /* m^2 / s^2 */
#define GSL_CONST_MKS_SOLAR_MASS (1.98892e30) /* kg */
#define GSL_CONST_MKS_BOHR_RADIUS (5.291772083e-11) /* m */
#define GSL_CONST_MKS_NEWTON (1e0) /* kg m / s^2 */
#define GSL_CONST_MKS_DYNE (1e-5) /* kg m / s^2 */
#define GSL_CONST_MKS_JOULE (1e0) /* kg m^2 / s^2 */
#define GSL_CONST_MKS_ERG (1e-7) /* kg m^2 / s^2 */
#define GSL_CONST_MKS_BOHR_MAGNETON (9.27400899e-24) /* A m^2 */
#define GSL_CONST_MKS_NUCLEAR_MAGNETON (5.05078317e-27) /* A m^2 */
#define GSL_CONST_MKS_ELECTRON_MAGNETIC_MOMENT (9.28476362e-24) /* A m^2 */
#define GSL_CONST_MKS_PROTON_MAGNETIC_MOMENT (1.410606633e-26) /* A m^2 */
#define GSL_CONST_MKS_FARADAY (9.64853429775e4) /* A s / mol */
#define GSL_CONST_MKS_ELECTRON_CHARGE (1.602176487e-19) /* A s */
#define GSL_CONST_MKS_VACUUM_PERMITTIVITY (8.854187817e-12) /* A^2 s^4 / kg m^3 */
#define GSL_CONST_MKS_VACUUM_PERMEABILITY (1.25663706144e-6) /* kg m / A^2 s^2 */
#define GSL_CONST_MKS_GAUSS (1e-4) /* kg / A s^2 */

/***********************/
/* Global declarations */
/***********************/

extern A68_CHANNEL stand_in_channel, stand_out_channel, stand_draw_channel, stand_back_channel, stand_error_channel, associate_channel, skip_channel;
extern A68_FORMAT nil_format;
extern A68_HANDLE nil_handle, *free_handles, *busy_handles;
extern A68_REF nil_ref, stand_in, stand_out, skip_file;
extern ADDR_T fixed_heap_pointer, temp_heap_pointer, frame_pointer, stack_pointer, heap_pointer, handle_pointer, global_pointer, frame_start, frame_end, stack_start, stack_end, finish_frame_pointer;
extern BOOL_T halt_typing, heap_is_fluid, in_execution, in_monitor, do_confirm_exit, no_warnings, close_tty_on_exit;
extern BYTE_T *stack_segment, *heap_segment, *handle_segment, *system_stack_offset;
extern KEYWORD_T *top_keyword;
extern MODES_T a68_modes;
extern MODULE_T program;
extern NODE_T **node_register;
extern POSTULATE_T *top_postulate, *top_postulate_list;
extern TABLE_T *a68g_standenv;
extern TAG_T *error_tag;
extern TOKEN_T *top_token;
extern char **global_argv, *watchpoint_expression, a68g_cmd_name[], output_line[], edit_line[], input_line[];
extern clock_t clock_res;
extern double cputime_0, garbage_seconds;
extern int frame_stack_size, expr_stack_size, heap_size, handle_pool_size, free_handle_count, max_handle_count, garbage_collects, global_argc, global_level, max_lex_lvl, new_nodes, new_modes, new_postulates, new_node_infos, new_genie_infos, stack_limit, frame_stack_limit, expr_stack_limit, stack_size, storage_overhead, symbol_table_count, mode_count, term_heigth, term_width, varying_mp_digits;
extern jmp_buf genie_exit_label;

#if defined HAVE_CURSES
extern BOOL_T a68g_curses_mode;
#endif

#if defined HAVE_PARALLEL_CLAUSE
extern pthread_t main_thread_id;
#define SAME_THREAD(p, q) (pthread_equal((p), (q)) != 0)
#define OTHER_THREAD(p, q) (pthread_equal((p), (q)) == 0)
#endif

#if defined HAVE_WIN32
extern int finite (double);
#endif

extern A68_REF genie_make_row (NODE_T *, MOID_T *, int, ADDR_T);
extern A68_REF c_string_to_row_char (NODE_T *, char *, int);
extern A68_REF c_to_a_string (NODE_T *, char *, int);
extern A68_REF empty_row (NODE_T *, MOID_T *);
extern A68_REF empty_string (NODE_T *);
extern A68_REF genie_store (NODE_T *, MOID_T *, A68_REF *, A68_REF *);
extern A68_REF heap_generator (NODE_T *, MOID_T *, int);
extern ADDR_T calculate_internal_index (A68_TUPLE *, int);
extern BOOL_T a68g_mkstemp(char *, int, mode_t);
extern BOOL_T close_device (NODE_T *, A68_FILE *);
extern BOOL_T genie_int_case_unit (NODE_T *, int, int *);
extern BOOL_T genie_string_to_value_internal (NODE_T *, MOID_T *, char *, BYTE_T *);
extern BOOL_T increment_internal_index (A68_TUPLE *, int);
extern BOOL_T lexical_analyser (void);
extern BOOL_T match_string (char *, char *, char);
extern BOOL_T set_options (OPTION_LIST_T *, BOOL_T);
extern BOOL_T whether (NODE_T * p, ...);
extern BOOL_T is_coercion (NODE_T *);
extern BOOL_T is_firm (MOID_T *, MOID_T *);
extern BOOL_T is_modes_equivalent (MOID_T *, MOID_T *);
extern BOOL_T is_new_lexical_level (NODE_T *);
extern BOOL_T is_one_of (NODE_T * p, ...);
extern BOOL_T is_subset (MOID_T *, MOID_T *, int);
extern BOOL_T is_unitable (MOID_T *, MOID_T *, int);
extern BYTE_T *get_fixed_heap_space (size_t);
extern BYTE_T *get_heap_space (size_t);
extern BYTE_T *get_temp_heap_space (size_t);
extern FILE *a68g_fopen (char *, char *, char *);
extern FILE_T open_physical_file (NODE_T *, A68_REF, int, mode_t);
extern GINFO_T *new_genie_info (void);
extern KEYWORD_T *find_keyword (KEYWORD_T *, char *);
extern KEYWORD_T *find_keyword_from_attribute (KEYWORD_T *, int);
extern MOID_T *add_mode (MOID_T **, int, int, NODE_T *, MOID_T *, PACK_T *);
extern MOID_T *depref_completely (MOID_T *);
extern MOID_T *new_moid (void);
extern MOID_T *unites_to (MOID_T *, MOID_T *);
extern NODE_INFO_T *new_node_info (void);
extern NODE_T *get_next_format_pattern (NODE_T *, A68_REF, BOOL_T);
extern NODE_T *last_unit;
extern NODE_T *new_node (void);
extern NODE_T *some_node (char *);
extern PACK_T *new_pack (void);
extern POSTULATE_T *is_postulated (POSTULATE_T *, MOID_T *);
extern POSTULATE_T *is_postulated_pair (POSTULATE_T *, MOID_T *, MOID_T *);
extern LINE_T *new_source_line (void);
extern TABLE_T *find_level (NODE_T *, int);
extern TABLE_T *new_symbol_table (TABLE_T *);
extern TAG_T *add_tag (TABLE_T *, int, NODE_T *, MOID_T *, int);
extern TAG_T *find_tag_global (TABLE_T *, int, char *);
extern TAG_T *find_tag_local (TABLE_T *, int, char *);
extern TAG_T *new_tag (void);
extern TOKEN_T *add_token (TOKEN_T **, char *);
extern char *a68g_strchr (char *, int);
extern char *a_to_c_string (NODE_T *, char *, A68_REF);
extern char *ctrl_char (int);
extern char *error_chars (char *, int);
extern char *error_specification (void);
extern char *fixed (NODE_T * p);
extern char *get_transput_buffer (int);
extern char *moid_to_string (MOID_T *, int, NODE_T *);
extern char *new_fixed_string (char *);
extern char *new_string (char *, ...);
extern char *new_temp_string (char *);
extern char *non_terminal_string (char *, int);
extern char *phrase_to_text (NODE_T *, NODE_T **);
extern char *propagator_name (PROP_PROC *p);
extern char *read_string_from_tty (char *);
extern char *standard_environ_proc_name (GPROC);
extern char *sub_fixed (NODE_T *, double, int, int);
extern char *sub_whole (NODE_T *, int, int);
extern char *whole (NODE_T * p);
extern char digit_to_char (int);
extern char pop_char_transput_buffer (int);
extern double a68g_acosh (double);
extern double a68g_asinh (double);
extern double a68g_atan2 (double, double);
extern double a68g_atanh (double);
extern double a68g_exp (double);
extern double a68g_hypot (double, double);
extern double a68g_log1p (double);
extern double a68g_pow_real (double, double);
extern double a68g_pow_real_int (double, int);
extern double curt (double);
extern double inverf (double);
extern double inverfc (double);
extern double rng_53_bit (void);
extern double seconds (void);
extern double ten_up (int);
extern int a68_string_size (NODE_T *, A68_REF);
extern int a68g_round (double);
extern int char_scanner (A68_FILE *);
extern int count_pack_members (PACK_T *);
extern int end_of_format (NODE_T *, A68_REF);
extern int first_tag_global (TABLE_T *, char *);
extern int get_replicator_value (NODE_T *, BOOL_T);
extern int get_row_size (A68_TUPLE *, int);
extern int get_transput_buffer_index (int);
extern int get_transput_buffer_size (int);
extern int get_unblocked_transput_buffer (NODE_T *);
extern int grep_in_string (char *, char *, int *, int *);
extern int heap_available (void);
extern int moid_digits (MOID_T *);
extern int moid_size (MOID_T *);
extern int store_file_entry (NODE_T *, FILE_T, char *, BOOL_T);
extern int is_identifier_or_label_global (TABLE_T *, char *);
extern ssize_t io_read (FILE_T, void *, size_t);
extern ssize_t io_read_conv (FILE_T, void *, size_t);
extern ssize_t io_write (FILE_T, const void *, size_t);
extern ssize_t io_write_conv (FILE_T, const void *, size_t);
extern unsigned a68g_strtoul (char *, char **, int);
extern void a68g_cos_complex (A68_REAL *, A68_REAL *);
extern void a68g_div_complex (A68_REAL *, A68_REAL *, A68_REAL *);
extern void a68g_exit (int);
extern void a68g_exp_complex (A68_REAL *, A68_REAL *);
extern void a68g_getty (int *, int *);
extern void a68g_ln_complex (A68_REAL *, A68_REAL *);
extern void a68g_sin_complex (A68_REAL *, A68_REAL *);
extern void a68g_sqrt_complex (A68_REAL *, A68_REAL *);
extern void abend (char *, char *, char *, int);
extern void add_a_string_transput_buffer (NODE_T *, int, BYTE_T *);
extern void add_char_transput_buffer (NODE_T *, int, char);
extern void add_mode_to_pack (PACK_T **, MOID_T *, char *, NODE_T *);
extern void add_mode_to_pack_end (PACK_T **, MOID_T *, char *, NODE_T *);
extern void add_option_list (OPTION_LIST_T **, char *, LINE_T *);
extern void add_string_from_stack_transput_buffer (NODE_T *, int);
extern void add_string_transput_buffer (NODE_T *, int, char *);
extern void apropos (FILE_T, char *, char *);
extern void assign_offsets (NODE_T *);
extern void assign_offsets_packs (MOID_T *);
extern void assign_offsets_table (TABLE_T *);
extern void bind_format_tags_to_tree (NODE_T *);
extern void bind_routine_tags_to_tree (NODE_T *);
extern void bottom_up_error_check (NODE_T *);
extern void bottom_up_parser (NODE_T *);
extern void bufcat (char *, char *, int);
extern void bufcpy (char *, char *, int);
extern void change_breakpoints (NODE_T *, unsigned, int, BOOL_T *, char *);
extern void change_masks (NODE_T *, unsigned, BOOL_T);
extern void check_parenthesis (NODE_T *);
extern void coercion_inserter (NODE_T *);
extern void collect_taxes (NODE_T *);
extern void compiler (FILE_T);
extern void default_options (MODULE_T *);
extern void diagnostic_line (STATUS_MASK, LINE_T *, char *, char *, ...);
extern void diagnostic_node (STATUS_MASK, NODE_T *, char *, ...);
extern void diagnostics_to_terminal (LINE_T *, int);
extern void discard_heap (void);
extern void end_of_file_error (NODE_T * p, A68_REF ref_file);
extern void enlarge_transput_buffer (NODE_T *, int, int);
extern void exit_genie (NODE_T *, int);
extern void fill_symbol_table_outer (NODE_T *, TABLE_T *);
extern void finalise_symbol_table_setup (NODE_T *, int);
extern void format_error (NODE_T *, A68_REF, char *);
extern void free_file_entries (void);
extern void free_genie_heap (NODE_T *);
extern void free_postulate_list (POSTULATE_T *, POSTULATE_T *);
extern void gc_heap (NODE_T *, ADDR_T);
extern void genie (void *);
extern void genie_argc (NODE_T *);
extern void genie_argv (NODE_T *);
extern void genie_a68g_argc (NODE_T *);
extern void genie_a68g_argv (NODE_T *);
extern void genie_call_operator (NODE_T *, ADDR_T);
extern void genie_call_procedure (NODE_T *, MOID_T *, MOID_T *, MOID_T *, A68_PROCEDURE *, ADDR_T, ADDR_T);
extern void genie_call_event_routine (NODE_T *, MOID_T *, A68_PROCEDURE *, ADDR_T, ADDR_T);
extern void genie_check_initialisation (NODE_T *, BYTE_T *, MOID_T *);
extern void genie_columns (NODE_T *);
extern void genie_create_pipe (NODE_T *);
extern void genie_declaration (NODE_T *);
extern void genie_enquiry_clause (NODE_T *);
extern void genie_errno (NODE_T *);
extern void genie_execve (NODE_T *);
extern void genie_execve_child (NODE_T *);
extern void genie_execve_child_pipe (NODE_T *);
extern void genie_execve_output (NODE_T *);
extern void genie_f_and_becomes (NODE_T *, MOID_T *, GPROC *);
extern void genie_find_proc_op (NODE_T *, int *);
extern void genie_fork (NODE_T *);
extern void genie_generator_bounds (NODE_T *);
extern void genie_generator_internal (NODE_T *, MOID_T *, TAG_T *, LEAP_T, ADDR_T);
extern void genie_getenv (NODE_T *);
extern void genie_identity_dec (NODE_T *);
extern void genie_init_heap (NODE_T *);
extern void genie_init_rng (void);
extern void genie_localtime (NODE_T *);
extern void genie_operator_dec (NODE_T *);
extern void genie_preprocess (NODE_T *, int *, void *);
extern void genie_proc_variable_dec (NODE_T *);
extern void genie_push_undefined (NODE_T *, MOID_T *);
extern void genie_read_standard (NODE_T *, MOID_T *, BYTE_T *, A68_REF);
extern void genie_reset_errno (NODE_T *);
extern void genie_rows (NODE_T *);
extern void genie_serial_clause (NODE_T *, jmp_buf *);
extern void genie_serial_units (NODE_T *, NODE_T **, jmp_buf *, int);
extern void genie_strerror (NODE_T *);
extern void genie_string_to_value (NODE_T *, MOID_T *, BYTE_T *, A68_REF);
extern void genie_subscript (NODE_T *, A68_TUPLE **, int *, NODE_T **);
extern void genie_utctime (NODE_T *);
extern void genie_value_to_string (NODE_T *, MOID_T *, BYTE_T *, int);
extern void genie_variable_dec (NODE_T *, NODE_T **, ADDR_T);
extern void genie_waitpid (NODE_T *);
extern void genie_write_standard (NODE_T *, MOID_T *, BYTE_T *, A68_REF);
extern void get_global_level (NODE_T *);
extern void get_max_simplout_size (NODE_T *);
extern void get_refinements (void);
extern void get_stack_size (void);
extern void indenter (MODULE_T *);
extern BOOL_T folder_mode (MOID_T *);
extern void push_unit (NODE_T *);
extern BOOL_T constant_unit (NODE_T *);
extern void init_curses (void);
extern void init_file_entries (void);
extern void init_file_entry (int);
extern void init_heap (void);
extern void init_options (void);
extern void init_postulates (void);
extern void init_rng (unsigned long);
extern void init_tty (void);
extern void initialise_frame (NODE_T *);
extern void initialise_internal_index (A68_TUPLE *, int);
extern void install_signal_handlers (void);
extern void io_close_tty_line (void);
extern void io_write_string (FILE_T, const char *);
extern void isolate_options (char *, LINE_T *);
extern void jumps_from_procs (NODE_T * p);
extern void list_source_line (FILE_T, LINE_T *, BOOL_T);
extern void make_postulate (POSTULATE_T **, MOID_T *, MOID_T *);
extern void make_special_mode (MOID_T **, int);
extern void make_standard_environ (void);
extern void make_sub (NODE_T *, NODE_T *, int);
extern void make_moid_list (MODULE_T *);
extern void mark_auxilliary (NODE_T *);
extern void mark_jump_in_par (NODE_T *, BOOL_T);
extern void mark_moids (NODE_T *);
extern void mode_checker (NODE_T *);
extern void monitor_error (char *, char *);
extern void on_event_handler (NODE_T *, A68_PROCEDURE, A68_REF);
extern void online_help (FILE_T);
extern void open_error (NODE_T *, A68_REF, char *);
extern void pattern_error (NODE_T *, MOID_T *, int);
extern void portcheck (NODE_T *);
extern void preliminary_symbol_table_setup (NODE_T *);
extern void print_bytes (BYTE_T *, int);
extern void print_internal_index (FILE_T, A68_TUPLE *, int);
extern void print_item (NODE_T *, FILE_T, BYTE_T *, MOID_T *);
extern void print_mode_flat (FILE_T, MOID_T *);
extern void prune_echoes (OPTION_LIST_T *);
extern void put_refinements (void);
extern void read_env_options (void);
extern void read_insertion (NODE_T *, A68_REF);
extern void read_rc_options (void);
extern void read_sound (NODE_T *, A68_REF, A68_SOUND *);
extern void rearrange_goto_less_jumps (NODE_T *);
extern void register_nodes (NODE_T *);
extern void renumber_moids (MOID_T *, int);
extern void renumber_nodes (NODE_T *, int *);
extern void reset_symbol_table_nest_count (NODE_T *);
extern void reset_transput_buffer (int);
extern void scan_error (LINE_T *, char *, char *);
extern void scope_checker (NODE_T *);
extern void set_default_event_procedure (A68_PROCEDURE *);
extern void set_default_event_procedures (A68_FILE *);
extern void set_moid_sizes (MOID_T *);
extern void set_nest (NODE_T *, NODE_T *);
extern void set_proc_level (NODE_T *, int);
extern void set_transput_buffer_index (int, int);
extern void set_transput_buffer_size (int, int);
extern void set_up_tables (void);
extern void single_step (NODE_T *, unsigned);
extern void stack_dump (FILE_T, ADDR_T, int, int *);
extern void standardise (double *, int, int, int *);
extern void state_license (FILE_T);
extern void state_version (FILE_T);
extern void substitute_brackets (NODE_T *);
extern void tie_label_to_serial (NODE_T *);
extern void tie_label_to_unit (NODE_T *);
extern void top_down_parser (NODE_T *);
extern void transput_error (NODE_T *, A68_REF, MOID_T *);
extern void tree_listing (FILE_T, NODE_T *, int, LINE_T *, int *);
extern void unchar_scanner (NODE_T *, A68_FILE *, char);
extern void value_error (NODE_T *, MOID_T *, A68_REF);
extern void victal_checker (NODE_T *);
extern void warn_for_unused_tags (NODE_T *);
extern void where_in_source (FILE_T, NODE_T *);
extern void widen_denotation (NODE_T *);
extern void write_insertion (NODE_T *, A68_REF, unsigned);
extern void write_listing (void);
extern void write_listing_header (void);
extern void write_object_listing (void);
extern void write_purge_buffer (NODE_T *, A68_REF, int);
extern void write_sound (NODE_T *, A68_REF, A68_SOUND *);
extern void write_source_line (FILE_T, LINE_T *, NODE_T *, int);
extern void write_source_listing (void);
extern void write_tree_listing (void);

#if defined HAVE_CURSES
#endif

#if defined HAVE_PARALLEL_CLAUSE
extern BOOL_T is_main_thread (void);
extern void genie_abend_all_threads (NODE_T *, jmp_buf *, NODE_T *);
extern void genie_set_exit_from_threads (int);
#endif

/* External multi-precision procedures */

extern BOOL_T check_long_int (MP_T *);
extern BOOL_T check_longlong_int (MP_T *);
extern BOOL_T check_mp_int (MP_T *, MOID_T *);
extern MP_T *abs_mp (NODE_T *, MP_T *, MP_T *, int);
extern MP_T *minus_mp (NODE_T *, MP_T *, MP_T *, int);
extern MP_T *round_mp (NODE_T *, MP_T *, MP_T *, int);
extern MP_T *entier_mp (NODE_T *, MP_T *, MP_T *, int);
extern void eq_mp (NODE_T *, A68_BOOL *, MP_T *, MP_T *, int);
extern void ne_mp (NODE_T *, A68_BOOL *, MP_T *, MP_T *, int);
extern void lt_mp (NODE_T *, A68_BOOL *, MP_T *, MP_T *, int);
extern void le_mp (NODE_T *, A68_BOOL *, MP_T *, MP_T *, int);
extern void gt_mp (NODE_T *, A68_BOOL *, MP_T *, MP_T *, int);
extern void ge_mp (NODE_T *, A68_BOOL *, MP_T *, MP_T *, int);
extern MP_T *acos_mp (NODE_T *, MP_T *, MP_T *, int);
extern MP_T *acosh_mp (NODE_T *, MP_T *, MP_T *, int);
extern MP_T *add_mp (NODE_T *, MP_T *, MP_T *, MP_T *, int);
extern MP_T *asin_mp (NODE_T *, MP_T *, MP_T *, int);
extern MP_T *asinh_mp (NODE_T *, MP_T *, MP_T *, int);
extern MP_T *atan2_mp (NODE_T *, MP_T *, MP_T *, MP_T *, int);
extern MP_T *atan_mp (NODE_T *, MP_T *, MP_T *, int);
extern MP_T *atanh_mp (NODE_T *, MP_T *, MP_T *, int);
extern MP_T *cacos_mp (NODE_T *, MP_T *, MP_T *, int);
extern MP_T *casin_mp (NODE_T *, MP_T *, MP_T *, int);
extern MP_T *catan_mp (NODE_T *, MP_T *, MP_T *, int);
extern MP_T *ccos_mp (NODE_T *, MP_T *, MP_T *, int);
extern MP_T *cdiv_mp (NODE_T *, MP_T *, MP_T *, MP_T *, MP_T *, int);
extern MP_T *cexp_mp (NODE_T *, MP_T *, MP_T *, int);
extern MP_T *cln_mp (NODE_T *, MP_T *, MP_T *, int);
extern MP_T *cmul_mp (NODE_T *, MP_T *, MP_T *, MP_T *, MP_T *, int);
extern MP_T *cos_mp (NODE_T *, MP_T *, MP_T *, int);
extern MP_T *cosh_mp (NODE_T *, MP_T *, MP_T *, int);
extern MP_T *csin_mp (NODE_T *, MP_T *, MP_T *, int);
extern MP_T *csqrt_mp (NODE_T *, MP_T *, MP_T *, int);
extern MP_T *ctan_mp (NODE_T *, MP_T *, MP_T *, int);
extern MP_T *curt_mp (NODE_T *, MP_T *, MP_T *, int);
extern MP_T *div_mp (NODE_T *, MP_T *, MP_T *, MP_T *, int);
extern MP_T *div_mp_digit (NODE_T *, MP_T *, MP_T *, MP_T, int);
extern MP_T *exp_mp (NODE_T *, MP_T *, MP_T *, int);
extern MP_T *expm1_mp (NODE_T *, MP_T *, MP_T *, int);
extern MP_T *hyp_mp (NODE_T *, MP_T *, MP_T *, MP_T *, int);
extern MP_T *hypot_mp (NODE_T *, MP_T *, MP_T *, MP_T *, int);
extern MP_T *int_to_mp (NODE_T *, MP_T *, int, int);
extern MP_T *lengthen_mp (NODE_T *, MP_T *, int, MP_T *, int);
extern MP_T *ln_mp (NODE_T *, MP_T *, MP_T *, int);
extern MP_T *log_mp (NODE_T *, MP_T *, MP_T *, int);
extern MP_T *mod_mp (NODE_T *, MP_T *, MP_T *, MP_T *, int);
extern MP_T *mp_pi (NODE_T *, MP_T *, int, int);
extern MP_T *mp_ten_up (NODE_T *, MP_T *, int, int);
extern MP_T *mul_mp (NODE_T *, MP_T *, MP_T *, MP_T *, int);
extern MP_T *mul_mp_digit (NODE_T *, MP_T *, MP_T *, MP_T, int);
extern MP_T *over_mp (NODE_T *, MP_T *, MP_T *, MP_T *, int);
extern MP_T *over_mp_digit (NODE_T *, MP_T *, MP_T *, MP_T, int);
extern MP_T *pack_mp_bits (NODE_T *, MP_T *, unsigned *, MOID_T *);
extern MP_T *pow_mp_int (NODE_T *, MP_T *, MP_T *, int, int);
extern MP_T *real_to_mp (NODE_T *, MP_T *, double, int);
extern MP_T *set_mp_short (MP_T *, MP_T, int, int);
extern MP_T *shorten_mp (NODE_T *, MP_T *, int, MP_T *, int);
extern MP_T *sin_mp (NODE_T *, MP_T *, MP_T *, int);
extern MP_T *sinh_mp (NODE_T *, MP_T *, MP_T *, int);
extern MP_T *sqrt_mp (NODE_T *, MP_T *, MP_T *, int);
extern MP_T *string_to_mp (NODE_T *, MP_T *, char *, int);
extern MP_T *sub_mp (NODE_T *, MP_T *, MP_T *, MP_T *, int);
extern MP_T *tan_mp (NODE_T *, MP_T *, MP_T *, int);
extern MP_T *tanh_mp (NODE_T *, MP_T *, MP_T *, int);
extern MP_T *unsigned_to_mp (NODE_T *, MP_T *, unsigned, int);
extern char *long_sub_fixed (NODE_T *, MP_T *, int, int, int);
extern char *long_sub_whole (NODE_T *, MP_T *, int, int);
extern double mp_to_real (NODE_T *, MP_T *, int);
extern int get_mp_bits_width (MOID_T *);
extern int get_mp_bits_words (MOID_T *);
extern int int_to_mp_digits (int);
extern int long_mp_digits (void);
extern int longlong_mp_digits (void);
extern int mp_to_int (NODE_T *, MP_T *, int);
extern size_t size_long_mp (void);
extern size_t size_longlong_mp (void);
extern unsigned *stack_mp_bits (NODE_T *, MP_T *, MOID_T *);
extern unsigned mp_to_unsigned (NODE_T *, MP_T *, int);
extern void check_long_bits_value (NODE_T *, MP_T *, MOID_T *);
extern void long_standardise (NODE_T *, MP_T *, int, int, int, int *);
extern void raw_write_mp (char *, MP_T *, int);
extern void set_longlong_mp_digits (int);
extern void trunc_mp (NODE_T *, MP_T *, MP_T *, int);

/* Standard prelude RTS */

extern GPROC genie_abend;
extern GPROC genie_abs_bits;
extern GPROC genie_abs_bool;
extern GPROC genie_abs_char;
extern GPROC genie_abs_complex;
extern GPROC genie_abs_int;
extern GPROC genie_abs_long_complex;
extern GPROC genie_abs_long_mp;
extern GPROC genie_abs_real;
extern GPROC genie_acos_long_complex;
extern GPROC genie_acos_long_mp;
extern GPROC genie_acronym;
extern GPROC genie_add_bytes;
extern GPROC genie_add_char;
extern GPROC genie_add_complex;
extern GPROC genie_add_int;
extern GPROC genie_add_long_bytes;
extern GPROC genie_add_long_complex;
extern GPROC genie_add_long_int;
extern GPROC genie_add_long_mp;
extern GPROC genie_add_real;
extern GPROC genie_add_string;
extern GPROC genie_and_bits;
extern GPROC genie_and_bool;
extern GPROC genie_and_long_mp;
extern GPROC genie_arccos_complex;
extern GPROC genie_arccos_real;
extern GPROC genie_arccosh_complex;
extern GPROC genie_arccosh_long_mp;
extern GPROC genie_arccosh_real;
extern GPROC genie_arcsin_complex;
extern GPROC genie_arcsin_real;
extern GPROC genie_arcsinh_complex;
extern GPROC genie_arcsinh_long_mp;
extern GPROC genie_arcsinh_real;
extern GPROC genie_arctan_complex;
extern GPROC genie_arctan_real;
extern GPROC genie_arctanh_complex;
extern GPROC genie_arctanh_long_mp;
extern GPROC genie_arctanh_real;
extern GPROC genie_arg_complex;
extern GPROC genie_arg_long_complex;
extern GPROC genie_asin_long_complex;
extern GPROC genie_asin_long_mp;
extern GPROC genie_associate;
extern GPROC genie_atan2_long_mp;
extern GPROC genie_atan2_real;
extern GPROC genie_atan_long_complex;
extern GPROC genie_atan_long_mp;
extern GPROC genie_backspace;
extern GPROC genie_bin_int;
extern GPROC genie_bin_long_mp;
extern GPROC genie_bin_possible;
extern GPROC genie_bits_lengths;
extern GPROC genie_bits_pack;
extern GPROC genie_bits_shorths;
extern GPROC genie_bits_width;
extern GPROC genie_blank_char;
extern GPROC genie_block;
extern GPROC genie_break;
extern GPROC genie_bytes_lengths;
extern GPROC genie_bytes_shorths;
extern GPROC genie_bytes_width;
extern GPROC genie_bytespack;
extern GPROC genie_cd;
extern GPROC genie_char_in_string;
extern GPROC genie_clear_bits;
extern GPROC genie_clear_long_bits;
extern GPROC genie_clear_longlong_bits;
extern GPROC genie_close;
extern GPROC genie_complex_lengths;
extern GPROC genie_complex_shorths;
extern GPROC genie_compressible;
extern GPROC genie_conj_complex;
extern GPROC genie_conj_long_complex;
extern GPROC genie_cos_complex;
extern GPROC genie_cos_long_complex;
extern GPROC genie_cos_long_mp;
extern GPROC genie_cos_real;
extern GPROC genie_cosh_complex;
extern GPROC genie_cosh_long_mp;
extern GPROC genie_cosh_real;
extern GPROC genie_cputime;
extern GPROC genie_create;
extern GPROC genie_curt_long_mp;
extern GPROC genie_curt_real;
extern GPROC genie_debug;
extern GPROC genie_directory;
extern GPROC genie_div_complex;
extern GPROC genie_div_int;
extern GPROC genie_div_long_complex;
extern GPROC genie_div_long_mp;
extern GPROC genie_div_real;
extern GPROC genie_divab_complex;
extern GPROC genie_divab_long_complex;
extern GPROC genie_divab_long_mp;
extern GPROC genie_divab_real;
extern GPROC genie_draw_possible;
extern GPROC genie_dyad_elems;
extern GPROC genie_dyad_lwb;
extern GPROC genie_dyad_upb;
extern GPROC genie_elem_bits;
extern GPROC genie_elem_bytes;
extern GPROC genie_elem_long_bits;
extern GPROC genie_elem_long_bits;
extern GPROC genie_elem_long_bytes;
extern GPROC genie_elem_longlong_bits;
extern GPROC genie_elem_string;
extern GPROC genie_entier_long_mp;
extern GPROC genie_entier_real;
extern GPROC genie_eof;
extern GPROC genie_eoln;
extern GPROC genie_eq_bits;
extern GPROC genie_eq_bool;
extern GPROC genie_eq_bytes;
extern GPROC genie_eq_char;
extern GPROC genie_eq_complex;
extern GPROC genie_eq_int;
extern GPROC genie_eq_long_bytes;
extern GPROC genie_eq_long_complex;
extern GPROC genie_eq_long_mp;
extern GPROC genie_eq_real;
extern GPROC genie_eq_string;
extern GPROC genie_erase;
extern GPROC genie_erf_real;
extern GPROC genie_erfc_real;
extern GPROC genie_error_char;
extern GPROC genie_establish;
extern GPROC genie_evaluate;
extern GPROC genie_exp_char;
extern GPROC genie_exp_complex;
extern GPROC genie_exp_long_complex;
extern GPROC genie_exp_long_mp;
extern GPROC genie_exp_real;
extern GPROC genie_exp_width;
extern GPROC genie_file_is_block_device;
extern GPROC genie_file_is_char_device;
extern GPROC genie_file_is_directory;
extern GPROC genie_file_is_regular;
extern GPROC genie_file_mode;
extern GPROC genie_first_random;
extern GPROC genie_fixed;
extern GPROC genie_flip_char;
extern GPROC genie_float;
extern GPROC genie_flop_char;
extern GPROC genie_formfeed_char;
extern GPROC genie_garbage_collections;
extern GPROC genie_garbage_freed;
extern GPROC genie_garbage_seconds;
extern GPROC genie_gc_heap;
extern GPROC genie_ge_bits;
extern GPROC genie_ge_bytes;
extern GPROC genie_ge_char;
extern GPROC genie_ge_int;
extern GPROC genie_ge_long_bits;
extern GPROC genie_ge_long_bytes;
extern GPROC genie_ge_long_mp;
extern GPROC genie_ge_real;
extern GPROC genie_ge_string;
extern GPROC genie_get_possible;
extern GPROC genie_get_sound;
extern GPROC genie_gt_bytes;
extern GPROC genie_gt_char;
extern GPROC genie_gt_int;
extern GPROC genie_gt_long_bytes;
extern GPROC genie_gt_long_mp;
extern GPROC genie_gt_real;
extern GPROC genie_gt_string;
extern GPROC genie_icomplex;
extern GPROC genie_idf;
extern GPROC genie_idle;
extern GPROC genie_iint_complex;
extern GPROC genie_im_complex;
extern GPROC genie_im_long_complex;
extern GPROC genie_init_transput;
extern GPROC genie_int_lengths;
extern GPROC genie_int_shorths;
extern GPROC genie_int_width;
extern GPROC genie_inverf_real;
extern GPROC genie_inverfc_real;
extern GPROC genie_is_alnum;
extern GPROC genie_is_alpha;
extern GPROC genie_is_cntrl;
extern GPROC genie_is_digit;
extern GPROC genie_is_graph;
extern GPROC genie_is_lower;
extern GPROC genie_is_print;
extern GPROC genie_is_punct;
extern GPROC genie_is_space;
extern GPROC genie_is_upper;
extern GPROC genie_is_xdigit;
extern GPROC genie_last_char_in_string;
extern GPROC genie_le_bits;
extern GPROC genie_le_bytes;
extern GPROC genie_le_char;
extern GPROC genie_le_int;
extern GPROC genie_le_long_bits;
extern GPROC genie_le_long_bytes;
extern GPROC genie_le_long_mp;
extern GPROC genie_le_real;
extern GPROC genie_le_string;
extern GPROC genie_leng_bytes;
extern GPROC genie_lengthen_complex_to_long_complex;
extern GPROC genie_lengthen_int_to_long_mp;
extern GPROC genie_lengthen_long_complex_to_longlong_complex;
extern GPROC genie_lengthen_long_mp_to_longlong_mp;
extern GPROC genie_lengthen_real_to_long_mp;
extern GPROC genie_lengthen_unsigned_to_long_mp;
extern GPROC genie_lj_e_12_6;
extern GPROC genie_lj_f_12_6;
extern GPROC genie_ln_complex;
extern GPROC genie_ln_long_complex;
extern GPROC genie_ln_long_mp;
extern GPROC genie_ln_real;
extern GPROC genie_lock;
extern GPROC genie_log_long_mp;
extern GPROC genie_log_real;
extern GPROC genie_long_bits_pack;
extern GPROC genie_long_bits_width;
extern GPROC genie_long_bytes_width;
extern GPROC genie_long_bytespack;
extern GPROC genie_long_exp_width;
extern GPROC genie_long_int_width;
extern GPROC genie_long_max_bits;
extern GPROC genie_long_max_int;
extern GPROC genie_long_max_real;
extern GPROC genie_long_min_real;
extern GPROC genie_long_next_random;
extern GPROC genie_long_real_width;
extern GPROC genie_long_small_real;
extern GPROC genie_longlong_bits_width;
extern GPROC genie_longlong_exp_width;
extern GPROC genie_longlong_int_width;
extern GPROC genie_longlong_max_bits;
extern GPROC genie_longlong_max_int;
extern GPROC genie_longlong_max_real;
extern GPROC genie_longlong_min_real;
extern GPROC genie_longlong_real_width;
extern GPROC genie_longlong_small_real;
extern GPROC genie_lt_bytes;
extern GPROC genie_lt_char;
extern GPROC genie_lt_int;
extern GPROC genie_lt_long_bytes;
extern GPROC genie_lt_long_mp;
extern GPROC genie_lt_real;
extern GPROC genie_lt_string;
extern GPROC genie_make_term;
extern GPROC genie_max_abs_char;
extern GPROC genie_max_bits;
extern GPROC genie_max_int;
extern GPROC genie_max_real;
extern GPROC genie_min_real;
extern GPROC genie_minus_complex;
extern GPROC genie_minus_int;
extern GPROC genie_minus_long_complex;
extern GPROC genie_minus_long_mp;
extern GPROC genie_minus_real;
extern GPROC genie_minusab_complex;
extern GPROC genie_minusab_int;
extern GPROC genie_minusab_long_complex;
extern GPROC genie_minusab_long_int;
extern GPROC genie_minusab_long_mp;
extern GPROC genie_minusab_real;
extern GPROC genie_mod_int;
extern GPROC genie_mod_long_mp;
extern GPROC genie_modab_int;
extern GPROC genie_modab_long_mp;
extern GPROC genie_monad_elems;
extern GPROC genie_monad_lwb;
extern GPROC genie_monad_upb;
extern GPROC genie_mul_complex;
extern GPROC genie_mul_int;
extern GPROC genie_mul_long_complex;
extern GPROC genie_mul_long_int;
extern GPROC genie_mul_long_mp;
extern GPROC genie_mul_real;
extern GPROC genie_ne_bits;
extern GPROC genie_ne_bool;
extern GPROC genie_ne_bytes;
extern GPROC genie_ne_char;
extern GPROC genie_ne_complex;
extern GPROC genie_ne_int;
extern GPROC genie_ne_long_bytes;
extern GPROC genie_ne_long_complex;
extern GPROC genie_ne_long_mp;
extern GPROC genie_ne_real;
extern GPROC genie_ne_string;
extern GPROC genie_new_line;
extern GPROC genie_new_page;
extern GPROC genie_new_sound;
extern GPROC genie_newline_char;
extern GPROC genie_next_random;
extern GPROC genie_next_rnd;
extern GPROC genie_not_bits;
extern GPROC genie_not_bool;
extern GPROC genie_not_long_mp;
extern GPROC genie_null_char;
extern GPROC genie_odd_int;
extern GPROC genie_odd_long_mp;
extern GPROC genie_on_file_end;
extern GPROC genie_on_format_end;
extern GPROC genie_on_format_error;
extern GPROC genie_on_gc_event;
extern GPROC genie_on_line_end;
extern GPROC genie_on_open_error;
extern GPROC genie_on_page_end;
extern GPROC genie_on_transput_error;
extern GPROC genie_on_value_error;
extern GPROC genie_open;
extern GPROC genie_or_bits;
extern GPROC genie_or_bool;
extern GPROC genie_or_long_mp;
extern GPROC genie_over_int;
extern GPROC genie_over_long_mp;
extern GPROC genie_overab_int;
extern GPROC genie_overab_long_mp;
extern GPROC genie_pi;
extern GPROC genie_pi_long_mp;
extern GPROC genie_plusab_bytes;
extern GPROC genie_plusab_complex;
extern GPROC genie_plusab_int;
extern GPROC genie_plusab_long_bytes;
extern GPROC genie_plusab_long_complex;
extern GPROC genie_plusab_long_int;
extern GPROC genie_plusab_long_mp;
extern GPROC genie_plusab_real;
extern GPROC genie_plusab_string;
extern GPROC genie_plusto_bytes;
extern GPROC genie_plusto_long_bytes;
extern GPROC genie_plusto_string;
extern GPROC genie_pow_complex_int;
extern GPROC genie_pow_int;
extern GPROC genie_pow_long_complex_int;
extern GPROC genie_pow_long_mp;
extern GPROC genie_pow_long_mp_int;
extern GPROC genie_pow_long_mp_int_int;
extern GPROC genie_pow_real;
extern GPROC genie_pow_real_int;
extern GPROC genie_preemptive_gc_heap;
extern GPROC genie_print_bits;
extern GPROC genie_print_bool;
extern GPROC genie_print_char;
extern GPROC genie_print_complex;
extern GPROC genie_print_int;
extern GPROC genie_print_long_bits;
extern GPROC genie_print_long_complex;
extern GPROC genie_print_long_int;
extern GPROC genie_print_long_real;
extern GPROC genie_print_longlong_bits;
extern GPROC genie_print_longlong_complex;
extern GPROC genie_print_longlong_int;
extern GPROC genie_print_longlong_real;
extern GPROC genie_print_real;
extern GPROC genie_print_string;
extern GPROC genie_put_bits;
extern GPROC genie_put_bool;
extern GPROC genie_put_char;
extern GPROC genie_put_complex;
extern GPROC genie_put_int;
extern GPROC genie_put_string;
extern GPROC genie_put_long_bits;
extern GPROC genie_put_long_complex;
extern GPROC genie_put_long_int;
extern GPROC genie_put_long_real;
extern GPROC genie_put_longlong_bits;
extern GPROC genie_put_longlong_complex;
extern GPROC genie_put_longlong_int;
extern GPROC genie_put_longlong_real;
extern GPROC genie_put_real;
extern GPROC genie_print_string;
extern GPROC genie_program_idf;
extern GPROC genie_put_possible;
extern GPROC genie_pwd;
extern GPROC genie_re_complex;
extern GPROC genie_re_long_complex;
extern GPROC genie_read;
extern GPROC genie_read_bin;
extern GPROC genie_read_bin_file;
extern GPROC genie_read_bits;
extern GPROC genie_read_bool;
extern GPROC genie_read_char;
extern GPROC genie_read_complex;
extern GPROC genie_read_file;
extern GPROC genie_read_file_format;
extern GPROC genie_read_format;
extern GPROC genie_read_int;
extern GPROC genie_read_long_bits;
extern GPROC genie_read_long_complex;
extern GPROC genie_read_long_int;
extern GPROC genie_read_long_real;
extern GPROC genie_read_longlong_bits;
extern GPROC genie_read_longlong_complex;
extern GPROC genie_read_longlong_int;
extern GPROC genie_read_longlong_real;
extern GPROC genie_read_real;
extern GPROC genie_read_string;
extern GPROC genie_get_bits;
extern GPROC genie_get_bool;
extern GPROC genie_get_char;
extern GPROC genie_get_complex;
extern GPROC genie_get_int;
extern GPROC genie_get_long_bits;
extern GPROC genie_get_long_complex;
extern GPROC genie_get_long_int;
extern GPROC genie_get_long_real;
extern GPROC genie_get_longlong_bits;
extern GPROC genie_get_longlong_complex;
extern GPROC genie_get_longlong_int;
extern GPROC genie_get_longlong_real;
extern GPROC genie_get_real;
extern GPROC genie_get_string;
extern GPROC genie_read_line;
extern GPROC genie_real;
extern GPROC genie_real_lengths;
extern GPROC genie_real_shorths;
extern GPROC genie_real_width;
extern GPROC genie_reidf_possible;
extern GPROC genie_repr_char;
extern GPROC genie_reset;
extern GPROC genie_reset_possible;
extern GPROC genie_round_long_mp;
extern GPROC genie_round_real;
extern GPROC genie_set;
extern GPROC genie_set_bits;
extern GPROC genie_set_long_bits;
extern GPROC genie_set_longlong_bits;
extern GPROC genie_set_possible;
extern GPROC genie_set_sound;
extern GPROC genie_set_return_code;
extern GPROC genie_shl_bits;
extern GPROC genie_shl_long_mp;
extern GPROC genie_shorten_bytes;
extern GPROC genie_shorten_long_complex_to_complex;
extern GPROC genie_shorten_long_mp_to_bits;
extern GPROC genie_shorten_long_mp_to_int;
extern GPROC genie_shorten_long_mp_to_real;
extern GPROC genie_shorten_longlong_complex_to_long_complex;
extern GPROC genie_shorten_longlong_mp_to_long_mp;
extern GPROC genie_shr_bits;
extern GPROC genie_shr_long_mp;
extern GPROC genie_sign_int;
extern GPROC genie_sign_long_mp;
extern GPROC genie_sign_real;
extern GPROC genie_sin_complex;
extern GPROC genie_sin_long_complex;
extern GPROC genie_sin_long_mp;
extern GPROC genie_sin_real;
extern GPROC genie_sinh_complex;
extern GPROC genie_sinh_long_mp;
extern GPROC genie_sinh_real;
extern GPROC genie_sleep;
extern GPROC genie_small_real;
extern GPROC genie_sort_row_string;
extern GPROC genie_sound_channels;
extern GPROC genie_sound_rate;
extern GPROC genie_sound_resolution;
extern GPROC genie_sound_samples;
extern GPROC genie_space;
extern GPROC genie_sqrt_complex;
extern GPROC genie_sqrt_long_complex;
extern GPROC genie_sqrt_long_mp;
extern GPROC genie_sqrt_real;
extern GPROC genie_stack_pointer;
extern GPROC genie_stand_back;
extern GPROC genie_stand_back_channel;
extern GPROC genie_stand_draw_channel;
extern GPROC genie_stand_error;
extern GPROC genie_stand_error_channel;
extern GPROC genie_stand_in;
extern GPROC genie_stand_in_channel;
extern GPROC genie_stand_out;
extern GPROC genie_stand_out_channel;
extern GPROC genie_string_in_string;
extern GPROC genie_sub_complex;
extern GPROC genie_sub_int;
extern GPROC genie_sub_long_complex;
extern GPROC genie_sub_long_int;
extern GPROC genie_sub_long_mp;
extern GPROC genie_sub_real;
extern GPROC genie_system;
extern GPROC genie_system_heap_pointer;
extern GPROC genie_system_stack_pointer;
extern GPROC genie_system_stack_size;
extern GPROC genie_tab_char;
extern GPROC genie_tan_complex;
extern GPROC genie_tan_long_complex;
extern GPROC genie_tan_long_mp;
extern GPROC genie_tan_real;
extern GPROC genie_tanh_complex;
extern GPROC genie_tanh_long_mp;
extern GPROC genie_tanh_real;
extern GPROC genie_term;
extern GPROC genie_times_char_int;
extern GPROC genie_times_int_char;
extern GPROC genie_times_int_string;
extern GPROC genie_times_string_int;
extern GPROC genie_timesab_complex;
extern GPROC genie_timesab_int;
extern GPROC genie_timesab_long_complex;
extern GPROC genie_timesab_long_int;
extern GPROC genie_timesab_long_mp;
extern GPROC genie_timesab_real;
extern GPROC genie_timesab_string;
extern GPROC genie_to_lower;
extern GPROC genie_to_upper;
extern GPROC genie_unimplemented;
extern GPROC genie_whole;
extern GPROC genie_write;
extern GPROC genie_write_bin;
extern GPROC genie_write_bin_file;
extern GPROC genie_write_file;
extern GPROC genie_write_file_format;
extern GPROC genie_write_format;
extern GPROC genie_xor_bits;
extern GPROC genie_xor_bool;
extern GPROC genie_xor_long_mp;

#if defined __S_IFIFO
extern GPROC genie_file_is_fifo;
#endif

#if defined __S_IFLNK
extern GPROC genie_file_is_link;
#endif

#if defined HAVE_PARALLEL_CLAUSE
extern GPROC genie_down_sema;
extern GPROC genie_level_int_sema;
extern GPROC genie_level_sema_int;
extern GPROC genie_up_sema;
#endif

#if defined HAVE_HTTP
extern GPROC genie_http_content;
extern GPROC genie_tcp_request;
#endif

#if defined HAVE_REGEX_H
extern GPROC genie_grep_in_string;
extern GPROC genie_grep_in_substring;
extern GPROC genie_sub_in_string;
#endif

/* Constants ex GSL */

extern GPROC genie_cgs_acre;
extern GPROC genie_cgs_angstrom;
extern GPROC genie_cgs_astronomical_unit;
extern GPROC genie_cgs_bar;
extern GPROC genie_cgs_barn;
extern GPROC genie_cgs_bohr_magneton;
extern GPROC genie_cgs_bohr_radius;
extern GPROC genie_cgs_boltzmann;
extern GPROC genie_cgs_btu;
extern GPROC genie_cgs_calorie;
extern GPROC genie_cgs_canadian_gallon;
extern GPROC genie_cgs_carat;
extern GPROC genie_cgs_cup;
extern GPROC genie_cgs_curie;
extern GPROC genie_cgs_day;
extern GPROC genie_cgs_dyne;
extern GPROC genie_cgs_electron_charge;
extern GPROC genie_cgs_electron_magnetic_moment;
extern GPROC genie_cgs_electron_volt;
extern GPROC genie_cgs_erg;
extern GPROC genie_cgs_faraday;
extern GPROC genie_cgs_fathom;
extern GPROC genie_cgs_fluid_ounce;
extern GPROC genie_cgs_foot;
extern GPROC genie_cgs_footcandle;
extern GPROC genie_cgs_footlambert;
extern GPROC genie_cgs_gauss;
extern GPROC genie_cgs_gram_force;
extern GPROC genie_cgs_grav_accel;
extern GPROC genie_cgs_gravitational_constant;
extern GPROC genie_cgs_hectare;
extern GPROC genie_cgs_horsepower;
extern GPROC genie_cgs_hour;
extern GPROC genie_cgs_inch;
extern GPROC genie_cgs_inch_of_mercury;
extern GPROC genie_cgs_inch_of_water;
extern GPROC genie_cgs_joule;
extern GPROC genie_cgs_kilometers_per_hour;
extern GPROC genie_cgs_kilopound_force;
extern GPROC genie_cgs_knot;
extern GPROC genie_cgs_lambert;
extern GPROC genie_cgs_light_year;
extern GPROC genie_cgs_liter;
extern GPROC genie_cgs_lumen;
extern GPROC genie_cgs_lux;
extern GPROC genie_cgs_mass_electron;
extern GPROC genie_cgs_mass_muon;
extern GPROC genie_cgs_mass_neutron;
extern GPROC genie_cgs_mass_proton;
extern GPROC genie_cgs_meter_of_mercury;
extern GPROC genie_cgs_metric_ton;
extern GPROC genie_cgs_micron;
extern GPROC genie_cgs_mil;
extern GPROC genie_cgs_mile;
extern GPROC genie_cgs_miles_per_hour;
extern GPROC genie_cgs_minute;
extern GPROC genie_cgs_molar_gas;
extern GPROC genie_cgs_nautical_mile;
extern GPROC genie_cgs_newton;
extern GPROC genie_cgs_nuclear_magneton;
extern GPROC genie_cgs_ounce_mass;
extern GPROC genie_cgs_parsec;
extern GPROC genie_cgs_phot;
extern GPROC genie_cgs_pint;
extern GPROC genie_cgs_planck_constant_h;
extern GPROC genie_cgs_planck_constant_hbar;
extern GPROC genie_cgs_point;
extern GPROC genie_cgs_poise;
extern GPROC genie_cgs_pound_force;
extern GPROC genie_cgs_pound_mass;
extern GPROC genie_cgs_poundal;
extern GPROC genie_cgs_proton_magnetic_moment;
extern GPROC genie_cgs_psi;
extern GPROC genie_cgs_quart;
extern GPROC genie_cgs_rad;
extern GPROC genie_cgs_roentgen;
extern GPROC genie_cgs_rydberg;
extern GPROC genie_cgs_solar_mass;
extern GPROC genie_cgs_speed_of_light;
extern GPROC genie_cgs_standard_gas_volume;
extern GPROC genie_cgs_std_atmosphere;
extern GPROC genie_cgs_stilb;
extern GPROC genie_cgs_stokes;
extern GPROC genie_cgs_tablespoon;
extern GPROC genie_cgs_teaspoon;
extern GPROC genie_cgs_texpoint;
extern GPROC genie_cgs_therm;
extern GPROC genie_cgs_ton;
extern GPROC genie_cgs_torr;
extern GPROC genie_cgs_troy_ounce;
extern GPROC genie_cgs_uk_gallon;
extern GPROC genie_cgs_uk_ton;
extern GPROC genie_cgs_unified_atomic_mass;
extern GPROC genie_cgs_us_gallon;
extern GPROC genie_cgs_week;
extern GPROC genie_cgs_yard;
extern GPROC genie_mks_acre;
extern GPROC genie_mks_angstrom;
extern GPROC genie_mks_astronomical_unit;
extern GPROC genie_mks_bar;
extern GPROC genie_mks_barn;
extern GPROC genie_mks_bohr_magneton;
extern GPROC genie_mks_bohr_radius;
extern GPROC genie_mks_boltzmann;
extern GPROC genie_mks_btu;
extern GPROC genie_mks_calorie;
extern GPROC genie_mks_canadian_gallon;
extern GPROC genie_mks_carat;
extern GPROC genie_mks_cup;
extern GPROC genie_mks_curie;
extern GPROC genie_mks_day;
extern GPROC genie_mks_dyne;
extern GPROC genie_mks_electron_charge;
extern GPROC genie_mks_electron_magnetic_moment;
extern GPROC genie_mks_electron_volt;
extern GPROC genie_mks_erg;
extern GPROC genie_mks_faraday;
extern GPROC genie_mks_fathom;
extern GPROC genie_mks_fluid_ounce;
extern GPROC genie_mks_foot;
extern GPROC genie_mks_footcandle;
extern GPROC genie_mks_footlambert;
extern GPROC genie_mks_gauss;
extern GPROC genie_mks_gram_force;
extern GPROC genie_mks_grav_accel;
extern GPROC genie_mks_gravitational_constant;
extern GPROC genie_mks_hectare;
extern GPROC genie_mks_horsepower;
extern GPROC genie_mks_hour;
extern GPROC genie_mks_inch;
extern GPROC genie_mks_inch_of_mercury;
extern GPROC genie_mks_inch_of_water;
extern GPROC genie_mks_joule;
extern GPROC genie_mks_kilometers_per_hour;
extern GPROC genie_mks_kilopound_force;
extern GPROC genie_mks_knot;
extern GPROC genie_mks_lambert;
extern GPROC genie_mks_light_year;
extern GPROC genie_mks_liter;
extern GPROC genie_mks_lumen;
extern GPROC genie_mks_lux;
extern GPROC genie_mks_mass_electron;
extern GPROC genie_mks_mass_muon;
extern GPROC genie_mks_mass_neutron;
extern GPROC genie_mks_mass_proton;
extern GPROC genie_mks_meter_of_mercury;
extern GPROC genie_mks_metric_ton;
extern GPROC genie_mks_micron;
extern GPROC genie_mks_mil;
extern GPROC genie_mks_mile;
extern GPROC genie_mks_miles_per_hour;
extern GPROC genie_mks_minute;
extern GPROC genie_mks_molar_gas;
extern GPROC genie_mks_nautical_mile;
extern GPROC genie_mks_newton;
extern GPROC genie_mks_nuclear_magneton;
extern GPROC genie_mks_ounce_mass;
extern GPROC genie_mks_parsec;
extern GPROC genie_mks_phot;
extern GPROC genie_mks_pint;
extern GPROC genie_mks_planck_constant_h;
extern GPROC genie_mks_planck_constant_hbar;
extern GPROC genie_mks_point;
extern GPROC genie_mks_poise;
extern GPROC genie_mks_pound_force;
extern GPROC genie_mks_pound_mass;
extern GPROC genie_mks_poundal;
extern GPROC genie_mks_proton_magnetic_moment;
extern GPROC genie_mks_psi;
extern GPROC genie_mks_quart;
extern GPROC genie_mks_rad;
extern GPROC genie_mks_roentgen;
extern GPROC genie_mks_rydberg;
extern GPROC genie_mks_solar_mass;
extern GPROC genie_mks_speed_of_light;
extern GPROC genie_mks_standard_gas_volume;
extern GPROC genie_mks_std_atmosphere;
extern GPROC genie_mks_stilb;
extern GPROC genie_mks_stokes;
extern GPROC genie_mks_tablespoon;
extern GPROC genie_mks_teaspoon;
extern GPROC genie_mks_texpoint;
extern GPROC genie_mks_therm;
extern GPROC genie_mks_ton;
extern GPROC genie_mks_torr;
extern GPROC genie_mks_troy_ounce;
extern GPROC genie_mks_uk_gallon;
extern GPROC genie_mks_uk_ton;
extern GPROC genie_mks_unified_atomic_mass;
extern GPROC genie_mks_us_gallon;
extern GPROC genie_mks_vacuum_permeability;
extern GPROC genie_mks_vacuum_permittivity;
extern GPROC genie_mks_week;
extern GPROC genie_mks_yard;
extern GPROC genie_num_atto;
extern GPROC genie_num_avogadro;
extern GPROC genie_num_exa;
extern GPROC genie_num_femto;
extern GPROC genie_num_fine_structure;
extern GPROC genie_num_giga;
extern GPROC genie_num_kilo;
extern GPROC genie_num_mega;
extern GPROC genie_num_micro;
extern GPROC genie_num_milli;
extern GPROC genie_num_nano;
extern GPROC genie_num_peta;
extern GPROC genie_num_pico;
extern GPROC genie_num_tera;
extern GPROC genie_num_yocto;
extern GPROC genie_num_yotta;
extern GPROC genie_num_zepto;
extern GPROC genie_num_zetta;

#if defined HAVE_GNU_PLOTUTILS
extern GPROC genie_draw_aspect;
extern GPROC genie_draw_atom;
extern GPROC genie_draw_background_colour;
extern GPROC genie_draw_background_colour_name;
extern GPROC genie_draw_circle;
extern GPROC genie_draw_clear;
extern GPROC genie_draw_colour;
extern GPROC genie_draw_colour_name;
extern GPROC genie_draw_fillstyle;
extern GPROC genie_draw_fontname;
extern GPROC genie_draw_fontsize;
extern GPROC genie_draw_get_colour_name;
extern GPROC genie_draw_line;
extern GPROC genie_draw_linestyle;
extern GPROC genie_draw_linewidth;
extern GPROC genie_draw_move;
extern GPROC genie_draw_point;
extern GPROC genie_draw_rect;
extern GPROC genie_draw_show;
extern GPROC genie_draw_star;
extern GPROC genie_draw_text;
extern GPROC genie_draw_textangle;
extern GPROC genie_make_device;
#endif

#if defined HAVE_GNU_GSL
extern GPROC genie_airy_ai_deriv_real;
extern GPROC genie_airy_ai_real;
extern GPROC genie_airy_bi_deriv_real;
extern GPROC genie_airy_bi_real;
extern GPROC genie_bessel_exp_il_real;
extern GPROC genie_bessel_exp_in_real;
extern GPROC genie_bessel_exp_inu_real;
extern GPROC genie_bessel_exp_kl_real;
extern GPROC genie_bessel_exp_kn_real;
extern GPROC genie_bessel_exp_knu_real;
extern GPROC genie_bessel_in_real;
extern GPROC genie_bessel_inu_real;
extern GPROC genie_bessel_jl_real;
extern GPROC genie_bessel_jn_real;
extern GPROC genie_bessel_jnu_real;
extern GPROC genie_bessel_kn_real;
extern GPROC genie_bessel_knu_real;
extern GPROC genie_bessel_yl_real;
extern GPROC genie_bessel_yn_real;
extern GPROC genie_bessel_ynu_real;
extern GPROC genie_beta_inc_real;
extern GPROC genie_beta_real;
extern GPROC genie_complex_scale_matrix_complex;
extern GPROC genie_complex_scale_vector_complex;
extern GPROC genie_elliptic_integral_e_real;
extern GPROC genie_elliptic_integral_k_real;
extern GPROC genie_elliptic_integral_rc_real;
extern GPROC genie_elliptic_integral_rd_real;
extern GPROC genie_elliptic_integral_rf_real;
extern GPROC genie_elliptic_integral_rj_real;
extern GPROC genie_factorial_real;
extern GPROC genie_fft_backward;
extern GPROC genie_fft_complex_backward;
extern GPROC genie_fft_complex_forward;
extern GPROC genie_fft_complex_inverse;
extern GPROC genie_fft_forward;
extern GPROC genie_fft_inverse;
extern GPROC genie_gamma_inc_real;
extern GPROC genie_gamma_real;
extern GPROC genie_laplace;
extern GPROC genie_lngamma_real;
extern GPROC genie_matrix_add;
extern GPROC genie_matrix_ch;
extern GPROC genie_matrix_ch_solve;
extern GPROC genie_matrix_complex_add;
extern GPROC genie_matrix_complex_det;
extern GPROC genie_matrix_complex_div_complex;
extern GPROC genie_matrix_complex_div_complex_ab;
extern GPROC genie_matrix_complex_echo;
extern GPROC genie_matrix_complex_eq;
extern GPROC genie_matrix_complex_inv;
extern GPROC genie_matrix_complex_lu;
extern GPROC genie_matrix_complex_lu_det;
extern GPROC genie_matrix_complex_lu_inv;
extern GPROC genie_matrix_complex_lu_solve;
extern GPROC genie_matrix_complex_minus;
extern GPROC genie_matrix_complex_minusab;
extern GPROC genie_matrix_complex_ne;
extern GPROC genie_matrix_complex_plusab;
extern GPROC genie_matrix_complex_scale_complex;
extern GPROC genie_matrix_complex_scale_complex_ab;
extern GPROC genie_matrix_complex_sub;
extern GPROC genie_matrix_complex_times_matrix;
extern GPROC genie_matrix_complex_times_vector;
extern GPROC genie_matrix_complex_trace;
extern GPROC genie_matrix_complex_transpose;
extern GPROC genie_matrix_det;
extern GPROC genie_matrix_div_real;
extern GPROC genie_matrix_div_real_ab;
extern GPROC genie_matrix_echo;
extern GPROC genie_matrix_eq;
extern GPROC genie_matrix_inv;
extern GPROC genie_matrix_lu;
extern GPROC genie_matrix_lu_det;
extern GPROC genie_matrix_lu_inv;
extern GPROC genie_matrix_lu_solve;
extern GPROC genie_matrix_minus;
extern GPROC genie_matrix_minusab;
extern GPROC genie_matrix_ne;
extern GPROC genie_matrix_plusab;
extern GPROC genie_matrix_qr;
extern GPROC genie_matrix_qr_ls_solve;
extern GPROC genie_matrix_qr_solve;
extern GPROC genie_matrix_scale_real;
extern GPROC genie_matrix_scale_real_ab;
extern GPROC genie_matrix_sub;
extern GPROC genie_matrix_svd;
extern GPROC genie_matrix_svd_solve;
extern GPROC genie_matrix_times_matrix;
extern GPROC genie_matrix_times_vector;
extern GPROC genie_matrix_trace;
extern GPROC genie_matrix_transpose;
extern GPROC genie_prime_factors;
extern GPROC genie_real_scale_matrix;
extern GPROC genie_real_scale_vector;
extern GPROC genie_vector_add;
extern GPROC genie_vector_complex_add;
extern GPROC genie_vector_complex_div_complex;
extern GPROC genie_vector_complex_div_complex_ab;
extern GPROC genie_vector_complex_dot;
extern GPROC genie_vector_complex_dyad;
extern GPROC genie_vector_complex_echo;
extern GPROC genie_vector_complex_eq;
extern GPROC genie_vector_complex_minus;
extern GPROC genie_vector_complex_minusab;
extern GPROC genie_vector_complex_ne;
extern GPROC genie_vector_complex_norm;
extern GPROC genie_vector_complex_plusab;
extern GPROC genie_vector_complex_scale_complex;
extern GPROC genie_vector_complex_scale_complex_ab;
extern GPROC genie_vector_complex_sub;
extern GPROC genie_vector_complex_times_matrix;
extern GPROC genie_vector_div_real;
extern GPROC genie_vector_div_real_ab;
extern GPROC genie_vector_dot;
extern GPROC genie_vector_dyad;
extern GPROC genie_vector_echo;
extern GPROC genie_vector_eq;
extern GPROC genie_vector_minus;
extern GPROC genie_vector_minusab;
extern GPROC genie_vector_ne;
extern GPROC genie_vector_norm;
extern GPROC genie_vector_plusab;
extern GPROC genie_vector_scale_real;
extern GPROC genie_vector_scale_real_ab;
extern GPROC genie_vector_sub;
extern GPROC genie_vector_times_matrix;
#endif

#if defined HAVE_CURSES
extern GPROC genie_curses_clear;
extern GPROC genie_curses_del_char;
extern GPROC genie_curses_green;
extern GPROC genie_curses_cyan;
extern GPROC genie_curses_white;
extern GPROC genie_curses_red;
extern GPROC genie_curses_yellow;
extern GPROC genie_curses_magenta;
extern GPROC genie_curses_blue;
extern GPROC genie_curses_green_inverse;
extern GPROC genie_curses_cyan_inverse;
extern GPROC genie_curses_white_inverse;
extern GPROC genie_curses_red_inverse;
extern GPROC genie_curses_yellow_inverse;
extern GPROC genie_curses_magenta_inverse;
extern GPROC genie_curses_blue_inverse;
extern GPROC genie_curses_columns;
extern GPROC genie_curses_end;
extern GPROC genie_curses_getchar;
extern GPROC genie_curses_lines;
extern GPROC genie_curses_move;
extern GPROC genie_curses_putchar;
extern GPROC genie_curses_refresh;
extern GPROC genie_curses_start;
#endif

#if defined HAVE_POSTGRESQL
extern GPROC genie_pq_backendpid;
extern GPROC genie_pq_cmdstatus;
extern GPROC genie_pq_cmdtuples;
extern GPROC genie_pq_connectdb;
extern GPROC genie_pq_db;
extern GPROC genie_pq_errormessage;
extern GPROC genie_pq_exec;
extern GPROC genie_pq_fformat;
extern GPROC genie_pq_finish;
extern GPROC genie_pq_fname;
extern GPROC genie_pq_fnumber;
extern GPROC genie_pq_getisnull;
extern GPROC genie_pq_getvalue;
extern GPROC genie_pq_host;
extern GPROC genie_pq_nfields;
extern GPROC genie_pq_ntuples;
extern GPROC genie_pq_options;
extern GPROC genie_pq_parameterstatus;
extern GPROC genie_pq_pass;
extern GPROC genie_pq_port;
extern GPROC genie_pq_protocolversion;
extern GPROC genie_pq_reset;
extern GPROC genie_pq_resulterrormessage;
extern GPROC genie_pq_serverversion;
extern GPROC genie_pq_socket;
extern GPROC genie_pq_tty;
extern GPROC genie_pq_user;
#endif

/********************/
/* Diagnostic texts */
/********************/

#define ERROR_ACCESSING_NIL "attempt to access N"
#define ERROR_ALIGNMENT "alignment error"
#define ERROR_ARGUMENT_NUMBER "incorrect number of arguments for M"
#define ERROR_CANNOT_OPEN_NAME "cannot open Z"
#define ERROR_CANNOT_WIDEN "cannot widen M to M"
#define ERROR_CANNOT_WRITE_LISTING "cannot write listing file"
#define ERROR_CHANNEL_DOES_NOT_ALLOW "channel does not allow Y"
#define ERROR_CLAUSE_WITHOUT_VALUE "clause does not yield a value"
#define ERROR_CLOSING_DEVICE "error while closing device"
#define ERROR_CLOSING_FILE "error while closing file"
#define ERROR_CODE "clause should be compiled"
#define ERROR_COMMA_MUST_SEPARATE "A and A must be separated by a comma-symbol"
#define ERROR_COMPONENT_NUMBER "M must have at least two components"
#define ERROR_COMPONENT_RELATED "M has firmly related components"
#define ERROR_CURSES "error in curses operation"
#define ERROR_CURSES_OFF_SCREEN "curses operation moves cursor off the screen"
#define ERROR_DEVICE_ALREADY_SET "device parameters already set"
#define ERROR_DEVICE_CANNOT_ALLOCATE "cannot allocate device parameters"
#define ERROR_DEVICE_CANNOT_OPEN "cannot open device"
#define ERROR_DEVICE_NOT_OPEN "device is not open"
#define ERROR_DEVICE_NOT_SET "device parameters not set"
#define ERROR_DIFFERENT_BOUNDS "rows have different bounds"
#define ERROR_DIVISION_BY_ZERO "attempt at M division by zero"
#define ERROR_DYADIC_PRIORITY "dyadic S has no priority declaration"
#define ERROR_EMPTY_ARGUMENT "empty argument"
#define ERROR_EMPTY_VALUE "attempt to use an uninitialised M value"
#define ERROR_EMPTY_VALUE_FROM (ERROR_EMPTY_VALUE)
#define ERROR_EXPECTED "Y expected"
#define ERROR_EXPECTED_NEAR "B expected in A, near Z L"
#define ERROR_EXPONENT_DIGIT "invalid exponent digit"
#define ERROR_EXPONENT_INVALID "invalid M exponent"
#define ERROR_FALSE_ASSERTION "false assertion"
#define ERROR_FFT "fourier transform error; U; U"
#define ERROR_FILE_ACCESS "file access error"
#define ERROR_FILE_ALREADY_OPEN "file is already open"
#define ERROR_FILE_CANNOT_OPEN_FOR "cannot open Z for Y"
#define ERROR_FILE_CANT_RESET "cannot reset file"
#define ERROR_FILE_CANT_SET "cannot set file"
#define ERROR_FILE_CLOSE "error while closing file"
#define ERROR_FILE_ENDED "end of file reached"
#define ERROR_FILE_INCLUDE_CTRL "control characters in include file"
#define ERROR_FILE_LOCK "error while locking file"
#define ERROR_FILE_NOT_OPEN "file is not open"
#define ERROR_FILE_NO_TEMP "cannot create unique temporary file name"
#define ERROR_FILE_READ "error while reading file"
#define ERROR_FILE_RESET "error while resetting file"
#define ERROR_FILE_SCRATCH "error while scratching file"
#define ERROR_FILE_SET "error while setting file"
#define ERROR_FILE_SOURCE_CTRL "control characters in source file"
#define ERROR_FILE_TRANSPUT "error transputting M value"
#define ERROR_FILE_TRANSPUT_SIGN "error transputting sign in M value"
#define ERROR_FILE_WRONG_MOOD "file is in Y mood"
#define ERROR_FORMAT_CANNOT_TRANSPUT "cannot transput M value with A"
#define ERROR_FORMAT_EXHAUSTED "patterns exhausted in format"
#define ERROR_FORMAT_INTS_REQUIRED "1 .. 3 M arguments required"
#define ERROR_FORMAT_INVALID_REPLICATOR "negative replicator"
#define ERROR_FORMAT_PICTURES "number of pictures does not match number of arguments"
#define ERROR_FORMAT_PICTURE_NUMBER "incorrect number of pictures for A"
#define ERROR_FORMAT_UNDEFINED "cannot use undefined format"
#define ERROR_INCORRECT_FILENAME "incorrect filename"
#define ERROR_INDEXER_NUMBER "incorrect number of indexers for M"
#define ERROR_INDEX_OUT_OF_BOUNDS "index out of bounds"
#define ERROR_INTERNAL_CONSISTENCY "internal consistency check failure"
#define ERROR_INVALID_ARGUMENT "invalid M argument"
#define ERROR_INVALID_DIMENSION "invalid dimension D"
#define ERROR_INVALID_OPERAND "M construct is an invalid operand"
#define ERROR_INVALID_OPERATOR_TAG "invalid operator tag"
#define ERROR_INVALID_PARAMETER "invalid parameter (U Z)"
#define ERROR_INVALID_PRIORITY "invalid priority declaration"
#define ERROR_INVALID_RADIX "invalid radix D"
#define ERROR_INVALID_SEQUENCE "U is not a valid A"
#define ERROR_INVALID_SIZE "object of invalid size"
#define ERROR_IN_DENOTATION "error in M denotation"
#define ERROR_KEYWORD "check for missing or unmatched keyword in clause starting at S"
#define ERROR_LABELED_UNIT_MUST_FOLLOW "S must be followed by a labeled unit"
#define ERROR_LABEL_BEFORE_DECLARATION "declaration cannot follow a labeled unit"
#define ERROR_LAPLACE "laplace transform error; U; U"
#define ERROR_LONG_STRING "string exceeds end of line"
#define ERROR_MATH "M math error"
#define ERROR_MATH_EXCEPTION "math exception E"
#define ERROR_MODE_SPECIFICATION "M construct must yield a routine, row or structured value"
#define ERROR_MP_OUT_OF_BOUNDS "multiprecision value out of bounds"
#define ERROR_MULTIPLE_FIELD "multiple declaration of field S"
#define ERROR_MULTIPLE_TAG "multiple declaration of tag S"
#define ERROR_NOT_WELL_FORMED "M does not specify a well formed mode"
#define ERROR_NO_COMPONENT "M is neither component nor subset of M"
#define ERROR_NO_DYADIC "dyadic operator O S O has not been declared"
#define ERROR_NO_FIELD "M has no field Z"
#define ERROR_NO_FLEX_ARGUMENT "M value from A cannot be flexible"
#define ERROR_NO_MATRIX "M A does not yield a two-dimensional row"
#define ERROR_NO_MONADIC "monadic operator S O has not been declared"
#define ERROR_NO_NAME "M A does not yield a name"
#define ERROR_NO_NAME_REQUIRED "context does not require a name"
#define ERROR_NO_PARALLEL_CLAUSE "interpreter was compiled without support for the parallel-clause"
#define ERROR_NO_PRIORITY "S has no priority declaration"
#define ERROR_NO_ROW_OR_PROC "M A does not yield a row or procedure"
#define ERROR_NO_SOURCE_FILE "no source file specified"
#define ERROR_NO_SQUARE_MATRIX "M matrix is not square"
#define ERROR_NO_STRUCT "M A does not yield a structured value"
#define ERROR_NO_UNION "M is not a united mode"
#define ERROR_NO_UNIQUE_MODE "construct has no unique mode"
#define ERROR_NO_VECTOR "M A does not yield a one-dimensional row"
#define ERROR_OPERAND_NUMBER "incorrect number of operands for S"
#define ERROR_OPERATOR_INVALID "monadic S cannot start with a character from Z"
#define ERROR_OPERATOR_INVALID_END "probably missing symbol near invalid operator S"
#define ERROR_OPERATOR_RELATED "M Z is firmly related to M Z"
#define ERROR_OUT_OF_BOUNDS "M value out of bounds"
#define ERROR_OUT_OF_CORE "insufficient memory"
#define ERROR_PAGE_SIZE "error in page size"
#define ERROR_PARALLEL_JUMP "jump into different thread"
#define ERROR_PARALLEL_CANNOT_CREATE "cannot create thread"
#define ERROR_PARALLEL_OUTSIDE "invalid outside a parallel clause"
#define ERROR_PARALLEL_OVERFLOW "too many parallel units"
#define ERROR_PARENTHESIS "incorrect parenthesis nesting; check for Y"
#define ERROR_PARENTHESIS_2 "incorrect parenthesis nesting; encountered X L but expected X; check for Y"
#define ERROR_PRAGMENT "error in pragment"
#define ERROR_QUOTED_BOLD_TAG "error in quoted bold tag"
#define ERROR_REDEFINED_KEYWORD "attempt to redefine keyword U in A"
#define ERROR_REFINEMENT_APPLIED "refinement is applied more than once"
#define ERROR_REFINEMENT_DEFINED "refinement already defined"
#define ERROR_REFINEMENT_EMPTY "empty refinement at end of source"
#define ERROR_REFINEMENT_INVALID "invalid refinement"
#define ERROR_REFINEMENT_NOT_APPLIED "refinement is not applied"
#define ERROR_SCOPE_DYNAMIC_0 "value is exported out of its scope"
#define ERROR_SCOPE_DYNAMIC_1 "M value is exported out of its scope"
#define ERROR_SCOPE_DYNAMIC_2 "M value from %s is exported out of its scope"
#define ERROR_SHELL_SCRIPT "source is a shell script"
#define ERROR_SOUND_INTERNAL "error while processing M value (Y)"
#define ERROR_SOUND_INTERNAL_STRING "error while processing M value (Y \"Y\")"
#define ERROR_SOURCE_FILE_OPEN "error while opening source file"
#define ERROR_STACK_OVERFLOW "stack overflow"
#define ERROR_SUBSET_RELATED "M has firmly related subset M"
#define ERROR_SYNTAX "detected in A"
#define ERROR_SYNTAX_EXPECTED "expected A"
#define ERROR_SYNTAX_MIXED_DECLARATION "possibly mixed identity and variable declaration"
#define ERROR_SYNTAX_STRANGE_SEPARATOR "possibly a missing or erroneous separator nearby"
#define ERROR_SYNTAX_STRANGE_TOKENS "possibly a missing or erroneous symbol nearby"
#define ERROR_TIME_LIMIT_EXCEEDED "time limit exceeded"
#define ERROR_TOO_MANY_ARGUMENTS "too many arguments"
#define ERROR_TOO_MANY_OPEN_FILES "too many open files"
#define ERROR_TORRIX "linear algebra error; U; U"
#define ERROR_TRANSIENT_NAME "attempt at storing a transient name"
#define ERROR_UNBALANCED_KEYWORD "missing or unbalanced keyword in A, near Z L"
#define ERROR_UNDECLARED_TAG "tag S has not been declared properly"
#define ERROR_UNDECLARED_TAG_2 "tag Z has not been declared properly"
#define ERROR_UNDEFINED_TRANSPUT "transput of M value by this procedure is not defined"
#define ERROR_UNIMPLEMENTED "S is either not implemented or not compiled"
#define ERROR_UNSPECIFIED "unspecified error"
#define ERROR_UNTERMINATED_COMMENT "unterminated comment"
#define ERROR_UNTERMINATED_PRAGMAT "unterminated pragmat"
#define ERROR_UNTERMINATED_PRAGMENT "unterminated pragment"
#define ERROR_UNTERMINATED_STRING "unterminated string"
#define ERROR_UNWORTHY_CHARACTER "unworthy character"
#define ERROR_VACUO "this vacuum cannot have row elements (use a U generator)"
#define ERROR_VACUUM "this vacuum cannot have row elements (use a U M generator)"
#define INFO_APPROPRIATE_DECLARER "appropriate declarer"
#define INFO_MISSING_KEYWORDS "missing or unmatched keyword"
#define WARNING_EXTENSION "@ is an extension"
#define WARNING_HIDES "declaration hides a declaration of S with larger reach"
#define WARNING_HIDES_PRELUDE "declaration hides prelude declaration of M S"
#define WARNING_OPTIMISATION "optimisation has no effect on this platform"
#define WARNING_OVERFLOW "M constant overflow"
#define WARNING_SCOPE_STATIC "M A is a potential scope violation"
#define WARNING_SKIPPED_SUPERFLUOUS "skipped superfluous A"
#define WARNING_TAG_NOT_PORTABLE "tag S is not portable"
#define WARNING_TAG_UNUSED "tag S is not used"
#define WARNING_TRAILING "ignoring trailing character H in A"
#define WARNING_UNDERFLOW "M constant underflow"
#define WARNING_UNINITIALISED "identifier S might be used before being initialised"
#define WARNING_UNINTENDED "possibly unintended M A in M A"
#define WARNING_VOIDED "value of M @ will be voided"
#define WARNING_WIDENING_NOT_PORTABLE "implicit widening is not portable"

#endif /* ! defined A68G_ALGOL68G_H */

extern A68_PROCEDURE on_gc_event;
