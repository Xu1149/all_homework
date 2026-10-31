#pragma once  // 头文件保护：防止重复包含（这个我是查ai才了解知道的）

class Angle 
{
private:
    double g;
    double v;

public:
    double h_max;
    Angle();
    double Solver_fis(int d, int h);
};