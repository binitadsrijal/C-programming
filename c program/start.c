#include <stdio.h>
//int main(){
    /*
    printf("hi this is bini\n");
    return 0;
*/
//int age = 10;
//char name='a';
//char Name ='A';
//int final_price = 40;

/*int age = 70;
printf("The age is %d \n",age);
*/
/*
float pi=3.14;
printf("the value of pi is %f\n",pi);
return 0;
*/
/*
int number;
printf("Enter the number:\n");
scanf("%d", &number);
printf("the number is : %d\n",number);
return 0;
*/

//sum of two numbers
/*

int a,b;
printf("enter first number:\n");
scanf("%d",&a);
printf("enter second number:\n");
scanf("%d",&b);
int sum=a+b;
//printf("the sum of a and b is : %d\n",sum);
printf("sum is:%d\n",a+b);
printf("multiply is:%d\n",a*b);
printf("divide is:%d\n",a/b);
return 0;

*/

//area of square
/*
int l;
printf("enter the length:\n");
scanf("%d",&l);
printf("The area of square is : %d \n",l*l);
return 0;

*/
/*
float le;
printf("enter the length:\n");
scanf("%f",&le);
printf("The area of square is : %f \n",le*le);
return 0;  */

//area and circumference of circle



//}
float circum();
float pi=3.14;int r;
int main(){
float a;
printf("Enter radius:\n");
scanf("%d",&r);
printf("Area of circle is : %f\n",pi*r*r);
a=circum();
printf("the circumference is : %f\n",a);
return 0;
}

float circum()
{
    float c;
    c=2*pi*r;
    return c;
}


