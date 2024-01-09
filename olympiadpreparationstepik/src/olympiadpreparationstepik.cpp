//============================================================================
// Name        : olympiadpreparationstepik.cpp
// Author      : Pavel
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "chapter1basicalgos/11asymptotics/Formula.h"
using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	Formula formula;
	int n;
	cout << "Enter a positive integer";
	cin >> n;
	formula.countDivisors(n);

	return 0;
}
