#include <stdio.h>
#include <stdbool.h>

int calcBitDiff(int a , int b)
{
	int c = a ^ b;
	int count = 0;

	while (c > 0)
	{
		if (c & 1)
		{
			count++;
		}
		c = c >> 1;
	}
	return count;
}

int main()
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);

	printf("Count is %d \r\n",calcBitDiff(a,b));

	return 0;
}