// C program to demonstrate trunc() function 
#include <stdio.h> 
  
// library containing trunc function. Similar to trunc, two other functions are present for other types - truncf() , truncl()
#include <math.h>      
  
// Driver function 
int main() 
{ 
    double x1 = 2.0, x2 = -3.3; 
    printf(" Truncated value is %lf \n", trunc(x1) );   
    // For negative values 
    printf(" Truncated value is %lf \n", trunc(x2) ); 
    return 0; 
} 
