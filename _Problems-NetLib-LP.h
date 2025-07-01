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

/*============================== adlittle LP problem ===========================*/
// Number of equations : 15
// Subspace dimension : 82
#define PP_PROBLEM_NAME		"adlittle"
#define PP_M 56	// Number of constraints in mps-file
#define PP_N 97	// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 		-225494.96316238038228101176621492
//--------------------------------------------------------------------------
#define PP_EPS_ZERO				1E-13					// Accuracy for comparison with zero
#define PP_EPS_PROJECTION		(PP_EPS_ZERO*10)		// Precision to calculate projection
#define PP_EPS_ON_HYPERPLANE	(PP_EPS_ZERO*100)	// Accuracy of belonging to hyperplane
#define PP_EPS_CFACTOR			(PP_EPS_ZERO*100000)		// Precision of calculating apex-point
#define PP_ETA_TO_APEX			0					// Distance from apex base to apex point (used if PP_SHORT_OBJECTIVE_VECTOR is not defined)
#define PP_OBJ_VECT_LEN			0.1						// Length of objective vector (used if PP_SHORT_OBJECTIVE_VECTOR is defined)
//-------------------------- Compilation Modes ---------------------------------
#define PP_MAXPROJECTION
//#define PP_SHORT_OBJECTIVE_VECTOR
//--------------------------------------------------------------------------
// Elapsed time: 4
// Number of iterations: 238667
// Computed objective value: -10623946.4335447959601879
// Maximal objective value:  -225494.963162380387075245
// Relative error = 46.1
// Distance to polytope: 9.72617707986976977584389e-12
// Number of including inequality hyperplanes: 42
//--------------------------------------------------------------------------

/*============================== afiro LP problem ==========================*
// Number of equations : 8
// Subspace dimension : 24
#define PP_PROBLEM_NAME	"afiro"
#define PP_M 27		// Number of constraints in mps-file
#define PP_N 32		// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 464.75314285714285714285714285714
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11					// Accuracy for comparison with zero
#define PP_EPS_PROJECTION			PP_EPS_ZERO				// Precision to calculate projection
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_EPS_CFACTOR				PP_EPS_ZERO				// Precision of calculating apex-point
#define PP_ETA_TO_APEX				0						// Distance from apex base to apex point
//-------------------------- Compilation Modes ---------------------------------
//#define PP_MAXPROJECTION
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 9968
// Computed objective value: -53.2861021747171790252651
// Maximal objective value:  464.753142857142847788054
// Relative error = 1.11
// Distance to polytope: 9.96057169845991459247169e-11
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
#define PP_EPS_ZERO					1E-13					// Accuracy for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)		// Precision to calculate projection
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_EPS_CFACTOR				(PP_EPS_ZERO*100000)	// Precision of calculating apex-point
#define PP_ETA_TO_APEX				0						// Distance from apex base to apex point
#define PP_OBJ_VECT_LEN				0.01					// Length of objective vector (used if PP_SHORT_OBJECTIVE_VECTOR is defined)
//-------------------------- Compilation Modes ---------------------------------
#define PP_MAXPROJECTION
//#define PP_SHORT_OBJECTIVE_VECTOR
//--------------------------------------------------------------------------
// Elapsed time: 6
// Number of iterations: 66867
// Computed objective value: -33843.1259060179727384821
// Maximal objective value:  -33592.4858071999988169409
// Relative error = 0.00746
// Distance to polytope: 9.97986958487690499071936e-13
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
#define PP_EPS_ZERO				1E-13					// Accuracy for comparison with zero
#define PP_EPS_PROJECTION		(PP_EPS_ZERO*10)		// Precision to calculate projection
#define PP_EPS_ON_HYPERPLANE	(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_EPS_CFACTOR			(PP_EPS_ZERO*1000)		// Precision of calculating apex-point
#define PP_ETA_TO_APEX			0					// Distance from apex base to apex point (used if PP_SHORT_OBJECTIVE_VECTOR is not defined)
#define PP_OBJ_VECT_LEN			10						// Length of objective vector (used if PP_SHORT_OBJECTIVE_VECTOR is defined)
//-------------------------- Compilation Modes ---------------------------------
#define PP_MAXPROJECTION
//#define PP_SHORT_OBJECTIVE_VECTOR
//--------------------------------------------------------------------------
// Elapsed time: 7
// Number of iterations: 827060
// Computed objective value: 5.08862967984313296909704
// Maximal objective value:  30.8121498458282196963864
// Relative error = 0.835
// Distance to polytope: 1.09844196588745852804128e-12
// Number of including inequality hyperplanes: 26
//--------------------------------------------------------------------------

/*============================== fit1d LP problem ==============================*
// Number of equations : 1
// Subspace dimension : 1025
#define PP_PROBLEM_NAME		"fit1d"
#define PP_M 24	// Number of equations (after conversion to standard form)
#define PP_N 1026	// Number of variables in mps-file (after conversion to standard form)
#define PP_MAX_OBJ_VALUE 9146.3780924209269467749025024617	// Exact maximum value of objective function
//------------------------------------------------------------------------------
#define PP_EPS_ZERO				1E-13					// Accuracy for comparison with zero
#define PP_EPS_PROJECTION		(PP_EPS_ZERO*10)		// Precision to calculate projection
#define PP_EPS_ON_HYPERPLANE	(PP_EPS_PROJECTION*10)	// Precision for point to be in halfspace
#define PP_EPS_CFACTOR			PP_EPS_ZERO				// Precision of calculating apex-point
#define PP_ETA_TO_APEX			0						// Distance from apex base to apex point (used if PP_SHORT_OBJECTIVE_VECTOR is not defined)
#define PP_OBJ_VECT_LEN			0.01					// Length of objective vector (used if PP_SHORT_OBJECTIVE_VECTOR is defined)
//-------------------------- Compilation Modes ---------------------------------
#define PP_MAXPROJECTION
//------------------------------------------------------------------------------
// Elapsed time: 97
// Number of iterations: 51195
// Computed objective value: 4839.81595709865450771758
// Maximal objective value:  9146.37809242092771455646
// Relative error = 0.471
// Distance to polytope: 9.94537785459215228911489e-13
// Number of including inequality hyperplanes: 483
//------------------------------------------------------------------------------

/*============================== grow7 LP problem ============================*
// Number of equations: 140
// Subspace dimension: 161
#define PP_PROBLEM_NAME		"grow7"
#define PP_M 140	// Number of equations (after conversion to standard form)
#define PP_N 301	// Number of variables in mps-file (after conversion to standard form)
#define PP_MAX_OBJ_VALUE 47787811.814711502616766956242865	// Exact maximum value of objective function
//------------------------------------------------------------------------------
#define PP_EPS_ZERO				1E-11					// Accuracy for comparison with zero
#define PP_EPS_PROJECTION		(PP_EPS_ZERO*10)		// Precision to calculate projection
#define PP_EPS_ON_HYPERPLANE	(PP_EPS_PROJECTION*100)	// Precision for point to be in halfspace
#define PP_EPS_CFACTOR			PP_EPS_ZERO		// Precision of calculating apex-point
#define PP_ETA_TO_APEX			0					// Distance from apex base to apex point (used if PP_SHORT_OBJECTIVE_VECTOR is not defined)
#define PP_OBJ_VECT_LEN			0.01						// Length of objective vector (used if PP_SHORT_OBJECTIVE_VECTOR is defined)
//-------------------------- Compilation Modes ---------------------------------
#define PP_MAXPROJECTION
//#define PP_SHORT_OBJECTIVE_VECTOR
//------------------------------------------------------------------------------
// Elapsed time: 4
// Number of iterations: 33351
// Computed objective value: 20763255.9532797858119011
// Maximal objective value:  47787811.8147115036845207
// Relative error = 0.566
// Distance to polytope: 1.02494417226877944963349e-10
// Number of including inequality hyperplanes: 40
//------------------------------------------------------------------------------

/*============================== israel LP problem =========================*
// Number of equations: 0
#define PP_PROBLEM_NAME		"israel"
#define PP_M 174	// Number of constraints in mps-file
#define PP_N 142	// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 896644.82186304572966200464196045	// Exact maximum value of objective function
//--------------------------------------------------------------------------
#define PP_EPS_ZERO				1E-11					// Accuracy for comparison with zero
#define PP_EPS_PROJECTION		(PP_EPS_ZERO*10)		// Precision to calculate projection
#define PP_EPS_ON_HYPERPLANE	(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_EPS_CFACTOR			(PP_EPS_ZERO*1000)		// Precision of calculating apex-point
#define PP_ETA_TO_APEX			0					// Distance from apex base to apex point (used if PP_SHORT_OBJECTIVE_VECTOR is not defined)
#define PP_OBJ_VECT_LEN			0.01						// Length of objective vector (used if PP_SHORT_OBJECTIVE_VECTOR is defined)
//-------------------------- Compilation Modes ---------------------------------
#define PP_MAXPROJECTION
#define PP_SHORT_OBJECTIVE_VECTOR
//------------------------------------------------------------------------------
// Elapsed time: 9
// Number of iterations: 436041
// Computed objective value: -3079072.39030792796984315
// Maximal objective value:  896644.821863045683130622
// Relative error = 4.43
// Distance to polytope: 1.05491895329962757518586e-11
// Number of including inequality hyperplanes: 98
//--------------------------------------------------------------------------

/*============================== kb2 LP problem ============================*
// Number of equations: 16
// Subspace dimension: 25
#define PP_PROBLEM_NAME		"kb2"
#define PP_M 43	// Number of equations (after conversion to standard form)
#define PP_N 41	// Number of variables in mps-file (after conversion to standard form)
#define PP_MAX_OBJ_VALUE 1749.9001299062057129526866493726
//--------------------------------------------------------------------------
#define PP_EPS_ZERO				1E-11					// Accuracy for comparison with zero
#define PP_EPS_PROJECTION		(PP_EPS_ZERO*10)		// Precision to calculate projection
#define PP_EPS_ON_HYPERPLANE	(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_EPS_CFACTOR			1E-5					// Precision of calculating apex-point
//-------------------------- Compilation Modes ---------------------------------
#define PP_MAXPROJECTION
//#define PP_SHORT_OBJECTIVE_VECTOR
//------------------------------------------------------------------------------
#ifdef PP_SHORT_OBJECTIVE_VECTOR
#define PP_OBJ_VECT_LEN			0.1						// Length of objective vector
#else // !PP_SHORT_OBJECTIVE_VECTOR
#define PP_ETA_TO_APEX			0					// Distance from apex base to apex point
#endif // PP_SHORT_OBJECTIVE_VECTOR
//------------------------------------------------------------------------------
// Elapsed time: 75
// Number of iterations: 23073115
// Computed objective value: 0.560444037924367588487939
// Maximal objective value:  1749.90012990620562050026
// Relative error = 1
// Distance to polytope: 1.21939403731240061653861e-10
// Number of including inequality hyperplanes: 27
//--------------------------------------------------------------------------

/*============================== recipe LP problem =========================*
// Number of equations: 79
// Subspace dimension: 101
#define PP_PROBLEM_NAME		"recipe"
#define PP_M 91		// Number of constraints in mps-file
#define PP_N 180	// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 266.616 // Exact maximum value of objective function
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-13					// Accuracy for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)		// Precision to calculate projection
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_EPS_CFACTOR				(PP_EPS_ZERO*100000)	// Precision of calculating apex-point
#define PP_ETA_TO_APEX				0						// Distance from apex base to apex point
#define PP_OBJ_VECT_LEN				0.00001					// Length of objective vector (used if PP_SHORT_OBJECTIVE_VECTOR is defined)
//-------------------------- Compilation Modes ---------------------------------
#define PP_MAXPROJECTION
//#define PP_SHORT_OBJECTIVE_VECTOR
//--------------------------------------------------------------------------
// Elapsed time: 1
// Number of iterations: 20234
// Computed objective value: 230.604641326079445207142
// Maximal objective value:  266.615999999999985448085
// Relative error = 0.135
// Distance to polytope: 1.37490019369579385966063e-12
// Number of including inequality hyperplanes: 169
//------------------------------------------------------------------------------

/*============================== sc50a LP problem ==============================*
// Number of equations: 20
// Subspace dimension: 28
#define PP_PROBLEM_NAME		"sc50a"
#define PP_M 49	// Number of constraints in mps-file
#define PP_N 48		// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 64.575077058564509026860413914575	// Exact maximum value of objective function
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-12					// Accuracy for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)		// Precision to calculate projection
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_EPS_CFACTOR				PP_EPS_ZERO			// Precision of calculating apex-point
#define PP_ETA_TO_APEX				10						// Distance from apex base to apex point
//-------------------------- Compilation Modes ---------------------------------
#define PP_MAXPROJECTION
//------------------------------------------------------------------------------
// Elapsed time: 1
// Number of iterations: 177871
// Computed objective value: 63.646952515898227886737
// Maximal objective value:  64.5750770585645028631916
// Relative error = 0.0144
// Distance to polytope: 2.08774136764297175671509e-11
// Number of including inequality hyperplanes: 21
//------------------------------------------------------------------------------

/*============================== sc50b LP problem ==============================*
// Number of equations: 20
// Subspace dimension: 28
#define PP_PROBLEM_NAME		"sc50b"
#define PP_M 48	// Number of constraints in mps-file
#define PP_N 48		// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 70	// Exact maximum value of objective function
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-13				// Accuracy for comparison with zero
#define PP_EPS_CFACTOR				PP_EPS_ZERO			// Precision of calculating apex-point
#define PP_EPS_PROJECTION			PP_EPS_ZERO			// Precision to calculate projection
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_ZERO*100)	// Accuracy of belonging to hyperplane
#define PP_ETA_TO_APEX				10					// Distance from apex base to apex point
//-------------------------- Compilation Modes ---------------------------------
#define PP_MAXPROJECTION
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 2510
// Computed objective value: 0.107994831977317573556974
// Maximal objective value:  70
// Relative error = 0.998
// Distance to polytope: 1.25745282729826768812745e-13
// Number of including inequality hyperplanes: 23
//------------------------------------------------------------------------------

/*============================== sc105 LP problem ==============================*
// Number of equations: 45
// Subspace dimension: 58
#define PP_PROBLEM_NAME		"sc105"
#define PP_M 104	// Number of constraints in mps-file
#define PP_N 103	// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 52.202061211707248062628010857689 // Exact maximum value of objective function
//------------------------------------------------------------------------------
#define PP_EPS_ZERO				1E-13					// Accuracy for comparison with zero
#define PP_EPS_PROJECTION		(PP_EPS_ZERO*10)		// Precision to calculate projection
#define PP_EPS_ON_HYPERPLANE	(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_EPS_CFACTOR			PP_EPS_ZERO				// Precision of calculating apex-point
//-------------------------- Compilation Modes ---------------------------------
#define PP_MAXPROJECTION
//#define PP_SHORT_OBJECTIVE_VECTOR
//------------------------------------------------------------------------------
#ifdef PP_SHORT_OBJECTIVE_VECTOR
#define PP_OBJ_VECT_LEN			0.1						// Length of objective vector
#else // !PP_SHORT_OBJECTIVE_VECTOR
#define PP_ETA_TO_APEX			10					// Distance from apex base to apex point
#endif // PP_SHORT_OBJECTIVE_VECTOR
//------------------------------------------------------------------------------
// Elapsed time: 22
// Number of iterations: 978999
// Computed objective value: 43.22181049787044
// Maximal objective value:  52.20206121170725
// Relative error = 0.172
// Number of including inequality hyperplanes: 62
//--------------------------------------------------------------------------

/*============================== scagr7 LP problem =============================*
// Number of equations : 84
// Subspace dimension : 56
#define PP_PROBLEM_NAME	"scagr7"
#define PP_M 129		// Number of constraints in mps-file
#define PP_N 140		// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 2331389.824330984	// Exact maximum value of objective function
//------------------------------------------------------------------------------
#define PP_EPS_ZERO				1E-12					// Accuracy for comparison with zero
#define PP_EPS_PROJECTION		(PP_EPS_ZERO*10)		// Precision to calculate projection
#define PP_EPS_ON_HYPERPLANE	(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_EPS_CFACTOR			1E-9				// Precision of calculating apex-point
#define PP_ETA_TO_APEX			0						// Distance from apex base to apex point
//-------------------------- Compilation Modes ---------------------------------
#define PP_MAXPROJECTION
//------------------------------------------------------------------------------
// Elapsed time: 494
// Number of iterations: 14121330
// Computed objective value: 1743916.33360644383355975
// Maximal objective value:  2331389.8243309841491282
// Relative error = 0.252
// Distance to polytope: 1.43745306732544180073335e-11
// Number of including inequality hyperplanes: 34
//------------------------------------------------------------------------------

/*============================== scsd1 LP problem ==============================*
// Number of equations : 77
// Subspace dimension : 683
#define PP_PROBLEM_NAME	"scsd1"
#define PP_M 77			// Number of constraints in mps-file
#define PP_N 760		// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE -8.6666666743333647292533502995263	// Exact maximum value of objective function
//------------------------------------------------------------------------------
#define PP_EPS_ZERO				1E-13					// Accuracy for comparison with zero
#define PP_EPS_PROJECTION		(PP_EPS_ZERO*10)		// Precision to calculate projection
#define PP_EPS_ON_HYPERPLANE	(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_EPS_CFACTOR			1E-10				// Precision of calculating apex-point
#define PP_ETA_TO_APEX			0						// Distance from apex base to apex point
//-------------------------- Compilation Modes ---------------------------------
#define PP_MAXPROJECTION
//------------------------------------------------------------------------------
// Elapsed time: 98
// Number of iterations: 171661
// Computed objective value: -14.7689724117895959665248
// Maximal objective value:  -8.66666667433336534998034
// Relative error = 0.704
// Distance to polytope: 1.09080267277148706342454e-12
// Number of including inequality hyperplanes: 202
//------------------------------------------------------------------------------

/*============================== share2b LP problem ==========================*
// Number of equations: 13
// Subspace dimension: 66
#define PP_PROBLEM_NAME		"share2b"
#define PP_M 96	// Number of constraints in mps-file
#define PP_N 79	// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 415.732240741419486545199108738 // Exact maximum value of objective function
//--------------------------------------------------------------------------
#define PP_EPS_ZERO				1E-13					// Accuracy for comparison with zero
#define PP_EPS_PROJECTION		(PP_EPS_ZERO*10)		// Precision to calculate projection
#define PP_EPS_ON_HYPERPLANE	(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_EPS_CFACTOR			(PP_EPS_ZERO*10000)		// Precision of calculating apex-point
//------------------------------------------------------------------------------
#ifdef PP_SHORT_OBJECTIVE_VECTOR
#define PP_OBJ_VECT_LEN			0.1						// Length of objective vector
#else // !PP_SHORT_OBJECTIVE_VECTOR
#define PP_ETA_TO_APEX			0					// Distance from apex base to apex point
#endif // PP_SHORT_OBJECTIVE_VECTOR
//-------------------------- Compilation Modes ---------------------------------
#define PP_MAXPROJECTION
//#define PP_SHORT_OBJECTIVE_VECTOR
//------------------------------------------------------------------------------
// Elapsed time: 270
// Number of iterations: 18704028
// Computed objective value: 368.7327098107609
// Maximal objective value:  415.7322407414195
// Relative error = 0.113
// Number of including inequality hyperplanes: 56
//------------------------------------------------------------------------------

/*============================== stocfor1 LP problem ============================*
// Number of equations: 63
// Subspace dimension: 48
#define PP_PROBLEM_NAME		"stocfor1"	
#define PP_M 117	// Number of constraints in mps-file
#define PP_N 111	// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 41131.976219436406065682760731514 // Exact maximum value of objective function
//--------------------------------------------------------------------------
#define PP_EPS_ZERO				1E-13					// Accuracy for comparison with zero
#define PP_EPS_PROJECTION		(PP_EPS_ZERO*10)		// Precision to calculate projection
#define PP_EPS_ON_HYPERPLANE	(PP_EPS_PROJECTION*10)	// Precision for point to be in halfspace
#define PP_EPS_CFACTOR			(PP_EPS_ZERO*10000000)		// Precision of calculating apex-point
#define PP_ETA_TO_APEX			0					// Distance from apex base to apex point
#define PP_OBJ_VECT_LEN			0.1						// Length of objective vector
//-------------------------- Compilation Modes ---------------------------------
#define PP_MAXPROJECTION
//#define PP_SHORT_OBJECTIVE_VECTOR
//------------------------------------------------------------------------------
// Elapsed time: 436
// Number of iterations: 23713634
// Computed objective value: 25428.3079724278723006137
// Maximal objective value:  41131.9762194364084280096
// Relative error = 0.382
// Distance to polytope: 9.80135650206334322066212e-13
// Number of including inequality hyperplanes: 39
//------------------------------------------------------------------------------

//==============================================================================/**/