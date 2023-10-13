#include <stdio.h>
void main()
{
	int arr[8]={1,2,3,4,5,6,7,8};
	printf("%u\n",arr+2);
	printf("%u\n",&arr+1);
	printf("%u\n",&arr+2);
}
