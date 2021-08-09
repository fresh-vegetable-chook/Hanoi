#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//汉诺塔问题，采用递归法
int Hanoi(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return 1 + 2 * Hanoi(n - 1);
	}
}

int main() {
	int n = 0;
	int num = 0;
	printf("请输入汉诺塔的层数：");
	scanf("%d", &n);
	num = Hanoi(n);
	printf("移动%d层汉诺塔需要%d步\n", n, num);
	return 0;
}