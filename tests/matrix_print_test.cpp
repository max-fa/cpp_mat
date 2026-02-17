#include "../types/Matrix.hpp"
#include <array>
#include <iostream>

int main() {

    std::array<double, 10> mat1_row1 = {1,2,3,4,5,6,7,8,9,10};
    std::array<double, 10> mat1_row2 = {0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0};
    std::array<std::array<double, 10>, 2> mat1_arr = {
        mat1_row1,
        mat1_row2
    };

    Matrix<2, 10> mat1(mat1_arr);

    std::array<std::array<double, 10>, 2> mat1_arr_copy = mat1.getArr();
    
    std::cout << "Original mat1_arr: " << &mat1_arr << "\n";
    std::cout << "mat1.getArr() stored in a variable: " << &mat1_arr_copy << "\n";

    return 0;

}