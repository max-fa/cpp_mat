#ifndef MATRIX_H
#define MATRIX_H

#include <array>
#include <iostream>

template <std::size_t Rows, std::size_t Cols>
class Matrix {
    private:
        std::array<std::array<double, Cols>, Rows> m_arr;
        int m_size {};
        int m_rows {};
        int m_cols {};
    
    public:
        Matrix(std::array<std::array<double, Cols>, Rows> arr);
        bool isSquare();
        void print();
        int getSize() { return m_size; };
        int getCols() { return m_cols; };
        int getRows() { return m_rows; };
        std::array<std::array<double, Cols>, Rows> getArr() { return m_arr; };


};

#include "Matrix.tpp"

#endif