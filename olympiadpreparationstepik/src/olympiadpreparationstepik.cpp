//============================================================================
// Name        : olympiadpreparationstepik.cpp
// Author      : Pavel
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
//#include "chapter1basicalgos/11asymptotics/Formula.h"
#include "chapter1basicalgos/13binarysearch1/IsNumberIn.h"
using namespace std;

//// 2024/01/10 // 22:43 //
//const int MAXN = 100500;
//int n;
//int a[MAXN];

//// 2024/01/10 // 22:57 //
int n;
int a[MAXN];

int main() {
//	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
//
//	Formula formula;
//	int n;
//	cout << "Enter a positive integer";
//	cin >> n;
//	formula.countDivisors(n);
//
//	return 0;

	//// 2024/01/10 // 22:22 //
//	cout << "This is a binary search!" << endl;
//
//	// initialize the array with some values
//	const int n = 10;
//	int a[n] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
//
//	// test the function with some inputs
//	cout << isNumberIn(5) << endl; // should print 1 (true)
//
//
//	return 0;

//    // initialize the array with some values
//    const int n = 10;
//    int a[n] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
//
//    // test the function with some inputs
//    cout << isNumberIn(5, a, n) << endl; // should print 1 (true)
//
//    return 0;

	//// 22:47
//	  int a[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
//	  int n = sizeof(a) / sizeof(a[0]);
//
//	  if (isNumberIn(a, n, 5)) {
//	    cout << "5 found!" << endl;
//	  } else {
//	    cout << "5 not found" << endl;
//	  }
//
//	  return 0;


	//// 2024/01/10
    cout << "This is a binary search!" << endl;

    // Initialize the array with some values
    int a[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int n = sizeof(a) / sizeof(a[0]);

    if (isNumberIn(a, n, 5)) {
        cout << "5 found!" << endl;
    } else {
        cout << "5 not found" << endl;
    }

    if (isNumberIn(a, n, 7)) {
        cout << "7 found!" << endl;
    } else {
        cout << "7 not found" << endl;
    }

    if (isNumberIn(a, n, 77)) {
        cout << "77 found!" << endl;
    } else {
        cout << "77 not found" << endl;
    }

    return 0;

}
