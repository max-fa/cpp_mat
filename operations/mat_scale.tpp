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

template <size_t Inner, size_t L_Rows, size_t R_Cols>
Matrix<L_Rows, R_Cols> operator*(Matrix<L_Rows, Inner> lmat, Matrix<Inner, R_Cols> rmat) {

    std::array<std::array<double, R_Cols>, L_Rows> result_arr {};
    std::array<std::array<double, Inner>, L_Rows> lmat_arr = lmat.getArr();
    std::array<std::array<double, R_Cols>, Inner> rmat_arr = rmat.getArr();

    int i,j,k;
    for(i = 0; i < L_Rows; i++) {

        for(j = 0; j < R_Cols; j++) {
            double entry = 0;

            for(k = 0; k < Inner; k++) {

                entry += lmat_arr[i][k] * rmat_arr[k][j];

            }

            result_arr[i][j] = entry;

        }

    }


    return Matrix<L_Rows, R_Cols>(result_arr);

}