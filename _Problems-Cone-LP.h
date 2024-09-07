/*==============================================================================
Project: LiFe - New Linear Programming Solvers
Theme: Quest (No MPI)
Module: _Problems-NetLib-LP.h (Problems from the NETLIB LP Test Problem Set)
Prefix: PP
Author: Leonid B. Sokolinsky
This include file is part of Problem-Parameters.h
LP problems were obtained using BSF-LPP-Generator.
==============================================================================*/
#pragma once

//=========================== Method Parameters =========================
#define PP_EPS_ZERO		1E-11	// Accuracy for comparison with zero
#define PP_ETA_TO_APEX	0	// Distance from apex base to apex point

/*============================== cone3-0 LP problem ==============================*/
#define PP_PROBLEM_NAME	"cone3-0"
#define PP_M 11		// Number of equations (number of rows in *.mtx)
#define PP_N 14		// Number of variables (number of cols in *.mtx)
//#define PP_EPS_ZERO		1E-11	// Accuracy for comparison with zero
//#define PP_ETA_TO_APEX	0		// Distance from apex base to apex point
//---------------------------------------------------------------------------------/**/