/*
 * Main.c
 *
 *  Created on: 2014年12月7日
 *      Author: roy
 */

#include <stdio.h>

int transferAnd(int n, int and) {
	//10110 = 16
	//00111 = 07y
	//00110 = 06
	return n &= and;
}

int transferOr(int n, int or) {
	//10110 = 16
	//00111 = 07
	//10111 = 23
	return n |= or;
}

int transferOr1(int n, int or) {
	//10110 = 16
	//00111 = 07
	//10001 = 17
	return n ^= or;
}

int transferConvert(int n) {
	//010110 = 16
	//101001 = 9
	return ~n;
}



