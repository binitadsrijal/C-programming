#include<stdio.h>
//int main(){
    /*
    int age =22;
    int *ptr=&age;
    int _age=*ptr;
    printf("%d",_age);
    return 0;
    */
   //declaring pointers
   /*
  char ch='a';
  char *ptr=&ch;
  char cha =*ptr;
  printf("%d",cha);
*/
/*
int ch=44;
int *ptr =&ch;
*/
//printf("%p\n",&ch);
//printf("%u\n",&ch);  //u changes into hexadecimal
// printf("%u\n",ptr);
// printf("%u\n",&ptr);
// return 0;

//format speciifier
/*
int age=22;
int *ptr=&age;

printf("%d\n",age);
printf("%d\n",*ptr);
printf("%d\n",*(&age));
*/

//practise qn
/*
int x;
int *ptr;

ptr = &x;
*ptr=0;
printf("x=%d\n",x);
printf("*ptr=%d\n",*ptr);
*ptr += 5;
printf("x=%d\n",x);
printf("*ptr=%d\n",*ptr);
(*ptr)++;
printf("x=%d\n",x);
printf("*ptr=%d\n",*ptr);
return 0;
*/

//pointer to pointer **
/*
float price=100.00;
float *ptr=&price;
*/
//float **pptr=&ptr;
/*
float **pptr=&ptr;
printf("%f\n",**pptr); */ //100
//printf("%p\n",&ptr);
//printf("%f\n",*ptr);  //100
//return 0;


//call by refrence
int swap(int *a,int *b);
int main(){
    int x=3;
    int y=5;
 swap(&x,&y);
 printf("%d,%d",x,y);
    return 0;

}
int swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;

}
//}