#define
_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	float grade;

	printf("��ȣ? ");
	scanf("%d", &num);

	printf("����? ");
	scanf("%f", &grade);

	printf("% d�� �л��� ������ % .6f�Դϴ�.", num, grade);
}