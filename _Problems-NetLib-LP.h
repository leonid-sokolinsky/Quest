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
#define PP_M 56		// Number of equations (number of rows in *.mtx)
#define PP_N 138	// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 		2900
#define PP_ETA_TO_APEX	0	// Distance from apex base to apex point
//--------------------------------------------------------------------------
#define PP_EPS_ZERO				1E-11			// Accuracy for comparison with zero
#define PP_EPS_CFACTOR			(PP_EPS_ZERO*1000)// Precision of calculating apex-point
#define PP_EPS_ON_HYPERPLANE	1E-5			// Accuracy of belonging to hyperplane
//------------------------------------------------------------------/**/

/*============================== afiro LP problem ==================*/
#define PP_PROBLEM_NAME	"afiro"
#define PP_M 27		// Number of equations (number of rows in *.mtx)
#define PP_N 51		// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 464.7531
//--------------------------------------------------------------------------
#define PP_EPS_ZERO				1E-11			// Accuracy for comparison with zero
#define PP_EPS_CFACTOR			(PP_EPS_ZERO*1000)// Precision of calculating apex-point
#define PP_EPS_POINT_IN_HALFSPACE	PP_EPS_ZERO		// Precision for point to be in halfspace
#define PP_EPS_ON_HYPERPLANE	1E-11			// Accuracy of belonging to hyperplane
#define PP_ETA_TO_APEX	100000	// Distance from apex base to apex point
//------------------------------------------------------------------/**/

/*============================== beaconfd LP problem ==================*
// Distance to polytope: 9.99994230306940206655895e-06
#define PP_PROBLEM_NAME		"beaconfd"
#define PP_M 173	// Number of equations (number of rows in *.mtx)
#define PP_N 295	// Number of variables (number of cols in *.mtx)
#define PP_SIMPLE_CONVERSION
//---------------------------------------------------------------------

/*============================== blend LP problem ==================*
#define PP_PROBLEM_NAME		"blend"
#define PP_M 74		// Number of equations (number of rows in *.mtx)
#define PP_N 114	// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE			30.812	// Exact maximum value of objective function
#define PP_ETA_TO_APEX				0	// Distance from apex base to apex point
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