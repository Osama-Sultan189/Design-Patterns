#pragma once
#include<iostream>
using namespace std;
class sports {
private:
	string name;
public:
	virtual void playSport() = 0;
};
class cricket : public sports {
public:
	void playSport() {
		cout << "Playing Cricket" << endl;
	}
};
class football : public sports {
public:
	void playSport() {
		cout << "Playing Football" << endl;
	}
};
class tennis : public sports {
public:
	void playSport() {
		cout << "Playing Tennis" << endl;
	}
};
class badminton : public sports {
public:
	void playSport() {
		cout << "Playing Badminton" << endl;
	}
};