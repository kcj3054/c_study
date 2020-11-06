#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <float.h>

int mian()
{
	float max = -FLT_MAX;
	float min = FLT_MAX;
	float sum = 0.0f;
	float input;
	int n = 0;

	while (scanf("%f", &input) == 1)
	{
		if (input < 0.0f || input > 100.0f) continue;

		max = input > max ? input : max;
		min = input < min ? input : min;
		sum += input;

		n++;
	}
	
	if (n > 0)
		printf("min = %f, max = %f, ave = %f \n", min, max, sum / n);
	else
		printf("NO input\n");

	return 0;
}