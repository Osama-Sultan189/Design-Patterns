#include"TeamCaption.h"
int main() {
	Captain* c1 = Captain::getCaptain();
	cout << c1->getName() << endl;
	return 0;
}