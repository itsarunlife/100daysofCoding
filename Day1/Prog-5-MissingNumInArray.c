#include <stdio.h>

void getMissingArray(int arr1[], int n)
{
    printf("%d\n", n);
    int total = n * (n+1) / 2;
    int i;
    for (i = 0 ; i  < n-1 ; i++)
    {
        total = total - arr1[i];
    }
    if (total)
    {
        printf("Missing Number is %d\n", total);
    }

}

int main()
{
    int arr1[] = { 1,2,4,5 };
    int ctr = sizeof(arr1)/sizeof(arr1[0]);
	int i;
 //------------- print original array ------------------	
	printf("The given array is 1 :  ");
	for(i = 0; i < ctr; i++)
	{
	printf("%d  ", arr1[i]);
    } 
    printf("\n");
//------------------------------------------------------  	
	
    getMissingArray(arr1, ctr);
    return 0;
}