#include <stdio.h>
#include <math.h>

/**
 * 一个数字加上100是一个完全平方数，
 * 加上268也是一个完全平方数
 * 求这个数字
 */
int main() {
	int up_number = 1000000;
	for (int i = 1; i < up_number; i++) {
		int x = sqrt(i + 100);
		int y = sqrt(i + 268);
		if ((x * x == i + 100) && (y * y == i + 268)) {
			printf("This number is %d\n", i);
		}
	}
	return 1;
}

