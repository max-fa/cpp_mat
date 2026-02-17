#include "Matrix.hpp"
#include <iostream>

template <std::size_t Rows, std::size_t Cols>
Matrix<Rows, Cols>::Matrix(std::array<std::array<double, Cols>, Rows> arr):
    m_arr(arr),
    m_rows(Rows),
    m_cols(Cols),
    m_size(Rows*Cols)
{};

template <std::size_t Rows, std::size_t Cols>
bool Matrix<Rows, Cols>::isSquare() {

    if(Rows == Cols) {

        return true;

    } else {

        return false;

    }

};

template <std::size_t Rows, std::size_t Cols>
void Matrix<Rows, Cols>::print() {

    int i;
    for (i = 0; i < m_arr.size(); i++) {
        int j;
        for (j = 0; j < m_arr[i].size(); j++) {
            std::cout << m_arr[i][j] << "  ";
        }
        std::cout << "\n";
    }

}