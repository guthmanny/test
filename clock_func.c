#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define LIMIT 100000

int main()
{
	double average(double *, long), dataset[LIMIT];
	clock_t start,end;
	long i;

	for (i=0; i<LIMIT; i++)
		dataset[i] = (double)rand()/RAND_MAX;
		start=clock();
		printf("average = %lf\n",average(dataset,LIMIT));
		end=clock();
		printf("time = %lf\n", (double)(end-start)/CLOCKS_PER_SEC);
		return 0;
}

double average(double *data, long n)
{
	double sum=0.;
	long i;
	for(i=0;i<n;i++) sum=sum+data[i];
	return sum/n;
}

