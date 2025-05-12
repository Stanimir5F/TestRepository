#include <stdio.h>

int BubbleSort (int Array[], int Size)
{
	int i, j, Temp;
	for (i=0; i<Size; i++)
		for (j=i+1; j<Size; j++)
			if (Array[i] > Array[j])
			{
				Temp = Array[i];
				Array[i] = Array[j];
				Array[j] = Temp;
			}
	return 0;
}