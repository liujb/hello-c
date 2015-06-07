#include <stdio.h>

/**
 * 获得1，2，3，4组成的不重复的三位数
 */
int main() {
	int i, j, k, up_num;
	up_num = 5;

	for (i = 1; i < up_num; i++) {
		for (j = 1; j < up_num; j++) {
			for (k = 1; k < up_num; k++) {
				if (i != j && i != k && j != k) {
					printf("%d%d%d\n", i, j, k);
				}
			}
		}
	}
	return 0;
}
