#include <stdio.h>
#include <stdlib.h>

int fuelCalculator()
{
	FILE * fPointer = fopen("input.txt", "r");
	int line;
	int numList[100];
	int sum = 0;
	
	for (int i = 0; i < 100; i++ )
	{
		fscanf(fPointer, "%d", &line);
		
		// the condition is so that we don't subtract, bcs if line/3-2 < 0, we will subtract
		while ( line/3-2 > 0 )
		{
			line = line / 3 - 2;
			sum = sum + line;
			printf("%d\n", line);
		}
		numList[i] = sum;
		printf("%d\n\n", sum);
		sum = 0;
	}
	for ( int j = 0; j < 100; j++ )
	{
		sum = sum + numList[j];
	}
	
	fclose(fPointer);
	return sum;
}
	

int main()
{
	printf("%d\n", fuelCalculator());
	return 0;
}
