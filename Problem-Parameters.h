/*==============================================================================
Project: LiFe - New Linear Programming Solvers
Theme: Quest (MPI)
Module: Problem-Parameters.h (Problem Parameters)
Prefix: PP
Author: Leonid B. Sokolinsky
This source code has been produced with using BSF-skeleton
==============================================================================*/

/*----------------------------- Problems -------------------------------*/

//#define PP_PATH "Problems/"

/**
#include "_Problems05-1.h"
#define PP_PATH "D:/YandexDisk/_private/Programming/Set-of-LP-Problems/Rnd-LP/"

/**
#include "_Problems15-1.h"
#define PP_PATH "D:/YandexDisk/_private/Programming/Set-of-LP-Problems/Rnd-LP/"

/**
#include "_Problems16.24-0.h"
#define PP_PATH "D:/YandexDisk/_private/Programming/Set-of-LP-Problems/Rnd-LP/"

/**
#include "_Problems20-1.h"
#define PP_PATH "D:/YandexDisk/_private/Programming/Set-of-LP-Problems/Rnd-LP/"

/**
#include "_Problems-Cone-LP.h"
#define PP_PATH "D:/YandexDisk/_private/Programming/LP-Cone-Problems/"

/**/
#include "_Problems-NetLib-LP.h"
#define PP_PATH "D:/YandexDisk/_private/Programming/Set-of-LP-Problems/NetLib-LP/"

/**
#include "_Problems-Miscellaneous.h"
#define PP_PATH "D:/YandexDisk/_private/Programming/Set-of-LP-Problems/Miscellaneous-LP/"

/*---------------------------------------------------------------------*/

//-------------------------- Compilation Modes -----------------------
//#define PP_DEBUG
#define PP_SAVE_RESULT
//#define PP_MATRIX_OUTPUT

//=========================== Problem Parameters =========================
#define PP_MM					(2*PP_M+2*PP_N)	// Maximal number of inequalities
#define PP_MAX_ITER_COUNT		10000000000		// Maximal count of iterations
#define PP_DBL_MAX				1E+308			// Highest value

//-------------------------- Input/Outpoot Parameters ---------------------------
#define PP_OUTPUT_LIMIT	8	// Number of Elements to output
#define PP_SETW 14
//------------------------- Matrix format ----------------
#define PP_INFINITY				1E+308		// Highest bound in *_hi.mtx
#define PP_MTX_PREFIX			"lp_"
#define PP_MTX_POSTFIX_A		".mtx"
#define PP_MTX_POSTFIX_B		"_b.mtx"
#define PP_MTX_POSTFIX_LO		"_lo.mtx"
#define PP_MTX_POSTFIX_HI		"_hi.mtx"
#define PP_MTX_POSTFIX_C		"_c.mtx"
#define PP_MTX_POSTFIX_Z0		"_z0.mtx" // Starting boundary point
#define PP_MTX_POSTFIX_U0		"_u0.mtx" // Found boundary point

//-------------------------- Jobs  -----------------------
// Not used.
//------------- Locations -------------
#define PP_DEGENERATE_INEQUALITY	0
#define PP_ON_HYPERPLANE			1
#define PP_INSIDE_HALFSPACE			2
#define PP_OUTSIDE_HALFSPACE		3
#define PP_PARALLEL					4
#define PP_RECESSIVE				5
#define PP_NONDEGENERATE_PROJECTING	9