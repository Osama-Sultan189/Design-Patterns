#include"sportsFactory.h"
int main() {
	cout << "Testing My Sports Factory\n";
	int choice;
	cout << "Enter the sports you want to play:\n";
	cout << "1. Cricket\n";
	cout << "2. Football\n";
	cout << "3. Tennis\n";
	cout << "4. Badminton\nEnter:";
	sportsFactory SF;
	cin >> choice;
	if (choice == 1) {
		sports *s = SF.getSport("cricket");
		s->playSport();
	}
	else if (choice == 2) {
		sports* s = SF.getSport("football");
		s->playSport();
	}
	else if (choice == 3) {
		sports* s = SF.getSport("tennis");
		s->playSport();
	}
	else if (choice == 4) {
		sports* s = SF.getSport("badminton");
		s->playSport();
	}
	else {
		cout << "Invalid Choice\n";
	}
}