#ifndef MAT_ADD_H
#define MAT_ADD_H
#include "../types/Matrix.hpp"

template <size_t Rows, size_t Cols>
Matrix<Rows, Cols> operator+(Matrix<Rows, Cols> lmat, Matrix<Rows, Cols> rmat);

#include "mat_add.tpp"

#endif