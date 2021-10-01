#include "Ball.h"
#include "Ball.cpp"
#include<iostream>
#include<thread>

int main() {
	Ball orange_ball(Point{2,3});
	
	orange_ball.push(10, 90);
	for (double t = 0; t < 100; t += 0.5) {
		orange_ball.fly(t);
		std::cout << "Pos x:" << orange_ball.position.x << std::endl;
		std::cout << "Pos y :" << orange_ball.position.y << std::endl;
		std::cout << "\n";
		std::this_thread::sleep_for(std::chrono::milliseconds(100));
	}
}