//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include<stdio.h>
//area of square
int main() {
int length, breadth;
prinf (" enter length : ");
scanf("%d", &length); 
prinf (" enter beaadth : ");
scanf("%d", &breadth);
printf(" Area of rectangle  %d ",length * breadth);
printf(" Perimeter of rectangle %d ", 2 *(length + breadth));

return 0;
}
