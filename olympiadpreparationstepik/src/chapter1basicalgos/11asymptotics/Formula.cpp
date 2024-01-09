/*
 * Formula.cpp
 *
 *  Created on: 9 Jan 2024
 *      Author: paul
 */

#include "Formula.h"
#include <iostream>

Formula::Formula() {
	// TODO Auto-generated constructor stub

}

Formula::~Formula() {
	// TODO Auto-generated destructor stub
}

int Formula::countDivisors(int n) {
	int cnt = 0;
	for (int i = 2; i <= n; ++i) {
		for (int j = 2; j * j <= i; ++j) {
			if (n % j == 0) {
				++cnt;
			}
		}
	}
	std::cout << cnt << std::endl;
	return cnt;
}
