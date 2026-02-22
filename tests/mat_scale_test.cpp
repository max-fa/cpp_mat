#include "../types/Matrix.hpp"
#include "../operations/mat_scale.hpp"
#include <array>
#include <iostream>

int main() {

    
    /*
    
    std::array<double, 10> mat_row1 {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::array<double, 10> mat_row2 {0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0};
    std::array<std::array<double, 10>, 2> mat_arr {mat_row1, mat_row2};
    Matrix<2, 10> mat(mat_arr);

    Matrix<2, 10> mat_scaled = 10*mat;

    mat_scaled.print();
    
    */

    std::array<double, 3> mat1_row1 = {1,2,3};
    std::array<double, 3> mat1_row2 = {4,5,6};
    std::array<double, 3> mat1_row3 = {7,8,9};
    std::array<double, 3> mat1_row4 = {10,11,12};
    std::array<double, 3> mat1_row5 = {13,14,15};
    std::array<std::array<double, 3>, 5> mat1_arr = {
        mat1_row1,
        mat1_row2,
        mat1_row3,
        mat1_row4,
        mat1_row5
    };
    Matrix<5,3> mat1(mat1_arr);
    std::cout << "Matrix 1: " << "\n";
    mat1.print();

    std::array<double, 6> mat2_row1 = {2, 2, 2, 2, 2, 2};
    std::array<double, 6> mat2_row2 = {2, 2, 2, 2, 2, 2};
    std::array<double, 6> mat2_row3 = {2, 2, 2, 2, 2, 2};
    std::array<std::array<double, 6>, 3> mat2_arr = {
        mat2_row1,
        mat2_row2,
        mat2_row3
    };
    Matrix<3,6> mat2(mat2_arr);
    std::cout << "Matrix 2: " << "\n";
    mat2.print();

    Matrix<5,6> mat3 = mat1 * mat2;
    std::cout << "Matrix 1 * Matrix 2: " << "\n";
    mat3.print();
    
    return 0;

}