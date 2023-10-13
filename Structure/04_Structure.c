//Wap to take Input from User(Real,Imaginary)
#include<stdio.h>
struct complex{
	int real;
	int imaginary;
};
int main(){
	struct complex obj;
	printf("Enter Real Part\n");
	scanf("%d",&obj.real);
	printf("Enter Imaginary Part\n");
	scanf("%d",&obj.imaginary);
	
	printf("The Real Part is %d\n",obj.real);
	printf("The Imaginary Part is %d\n",obj.imaginary);
	printf("So the Complex Number is %d+%di",obj.real,obj.imaginary);
    return 0;
}
