/*
	* 파일명: assign09.c

	* 내용: PA09. 16진수 정수를 입력받아 10진수로 출력하는 프로그램을 작성하시오.

	* 작성자: 임승리

	* 날짜: 2025.4.1

	* 버전: v1.0

  */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Change();

int main()
{
	Change();

	return 0;
}

void Change()
{
	int num;

	printf("16진수 정수? ");
	scanf("%x", &num);

	printf("16진수 %X는 10진수로 %d입니다.\n", num, num);

	return 0;
}