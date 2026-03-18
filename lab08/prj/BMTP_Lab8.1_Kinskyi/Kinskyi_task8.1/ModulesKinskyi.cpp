#include "ModulesKinskyi.h"
#include <cmath>

double s_calculation(double x, double y, double z) {
    const double PI = 3.14159265358979323846;
    double numerator = std::sqrt(1.0 + x - 3.0 * std::cos(x));
    double denominator = std::log(x * x) + 3.0 * std::sin(PI * x);
    double second_part = std::pow(std::sqrt(std::pow(z, 3.0)) + 2.0, 2.0);
    return (numerator / denominator) + second_part;
}
