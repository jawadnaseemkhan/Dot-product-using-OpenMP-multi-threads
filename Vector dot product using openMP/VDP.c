#include<stdio.h>
#include<omp.h>

#define LENGHT 50000

void main(void)
{
	int v1[LENGHT];
	int v2[LENGHT];

	int i = 0;
	double sum = 0;
	double dot = 0;

	for (i = 0; i < LENGHT; i++)
	{
		v1[i] = i * 5;
		v2[i] = i * 2;
	}

	omp_set_num_threads(500);

#pragma omp parallel for 
	for (i = 0; i < LENGHT; i++)

	{
		sum = sum + v1[i] * v2[i];

	}
	dot = sum;

	printf("The dot product of v1 & v2 is %f", dot);


}