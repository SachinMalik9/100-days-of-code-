//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include <stdio.h>
#include <math.h>
int main (){
    double principal, rate, time;
    printf("Enter principal amount: ");
    scanf("%lf", &principal);
    printf("Enter rate of interest: ");
    scanf("%lf", &rate);
    printf("Enter time in years: ");
    scanf("%lf", &time);

    double simple_interest = (principal * rate * time) / 100.0;
    double compound_interest = principal * pow((1 + rate / 100.0), time) - principal;

    printf("Simple Interest=%.2lf, Compound Interest=%.2lf\n", simple_interest, compound_interest);

    return 0;
}