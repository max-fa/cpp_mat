#ifndef MAT_SCALE_H
#define MAT_SCALE_H

#include "../types/Matrix.hpp"

template <size_t Rows, size_t Cols>
Matrix<Rows, Cols> operator*(double c, Matrix<Rows, Cols> mat);


#include "mat_scale.tpp"
#endif