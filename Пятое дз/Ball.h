#pragma once
#include <iostream>

struct Point {
    double x, y;
};

class Ball {
public:
    Ball(Point initialPos);
    void push(double v, double alpha);
    void fly(double t);
    Point position;
private:
    double vx = 0, vy = 0;
};

//�������� struct Ball �� class Ball; � .cpp �� ����������� �� �������� �� �����������