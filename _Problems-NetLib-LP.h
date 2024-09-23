/*==============================================================================
Project: LiFe - New Linear Programming Solvers
Theme: Quest (No MPI)
Module: _Problems-NetLib-LP.h (Problems from the NETLIB LP Test Problem Set)
Prefix: PP
Author: Leonid B. Sokolinsky
This include file is part of Problem-Parameters.h
==============================================================================*/
#pragma once

#define PP_MPS_FORMAT

/*============================== adlittle LP problem ===============*
#define PP_PROBLEM_NAME		"adlittle"
#define PP_M 168	// Number of equations (number of rows in *.mtx)
#define PP_N 97		// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 		-225494.96316238038228101176621492
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11				// Accuracy for comparison with zero
#define PP_EPS_CFACTOR				(PP_EPS_ZERO*10000)	// Precision of calculating apex-point
#define PP_EPS_POINT_IN_HALFSPACE	PP_EPS_ZERO			// Precision for point to be in halfspace
#define PP_EPS_ON_HYPERPLANE		PP_EPS_ZERO			// Accuracy of belonging to hyperplane
#define PP_ETA_TO_APEX				100000				// Distance from apex base to apex point
//--------------------------------------------------------------------------
// Elapsed time: 9.577879
// Number of iterations: 840937
// Computed objective value: -1437296.18989298
// Maximal objective value:  -225494.9631623804
// Relative error = 5.37
//------------------------------------------------------------------/**/

/*============================== afiro LP problem ==================*
#define PP_PROBLEM_NAME	"afiro"
#define PP_M 27		// Number of equations (number of rows in *.mtx)
#define PP_N 51		// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 464.75314285714285714285714285714
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11				// Accuracy for comparison with zero
#define PP_EPS_CFACTOR				(PP_EPS_ZERO*1000)	// Precision of calculating apex-point
#define PP_EPS_POINT_IN_HALFSPACE	PP_EPS_ZERO			// Precision for point to be in halfspace
#define PP_EPS_ON_HYPERPLANE		PP_EPS_ZERO			// Accuracy of belonging to hyperplane
#define PP_ETA_TO_APEX				100000				// Distance from apex base to apex point
//--------------------------------------------------------------------------
// Elapsed time: 0.1485175
// Number of iterations: 24691
// Computed objective value: 455.9614824973012
// Maximal objective value:  464.7531428571428
// Relative error = 0.0189
//------------------------------------------------------------------/**/

/*============================== beaconfd LP problem ==================*
#define PP_PROBLEM_NAME		"beaconfd"
#define PP_M 173	// Number of equations (number of rows in *.mtx)
#define PP_N 295	// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE -33592.4858072
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11				// Accuracy for comparison with zero
#define PP_EPS_CFACTOR				(PP_EPS_ZERO*100000)	// Precision of calculating apex-point
#define PP_EPS_POINT_IN_HALFSPACE	PP_EPS_ZERO			// Precision for point to be in halfspace
#define PP_EPS_ON_HYPERPLANE		PP_EPS_ZERO			// Accuracy of belonging to hyperplane
#define PP_ETA_TO_APEX				100000				// Distance from apex base to apex point
//--------------------------------------------------------------------------
// Elapsed time: 48.21997
// Number of iterations: 558875
// Computed objective value: -33837.74448037236
// Maximal objective value:  -33592.4858072
// Relative error = 0.0073
//------------------------------------------------------------------/**/

/*============================== blend LP problem ==================*/
#define PP_PROBLEM_NAME		"blend"
#define PP_M 74		// Number of equations (number of rows in *.mtx)
#define PP_N 114	// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE	30.812149845828220173774356124984	// Exact maximum value of objective function
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11				// Accuracy for comparison with zero
#define PP_EPS_CFACTOR				(PP_EPS_ZERO*1000)	// Precision of calculating apex-point
#define PP_EPS_POINT_IN_HALFSPACE	PP_EPS_ZERO			// Precision for point to be in halfspace
#define PP_EPS_ON_HYPERPLANE		PP_EPS_ZERO			// Accuracy of belonging to hyperplane
#define PP_ETA_TO_APEX				100000				// Distance from apex base to apex point
//------------------------------------------------------------------/**/

/*============================== kb2 LP problem ==============================*
#define PP_PROBLEM_NAME		"kb2"
#define PP_M 43	// Number of equations (number of rows in *.mtx)
#define PP_N 68	// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 1749.9
//-------------------------------------------------------------------------
#define PP_EPS_ZERO				1E-11				// Accuracy for comparison with zero
#define PP_EPS_CFACTOR			(PP_EPS_ZERO*1000)	// Precision of calculating apex-point
#define PP_EPS_ON_HYPERPLANE	1E-11				// Accuracy of belonging to hyperplane
#define PP_ETA_TO_APEX			10000				// Distance from apex base to apex point
//------------------------------------------------------------------/**/

/*============================== sc50a LP problem ==============================*
#define PP_PROBLEM_NAME		"sc50a"	
#define PP_M 50	// Number of equations (number of rows in *.mtx)
#define PP_N 78	// Number of variables (number of cols in *.mtx)
//----------------------------------------------------------------------------/**/