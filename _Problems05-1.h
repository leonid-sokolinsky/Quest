/*==============================================================================
Project: LiFe - New Linear Programming Solvers
Theme: Quest (No MPI)
Module: Problems05-1.h (LP problems of dimension 5 with 1 randome inequality)
Prefix: PP
Author: Leonid B. Sokolinsky
This include file is part of Problem-Parameters.h
LP problems were obtained using BSF-LPP-Generator.
=================================================================================*/
#pragma once

//=========================== Method Parameters =================================
#define PP_EPS_ZERO					1E-10		// Accuracy for comparison with zero
#define PP_EPS_CFACTOR				(PP_EPS_ZERO*1000)	// Precision of calculating apex-point
#define PP_EPS_POINT_IN_HALFSPACE	PP_EPS_ZERO	// Precision for point to be in halfspace
#define PP_EPS_ON_HYPERPLANE		PP_EPS_ZERO	// Accuracy of belonging to hyperplane
#define PP_ETA_TO_APEX				10000		// Distance from apex base to apex point
//-----------------------------------------------------------------------------

/*============================== rnd5-0 LP problem ==============================*/
#define PP_PROBLEM_NAME	"rnd5-0"
#define PP_M 6		// Number of rows in *.mtx
#define PP_N 11		// Number of cols in *.mtx
#define PP_MAX_OBJ_VALUE	2900
//-------------------------------------------------------------------------------

/*============================== rnd5-1-1 LP problem ============================*
#define PP_PROBLEM_NAME	"rnd5-1-1"
#define PP_M 6		// Number of rows in *.mtx
#define PP_N 11		// Number of cols in *.mtx
//-------------------------------------------------------------------------------

/*============================== rnd5-1-2 LP problem ============================*
#define PP_PROBLEM_NAME	"rnd5-1-2"
#define PP_M 6		// Number of rows in *.mtx
#define PP_N 11		// Number of cols in *.mtx
//-------------------------------------------------------------------------------

/*============================== rnd5-1-3 LP problem ============================*
#define PP_PROBLEM_NAME	"rnd5-1-3"
#define PP_M 6		// Number of rows in *.mtx
#define PP_N 11		// Number of cols in *.mtx
//-------------------------------------------------------------------------------

/*============================== rnd5-1-4 LP problem ============================*
#define PP_PROBLEM_NAME	"rnd5-1-4"
#define PP_M 6		// Number of rows in *.mtx
#define PP_N 11		// Number of cols in *.mtx
//-------------------------------------------------------------------------------

/*============================== rnd5-1-5 LP problem ============================*
#define PP_PROBLEM_NAME	"rnd5-1-5"
#define PP_M 6		// Number of rows in *.mtx
#define PP_N 11		// Number of cols in *.mtx
//-------------------------------------------------------------------------------

/*============================== rnd5-1-6 LP problem ============================*
#define PP_PROBLEM_NAME	"rnd5-1-6"
#define PP_M 6		// Number of rows in *.mtx
#define PP_N 11		// Number of cols in *.mtx
//-------------------------------------------------------------------------------
/*===============================================================================*/