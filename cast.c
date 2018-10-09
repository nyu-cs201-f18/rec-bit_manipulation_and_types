//Program to demonstrate implicit and explicit typecasting and some important functions

#include <stdio.h>
#include <stdlib.h>

int main(){

	printf("Implicit casting: \n");
	int a = 9;
	//implicit cast
	float x = a;

	printf("a: %d\n",a);
	printf("x: %f\n",x);

	printf("\n");
	printf("Explicit casting: \n");
	float y = 9.3;
	
	//explicit cast
	int b = (int) y;

	printf("y: %f\n",y);
	printf("b: %d\n\n",b);


	printf("A common programming bug caused by integer division and implicit type casting: \n");
	//A common programming bug
	int d = 4;
	int e = 6;
	float z = d/e;

	printf("%d/%d = %f\n", d,e,z);

	z = (float)d/e;
	printf("Workaround value: %f\n\n", z);

	printf("Outputs of some standard typecasting functions: \n");
	//some standard typecasting functions
	char *str = "42";
	int c = atoi(str);

	printf("str: %s\n",str);
	printf("c: %d\n",c);

	char str1[10];
	//can use function itoa in some compilers
	sprintf(str1, "%d",c);
	printf("str1: %s\n", str1);

	//play around with a few more typecasting functions like atof and atol


}
