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

/*============================== adlittle LP problem =======================*/
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
// Elapsed time: 53.63261
// Number of iterations: 3927481
// Computed objective value: -5139425.824516108
// Maximal objective value:  -225494.9631623804
// Relative error = 21.8
// Number of including hyperplanes: 63
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
// Elapsed time: 0.1485175
// Number of iterations: 24691
// Computed objective value: 455.9614824973012
// Maximal objective value:  464.7531428571428
// Relative error = 0.0189
// Number of including hyperplanes: 47
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
// Elapsed time: 46.99238
// Number of iterations: 559565
// Computed objective value: -33837.75644768299
// Maximal objective value:  -33592.4858072
// Relative error = 0.0073
// Number of including hyperplanes: 272
//--------------------------------------------------------------------------

/*============================== blend LP problem =====================*
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
// Elapsed time: 199.5945
// Number of iterations: 16080351
// Computed objective value: 4.462917541809285
// Maximal objective value:  30.81214984582822
// Relative error = 0.855
// Number of including inequolity-hyperplanes: 66
//--------------------------------------------------------------------------

/*============================== fit1d LP problem ==========================*
// Number of equations : 1
// Subspace dimension : 1025
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
// Elapsed time: 362.1549
// Number of iterations: 124955
// Computed objective value: 24591.58537333636
// Maximal objective value:  9146.378092420928
// Relative error = 1.69
// Number of including inequality hyperplanes: 604
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
// Elapsed time: 194.4893
// Number of iterations: 6154356
// Computed objective value: -517582.5989798308
// Maximal objective value:  896644.8218630457
// Relative error = 1.58
// Number of including inequality hyperplanes: 66 (Quest)
// Number of including inequality hyperplanes: 141 (BIP)
//--------------------------------------------------------------------------

/*============================== kb2 LP problem ============================*
// Number of equations: 16
// Subspace dimension: 25
#define PP_PROBLEM_NAME		"kb2"
#define PP_M 43	// Number of equations (after conversion to standard form)
#define PP_N 41		// Number of variables in mps-file (after conversion to standard form)
#define PP_MAX_OBJ_VALUE 1749.9001299062057129526866493726
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11				// Accuracy for comparison with zero
#define PP_EPS_CFACTOR				PP_EPS_ZERO			// Precision of calculating apex-point
#define PP_EPS_POINT_IN_HALFSPACE	PP_EPS_ZERO			// Precision for point to be in halfspace
#define PP_EPS_ON_HYPERPLANE		PP_EPS_ZERO			// Accuracy of belonging to hyperplane
#define PP_ETA_TO_APEX				0					// Distance from apex base to apex point
//--------------------------------------------------------------------------
// Elapsed time: 2088
// Number of iterations: 434015622
// Computed objective value: 0.5689244671752515
// Maximal objective value:  1749.900129906206
// Relative error = 1
// Number of including inequality hyperplanes: 31
//--------------------------------------------------------------------------

/*============================== recipe LP problem =========================*
// Number of equations: 79
// Subspace dimension: 101
#define PP_PROBLEM_NAME		"recipe"
#define PP_M 91	// Number of constraints in mps-file
#define PP_N 180	// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 266.616 // Exact maximum value of objective function
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11				// Accuracy for comparison with zero
#define PP_EPS_CFACTOR				(PP_EPS_ZERO*10000)	// Precision of calculating apex-point
#define PP_EPS_POINT_IN_HALFSPACE	PP_EPS_ZERO			// Precision for point to be in halfspace
#define PP_EPS_ON_HYPERPLANE		PP_EPS_ZERO			// Accuracy of belonging to hyperplane
#define PP_ETA_TO_APEX				0					// Distance from apex base to apex point
//--------------------------------------------------------------------------
// Elapsed time: 3.87321
// Number of iterations: 82578
// Computed objective value: 770.4880005701409
// Maximal objective value:  266.616
// Relative error = 1.89
// Number of including inequality hyperplanes: 201
//--------------------------------------------------------------------------

/*============================== sc50a LP problem ==========================*
// Number of equations: 20
// Subspace dimension: 28
#define PP_PROBLEM_NAME		"sc50a"
#define PP_M 50	// Number of constraints in mps-file
#define PP_N 48		// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 64.575077058564509026860413914575	// Exact maximum value of objective function
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11				// Accuracy for comparison with zero
#define PP_EPS_CFACTOR				PP_EPS_ZERO			// Precision of calculating apex-point
#define PP_EPS_POINT_IN_HALFSPACE	PP_EPS_ZERO			// Precision for point to be in halfspace
#define PP_EPS_ON_HYPERPLANE		PP_EPS_ZERO			// Accuracy of belonging to hyperplane
#define PP_ETA_TO_APEX				100000				// Distance from apex base to apex point
//--------------------------------------------------------------------------
// Elapsed time: 1.942534
// Number of iterations: 288709
// Computed objective value: 55.78401443370289
// Maximal objective value:  64.5750770585645
// Relative error = 0.136
// Number of including inequality-hyperplanes: 30
//--------------------------------------------------------------------------

/*============================== sc50b LP problem ==============================*
#define PP_PROBLEM_NAME		"sc50b"
#define PP_M 50	// Number of constraints in mps-file
#define PP_N 48		// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 70	// Exact maximum value of objective function
//--------------------------------------------------------------------------
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11				// Accuracy for comparison with zero
#define PP_EPS_CFACTOR				PP_EPS_ZERO			// Precision of calculating apex-point
#define PP_EPS_POINT_IN_HALFSPACE	PP_EPS_ZERO			// Precision for point to be in halfspace
#define PP_EPS_ON_HYPERPLANE		PP_EPS_ZERO			// Accuracy of belonging to hyperplane
#define PP_ETA_TO_APEX				100000000				// Distance from apex base to apex point
//--------------------------------------------------------------------------
// Elapsed time: 4.285243
// Number of iterations: 645661
// Computed objective value: -9.965241128635358e-12
// Maximal objective value:  70
// Relative error = 1
// Number of including inequality-hyperplanes: 59
//--------------------------------------------------------------------------

/*============================== sc105 LP problem ==============================*
#define PP_PROBLEM_NAME		"sc105"
#define PP_M 105	// Number of constraints in mps-file
#define PP_N 103	// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 52.202061211707248062628010857689 // Exact maximum value of objective function
//--------------------------------------------------------------------------

/*============================== share2b LP problem ==========================*
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
// Elapsed time: 3166
// Number of iterations: 185189648
// Computed objective value: 366.6429336081592
// Maximal objective value:  415.7322407414195
// Relative error = 0.118
// Number of including inequality hyperplanes: 49
//--------------------------------------------------------------------------
//--------------------------------------------------------------------------/**/