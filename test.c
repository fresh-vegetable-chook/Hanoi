#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//��ŵ�����⣬���õݹ鷨
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
	printf("�����뺺ŵ���Ĳ�����");
	scanf("%d", &n);
	num = Hanoi(n);
	printf("�ƶ�%d�㺺ŵ����Ҫ%d��\n", n, num);
	return 0;
}