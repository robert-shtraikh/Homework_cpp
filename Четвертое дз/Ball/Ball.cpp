// Ball.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Ball.h"


Ball::Ball(Point initialPos) {
	position = initialPos;
	vx = 0;
}

void Ball::push(double v, double alpha) {
	vx += v * std::cos(alpha);
	vy += v * std::sin(alpha);
}
void Ball::fly(double t) {
	position.x += vx * t;
	position.y += vy * t - g * t * t / 2;
}
