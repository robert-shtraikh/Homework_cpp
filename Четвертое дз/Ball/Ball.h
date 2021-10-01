#include <iostream>

struct Point {
    double x, y;
};

struct Ball {
    Ball(Point initialPos);
    void push(double v, double alpha);
    void fly(double t);
    Point position;
    double vx = 0, vy = 0;
};
