
/*Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include <stdio.h>

int main () {
    int a,b ;
    printf("enter the number a : ");
    scanf(" %d",&a);
    printf("enter the number b : ");
    scanf(" %d",&b);

    printf("sum of them : %d" ,a+b );

    printf(" quotient of them : %d" ,a/b );
    printf("product  of them : %d" ,a*b );
    printf("difference of them : %d" ,a-b );
    
return 0;
}