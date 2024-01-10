/*
 * IsNumberIn.h
 *
 *  Created on: 10 Jan 2024
 *      Author: paul
 */

#ifndef CHAPTER1BASICALGOS_13BINARYSEARCH1_ISNUMBERIN_H_
#define CHAPTER1BASICALGOS_13BINARYSEARCH1_ISNUMBERIN_H_

//#define MAX_N 100500
//extern int n;
//extern int a[MAX_N];

//bool isNumberIn(int x, int a[], int n);
//bool isNumberIn(const int a[], int n, int x);

//// 22:52
const int MAXN = 100500; // Only declare the constant here
extern int n;           // Declare n as extern
extern int a[MAXN];     // Declare a as extern

bool isNumberIn(const int a[], int n, int x);


#endif /* CHAPTER1BASICALGOS_13BINARYSEARCH1_ISNUMBERIN_H_ */
