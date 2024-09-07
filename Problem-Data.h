/*==============================================================================
Project: LiFe - New Linear Programming Solvers
Theme: Quest (MPI)
Module: Problem-Data.h (Problem Data)
Prefix: PD
Author: Leonid B. Sokolinsky
This source code has been produced with using BSF-skeleton
==============================================================================*/
#include "Problem-Types.h"		// Problem Parameters 
using namespace std;
//========================== Problem variables ====================================
static int		PD_m;				// Number of inequalities
static int		PD_n;				// Space dimension
static int		PD_iterNo;			// Number of iterations
//========================== Problem structures ====================================
static PT_matrix_T PD_A;					// Matrix of coefficients of inequalities 
static PT_column_T PD_b;					// Column of the constant terms of the system Ax <= PD_b
static PT_vector_T PD_c;					// Objective Function Coefficients
static PT_vector_T PD_apexPoint;			// Apex point
static PT_vector_T PD_x;					// Current approximation
static PT_vector_T PD_hi;					// Higher bound
static PT_vector_T PD_lo;					// Lower bound
static PT_column_T PD_norm_a;				// Column of norms of matrix rows
static bool PD_recessive_tag[PP_MM];		// Tag of recessivity
//========================== Input/Output ====================================
static string PD_problemName;