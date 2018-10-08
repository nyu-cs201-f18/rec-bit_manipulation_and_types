#include <stdio.h>

//Program to understand basic bit manipulations - Predict what the program will print and explain why.

int main() 
{ 
	int  i = 32, j = 65, k, l, m, n, o, p ; 
	k = i | 35 ;   l = ~k ;   m = i & j ;
	n = j ^ 32 ;   o = j << 2 ;   p = i	>> 5 ; 
	printf("k = %d \nl = %d \nm = %d\n", k, l, m ); 
	printf("n = %d \no = %d \np = %d\n", n, o, p );
}
