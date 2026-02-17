#include "../types/Matrix.hpp"
#include <array>

template <size_t Rows, size_t Cols>
Matrix<Rows, Cols> operator+(Matrix<Rows, Cols> lmat, Matrix<Rows, Cols> rmat) {

    std::array<std::array<double, Cols>, Rows> lmat_arr_copy = lmat.getArr();
    std::array<std::array<double, Cols>, Rows> rmat_arr_copy = rmat.getArr();
    std::array<std::array<double, Cols>, Rows> result_arr = {};

    int i, j;
    for (i = 0; i < result_arr.size(); i++) {
        for (j = 0; j < result_arr[i].size(); j++) {
            result_arr[i][j] = lmat_arr_copy[i][j] + rmat_arr_copy[i][j]; // should update result_arr at the i x j entry with the addition of the corresponding entries of mat1 and mat2, we'll see
        }
    }

    return Matrix<Rows, Cols>(result_arr);

}