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
#define PP_EPS_POINT_IN_HALFSPACE	PP_EPS_ZERO			// Precision for point to be in halfspace
#define PP_EPS_ON_HYPERPLANE		PP_EPS_ZERO			// Accuracy of belonging to hyperplane
#define PP_ETA_TO_APEX				1000000					// Distance from apex base to apex point
//--------------------------------------------------------------------------
// ????
// Elapsed time: 71
// Number of iterations: 3927193
// Computed objective value: -5135286.426086854
// Maximal objective value:  -225494.9631623804
// Relative error = 21.8
// Number of including inequality hyperplanes: 48
// Number of inequality hyperplanes including z0: 34
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
#define PP_EPS_CFACTOR				(PP_EPS_ZERO*1000)	// Precision of calculating apex-point
#define PP_EPS_POINT_IN_HALFSPACE	PP_EPS_ZERO			// Precision for point to be in halfspace
#define PP_EPS_ON_HYPERPLANE		PP_EPS_ZERO			// Accuracy of belonging to hyperplane
#define PP_ETA_TO_APEX				100000				// Distance from apex base to apex point
//--------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 24693
// Computed objective value: 455.9614824972979
// Maximal objective value:  464.7531428571428
// Relative error = 0.0189
// Number of including inequality hyperplanes: 31
// Number of inequality hyperplanes including z0: 23
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
#define PP_EPS_CFACTOR				(PP_EPS_ZERO*100000)	// Precision of calculating apex-point
#define PP_EPS_POINT_IN_HALFSPACE	PP_EPS_ZERO			// Precision for point to be in halfspace
#define PP_EPS_ON_HYPERPLANE		PP_EPS_ZERO			// Accuracy of belonging to hyperplane
#define PP_ETA_TO_APEX				100				// Distance from apex base to apex point
//--------------------------------------------------------------------------
// Elapsed time: 88
// Number of iterations: 558667
// Computed objective value: -33837.75644768301
// Maximal objective value:  -33592.4858072
// Relative error = 0.0073
// Number of including inequality hyperplanes: 132
// Number of inequality hyperplanes including z0: 125
//--------------------------------------------------------------------------

/*============================== blend LP problem ==========================*
// Number of equations: 43
// Subspace dimension: 40
#define PP_PROBLEM_NAME		"blend"
#define PP_M 74	// Number of constraints in mps-file
#define PP_N 83		// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 30.812149845828220173774356124984	// Exact maximum value of objective function
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11				// Accuracy for comparison with zero
#define PP_EPS_CFACTOR				(PP_EPS_ZERO*1000)	// Precision of calculating apex-point
#define PP_EPS_POINT_IN_HALFSPACE	PP_EPS_ZERO			// Precision for point to be in halfspace
#define PP_EPS_ON_HYPERPLANE		PP_EPS_ZERO			// Accuracy of belonging to hyperplane
#define PP_ETA_TO_APEX				0				// Distance from apex base to apex point
//--------------------------------------------------------------------------
// Number of inequality hyperplanes including z0: 106
//--------------------------------------------------------------------------

/*============================== fit1d LP problem ==========================*
// Number of equations : 1
// Subspace dimension : 1025
// Number of inequality hyperplanes including z0: 1049
#define PP_PROBLEM_NAME		"fit1d"
#define PP_M 24	// Number of equations (after conversion to standard form)
#define PP_N 1026	// Number of variables in mps-file (after conversion to standard form)
#define PP_MAX_OBJ_VALUE 9146.3780924209269467749025024617	// Exact maximum value of objective function
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11				// Accuracy for comparison with zero
#define PP_EPS_CFACTOR				(PP_EPS_ZERO*1000)	// Precision of calculating apex-point
#define PP_EPS_POINT_IN_HALFSPACE	PP_EPS_ZERO			// Precision for point to be in halfspace
#define PP_EPS_ON_HYPERPLANE		PP_EPS_ZERO			// Accuracy of belonging to hyperplane
#define PP_ETA_TO_APEX				1000				// Distance from apex base to apex point
//--------------------------------------------------------------------------
// Number of inequality hyperplanes including z0: 1049
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
#define PP_EPS_POINT_IN_HALFSPACE	PP_EPS_ZERO			// Precision for point to be in halfspace
#define PP_EPS_ON_HYPERPLANE		PP_EPS_ZERO			// Accuracy of belonging to hyperplane
#define PP_ETA_TO_APEX				0				// Distance from apex base to apex point
//--------------------------------------------------------------------------
// Number of inequality hyperplanes including z0: 141
//--------------------------------------------------------------------------

/*============================== kb2 LP problem ============================*
// Number of equations: 16
// Subspace dimension: 25
#define PP_PROBLEM_NAME		"kb2"
#define PP_M 43	// Number of equations (after conversion to standard form)
#define PP_N 41	// Number of variables in mps-file (after conversion to standard form)
#define PP_MAX_OBJ_VALUE 1749.9001299062057129526866493726
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11				// Accuracy for comparison with zero
#define PP_EPS_CFACTOR				PP_EPS_ZERO			// Precision of calculating apex-point
#define PP_EPS_POINT_IN_HALFSPACE	PP_EPS_ZERO			// Precision for point to be in halfspace
#define PP_EPS_ON_HYPERPLANE		PP_EPS_ZERO			// Accuracy of belonging to hyperplane
#define PP_ETA_TO_APEX				0					// Distance from apex base to apex point
//--------------------------------------------------------------------------
// Number of inequality hyperplanes including z0: 68
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
#define PP_EPS_POINT_IN_HALFSPACE	PP_EPS_ZERO			// Precision for point to be in halfspace
#define PP_EPS_ON_HYPERPLANE		PP_EPS_ZERO			// Accuracy of belonging to hyperplane
#define PP_ETA_TO_APEX				0					// Distance from apex base to apex point
//--------------------------------------------------------------------------
// Elapsed time: 7
// Number of iterations: 74821
// Computed objective value: 265.8479997853444
// Maximal objective value:  266.616
// Relative error = 0.00288
// Number of including inequality hyperplanes: 172
// Number of inequality hyperplanes including z0: 190
//--------------------------------------------------------------------------

/*============================== sc50a LP problem ==========================*/
// Number of equations: 20
// Subspace dimension: 28
#define PP_PROBLEM_NAME		"sc50a"
#define PP_M 49	// Number of constraints in mps-file
#define PP_N 48		// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 64.575077058564509026860413914575	// Exact maximum value of objective function
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11				// Accuracy for comparison with zero
#define PP_EPS_CFACTOR				PP_EPS_ZERO			// Precision of calculating apex-point
#define PP_EPS_POINT_IN_HALFSPACE	PP_EPS_ZERO			// Precision for point to be in halfspace
#define PP_EPS_ON_HYPERPLANE		PP_EPS_ZERO			// Accuracy of belonging to hyperplane
#define PP_ETA_TO_APEX				100000				// Distance from apex base to apex point
//--------------------------------------------------------------------------
// Elapsed time: 2
// Number of iterations: 288694
// Computed objective value: 55.78401443370144
// Maximal objective value:  64.5750770585645
// Relative error = 0.136
// Number of including inequality hyperplanes: 29
//--------------------------------------------------------------------------

/*============================== sc50b LP problem ==========================*
// Number of equations: 20
// Subspace dimension: 28
#define PP_PROBLEM_NAME		"sc50b"
#define PP_M 50	// Number of constraints in mps-file
#define PP_N 48		// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 70	// Exact maximum value of objective function
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11				// Accuracy for comparison with zero
#define PP_EPS_CFACTOR				PP_EPS_ZERO			// Precision of calculating apex-point
#define PP_EPS_POINT_IN_HALFSPACE	PP_EPS_ZERO			// Precision for point to be in halfspace
#define PP_EPS_ON_HYPERPLANE		PP_EPS_ZERO			// Accuracy of belonging to hyperplane
#define PP_ETA_TO_APEX				10			// Distance from apex base to apex point
//--------------------------------------------------------------------------
// Elapsed time: 1
// Number of iterations: 9013
// Computed objective value: 0.1044611084065197
// Maximal objective value:  70
// Relative error = 0.999
// Number of including inequality hyperplanes: 31
// Number of inequality hyperplanes including z0: 73
//--------------------------------------------------------------------------

/*============================== sc105 LP problem ==========================*
// Number of equations: 45
// Subspace dimension: 58
#define PP_PROBLEM_NAME		"sc105"
#define PP_M 105	// Number of constraints in mps-file
#define PP_N 103	// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 52.202061211707248062628010857689 // Exact maximum value of objective function
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11				// Accuracy for comparison with zero
#define PP_EPS_CFACTOR				PP_EPS_ZERO			// Precision of calculating apex-point
#define PP_EPS_POINT_IN_HALFSPACE	PP_EPS_ZERO			// Precision for point to be in halfspace
#define PP_EPS_ON_HYPERPLANE		PP_EPS_ZERO			// Accuracy of belonging to hyperplane
#define PP_ETA_TO_APEX				10				// Distance from apex base to apex point
//--------------------------------------------------------------------------
// Elapsed time: 3
// Number of iterations: 84726
// Computed objective value: 0.005780296307885637
// Maximal objective value:  52.20206121170725
// Relative error = 1
// Number of including inequality hyperplanes: 89
// Number of inequality hyperplanes including z0: 143
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
#define PP_EPS_CFACTOR				(PP_EPS_ZERO*1000)			// Precision of calculating apex-point
#define PP_EPS_POINT_IN_HALFSPACE	PP_EPS_ZERO			// Precision for point to be in halfspace
#define PP_EPS_ON_HYPERPLANE		PP_EPS_ZERO			// Accuracy of belonging to hyperplane
#define PP_ETA_TO_APEX				0				// Distance from apex base to apex point
//--------------------------------------------------------------------------
// ?
// Number of including inequality hyperplanes: 49
// Number of inequality hyperplanes including z0: 39
//--------------------------------------------------------------------------

//--------------------------------------------------------------------------/**/