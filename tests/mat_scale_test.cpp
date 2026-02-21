#include "../types/Matrix.hpp"
#include "../operations/mat_scale.hpp"
#include <array>
#include <iostream>

int main() {

    std::array<double, 10> mat_row1 {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::array<double, 10> mat_row2 {0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0};
    std::array<std::array<double, 10>, 2> mat_arr {mat_row1, mat_row2};
    Matrix<2, 10> mat(mat_arr);

    Matrix<2, 10> mat_scaled = 10*mat;

    mat_scaled.print();
    
    return 0;

}