#define
_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float weight;

	printf("몸무게? ");
	scanf("%f", &weight);

	printf("입력한 몸무게는 %.2fKG입니다.", weight);
}