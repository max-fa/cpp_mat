#include "../types/Matrix.hpp"

template <size_t Rows, size_t Cols>
Matrix<Rows, Cols> operator*(double c, Matrix<Rows, Cols> mat) {

    std::array<std::array<double, Cols>, Rows> result_arr {};
    std::array<std::array<double, Cols>, Rows> mat_arr = mat.getArr();

    int i;
    for (i = 0; i < mat_arr.size(); i++) {
        int j;
        for (j = 0; j < mat_arr[i].size(); j++) {
            result_arr[i][j] = c * mat_arr[i][j];
        }
    }

    return Matrix<Rows, Cols>(result_arr);

}