#include "stdio.h"
#include "math.h"

/**
 * 判断一个数字是否为素数
 */
int judgePrime( number) {
	int i, j;

	j = sqrt(number);
	for (i = 2; i < j + 1; i++) {
		if (number % i == 0) {
			break;
		}
	}
	return i > j ? 1 : 0;

}

/**
 * 返回输入的两个数字所有的素数和非素数
 */
int main() {

	int startNum, endNum;
	printf("Please input the first number \n");
	scanf("%d", &startNum);

	printf("Please input the second number \n");
	scanf("%d", &endNum);

	if (startNum > endNum) {
		printf("The first number must less than the second number;\n");
		return 0;
	}

	int result, i;
	for (i = startNum; i < endNum; i++) {
		result = judgePrime(i);
		result > 0 ?
				printf("%d is prime number. \n", i) :
				printf("%d is not prime number. \n", i);
	}

}
