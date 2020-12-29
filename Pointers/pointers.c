#include <stdio.h>

void pointer2pointer()
{
	int x = 5; //4 bytes allocated at an address.
	int *p = &x; // pointer to integer that stores the address of the var.
	*p = 6;
	/*Pointers are strongly typed*/
	/*Dereference is also done so it is important */

	int **q; //pointer to a pointer
	q = &p; // q points to p

	int ***r = &q;

	printf("%d \n",*p);
	printf("%p \n",*q);
	printf("%d \n",*(*q)); //**q is same
	printf("%p \n",*(*r)); 
	printf("%d \n",*(*(*r)));


	***r = 10;
	printf("%d \n",x);

	**q = *p +2;
	printf("%d \n",*(*q)); //12

}

void voidPtr()
{
	int a = 1025;

	void *p1;
	p1 = &a;

	printf("Address = %p\r\n",p1);
	/* error: argument type 'void' is incomplete
        printf("Address = %p, Value = %d\r\n",p1,*p1); */
	/*Compilation error when trying to access void pointer */
}

void typecast()
{
	int a = 1025;
	int *p = &a;

	printf("Size of Int is %lu \r\n",sizeof(int));
	printf("Address = %p, Value = %d\r\n",p,*p);
	printf("Address = %p, Value = %d\r\n",p+1,*(p+1));

	char *p0;
	p0 = (char *)p; //typecast
	printf("Size of Int is %lu \r\n",sizeof(char));
	printf("Address = %p, Value = %d\r\n",p0,*p0);

	printf("Address = %p, Value = %d\r\n",p0+1,*(p0+1));

}

int main()
{
	int a = 0;
	int b = 1;
	int c = 2;

	char d = 'a';

	int *x; //pointer to an integer.
	x = &a; // pointer now points to the address of the variable a.

	int *y = &b;
	int *z = &c; // int* z and int *z is same

	printf("Val a:%d b:%d c:%d x:%p y:%p z:%p \r\n",a,b,c,x,y,z);

	*y += 2;
	printf("Current value of b is %d \r\n",b);

	char *w;
	w = &d;

	printf("value of x is %p \r\n",x);
	printf("value of x is %p \r\n",x+1);

	printf("value of w is %p \r\n",w);
	printf("value of w is %p \r\n",w+1);

	typecast();
	voidPtr();
	pointer2pointer();

	return 0;
}
