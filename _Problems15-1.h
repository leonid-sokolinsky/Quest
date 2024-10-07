/*==============================================================================
Project: LiFe - New Linear Programming Solvers
Theme: Quest (No MPI)
Module: Problems15-1.h (LP problems of dimension 20 with 1 randome inequality)
Prefix: PP
Author: Leonid B. Sokolinsky
This include file is part of Problem-Parameters.h
LP problems were obtained using BSF-LPP-Generator.
==============================================================================*/
#pragma once

//=========================== Method Parameters =========================
#define PP_EPS_ZERO					1E-10		// Accuracy for comparison with zero
#define PP_EPS_CFACTOR				(PP_EPS_ZERO*1000)	// Precision of calculating apex-point
#define PP_EPS_POINT_IN_HALFSPACE	PP_EPS_ZERO	// Precision for point to be in halfspace
#define PP_EPS_ON_HYPERPLANE		PP_EPS_ZERO	// Accuracy of belonging to hyperplane
#define PP_ETA_TO_APEX				10000		// Distance from apex base to apex point
//-----------------------------------------------------------------------------
#define PP_MM 16	// Number of rows in *.mtx
#define PP_N 31		// Number of cols in *.mtx

/*============================== rnd15-0 LP problem ================================*/
#define PP_PROBLEM_NAME	"rnd15-0"
#define PP_MAX_OBJ_VALUE	18400
//----------------------------------------------------------------------------------

/*============================== rnd15-1-1 LP problem ==============================*
#define PP_PROBLEM_NAME	"rnd15-1-1"
#define PP_MAX_OBJ_VALUE	21000
//----------------------------------------------------------------------------------

/*============================== rnd15-1-2 LP problem ==============================*
#define PP_PROBLEM_NAME	"rnd15-1-2"
#define PP_MAX_OBJ_VALUE	20800
//----------------------------------------------------------------------------------

/*============================== rnd15-1-3 LP problem ==============================*
#define PP_PROBLEM_NAME	"rnd15-1-3"
#define PP_MAX_OBJ_VALUE	22000
//----------------------------------------------------------------------------------

/*============================== rnd15-1-4 LP problem ==============================*
#define PP_PROBLEM_NAME	"rnd15-1-4"
#define PP_MAX_OBJ_VALUE	17000
//----------------------------------------------------------------------------------

/*============================== rnd15-1-5 LP problem ==============================*
#define PP_PROBLEM_NAME	"rnd15-1-5"
#define PP_MAX_OBJ_VALUE	18692.13351978205
//----------------------------------------------------------------------------------

/*============================== rnd15-1-6 LP problem ==============================*
#define PP_PROBLEM_NAME	"rnd15-1-6"
#define PP_MAX_OBJ_VALUE	19400
//----------------------------------------------------------------------------------

/*==================================================================================*/