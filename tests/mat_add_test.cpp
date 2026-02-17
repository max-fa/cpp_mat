#include "../operations/mat_add.hpp"
#include <iostream>
#include <array>

int main() {

    std::array<double, 10> mat1_row1 = {1,2,3,4,5,6,7,8,9,10};
    std::array<double, 10> mat1_row2 = {0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0};
    std::array<std::array<double, 10>, 2> mat1_arr = {
        mat1_row1,
        mat1_row2
    };
    Matrix<2,10> mat1(mat1_arr);

    std::array<double, 10> mat2_row1 = {9,8,7,6,5,4,3,2,1,0};
    std::array<double, 10> mat2_row2 = {0.9,0.8,0.7,0.6,0.5,0.4,0.3,0.2,0.1,0.0};
    std::array<std::array<double, 10>, 2> mat2_arr = {
        mat2_row1,
        mat2_row2
    };
    Matrix<2,10> mat2(mat2_arr);

    Matrix<2,10> mat3 = mat1 + mat2;
    mat3.print();

    
    
    return 0;

}