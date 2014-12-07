/*
 * main.c
 *
 *  Created on: 2014年12月7日
 *      Author: roy
 */

#include <stdio.h>
#include "main.h"

int main(void) {
	printf("%d \n", transferAnd(0x16, 07));
	printf("%d \n", transferOr(0x16, 07));
	printf("%d \n", transferOr1(0x16, 07));
	printf("%d \n", transferConvert(0));
	printf("%d \n", showMax());
	return 0;
}
