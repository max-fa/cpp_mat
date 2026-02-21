#ifndef MAT_SUB_H
#define MAT_SUB_H

#include "../types/Matrix.hpp"

template <size_t Rows, size_t Cols>
Matrix<Rows, Cols> operator-(Matrix<Rows, Cols> lmat, Matrix<Rows, Cols> rmat);

#include "mat_sub.tpp"

#endif