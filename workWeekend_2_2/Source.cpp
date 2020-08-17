#include<stdio.h>

int main(){
	int a, i;
	long sum = 0;
	int F[100];
	F[0] = 0;
	F[1] = 1;
	printf("Fibonacci sequence whose values do not exceed four million\n");
	printf("Input number :");
	scanf("%d",&a);
	for (i = 2; i <= a; i++)
	{
		F[i] = F[i-1] + F[i-2];
		if (F[i] % 2 == 0 && F[i] <= 4000000)
		{
			sum += F[i];
			printf("Even number of F%d = %d\n",i,F[i]);

		}

	}
	printf("sum of the even number of Fibonacci sequence %ld\n", sum);

}