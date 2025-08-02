
#include <iostream>
using namespace std;
int main()
{
	int mark;
	cout << "please entre your mark";
	cin >> mark;
	if (mark >= 90 && mark <= 100) {
		cout << 'A';
	}
	else if (mark<=89&&mark>=80) {
		cout << 'B';
	}
	else if (mark<=79&&mark>=70) {
		cout << 'C';
	}
	else if (mark<=69&&mark>=60) {
		cout << 'D';
	}
	else if (mark<=59&&mark>=0) {
		cout << 'F';
	}
	else {
		cout << "invalid input";
	}
	}
