/*==============================================================================
Project: LiFe
Theme: Quest (MPI)
Module: Problem-Forwards.h (Problem Function Forwards)
Author: Leonid B. Sokolinsky
This source code has been produced with using BSF-skeleton
==============================================================================*/
#include "Problem-bsfTypes.h"
#include "Problem-Types.h"
//====================== Problem Functions ===========================
void		ApexPoint(PT_vector_T innerPont, PT_vector_T apexPoint);
bool		Conversion();
PT_float_T	Distance(PT_vector_T x, PT_vector_T y);
bool		LoadMatrixFormat();
bool		MTX_SavePoint(PT_vector_T x, const char* filename, const char* comment);
PT_float_T	ObjF(PT_vector_T x);
void		UnitObjVector(PT_vector_T objUnitVector);
bool		PointInHalfspace(PT_vector_T point, PT_vector_T a, PT_float_T b);
bool		PointInPolytope(PT_vector_T x);
PT_float_T	PolytopeResidual(PT_vector_T x);
void		ProblemOutput(double elapsedTime);
void		SkipComments(FILE* stream);
void		Vector_Addition(PT_vector_T x, PT_vector_T y, PT_vector_T z);
void		Vector_Copy(PT_vector_T fromPoint, PT_vector_T toPoint);
PT_float_T	Vector_DistanceToHalfspace(PT_vector_T z, PT_vector_T a, PT_float_T b);
void		Vector_DivideByNumber(PT_vector_T x, double r, PT_vector_T y);
void		Vector_DivideEquals(PT_vector_T x, double r);
PT_float_T	Vector_DotProduct(PT_vector_T x, PT_vector_T y);
void		Vector_EpsZero(PT_vector_T x);
PT_float_T	Vector_Norm(PT_vector_T x);
PT_float_T	Vector_NormSquare(PT_vector_T x);
void		Vector_MinusEquals(PT_vector_T equalPoint, PT_vector_T minusVector);
void		Vector_MultiplyByNumber(PT_vector_T x, double r, PT_vector_T y);
void		Vector_MultiplyEquals(PT_vector_T x, double r);
void		Vector_PlusEquals(PT_vector_T equalVector, PT_vector_T plusVector);
void		Vector_ObliqueProjectionOntoHalfspace(PT_vector_T z, PT_vector_T a, PT_float_T b, PT_vector_T g, PT_vector_T o, int* exitCode);
bool		Vector_OnHyperplane(PT_vector_T point, PT_vector_T a, PT_float_T b);
PT_float_T	Vector_OrthogonalProjectionOntoHalfspace(PT_vector_T z, PT_vector_T a, PT_float_T b, PT_vector_T r, int* exitCode);
void		Vector_ResetToZero(PT_vector_T x);
void		Vector_Round(PT_vector_T x);
void		Vector_Subtraction(PT_vector_T x, PT_vector_T y, PT_vector_T z);
//====================== Macros ================================
#define PF_MIN(x,y) (x<y?x:y)
#define PF_MAX(x,y) (x>y?x:y)
#define PF_SIGN(x) (x>0?1:-1)