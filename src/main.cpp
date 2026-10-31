#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
#include "Angle.hpp"

using namespace std;

int main()
{
    int distance,height;
    cout << "请输入目标水平距离d ,和一个你认为的的高度";
    cin >> distance >> height;

    Angle angle_calculator;
    double result_rad= angle_calculator.Solver_fis(distance,height);

    if (result_rad < 0)
    {
        cout << "距离为时 " << distance 
             << " 米时超出最大射程，无法求出有效抬升角。" << endl;
    }
    else
    {
        double result_deg = result_rad * 180.0 / M_PI;
        cout << "在水平距离为"<< distance << " 时，抬升角为 " << result_deg << " °" << endl;
        if (height < angle_calculator.h_max)
        {
            cout << "在 " << height << " 的情况下 " << ",你的结果成立." <<endl;
        }
        else
        {
            cout << "你的抬升角有了,但是" << height << "不成立" <<endl;
        }
    }
    return 0;
}