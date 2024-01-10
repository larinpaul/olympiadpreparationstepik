/*
 * IsNumberIn.cpp
 *
 *  Created on: 10 Jan 2024
 *      Author: paul
 */

#include "IsNumberIn.h"
#include <iostream>

using namespace std;

//const int MAXN = 100500;
//int n;
//int a[MAXN];

// Tried implementing this but it didn't work
//bool isNumberIn(int x) {
//	int l = -1;
//	int r = n;
//
//	// инвариант: a[l] < x <= a[r]
//	// считаем, что a[-1] = -INF,
//	// a[n] = INF
//	while (l + 1 < r) {
//		int mid = (l + 1) / 2;
//		if (a[mid] < x)
//			l = mid;
//		else
//			r = mid;
//	}
//
//	return (r < n && a[r] == x);
//}

//bool isNumberIn(int x) {
//	int left = 0;
//	int right = n - 1;
//
//	// binary search loop
//	while (left <= right) {
//		int mid = left + (right - left) / 2;
//
//		if (a[mid] == x) {
//			// found the number
//			return true;
//		} else if (a[mid] < x) {
//			// search in the right half
//			left = mid + 1;
//		} else {
//			// search in the left half
//			right = mid - 1;
//		}
//	}
//
//	// number not found
//	return false;
//
//}

//// 2024/01/10 // 22:42 //
//bool isNumberIn(int x, int a[], int n) {
//    int left = 0;
//    int right = n - 1;
//
//    // binary search loop
//    while (left <= right) {
//        int mid = left + (right - left) / 2;
//
//        if (a[mid] == x) {
//            // found the number
//            return true;
//        } else if (a[mid] < x) {
//            // search in the right half
//            left = mid + 1;
//        } else {
//            // search in the left half
//            right = mid - 1;
//        }
//    }
//
//    // number not found
//    return false;
//}

//// 22:47
//bool isNumberIn(const int a[], int n, int x) {
//  int left = 0;
//  int right = n - 1;
//
//  while (left <= right) {
//    int mid = left + (right - left) / 2;
//
//    if (a[mid] == x) {
//      return true;
//    } else if (a[mid] < x) {
//      left = mid + 1;
//    } else {
//      right = mid - 1;
//    }
//  }
//
//  return false;
//}

//// 22:55
bool isNumberIn(const int a[], int n, int x) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (a[mid] == x) {
            // Found the number
            return true;
        } else if (a[mid] < x) {
            // Search in the right half
            left = mid + 1;
        } else {
            // Search in the left half
            right = mid - 1;
        }
    }

    // Number not found
    return false;
}
