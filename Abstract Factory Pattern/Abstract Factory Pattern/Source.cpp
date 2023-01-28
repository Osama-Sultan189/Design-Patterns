#include"BallFactory.h"
int main() {
	//test ball abstract factory pattern
	BallFactory* ballFactory = new BallFactory();
	ballFactory->getBall("cricket")->createBall();
}