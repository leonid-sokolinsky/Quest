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

/*============================== adlittle LP problem =======================*
// Number of equations : 15
// Subspace dimension : 82
#define PP_PROBLEM_NAME		"adlittle"
#define PP_M 56	// Number of constraints in mps-file
#define PP_N 97	// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 		-225494.96316238038228101176621492
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11				// Accuracy for comparison with zero
#define PP_EPS_CFACTOR				(PP_EPS_ZERO*10000)	// Precision of calculating apex-point
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_ZERO*100)	// Accuracy of belonging to hyperplane
#define PP_EPS_PROJECTION			PP_EPS_ZERO			// Precision to calculate projection
#define PP_ETA_TO_APEX				1500					// Distance from apex base to apex point
//--------------------------------------------------------------------------
// Elapsed time: 5
// Number of iterations: 365039
// Computed objective value: -11023421.55663015
// Maximal objective value:  -225494.9631623804
// Relative error = 47.9
// Number of including inequality hyperplanes: 47
//--------------------------------------------------------------------------

/*============================== afiro LP problem ==========================*
// Number of equations : 8
// Subspace dimension : 24
#define PP_PROBLEM_NAME	"afiro"
#define PP_M 27		// Number of constraints in mps-file
#define PP_N 32		// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 464.75314285714285714285714285714
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11				// Accuracy for comparison with zero
#define PP_EPS_CFACTOR				PP_EPS_ZERO			// Precision of calculating apex-point
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_ZERO*10)	// Accuracy of belonging to hyperplane
#define PP_EPS_PROJECTION			PP_EPS_ZERO			// Precision to calculate projection
#define PP_ETA_TO_APEX				0					// Distance from apex base to apex point
//--------------------------------------------------------------------------
#define PP_BIPROJECTION
//--------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 11047
// Computed objective value: -53.28610217848914
// Maximal objective value:  464.7531428571428
// Relative error = 1.11
// Number of including inequality hyperplanes: 20
//--------------------------------------------------------------------------

/*============================== beaconfd LP problem =======================*
// Number of equations: 140
// Subspace dimension: 122
#define PP_PROBLEM_NAME		"beaconfd"
#define PP_M 173	// Number of constraints in mps-file
#define PP_N 262	// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE -33592.4858072
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11				// Accuracy for comparison with zero
#define PP_EPS_CFACTOR				(PP_EPS_ZERO*100000)// Precision of calculating apex-point
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_ZERO*100)	// Accuracy of belonging to hyperplane
#define PP_EPS_PROJECTION			PP_EPS_ZERO			// Precision to calculate projection
#define PP_ETA_TO_APEX				0					// Distance from apex base to apex point
//--------------------------------------------------------------------------
// Elapsed time: 8
// Number of iterations: 64532
// Computed objective value: -33843.6392739498
// Maximal objective value:  -33592.4858072
// Relative error = 0.00748
// Number of including inequality hyperplanes: 137
//--------------------------------------------------------------------------

/*============================== blend LP problem ==========================*
// Number of equations: 43
// Subspace dimension: 40
#define PP_PROBLEM_NAME		"blend"
#define PP_M 74	// Number of constraints in mps-file
#define PP_N 83		// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 30.812149845828220173774356124984	// Exact maximum value of objective function
//--------------------------------------------------------------------------
#define PP_EPS_ZERO				1E-11				// Accuracy for comparison with zero
#define PP_EPS_CFACTOR			(PP_EPS_ZERO*100)	// Precision of calculating apex-point
#define PP_EPS_ON_HYPERPLANE	PP_EPS_ZERO			// Accuracy of belonging to hyperplane
#define PP_EPS_PROJECTION		PP_EPS_ZERO			// Precision to calculate projection
#define PP_ETA_TO_APEX			0					// Distance from apex base to apex point
//--------------------------------------------------------------------------
// Elapsed time: 4
// Number of iterations: 281053
// Computed objective value: -2109.976905362102
// Maximal objective value:  30.81214984582822
// Relative error = 69.5
// Number of including inequality hyperplanes: 41
//--------------------------------------------------------------------------

/*============================== israel LP problem =========================*
// Number of equations: 0
#define PP_PROBLEM_NAME		"israel"
#define PP_M 174	// Number of constraints in mps-file
#define PP_N 142	// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 896644.82186304572966200464196045	// Exact maximum value of objective function
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11				// Accuracy for comparison with zero
#define PP_EPS_CFACTOR				(PP_EPS_ZERO*1000)	// Precision of calculating apex-point
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_ZERO*10)	// Accuracy of belonging to hyperplane
#define PP_EPS_PROJECTION			PP_EPS_ZERO			// Precision to calculate projection
#define PP_ETA_TO_APEX				9000					// Distance from apex base to apex point
//--------------------------------------------------------------------------
#undef PP_BIPROJECTION
//--------------------------------------------------------------------------
// Elapsed time: 20
// Number of iterations: 443560
// Computed objective value: -3323686.852036875
// Maximal objective value:  896644.8218630457
// Relative error = 4.71
// Number of including inequality hyperplanes: 99
//--------------------------------------------------------------------------

/*============================== kb2 LP problem ============================*/
// Number of equations: 16
// Subspace dimension: 25
#define PP_PROBLEM_NAME		"kb2"
#define PP_M 43	// Number of equations (after conversion to standard form)
#define PP_N 41	// Number of variables in mps-file (after conversion to standard form)
#define PP_MAX_OBJ_VALUE 1749.9001299062057129526866493726
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11				// Accuracy for comparison with zero
#define PP_EPS_CFACTOR				PP_EPS_ZERO			// Precision of calculating apex-point
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_ZERO*100)	// Accuracy of belonging to hyperplane
#define PP_EPS_PROJECTION			PP_EPS_ZERO			// Precision to calculate projection
#define PP_ETA_TO_APEX				10000					// Distance from apex base to apex point
//--------------------------------------------------------------------------
//#undef PP_BIPROJECTION
//--------------------------------------------------------------------------
// Elapsed time: 94
// Number of iterations: 26855743
// Computed objective value: 1741.141569352053
// Maximal objective value:  1749.900129906206
// Relative error = 0.00501
// Number of including inequality hyperplanes: 16
//--------------------------------------------------------------------------

/*============================== recipe LP problem =========================*
// Number of equations: 79
// Subspace dimension: 101
#define PP_PROBLEM_NAME		"recipe"
#define PP_M 91		// Number of constraints in mps-file
#define PP_N 180	// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 266.616 // Exact maximum value of objective function
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11				// Accuracy for comparison with zero
#define PP_EPS_CFACTOR				(PP_EPS_ZERO*10000)	// Precision of calculating apex-point
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_ZERO*10)	// Accuracy of belonging to hyperplane
#define PP_EPS_PROJECTION			PP_EPS_ZERO			// Precision to calculate projection
#define PP_ETA_TO_APEX				0					// Distance from apex base to apex point
//--------------------------------------------------------------------------
// Elapsed time: 1
// Number of iterations: 18839
// Computed objective value: 230.6046411782623
// Maximal objective value:  266.616
// Relative error = 0.135
// Number of including inequality hyperplanes: 169
//--------------------------------------------------------------------------

/*============================== sc50a LP problem ==========================*
// Number of equations: 20
// Subspace dimension: 28
#define PP_PROBLEM_NAME		"sc50a"
#define PP_M 49	// Number of constraints in mps-file
#define PP_N 48		// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 64.575077058564509026860413914575	// Exact maximum value of objective function
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11				// Accuracy for comparison with zero
#define PP_EPS_CFACTOR				PP_EPS_ZERO			// Precision of calculating apex-point
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_ZERO*100)	// Accuracy of belonging to hyperplane
#define PP_EPS_PROJECTION			PP_EPS_ZERO			// Precision to calculate projection
#define PP_ETA_TO_APEX				15000				// Distance from apex base to apex point
//--------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 1
// Computed objective value: 0
// Maximal objective value:  64.5750770585645
// Relative error = 1
// Number of including inequality hyperplanes: 67
//--------------------------------------------------------------------------

/*============================== sc50b LP problem ==========================*
// Number of equations: 20
// Subspace dimension: 28
#define PP_PROBLEM_NAME		"sc50b"
#define PP_M 48	// Number of constraints in mps-file
#define PP_N 48		// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 70	// Exact maximum value of objective function
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11				// Accuracy for comparison with zero
#define PP_EPS_CFACTOR				PP_EPS_ZERO			// Precision of calculating apex-point
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_ZERO*10)	// Accuracy of belonging to hyperplane
#define PP_EPS_PROJECTION			PP_EPS_ZERO			// Precision to calculate projection
#define PP_ETA_TO_APEX				25000				// Distance from apex base to apex point
//--------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 64703
// Computed objective value: 66.40908935379524
// Maximal objective value:  70
// Relative error = 0.0513
// Number of including inequality hyperplanes: 24
//--------------------------------------------------------------------------

/*============================== sc105 LP problem ==========================*
// Number of equations: 45
// Subspace dimension: 58
#define PP_PROBLEM_NAME		"sc105"
#define PP_M 104	// Number of constraints in mps-file
#define PP_N 103	// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 52.202061211707248062628010857689 // Exact maximum value of objective function
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11				// Accuracy for comparison with zero
#define PP_EPS_CFACTOR				PP_EPS_ZERO			// Precision of calculating apex-point
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_ZERO*10)	// Accuracy of belonging to hyperplane
#define PP_EPS_PROJECTION			PP_EPS_ZERO			// Precision to calculate projection
#define PP_ETA_TO_APEX				100000				// Distance from apex base to apex point
//--------------------------------------------------------------------------
// Elapsed time: 22
// Number of iterations: 978999
// Computed objective value: 43.22181049787044
// Maximal objective value:  52.20206121170725
// Relative error = 0.172
// Number of including inequality hyperplanes: 62
//--------------------------------------------------------------------------

/*============================== share2b LP problem ==========================*
// Number of equations: 13
// Subspace dimension: 66
#define PP_PROBLEM_NAME		"share2b"
#define PP_M 96	// Number of constraints in mps-file
#define PP_N 79	// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 415.732240741419486545199108738 // Exact maximum value of objective function
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11				// Accuracy for comparison with zero
#define PP_EPS_CFACTOR				(PP_EPS_ZERO*1000)	// Precision of calculating apex-point
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_ZERO*10000)	// Accuracy of belonging to hyperplane
#define PP_EPS_PROJECTION			PP_EPS_ZERO			// Precision to calculate projection
#define PP_ETA_TO_APEX				0					// Distance from apex base to apex point
//--------------------------------------------------------------------------
// Elapsed time: 270
// Number of iterations: 18704028
// Computed objective value: 368.7327098107609
// Maximal objective value:  415.7322407414195
// Relative error = 0.113
// Number of including inequality hyperplanes: 56
//--------------------------------------------------------------------------

//--------------------------------------------------------------------------/**/