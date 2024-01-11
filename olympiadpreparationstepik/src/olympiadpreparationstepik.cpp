//============================================================================
// Name        : olympiadpreparationstepik.cpp
// Author      : Pavel
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//#include <iostream>
//#include "chapter1basicalgos/11asymptotics/Formula.h"
//#include "chapter1basicalgos/13binarysearch1/IsNumberIn.h"
//using namespace std;

//// 2024/01/10 // 22:43 //
//const int MAXN = 100500;
//int n;
//int a[MAXN];

////// 2024/01/10 // 22:57 //
//int n;
//int a[MAXN];

//int main() {
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


//	//// 2024/01/10
//    cout << "This is a binary search!" << endl;
//
//    // Initialize the array with some values
//    int a[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
//    int n = sizeof(a) / sizeof(a[0]);
//
//    if (isNumberIn(a, n, 5)) {
//        cout << "5 found!" << endl;
//    } else {
//        cout << "5 not found" << endl;
//    }
//
//    if (isNumberIn(a, n, 7)) {
//        cout << "7 found!" << endl;
//    } else {
//        cout << "7 not found" << endl;
//    }
//
//    if (isNumberIn(a, n, 77)) {
//        cout << "77 found!" << endl;
//    } else {
//        cout << "77 not found" << endl;
//    }
//
//    return 0;
//
//}

////// 2024/01/10 // 11:38 //
//// 1 Базовые алгоритмы
//// 1.4 Бинарный поиск Ч2
//// Видео первое
//#include <iostream>
//
//using namespace std;
//
//const long double EPS = 1e-9;
//
///**
// * Calculates the value of the polynomial
// * `x^5 + 7x^3 + 3x - 8` for the given value of `x`.
// */
//long double f(long double x) {
//	long double x2 = x * x;
//	long double x3 = x2 * x;
//	long double x5 = x3 * x2;
//	return x5 + 7.0*x3 + 3.0*x - 8.0;
//}
//
///**
// * `findRoot` function uses the bisection method to find
// * a root of the polynomial `f(x) = x^5 + 7x^3 + 3x - 8`
// * in the interval `[0, 1]`.
// * The bisection method is an iterative algorithm
// * that repeatedly bisects the interval and selects the subinterval
// * in which the function changes sign.
// * The method converges to a root of the function within the interval.
// */
//long double findRoot() {
//	long double l = 0.0;
//	long double r = 1.0;
//
//	while (r - l > EPS) {
//		long double mid = (l + r) / 2;
//		if (f(mid) < 0.0)
//			l = mid;
//		else
//			r = mid;
//	}
//
//	return (l + r) / 2.0;
//}
//
///**
// * The test case calls the findRoot function
// * to find a root of the polynomial `f(x) = x^5 + 7x^3 + 3x - 8`
// * in the interval `[0, 1]`
// */
//int main() {
//	long double root = findRoot();
//	cout << "The root of the polynomial is " << root << endl;
//	return 0;
//}


////// 11:46 //
//// 1.4 Бинарный поиск Ч2
//// Видео второе
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//long long diplomasNumber(long long w, long long h, long long len) {
//	return (len / w) * (len / h);
//}
//
//long long findAns(long long w, long long h, long long n) {
//	long long l = 0;
//	long long r = max(w, h) * n;
//
//	while (l + 1 < r) {
//		long long mid = (l + r) / 2;
//		if (diplomasNumber(w, h, mid) >= n)
//			r = mid;
//		else
//			l = mid;
//	}
//
//	return r;
//}
//
//int main() {
//	long long w = 10, h = 20, n = 100;
//	long long ans = findAns(w, h, n);
//	cout
//			<< "The smallest length of paper that can be used to make "
//			<< n << "diplomas of dimensions "
//			<< w << "x" << h << " is " << ans
//	<< endl;
//	return 0;
//}

