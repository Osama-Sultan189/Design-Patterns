#pragma once
#include"sports.h"
class sportsFactory{
public:
	static sports* getSport(string sportName) {
		if (sportName == "cricket") {
			return new cricket();
		}
		else if (sportName == "football") {
			return new football();
		}
		else if (sportName == "tennis") {
			return new tennis();
		}
		else if (sportName == "badminton") {
			return new badminton();
		}
		else {
			return NULL;
		}
	}
};