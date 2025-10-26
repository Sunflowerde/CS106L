#include <utility>
#include <iostream>
#include <cmath>

using Zeros = std::pair<double, double>;
using Solution = std::pair<bool, Zeros>;

Solution solveQuadratic(double a, double b, double c) {
    double delta = b * b - 4 * a * c;
    if (delta < 0 || a == 0) {
        return {false, {0.0, 0.0}};
    } else if (delta == 0) {
        return {true, {-b / (2 * a), -b / (2 * a)}};
    } else {
        double x1 = ((-b + sqrt(delta)) / (2 * a));
        double x2 = ((-b - sqrt(delta)) / (2 * a));
        return {true, {x1, x2}};
    }
}