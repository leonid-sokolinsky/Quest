/*==============================================================================
Project: LiFe - New Linear Programming Solvers
Theme: Quest (No MPI)
Module: _Problems-NetLib-LP.h (Problems from the NETLIB LP Test Problem Set)
Prefix: PP
Author: Leonid B. Sokolinsky
This include file is part of Problem-Parameters.h
==============================================================================*/
#pragma once

#define PP_SIMPLE_CONVERSION

/*============================== adlittle LP problem ===============*
#define PP_PROBLEM_NAME		"adlittle"
#define PP_M 56		// Number of equations (number of rows in *.mtx)
#define PP_N 138	// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 		2900
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11	// Accuracy for comparison with zero
#define PP_EPS_ON_HYPERPLANE		1E-5	// Accuracy of belonging to hyperplane
//------------------------------------------------------------------/**/

/*============================== afiro LP problem ==================*/
#define PP_PROBLEM_NAME	"afiro"
#define PP_M 27		// Number of equations (number of rows in *.mtx)
#define PP_N 51		// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE			464.7531	// Exact maximum value of objective function
#define PP_ETA_TO_APEX	0	// Distance from apex base to apex point
//--------------------------------------------------------------------------
#define PP_EPS_ZERO				1E-9			// Accuracy for comparison with zero
#define PP_EPS_CFACTOR			(PP_EPS_ZERO*10)// Precision of calculating apex-point
#define PP_EPS_ON_HYPERPLANE	1E-5			// Accuracy of belonging to hyperplane
//------------------------------------------------------------------/**/

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
//-------------------------------------------------------------------------/**/

/*============================== sc50a LP problem ==============================*
#define PP_PROBLEM_NAME		"sc50a"	
#define PP_M 50	// Number of equations (number of rows in *.mtx)
#define PP_N 78	// Number of variables (number of cols in *.mtx)
//----------------------------------------------------------------------------/**/