#include <stdio.h>

//Try inputing different values for n and determine what the program checks.

int main(){

	printf("Input an integer\n");
	int n;
	scanf("%d",&n);

	if((n & (n-1))==0 )
		printf("true\n");
	else
		printf("false\n");

}
