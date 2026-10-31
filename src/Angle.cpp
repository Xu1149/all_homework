// 必须在包含cmath前定义，才能使用M_PI常量（这个功能也是在ai帮助下才了解到的）
#define _USE_MATH_DEFINES

#include "Angle.hpp"
#include <cmath>

Angle::Angle()
{
    g=9.8;
    v=10.0;
}

double Angle::Solver_fis(int d, int h) 
{
    double sin_double_theta = (g * d)/(v*v);

    if (sin_double_theta > 1.0 || sin_double_theta < -1.0)
    {
        return -1.0;
    }
    double theta_radian = asin(sin_double_theta) / 2.0;
    h_max=((v*sin(theta_radian))*(v*sin(theta_radian)))/(2*g);
    return theta_radian;
}
