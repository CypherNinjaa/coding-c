#include <stdio.h>
int main(){
//Take two integers input, a and b : a>b, and find the remainder when a is divided by b and print the remainder.
int a, b, q, r;

printf("enter the value of a :"); //a = 1st number.
    scanf("%d",&a); // scan value of a 

printf("enter value of b :"); // b = 2nd number.
    scanf("%d",&b); // scan value of b 
r = a%b;
printf(" the remainder when %d is divided by %d is : %d",a,b,r); // print remainder.
    return 0;
}