/*==============================================================================
Project: LiFe
Theme: Quest (MPI)
Module: Problem-Parameters.h (Problem Parameters)
Prefix: PP
Author: Leonid B. Sokolinsky
This source code has been produced with using BSF-skeleton
==============================================================================*/

//#include "_Problems05-1.h"
#include "_Problems-NetLib-LP.h"

//-------------------------- Compilation Modes -----------------------
//#define PP_DEBUG
#define PP_PATH "D:/YandexDisk/_private/Programming/LP-NetLib-Problems/"
//#define PP_PATH "D:/YandexDisk/_private/Programming/LP-Rnd-Problems/"
//#define PP_PATH "Problems/"
//#define PP_USE_LEASTPROJECTION

//=========================== Problem Parameters =========================
#define PP_MM (2*PP_M+2*PP_N)
#define PP_MAX_NUM_SHIFTS_SAME_LENGTH	5 // Maximal number of shifts with the same length
#define PP_MAX_ITER_COUNT				10000000000 // Maximal count of iterations
#define PP_ADD_FLAG						PP_N
//-------------------------- Input/Outpoot Parameters ---------------------------
#define PP_OUTPUT_LIMIT	30	// Number of Elements to output
//#define PP_MATRIX_OUTPUT	// To output Matrix
#define PP_SETW 14
//------------------------- Matrix format ----------------
#define PP_INFINITY				1E+308		// Highest bound in *_hi.mtx
#define PP_MTX_PREFIX			"lp_"
#define PP_MTX_POSTFIX_A		".mtx"
#define PP_MTX_POSTFIX_B		"_b.mtx"
#define PP_MTX_POSTFIX_LO		"_lo.mtx"
#define PP_MTX_POSTFIX_HI		"_hi.mtx"
#define PP_MTX_POSTFIX_C		"_c.mtx"
#define PP_MTX_POSTFIX_X0		"_x0.mtx" // Starting feasible point
#define PP_MTX_POSTFIX_U0		"_u0.mtx" // Starting surface point
//-------------------------- Jobs  -----------------------
#define PP_JOB_PSEUDOPOJECTION	0 
#define PP_JOB_LEASTPOJECTION	2 
//-------------------------- Process states --------------------------
#define PP_STATE_START						0
#define PP_STATE_FIND_INTERIOR_POINT		1
#define PP_STATE_FIND_INITIAL_APPROXIMATION	2
//------------- Vector Projection Onto Halfspace exit codes -------------
#define PP_EXITCODE_DEGENERATE_INEQUALITY	0
#define PP_EXITCODE_INSIDE_HALFSPACE		1
#define PP_EXITCODE_SUCCESSFUL_PROJECTING	2
#define PP_EXITCODE_PARALLEL				3
#define PP_EXITCODE_RECESSIVE				4
#define PP_EXITCODE_ON_HYPERPLANE			5