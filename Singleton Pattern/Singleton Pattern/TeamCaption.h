#pragma once
#include<iostream>
using namespace std;
class Captain {
	static Captain* captain;
	string name;
	Captain() {
		name = "XYZ";
	}
public:
	static Captain* getCaptain() {
		if (captain == NULL) {
			captain = new Captain();
		}
		return captain;
	}
	string getName() {
		return name;
	}
};
Captain* Captain::captain = NULL;
