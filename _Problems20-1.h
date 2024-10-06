/*==============================================================================
Project: LiFe - New Linear Programming Solvers
Theme: Quest (No MPI)
Module: Problems20-1.h (LP problems of dimension 20 with 1 randome inequality)
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
//#define PP_ETA_TO_APEX		100000000	// Distance from apex base to apex point => vertex
#define PP_ETA_TO_APEX		0	// Distance from apex base to apex point
//-----------------------------------------------------------------------------
#define PP_MAX_B_NO_CORRECT				200		// Maximum b that does not require correction
#define PP_EPS_POINT_IN_RND_HALFSPACE	1E-2	// Precision for random inequality in PointInPolytope()
#define PP_M 21		// Number of constraints
#define PP_N 41		// Number of variables

/*============================== rnd20-0 LP problem ==============================*/
#define PP_PROBLEM_NAME	"rnd20-0"
#define PP_MAX_OBJ_VALUE	31000
//----------------------------------------------------------------------------------

/*============================== rnd20-1-1 LP problem ==============================*
#define PP_PROBLEM_NAME	"rnd20-1-1"
#define PP_MAX_OBJ_VALUE	27600
//----------------------------------------------------------------------------------

/*============================== rnd20-1-2 LP problem ==============================*
#define PP_PROBLEM_NAME	"rnd20-1-2"
#define PP_MAX_OBJ_VALUE	34000
//----------------------------------------------------------------------------------

/*============================== rnd20-1-3 LP problem ==============================*
#define PP_PROBLEM_NAME	"rnd20-1-3"
#define PP_MAX_OBJ_VALUE	34800
//----------------------------------------------------------------------------------

/*============================== rnd20-1-4 LP problem ==============================*
#define PP_PROBLEM_NAME	"rnd20-1-4"
#define PP_MAX_OBJ_VALUE	33800
//----------------------------------------------------------------------------------

/*============================== rnd20-1-5 LP problem ==============================*
#define PP_PROBLEM_NAME	"rnd20-1-5"
#define PP_MAX_OBJ_VALUE	30200
//----------------------------------------------------------------------------------

/*==================================================================================*/