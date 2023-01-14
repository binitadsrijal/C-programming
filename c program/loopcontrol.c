#include<stdio.h>
//int main(){
    //for loop
    //iteration=counter=i
  //  for(int i=10;i>=0;--i){  //i--  --i
       // printf("%d\n",i);
      // printf("Hello world\n");
   //   printf("%d\n",i);
   // return 0;

   //++i increase then use - pre increment
   //--i increase then use - pre decrement
   //i++ use and decrease - post incremennt
   //i-- use and decrease - post decrement

/*   int i=2;
   printf("%d\n",++i);
   printf("%d\n",i);
   */

//while loop
/*
int n;
int i=0;
printf("Enter a number:\n");
scanf("%d",&n);
while(i <= n){
    printf("%d ",i);
    i++;
}
return 0;
*/

//do while loop
/*
int a=1;
do{
    printf("%d ",a);
    a++;
} while(a<=10);
return 0;
*/

//sum of n natural numbers
/*
int a;
printf("enter a number:\n");
scanf("%d",&a);
int sum=0;
for(int i=1;i<=a;i++){
    sum += i;
    
}
printf("%d\n",sum);
return 0;
*/

//printing a table of number entered by user
/*
int n;
printf("Enter a number:\n");
scanf("%d",&n);
for(int i=1;i<=10;i++){
    printf("%d * %d = %d\n",n,i,(n*i));
}
return 0;
*/

//break statement
/*
for(int i=0;i<=10;i++){
    if(i==6){
        break;
    }
    printf("%d",i);
}
printf("end");
return 0;
*/
//keep entering numbers from user until user enters odd number
/*
wrongg
int a;
while(a%2!=0){
    printf("Enter numbers:");
    scanf("%d",&a);
     break;
    printf("%d",a);
    break;
}
return 0;
*/

  //  }
   
  // int main(){
    /*
     int a;
do{
   printf("Enter numbers:\n");
   scanf("%d",&a);
   printf("%d\n",a);

   if(a % 2 != 0){
    break;
   }
   
} while (1);
printf("thank you\n");
return 0;
*/
//keep taking numbers until its multiple of 7
  int main(){
    /*
     int a;
do{
   printf("Enter numbers:\n");
   scanf("%d",&a);
   printf("%d\n",a);

   if(a % 7 == 0){
    break;
   }
   
} while (1);
printf("thank you\n");
return 0;
*/

//use of continue
/*
for(int i=1;i<=10;i++){
    if ( i==6 )
    {
        continue;
    }
     printf("%d\n",i);
}
return 0;
*/

//skiping the odd number between 5-50
for(int i=5;i<=50;i++){
    if ( i%2 != 0 )
    {
        continue;
    }
     printf("%d\n",i);
}
return 0;
   }

