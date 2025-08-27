//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/ 
#include <stdio.h>
#include <math.h>
int main (){
int  a ;
printf("enter the second :");
scanf("%d",&a);
int hour = a / 3600;
int min = (a % 3600) / 60;
int sec = (a % 60);
printf("hour %d: min %d: sec %d\n", hour, min, sec);
return 0 ;
}