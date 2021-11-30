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
		numList[i] = line / 3 - 2;
	}
	for (int j = 0; j < 100; j++ )
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
