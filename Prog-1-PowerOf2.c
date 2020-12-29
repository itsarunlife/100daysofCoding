#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

bool isPowerOfTwo(int req_num)
{
	/* On AND operation of n and n-1, if all the bits are cleared
	 * it is a Power of 2
	 */
	if ((req_num & req_num-1) == 0)
		return true;

	return false;
}

int main()
{
	bool retval;
	int req_num;

	scanf("%d",&req_num);
	retval = isPowerOfTwo(req_num);
	if (retval)
	{
		printf("True \r\n");
	}
	else
	{
		printf("False \r\n");
	}
}