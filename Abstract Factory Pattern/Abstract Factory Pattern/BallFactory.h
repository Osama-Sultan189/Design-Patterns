#pragma once
#include"Ball.h";
class BallFactory {
public:
	Ball* getBall(string ballType) {
		if (ballType == "cricket") {
			return new cricketBallFactory();
		}
		else if (ballType == "football") {
			return new footballBallFactory();
		}
		else if (ballType == "tennis") {
			return new tennisBallFactory();
		}
		else {
			return NULL;
		}
	}
};