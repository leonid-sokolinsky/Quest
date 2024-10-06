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
#define PP_EPS_ZERO					1E-10	// Accuracy for comparison with zero
#define PP_EPS_COS					1E-5	// Precision for cos == 1
#define PP_EPS_TINY_PPROJ_VEC		1E-13	// Tiny pseudoprojecting vector

#define PP_EPS_CFACTOR		1E-9
#define PP_ETA_TO_APEX		1E+6	// Distance from apex base to apex point
//-----------------------------------------------------------------------------
#define PP_MAX_B_NO_CORRECT				200		// Maximum b that does not require correction
#define PP_EPS_POINT_IN_RND_HALFSPACE	1E-2	// Precision for random inequality in PointInPolytope()
#define PP_M 16		// Number of constraints
#define PP_N 31		// Number of variables

/*============================== rnd15-0 LP problem ================================*
#define PP_PROBLEM_NAME	"rnd15-0"
#define PP_MAX_OBJ_VALUE	18400
//----------------------------------------------------------------------------------

/*============================== rnd15-1-1 LP problem ==============================*
#define PP_PROBLEM_NAME	"rnd15-1-1"
#define PP_MAX_OBJ_VALUE	21000
//----------------------------------------------------------------------------------

/*============================== rnd15-1-2 LP problem ==============================*/
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