#ifndef MAT_SCALE_H
#define MAT_SCALE_H

#include "../types/Matrix.hpp"

template <size_t Rows, size_t Cols>
Matrix<Rows, Cols> operator*(double c, Matrix<Rows, Cols> mat);

template <size_t Inner, size_t L_Rows, size_t R_Cols>
Matrix<L_Rows, R_Cols> operator*(Matrix<L_Rows, Inner> lmat, Matrix<Inner, R_Cols> rmat);


#include "mat_scale.tpp"
#endif