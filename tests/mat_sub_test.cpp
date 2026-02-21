#include <array>
#include <iostream>
#include "../types/Matrix.hpp"
#include "../operations/mat_sub.hpp"

int main() {

    std::array<double, 3> mat1_row1 {1, 2, 3};
    std::array<double, 3> mat1_row2 {4, 5, 6};
    std::array<double, 3> mat1_row3 {7, 8, 9};
    std::array<std::array<double, 3>, 3> mat1_arr {mat1_row1, mat1_row2, mat1_row3};
    Matrix<3, 3> mat1(mat1_arr);
    std::cout << "Matrix 1: " << "\n";
    mat1.print();

    std::array<double, 3> mat2_row1 {0, 2, 3};
    std::array<double, 3> mat2_row2 {4, 4, 6};
    std::array<double, 3> mat2_row3 {7, 8, 8};
    std::array<std::array<double, 3>, 3> mat2_arr {mat2_row1, mat2_row2, mat2_row3};
    Matrix<3, 3> mat2(mat2_arr);
    std::cout << "Matrix 2: " << "\n";
    mat2.print();

    Matrix<3, 3> diff = mat1 - mat2;
    std::cout << "Matrix 1 - Matrix 2: " << "\n";
    diff.print();

    return 0;

}