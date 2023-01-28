#pragma once
#include<iostream>
using namespace std;
class Ball {
private:
	float size;
public:
	//create pure virtual function for the ball
	virtual void createBall() = 0;
};
class cricketBallFactory:public Ball {
public:
	void createBall() {
		cout << "Creating Cricket Ball";
	}
};
class footballBallFactory :public Ball {
public:
	void createBall() {
		cout << "Creating Football Ball";
	}
};
class tennisBallFactory :public Ball {
public:
	void createBall() {
		cout << "Creating Tennis Ball";
	}
};
