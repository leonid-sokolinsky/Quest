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
// Number of including hyperplanes: 60
#define PP_PROBLEM_NAME		"adlittle"
#define PP_M 168	// Number of equations (number of rows in *.mtx)
#define PP_N 97		// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 		-225494.96316238038228101176621492
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11				// Accuracy for comparison with zero
#define PP_EPS_CFACTOR				(PP_EPS_ZERO*10000)	// Precision of calculating apex-point
#define PP_EPS_POINT_IN_HALFSPACE	PP_EPS_ZERO			// Precision for point to be in halfspace
//#define PP_EPS_ON_HYPERPLANE		1E-5			// Accuracy of belonging to hyperplane
#define PP_EPS_ON_HYPERPLANE		PP_EPS_ZERO			// Accuracy of belonging to hyperplane
//#define PP_ETA_TO_APEX				100000				// Distance from apex base to apex point
#define PP_ETA_TO_APEX				100				// Distance from apex base to apex point
//--------------------------------------------------------------------------
// Elapsed time: 9.577879
// Number of iterations: 840937
// Computed objective value: -1437296.18989298
// Maximal objective value:  -225494.9631623804
// Relative error = 5.37
//------------------------------------------------------------------/**/

/*============================== afiro LP problem ==================*
// Number of including hyperplanes: 47
#define PP_PROBLEM_NAME	"afiro"
#define PP_M 67		// Number of equations (number of rows in *.mtx)
#define PP_N 32		// Number of variables (number of cols in *.mtx)
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
// Number of including hyperplanes: 412
#define PP_PROBLEM_NAME		"beaconfd"
#define PP_M 575	// Number of equations (number of rows in *.mtx)
#define PP_N 262	// Number of variables (number of cols in *.mtx)
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
#define PP_M 200	// Number of equations (number of rows in *.mtx)
#define PP_N 83		// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE	30.812149845828220173774356124984	// Exact maximum value of objective function
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11				// Accuracy for comparison with zero
#define PP_EPS_CFACTOR				(PP_EPS_ZERO*1000)	// Precision of calculating apex-point
#define PP_EPS_POINT_IN_HALFSPACE	PP_EPS_ZERO			// Precision for point to be in halfspace
#define PP_EPS_ON_HYPERPLANE		PP_EPS_ZERO			// Accuracy of belonging to hyperplane
#define PP_ETA_TO_APEX				100				// Distance from apex base to apex point
//--------------------------------------------------------------------------
// Elapsed time: 220.4551
// Number of iterations: 14733232
// Computed objective value: 7.674143543009595
// Maximal objective value:  30.81214984582822
// Relative error = 0.751
// Number of including hyperplanes: 107
//--------------------------------------------------------------------------

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