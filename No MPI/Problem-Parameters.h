/*==============================================================================
Project: LiFe
Theme: Quest (No MPI)
Module: Problem-Parameters.h (Problem Parameters)
Prefix: PP
Author: Leonid B. Sokolinsky
This source code has been produced with using BSF-skeleton
==============================================================================*/
//-------------------------- Compilation Modes -----------------------
//#define PP_DEBUG
#define PP_PATH "C:/TEMP/"
//#define PP_PATH "D:/YandexDisk/_private/Programming/LP-Problems/"
//#define PP_PATH "Problems/"
#define PP_USE_LEASTPROJECTION

//=========================== Problem Parameters =========================

/*============================== rnd3-0-1 LP problem ==============================*/
#define PP_PROBLEM_NAME	"rnd3-0-1"
#define PP_M 4		// Number of equations (number of rows in *.mtx)
#define PP_N 7		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-9			// Accuracy for comparison with zero
#define PP_INFINITY					1E+308			// Highest bound in *_hi.mtx
#define PP_ETA_TO_APEX				0			// Distance from apex base to apex point
//------------------------------------------------------------------/**/

/*============================== rnd3-3-1 LP problem ==============================*
#define PP_PROBLEM_NAME	"rnd3-3-1"
#define PP_M 6		// Number of equations (number of rows in *.mtx)
#define PP_N 9		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-9			// Accuracy for comparison with zero
#define PP_INFINITY					1E+308			// Highest bound in *_hi.mtx
#define PP_ETA_TO_APEX				1000			// Distance from apex base to apex point
//------------------------------------------------------------------/**/

/*============================== rnd4-0-1 LP problem ==============================*
#define PP_PROBLEM_NAME	"rnd4-0-1"
#define PP_M 5		// Number of equations (number of rows in *.mtx)
#define PP_N 9		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-9			// Accuracy for comparison with zero
#define PP_INFINITY					1E+308			// Highest bound in *_hi.mtx
#define PP_ETA_TO_APEX				1000			// Distance from apex base to apex point
//------------------------------------------------------------------/**/

/*============================== rnd4-4-1 LP problem ==============================*
#define PP_PROBLEM_NAME	"rnd4-4-1"
#define PP_M 8		// Number of equations (number of rows in *.mtx)
#define PP_N 12		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-9			// Accuracy for comparison with zero
#define PP_INFINITY					1E+308			// Highest bound in *_hi.mtx
#define PP_ETA_TO_APEX				1000			// Distance from apex base to apex point
//------------------------------------------------------------------/**/

/*============================== rnd5-0-1 LP problem ==============================*
#define PP_PROBLEM_NAME	"rnd5-0-1"
#define PP_M 6		// Number of equations (number of rows in *.mtx)
#define PP_N 11		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-9			// Accuracy for comparison with zero
#define PP_INFINITY					1E+308			// Highest bound in *_hi.mtx
#define PP_ETA_TO_APEX				1000			// Distance from apex base to apex point
//------------------------------------------------------------------/**/

/*============================== rnd5-5-1 LP problem ==============================*
#define PP_PROBLEM_NAME	"rnd5-5-1"
#define PP_M 10		// Number of equations (number of rows in *.mtx)
#define PP_N 15		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-9			// Accuracy for comparison with zero
#define PP_INFINITY					1E+308			// Highest bound in *_hi.mtx
#define PP_ETA_TO_APEX				1000				// Distance from apex base to apex point
//------------------------------------------------------------------/**/

/*============================== rnd5-5-2 LP problem ==============================*
#define PP_PROBLEM_NAME	"rnd5-5-2"
#define PP_M 10		// Number of equations (number of rows in *.mtx)
#define PP_N 15		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-9			// Accuracy for comparison with zero
#define PP_INFINITY					1E+308			// Highest bound in *_hi.mtx
#define PP_ETA_TO_APEX				0			// Distance from apex base to apex point
//------------------------------------------------------------------/**/

/*============================== rnd10-10-1 LP problem ==============================*
#define PP_PROBLEM_NAME	"rnd10-10-1"
#define PP_M 20		// Number of equations (number of rows in *.mtx)
#define PP_N 30		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-9			// Accuracy for comparison with zero
#define PP_INFINITY					1E+308			// Highest bound in *_hi.mtx
#define PP_ETA_TO_APEX				0			// Distance from apex base to apex point
//------------------------------------------------------------------/**/

//================================ Common Paramrters ===========================
#define PP_MM (2*PP_M+2*PP_N)
#define PP_MAX_NUM_SHIFTS_SAME_LENGTH	5 // Maximal number of shifts with the same length
#define PP_MAX_ITER_COUNT				10000000000 // Maximal count of iterations
#define PP_ADD_FLAG						PP_N
//-------------------------- Input/Outpoot Parameters ---------------------------
#define PP_OUTPUT_LIMIT	8	// Number of Elements to output
#define PP_MATRIX_OUTPUT	// To output Matrix
#define PP_SETW 14
//------------------------- Matrix format ----------------
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