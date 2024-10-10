/*==============================================================================
Project: LiFe - New Linear Programming Solvers
Theme: Quest (No MPI)
Module: _Problems-Miscellaneous.h (Miscellaneous LP problems)
Prefix: PP
Author: Leonid B. Sokolinsky
This include file is part of Problem-Parameters.h
Initial feasible points for these problems were calculated using BIP algorithm
==============================================================================*/
#pragma once

//=========================== problem Parameters ========================
#define PP_EPS_ZERO					1E-11				// Accuracy for comparison with zero
#define PP_EPS_CFACTOR				(PP_EPS_ZERO*1000)	// Precision of calculating apex-point
#define PP_EPS_POINT_IN_HALFSPACE	PP_EPS_ZERO			// Precision for point to be in halfspace
#define PP_EPS_ON_HYPERPLANE		PP_EPS_ZERO			// Accuracy of belonging to hyperplane
//-------------------------------------------------------------------------------

/*============================== simpleCube LP problem ==========================*
#define PP_MPS_FORMAT
#define PP_PROBLEM_NAME	"simpleCube"
#ifdef PP_MPS_FORMAT
#define PP_M 3		// Number of constraints
#define PP_N 3		// Number of variables
#else
#define PP_M 3	// Number of rows in *.mtx
#define PP_N 6	// Number of cols in *.mtx
#endif
#define PP_MAX_OBJ_VALUE 		60000
#define PP_ETA_TO_APEX			10000				// Distance from apex base to apex point
//-------------------------------------------------------------------------------

/*============================== cubeInHyperplane LP problem ===================*
#define PP_MPS_FORMAT
#define PP_PROBLEM_NAME	"cubeInHyperplane"
#define PP_M 4		// Number of constraints
#define PP_N 4		// Number of variables
#define PP_MAX_OBJ_VALUE 		30000
#define PP_ETA_TO_APEX			10000				// Distance from apex base to apex point
//-------------------------------------------------------------------------------

/*============================== simple1FxVar LP problem =============================*
// Simple LP problem & x_1=150
#define PP_MPS_FORMAT
#define PP_PROBLEM_NAME	"simple1FxVar"
#define PP_M 5		// Number of constraints
#define PP_N 8		// Number of variables
#define PP_MAX_OBJ_VALUE	52500
#define PP_ETA_TO_APEX		10000				// Distance from apex base to apex point
//-------------------------------------------------------------------------------

/*============================== simple1 LP problem =============================*
//#define PP_MPS_FORMAT
#define PP_PROBLEM_NAME	"simple1"
#ifdef PP_MPS_FORMAT
#define PP_M 4		// Number of constraints
#define PP_N 3		// Number of variables
#else
#define PP_M 4		// Number of rows in *.mtx
#define PP_N 7		// Nnumber of cols in *.mtx
#endif
#define PP_MAX_OBJ_VALUE 	55000
#define PP_ETA_TO_APEX		10000				// Distance from apex base to apex point
//-------------------------------------------------------------------------------

/*============================== simple1.1 LP problem ===========================*
// Simple LP problem with alternating objective function
#define PP_PROBLEM_NAME	"simple1.1"
#define PP_M 4		// Number of rows in *.mtx
#define PP_N 7		// Nnumber of cols in *.mtx
#define PP_MAX_OBJ_VALUE 		40000
#define PP_ETA_TO_APEX		10000				// Distance from apex base to apex point
//-------------------------------------------------------------------------------

/*============================== simple2 LP problem =============================*
// Simple LP problem & x_3=200; x_2>=110; x_0<=190
//#define PP_MPS_FORMAT
#define PP_PROBLEM_NAME	"simple2"
#ifdef PP_MPS_FORMAT
#define PP_M 5		// Number of constraints
#define PP_N 4		// Number of variables
#else
#define PP_M 5		// Number of rows in *.mtx
#define PP_N 8		// Nnumber of cols in *.mtx
#endif
#define PP_MAX_OBJ_VALUE 	63500
#define PP_ETA_TO_APEX		10000	// Distance from apex base to apex point
//-------------------------------------------------------------------------------

/*============================== simple3 LP problem =============================*
#define PP_MPS_FORMAT
#define PP_PROBLEM_NAME	"simple3"
#ifdef PP_MPS_FORMAT
#define PP_M 5		// Number of constraints
#define PP_N 5		// Number of variables
#else
#define PP_M 5		// Number of rows in *.mtx
#define PP_N 8		// Nnumber of cols in *.mtx
#endif
#define PP_MAX_OBJ_VALUE 	55000
#define PP_ETA_TO_APEX		10000	// Distance from apex base to apex point
//-------------------------------------------------------------------------------

/*============================== simple1min LP problem ==========================*
#define PP_PROBLEM_NAME	"simple1min"
#define PP_M 5		// Number of rows in *.mtx
#define PP_N 8		// Nnumber of cols in *.mtx
#define PP_MAX_OBJ_VALUE 	-5000
#define PP_ETA_TO_APEX		10000	// Distance from apex base to apex point
//-------------------------------------------------------------------------------

/*============================== simple_zcv LP problem ==========================*
#define PP_PROBLEM_NAME	"simple_zcv"
#define PP_M 4		// Number of rows in *.mtx
#define PP_N 7		// Nnumber of cols in *.mtx
#define PP_MAX_OBJ_VALUE 	50000
#define PP_ETA_TO_APEX		10000	// Distance from apex base to apex point
//-------------------------------------------------------------------------------

/*============================== simple_lcv LP problem ==========================*
#define PP_PROBLEM_NAME	"simple_lcv"
#define PP_M 4		// Number of rows in *.mtx
#define PP_N 7		// Nnumber of cols in *.mtx
#define PP_MAX_OBJ_VALUE 	50000.2
#define PP_ETA_TO_APEX		10000	// Distance from apex base to apex point
//-------------------------------------------------------------------------------

/*============================== simple_lcv_neg LP problem ======================*
#define PP_PROBLEM_NAME	"simple_lcv_neg"
#define PP_M 4		// Number of rows in *.mtx
#define PP_N 7		// Nnumber of cols in *.mtx
#define PP_MAX_OBJ_VALUE 	49998
#define PP_ETA_TO_APEX		10000	// Distance from apex base to apex point
//-------------------------------------------------------------------------------

/*============================== angle03 LP problem =============================*
#define PP_PROBLEM_NAME	"angle03"
#define PP_M 3		// Number of rows in *.mtx
#define PP_N 6		// Nnumber of cols in *.mtx
#define PP_MAX_OBJ_VALUE 	3000
#define PP_ETA_TO_APEX		10000	// Distance from apex base to apex point
//-------------------------------------------------------------------------------

/*============================== angle04 LP problem =============================*
#define PP_PROBLEM_NAME	"angle04"
#define PP_M 3		// Number of rows in *.mtx
#define PP_N 7		// Nnumber of cols in *.mtx
#define PP_MAX_OBJ_VALUE 	3300
#define PP_ETA_TO_APEX		10000	// Distance from apex base to apex point
//-------------------------------------------------------------------------------

/*============================== cone3-0 LP problem =============================*
#define PP_PROBLEM_NAME	"cone3-0"
#define PP_M 11		// Number of rows in *.mtx
#define PP_N 14		// Nnumber of cols in *.mtx
#define PP_MAX_OBJ_VALUE 	132.5
#define PP_ETA_TO_APEX		10000	// Distance from apex base to apex point
//-------------------------------------------------------------------------------

/*============================== rnd3_3_Olkhovsky56 LP problem ==================*
#define PP_PROBLEM_NAME	"rnd3_3_Olkhovsky56"
#define PP_M 6		// Number of rows in *.mtx
#define PP_N 9		// Nnumber of cols in *.mtx
#define PP_MAX_OBJ_VALUE 	990.7971187553596
#define PP_ETA_TO_APEX		10000	// Distance from apex base to apex point
//------------------------------------------------------------------------------

/*============================== rnd3_3_Olkhovsky289 LP problem ================*
#define PP_PROBLEM_NAME	"rnd3_3_Olkhovsky289"
#define PP_M 6		// Number of rows in *.mtx
#define PP_N 9		// Nnumber of cols in *.mtx
#define PP_MAX_OBJ_VALUE 	671.9524948597968
#define PP_ETA_TO_APEX		10000	// Distance from apex base to apex point
//------------------------------------------------------------------------------

/*============================== rnd3_3_Olkhovsky331 LP problem ================*
#define PP_PROBLEM_NAME	"rnd3_3_Olkhovsky331"
#define PP_M 6		// Number of rows in *.mtx
#define PP_N 9		// Nnumber of cols in *.mtx
#define PP_MAX_OBJ_VALUE 	714.5354779653184
#define PP_ETA_TO_APEX		10000	// Distance from apex base to apex point
//------------------------------------------------------------------------------

/*============================== rnd3_3_Olkhovsky336 LP problem ================*
#define PP_PROBLEM_NAME	"rnd3_3_Olkhovsky336"
#define PP_M 6		// Number of rows in *.mtx
#define PP_N 9		// Nnumber of cols in *.mtx
#define PP_MAX_OBJ_VALUE 	998.1934486487395
#define PP_ETA_TO_APEX		10000	// Distance from apex base to apex point
//-----------------------------------------------------------------------------

/*============================== rnd3-10 LP problem ============================*
#define PP_PROBLEM_NAME	"rnd3-10"
#define PP_M 13		// Number of rows in *.mtx
#define PP_N 16		// Nnumber of cols in *.mtx
#define PP_MAX_OBJ_VALUE 	852.0289179009729
#define PP_ETA_TO_APEX		10000	// Distance from apex base to apex point
//------------------------------------------------------------------------------

/*============================== rnd5-100 LP problem ===========================*/
#define PP_PROBLEM_NAME	"rnd5-100"
#define PP_M 105		// Number of rows in *.mtx
#define PP_N 110		// Nnumber of cols in *.mtx
#define PP_MAX_OBJ_VALUE	1848.437080568196
#define PP_ETA_TO_APEX		1000000	// Distance from apex base to apex point
//------------------------------------------------------------------------------

/*==============================================================================*/