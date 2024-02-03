/*==============================================================================
Project: LiFe
Theme:  Theme: Surface Movement Method (No MPI)
Module: Problem-Parameters.h (Problem Parameters)
Prefix: PP
Author: Leonid B. Sokolinsky
This source code has been produced with using BSF-skeleton
==============================================================================*/
//-------------------------- Compilation Modes -----------------------
#define PP_DEBUG
//#define PP_PATH "C:/TEMP/"
#define PP_PATH "D:/YandexDisk/_private/Программы/BSF/BSF Target/Problems/"
//#define PP_PATH "Problems/"
//#define PP_USE_LEASTPROJECTION

//=========================== Problem Parameters =========================
/**/
//============================== Simple LP problem ==============================
// Solution: 200 200 100
//#define PP_PROBLEM_NAME	"rnd"
#define PP_PROBLEM_NAME	"angle04"
#define PP_M 3		// Number of equations (number of rows in *.mtx)
#define PP_N 7		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-8
#define PP_EPS_OBJ					PP_EPS_ZERO		// |F(u) - PP_EXACT_OBJ_VALUE| <= PP_EPS_OBJ
#define PP_EPS_SHIFT				(PP_EPS_ZERO*10)// Minimal shift to stop motion
#define PP_EPS_W_MINUS_U			PP_EPS_ZERO	// Minimal ||w-u||
#define PP_EPS_ZERO_COMPARE			PP_EPS_ZERO		// Zero comparison precision
#define PP_EXACT_OBJ_VALUE			5241.4141414141	// Exact maximum value of objective function for angle04
#define PP_INFINITY					1E+308			// Highest bound in *_hi.mtx
#define PP_ETA_TO_APEX				0				// Distance from apex base to apex point
//#define PP_OBJECTIVE_VECTOR_LENGTH	21.5				// Length of Objective Vector
#define PP_OBJECTIVE_VECTOR_LENGTH	20				// Length of Objective Vector
#define PP_START_SHIFT_LENGTH		0.1				// Start length of shift vector
#define PP_MODE_BLOCK_NEGATIVE_DIR	false			// To block high cost variables
//------------------------------------------------------------------/**/

/**
#define PP_PROBLEM_NAME		"afiro"		 //========
#define PP_M 27		// Number of equations (number of rows in *.mtx)
#define PP_N 51		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-9
#define PP_EPS_OBJ					PP_EPS_ZERO	// |F(u) - PP_EXACT_OBJ_VALUE| <= PP_EPS_OBJ
#define PP_EPS_SHIFT				PP_EPS_ZERO	// Minimal shift to stop motion
#define PP_EPS_ZERO_COMPARE			PP_EPS_ZERO	// Zero comparison precision
#define PP_EPS_W_MINUS_U			PP_EPS_SHIFT	// Minimal ||w-u||
#define PP_EXACT_OBJ_VALUE			464.7531	// Exact maximum value of objective function
#define PP_INFINITY					1E+308		// High bound in *_hi.mtx
#define PP_ETA_TO_APEX				0			// Distance from apex base to apex point
#define PP_OBJECTIVE_VECTOR_LENGTH	10		// Length of Objective Vector
#define PP_START_SHIFT_LENGTH		1			// Start length of shift vector

//------------------------------------------------------------------/**/

/**#define PP_PROBLEM_NAME		"adlittle"	//========
#define PP_M 56		// Number of equations (number of rows in *.mtx)
#define PP_N 138	// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-2
#define PP_EPS_OBJ					250		// |F(u) - PP_EXACT_OBJ_VALUE| <= PP_EPS_OBJ
#define PP_EPS_SHIFT				1E-4	// Minimal shift to stop motion
#define PP_EPS_ZERO_COMPARE			PP_EPS_ZERO		// Zero comparison precision
#define PP_EPS_W_MINUS_U				1E-5	// Minimal ||w-u||
#define PP_EXACT_OBJ_VALUE		-225494.963	// Exact maximum value of objective function
#define PP_INFINITY					1E+308	// High bound in *_hi.mtx
#define PP_ETA_TO_APEX				850	// Distance from apex base to apex point
#define PP_OBJECTIVE_VECTOR_LENGTH	0.1		// Length of Objective Vector
#define PP_START_SHIFT_LENGTH		1		// Start length of shift vector

//------------------------------------------------------------------/**/

/**#define PP_PROBLEM_NAME		"blend"	//==========================================
#define PP_M 74		// Number of equations (number of rows in *.mtx)
#define PP_N 114	// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-3
#define PP_EPS_OBJ					1E-3	// |F(u) - PP_EXACT_OBJ_VALUE| <= PP_EPS_OBJ
#define PP_EPS_SHIFT				1E-5	// Minimal shift to stop motion
#define PP_EPS_ZERO_COMPARE			PP_EPS_ZERO		// Zero comparison precision
#define PP_EPS_W_MINUS_U				1E-5	// Minimal ||w-u||
#define PP_EXACT_OBJ_VALUE			30.812	// Exact maximum value of objective function
#define PP_INFINITY					1E+308	// Highest bound in *_hi.mtx
#define PP_ETA_TO_APEX				40		// Distance from apex base to apex point
#define PP_OBJECTIVE_VECTOR_LENGTH	0.1		// Length of Objective Vector
#define PP_START_SHIFT_LENGTH		1		// Start length of shift vector

//------------------------------------------------------------------/**/

/**#define PP_PROBLEM_NAME		"fit1d"	//==========================================
#define PP_M 24		// Number of equations (number of rows in *.mtx)
#define PP_N 1049	// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-4
#define PP_EPS_OBJ					1E-2	// |F(u) - PP_EXACT_OBJ_VALUE| <= PP_EPS_OBJ
#define PP_EPS_SHIFT				PP_EPS_ZERO		// Minimal shift to stop motion
#define PP_EPS_ZERO_COMPARE			1E-3	// Zero comparison precision
#define PP_EPS_W_MINUS_U				PP_EPS_ZERO		// Minimal ||w-u||
#define PP_EXACT_OBJ_VALUE			9146.378// Exact maximum value of objective function
#define PP_INFINITY					1E+308	// Highest bound in *_hi.mtx
#define PP_ETA_TO_APEX				100		// Distance from apex base to apex point
#define PP_OBJECTIVE_VECTOR_LENGTH	0.1		// Length of Objective Vector
#define PP_START_SHIFT_LENGTH		0.1		// Start length of shift vector

//------------------------------------------------------------------/**/

/**#define PP_PROBLEM_NAME		"kb2"	//==========================================
#define PP_M 43	// Number of equations (number of rows in *.mtx)
#define PP_N 68	// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO_COMPARE			1E-3	// Zero comparison precision
#define PP_EPS_OBJ					1E-2	// |F(u) - PP_EXACT_OBJ_VALUE| <= PP_EPS_OBJ
#define PP_EPS_SHIFT				1E-4	// Minimal shift to stop motion
#define PP_EPS_W_MINUS_U				1E-5	// Minimal ||w-u||
#define PP_EXACT_OBJ_VALUE			1749.9	// <-- Exact maximum value of objective function
#define PP_INFINITY					1E+308	// Highest bound in *_hi.mtx
#define PP_ETA_TO_APEX				1E+7	// Distance from apex base to apex point
#define PP_OBJECTIVE_VECTOR_LENGTH	0.01	// Length of Objective Vector
#define PP_START_SHIFT_LENGTH		1		// Start length of shift vector

//------------------------------------------------------------------/**/

/**#define PP_PROBLEM_NAME		"recipe"	//==========================================
#define PP_M 91		// Number of equations (number of rows in *.mtx)
#define PP_N 204	// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO_COMPARE			1E-5	// Zero comparison precision
#define PP_EPS_OBJ					1E-1	// |F(u) - PP_EXACT_OBJ_VALUE| <= PP_EPS_OBJ
#define PP_EPS_SHIFT				1E-5	// Minimal shift to stop motion
#define PP_EPS_W_MINUS_U				1E-5	// Minimal ||w-u||
#define PP_EXACT_OBJ_VALUE			266.61	// <-- Exact maximum value of objective function
#define PP_INFINITY					1E+308	// Highest bound in *_hi.mtx
#define PP_ETA_TO_APEX				1000	// Distance from apex base to apex point
#define PP_OBJECTIVE_VECTOR_LENGTH	100		// Length of Objective Vector
#define PP_START_SHIFT_LENGTH		1		// Start length of shift vector

//------------------------------------------------------------------/**/

/**#define PP_PROBLEM_NAME		"sc50a"	//==========================================
#define PP_M 50	// Number of equations (number of rows in *.mtx)
#define PP_N 78	// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO_COMPARE			1E-8	// Zero comparison precision
#define PP_EPS_OBJ					1E-2	// |F(u) - PP_EXACT_OBJ_VALUE| <= PP_EPS_OBJ
#define PP_EPS_SHIFT				1E-8	// Minimal shift to stop motion
#define PP_EPS_W_MINUS_U				1E-8	// Minimal ||w-u||
#define PP_EXACT_OBJ_VALUE			64.575	// <-- Exact maximum value of objective function
#define PP_INFINITY					1E+308	// Highest bound in *_hi.mtx
#define PP_ETA_TO_APEX				50000	// Distance from apex base to apex point
#define PP_OBJECTIVE_VECTOR_LENGTH	0.01	// Length of Objective Vector
#define PP_START_SHIFT_LENGTH		1		// Start length of shift vector

//------------------------------------------------------------------/**/

/**#define PP_PROBLEM_NAME		"sc50b"	//==========================================
#define PP_M 50		// Number of equations (number of rows in *.mtx)
#define PP_N 78	// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO_COMPARE			1E-8	// Zero comparison precision
#define PP_EPS_OBJ					1E-2	// |F(u) - PP_EXACT_OBJ_VALUE| <= PP_EPS_OBJ
#define PP_EPS_SHIFT				1E-8	// Minimal shift to stop motion
#define PP_EPS_W_MINUS_U				1E-8	// Minimal ||w-u||
#define PP_EXACT_OBJ_VALUE			70		// <-- Exact maximum value of objective function
#define PP_INFINITY					1E+308	// Highest bound in *_hi.mtx
#define PP_ETA_TO_APEX				1E+6	// Distance from apex base to apex point
#define PP_OBJECTIVE_VECTOR_LENGTH	0.01	// Length of Objective Vector
#define PP_START_SHIFT_LENGTH		1		// Start length of shift vector

//------------------------------------------------------------------/**/

/**#define PP_PROBLEM_NAME		"sc105"	//==========================================
#define PP_M 105	// Number of equations (number of rows in *.mtx)
#define PP_N 163	// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO_COMPARE			1E-5	// Zero comparison precision
#define PP_EPS_OBJ					0.364	// |F(u) - PP_EXACT_OBJ_VALUE| <= PP_EPS_OBJ
#define PP_EPS_SHIFT				1E-8	// Minimal shift to stop motion
#define PP_EPS_W_MINUS_U				1E-8	// Minimal ||w-u||
#define PP_EXACT_OBJ_VALUE			52.202	// <------------ Exact maximum value of objective function
#define PP_INFINITY					1E+308	// Highest bound in *_hi.mtx
#define PP_ETA_TO_APEX				130000	// Distance from apex base to apex point
#define PP_GAP						0.0001	// Minimum distance to polytope (not too small!!!)
#define PP_START_SHIFT_LENGTH		1		// Start length of shift vector

//------------------------------------------------------------------/**/

/**#define PP_PROBLEM_NAME		"share2b" //==========================================
#define PP_M 96		// Number of equations (number of rows in *.mtx)
#define PP_N 162	// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO							1E-3
#define PP_EPS_ZERO_COMPARE			PP_EPS_ZERO		// Zero comparison precision
#define PP_EPS_OBJ					1E-2	// |F(u) - PP_EXACT_OBJ_VALUE| <= PP_EPS_OBJ
#define PP_EPS_SHIFT				1E-5	// Minimal shift to stop motion
#define PP_EPS_W_MINUS_U				1E-5	// Minimal ||w-u||
#define PP_EXACT_OBJ_VALUE			415.73	// <-- Exact maximum value of objective function
#define PP_INFINITY					1E+308	// Highest bound in *_hi.mtx
#define PP_ETA_TO_APEX				100		// Distance from apex base to apex point
#define PP_OBJECTIVE_VECTOR_LENGTH	0.01	// Length of Objective Vector
#define PP_START_SHIFT_LENGTH		1		// Start length of shift vector

//------------------------------------------------------------------/**/

/**
//============================== Simple LP problem ==============================
// Solution: 200 200 100
#define PP_PROBLEM_NAME	"simple1"
#define PP_M 4		// Number of equations (number of rows in *.mtx)
#define PP_N 7		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-8
#define PP_EPS_OBJ					PP_EPS_ZERO		// |F(u) - PP_EXACT_OBJ_VALUE| <= PP_EPS_OBJ
#define PP_EPS_SHIFT				PP_EPS_ZERO		// Minimal shift to stop motion
#define PP_EPS_ZERO_COMPARE			PP_EPS_ZERO		// Zero comparison precision
#define #define PP_EPS_W_MINUS_U			PP_EPS_SHIFT	// Minimal ||w-u||
#define PP_EXACT_OBJ_VALUE			55000	// Exact maximum value of objective function
#define PP_INFINITY					1E+308	// Highest bound in *_hi.mtx
#define PP_ETA_TO_APEX				0		// Distance from apex base to apex point
#define PP_OBJECTIVE_VECTOR_LENGTH	1E-5	// Length of Objective Vector
#define PP_START_SHIFT_LENGTH		5		// Start length of shift vector

//------------------------------------------------------------------/**/

/**
//=== Simple LP problem with alternating objective function ==============
// Solution: 200 0 200
#define PP_PROBLEM_NAME	"simple1.1"
#define PP_M 4		// Number of equations (number of rows in *.mtx)
#define PP_N 7		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-8
#define PP_EPS_OBJ					PP_EPS_ZERO		// |F(u) - PP_EXACT_OBJ_VALUE| <= PP_EPS_OBJ
#define PP_EPS_SHIFT				PP_EPS_ZERO		// Minimal shift to stop motion
#define PP_EPS_ZERO_COMPARE			PP_EPS_ZERO		// Zero comparison precision
#define PP_EPS_W_MINUS_U				PP_EPS_ZERO		// Minimal ||w-u|| for direction vector coordinates
#define PP_EXACT_OBJ_VALUE			40000	// Exact maximum value of objective function
#define PP_INFINITY					1E+308	// Highest bound in *_hi.mtx
#define PP_ETA_TO_APEX				0		// Distance from apex base to apex point
#define PP_OBJECTIVE_VECTOR_LENGTH	1E-6	// Length of Objective Vector
#define PP_START_SHIFT_LENGTH		5		// Start length of shift vector

//------------------------------------------------------------------/**/

/**
//============================== Simple LP problem & x_4=200; x_2>=110; x_1<=190 ==================
// Elapsed time: 750
// Solution: 190 200 110 200
#define PP_PROBLEM_NAME	"simple2"
#define PP_M 5		// Number of equations (number of rows in *.mtx)
#define PP_N 8		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-8
#define PP_EPS_OBJ					PP_EPS_ZERO	// |F(u) - PP_EXACT_OBJ_VALUE| <= PP_EPS_OBJ
#define PP_EPS_SHIFT				PP_EPS_ZERO	// Minimal shift to stop motion
#define PP_EPS_ZERO_COMPARE			PP_EPS_ZERO	// Zero comparison precision
#define PP_EPS_W_MINUS_U			PP_EPS_SHIFT	// Minimal ||w-u||
#define PP_EXACT_OBJ_VALUE			59000		// Exact maximum value of objective function
#define PP_INFINITY					1E+308		// Highest bound in *_hi.mtx
#define PP_ETA_TO_APEX				0			// Distance from apex base to apex point
#define PP_OBJECTIVE_VECTOR_LENGTH	1E-5		// Length of Objective Vector
#define PP_START_SHIFT_LENGTH		5			// Start length of shift vector

//------------------------------------------------------------------/**/

/**
#define PP_PROBLEM_NAME		"simple3"
// Solution: 200 200 100 0 0 200
#define PP_M 6		// Number of equations (number of rows in *.mtx)
#define PP_N 8		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-8
#define PP_EPS_OBJ					PP_EPS_ZERO		// |F(u) - PP_EXACT_OBJ_VALUE| <= PP_EPS_OBJ
#define PP_EPS_SHIFT				PP_EPS_ZERO		// Minimal shift to stop motion
#define PP_EPS_ZERO_COMPARE			PP_EPS_ZERO		// Zero comparison precision
#define PP_EPS_W_MINUS_U				PP_EPS_ZERO		// Minimal ||w-u|| for direction vector coordinates
#define PP_EXACT_OBJ_VALUE			60000	// Exact maximum value of objective function
#define PP_INFINITY					1E+308	// Highest bound in *_hi.mtx
#define PP_ETA_TO_APEX				0	// Distance from apex base to apex point
#define PP_OBJECTIVE_VECTOR_LENGTH	1E-1	// Length of Objective Vector
#define PP_START_SHIFT_LENGTH		5		// Start length of shift vector

//------------------------------------------------------------------/**/

/**
#define PP_PROBLEM_NAME		"simple1min" //==========================================
// Solution: 0 0 100
#define PP_M 5		// Number of equations (number of rows in *.mtx)
#define PP_N 8		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-8
#define PP_EPS_OBJ					PP_EPS_ZERO	// |F(u) - PP_EXACT_OBJ_VALUE| <= PP_EPS_OBJ
#define PP_EPS_SHIFT				PP_EPS_ZERO		// Minimal shift to stop motion
#define PP_EPS_ZERO_COMPARE			PP_EPS_ZERO		// Zero comparison precision
#define PP_EPS_W_MINUS_U			PP_EPS_SHIFT	// Minimal ||w-u||
#define PP_EXACT_OBJ_VALUE			-5000	// Exact maximum value of objective function
#define PP_INFINITY					1E+308	// Highest bound in *_hi.mtx
#define PP_ETA_TO_APEX				0		// Distance from apex base to apex point
#define PP_OBJECTIVE_VECTOR_LENGTH	5E-5		// Length of Objective Vector
#define PP_START_SHIFT_LENGTH		5		// Start length of shift vector

//------------------------------------------------------------------/**/

/**
#define PP_PROBLEM_NAME		"simple_zcv" //==========================================
// Solution: 200 200 200
#define PP_M 4		// Number of equations (number of rows in *.mtx)
#define PP_N 7		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-8
#define PP_EPS_OBJ					PP_EPS_ZERO	// |F(u) - PP_EXACT_OBJ_VALUE| <= PP_EPS_OBJ
#define PP_EPS_SHIFT				PP_EPS_ZERO		// Minimal shift to stop motion
#define PP_EPS_ZERO_COMPARE			PP_EPS_ZERO		// Zero comparison precision
#define PP_EPS_W_MINUS_U				PP_EPS_ZERO	// Accuracy of zero value for determining direction vector coordinates
#define PP_EXACT_OBJ_VALUE			50000	// Exact maximum value of objective function
#define PP_INFINITY					1E+308	// Highest bound in *_hi.mtx
#define PP_ETA_TO_APEX				0	// Distance from apex base to apex point
#define PP_OBJECTIVE_VECTOR_LENGTH	1E-6		// Length of Objective Vector
#define PP_START_SHIFT_LENGTH		5		// Start length of shift vector

//------------------------------------------------------------------/**/

/**
#define PP_PROBLEM_NAME		"simple_lcv" //==========================================
// Solution: 200 200 200
#define PP_M 4		// Number of equations (number of rows in *.mtx)
#define PP_N 7		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-8
#define PP_EPS_OBJ					PP_EPS_ZERO		// |F(u) - PP_EXACT_OBJ_VALUE| <= PP_EPS_OBJ
#define PP_EPS_SHIFT				PP_EPS_ZERO		// Minimal shift to stop motion
#define PP_EPS_ZERO_COMPARE			PP_EPS_ZERO		// Zero comparison precision
#define PP_EPS_W_MINUS_U				PP_EPS_ZERO	// Accuracy of zero value for determining direction vector coordinates
#define PP_EXACT_OBJ_VALUE			50000.2	// Exact maximum value of objective function
#define PP_INFINITY					1E+308	// Highest bound in *_hi.mtx
#define PP_ETA_TO_APEX				0		// Distance from apex base to apex point
#define PP_OBJECTIVE_VECTOR_LENGTH	1E-5		// Length of Objective Vector
#define PP_START_SHIFT_LENGTH		5		// Start length of shift vector

//------------------------------------------------------------------/**/

/**
#define PP_PROBLEM_NAME		"simple_lcv_neg" //==========================================
// Solution: 200 200 200
#define PP_M 4		// Number of equations (number of rows in *.mtx)
#define PP_N 7		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-8
#define PP_EPS_OBJ					PP_EPS_ZERO	// |F(u) - PP_EXACT_OBJ_VALUE| <= PP_EPS_OBJ
#define PP_EPS_SHIFT				PP_EPS_ZERO		// Minimal shift to stop motion
#define PP_EPS_ZERO_COMPARE			PP_EPS_ZERO		// Zero comparison precision
#define PP_EPS_W_MINUS_U				PP_EPS_ZERO	// Accuracy of zero value for determining direction vector coordinates
#define PP_EXACT_OBJ_VALUE			50000	// Exact maximum value of objective function
#define PP_INFINITY					1E+308	// Highest bound in *_hi.mtx
#define PP_ETA_TO_APEX				0		// Distance from apex base to apex point
#define PP_OBJECTIVE_VECTOR_LENGTH	1E-6		// Length of Objective Vector
#define PP_START_SHIFT_LENGTH		5		// Start length of shift vector

//------------------------------------------------------------------/**/

/**
#define PP_PROBLEM_NAME		"random1"
// Solution:	199.9999	166.1036	133.8964
#define PP_M 10		// Number of equations (number of rows in *.mtx)
#define PP_N 13		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-8
#define PP_EPS_OBJ					PP_EPS_ZERO	// |F(u) - PP_EXACT_OBJ_VALUE| <= PP_EPS_OBJ
#define PP_EPS_SHIFT				PP_EPS_ZERO		// Minimal shift to stop motion
#define PP_EPS_ZERO_COMPARE			PP_EPS_ZERO		// Zero comparison precision
#define PP_EPS_W_MINUS_U				PP_EPS_ZERO	// Accuracy of zero value for determining direction vector coordinates
#define PP_EXACT_OBJ_VALUE		53305.1804345	// Exact maximum value of objective function
#define PP_INFINITY					1E+308	// Highest bound in *_hi.mtx
#define PP_ETA_TO_APEX				0	// Distance from apex base to apex point
#define PP_OBJECTIVE_VECTOR_LENGTH	1E-6 //1E-1		// Length of Objective Vector
#define PP_START_SHIFT_LENGTH		5		// Start length of shift vector

//------------------------------------------------------------------/**/

/**
#define PP_PROBLEM_NAME		"random2" //==========================================
// Solution:	183.0198           157.6099           159.3703
#define PP_M 10		// Number of equations (number of rows in *.mtx)
#define PP_N 13		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-8
#define PP_EPS_OBJ					PP_EPS_ZERO		// |F(u) - PP_EXACT_OBJ_VALUE| <= PP_EPS_OBJ
#define PP_EPS_SHIFT				PP_EPS_ZERO		// Minimal shift to stop motion
#define PP_EPS_ZERO_COMPARE			PP_EPS_ZERO		// Zero comparison precision
#define PP_EPS_W_MINUS_U					PP_EPS_ZERO		// Accuracy of zero value for determining direction vector coordinates
#define PP_EXACT_OBJ_VALUE			51182.4770133	// Exact maximum value of objective function
#define PP_INFINITY					1E+308			// Highest bound in *_hi.mtx
#define PP_ETA_TO_APEX				0				// Distance from apex base to apex point
#define PP_OBJECTIVE_VECTOR_LENGTH	1E-3			// Length of Objective Vector
#define PP_START_SHIFT_LENGTH		5				// Start length of shift vector
#define PP_MODE_BLOCK_NEGATIVE_DIR	false			// To block high cost variables
//------------------------------------------------------------------/**/

//================================ Common Paramrters ===========================
#define PP_MM (PP_MODE_BLOCK_NEGATIVE_DIR ? 2*PP_M+3*PP_N-1 : 2*PP_M+2*PP_N)
#define PP_MAX_NUM_SHIFTS_SAME_LENGTH	5 // Maximal number of shifts with the same length
#define PP_MAX_ITER_COUNT				10000000000 // Maximal count of iterations
#define PP_ADD_FLAG						PP_N
//-------------------------- Input/Outpoot Parameters ---------------------------
#define PP_OUTPUT_LIMIT	8	// Number of Elements to output
#define PP_MATRIX_OUTPUT	// To output Matrix
#define PP_SETW 24
//------------------------- Matrix format ----------------
#define PP_MTX_PREFIX			"lp_"
#define PP_MTX_POSTFIX_A		".mtx"
#define PP_MTX_POSTFIX_B		"_b.mtx"
#define PP_MTX_POSTFIX_LO		"_lo.mtx"
#define PP_MTX_POSTFIX_HI		"_hi.mtx"
#define PP_MTX_POSTFIX_C		"_c.mtx"
#define PP_MTX_POSTFIX_X0		"_x0.mtx" // Starting point on polytope
#define PP_MTX_POSTFIX_SO		"_so.mtx" // Solution
#define PP_MTX_POSTFIX_TR		"_tr.mtx" // Trace
//-------------------------- Jobs  -----------------------
#define PP_JOB_PSEUDOPOJECTION	0 
#define PP_JOB_CHECK			1
#define PP_JOB_LEASTPOJECTION	2 
//-------------------------- Process states --------------------------
#define PP_STATE_START						0
#define PP_STATE_FIND_INTERIOR_POINT		1
#define PP_STATE_FIND_INITIAL_APPROXIMATION	2
#define PP_STATE_DETERMINE_DIRECTION		3
#define PP_STATE_MOVING_ALONG_SURFACE		4
//------------- Vector Projection Onto Halfspace exit codes -------------
#define PP_EXITCODE_DEGENERATE_INEQUALITY	0
#define PP_EXITCODE_INSIDE_HALFSPACE		1
#define PP_EXITCODE_SUCCESSFUL_PROJECTING	2
#define PP_EXITCODE_PARALLEL				3
#define PP_EXITCODE_RECESSIVE				4
#define PP_EXITCODE_ON_HYPERPLANE			5