#include<stdio.h>

int main(){
  /*  int a;
    printf("Enter the number:");
    scanf("%d",&a);  */
    /*
    if(a>18){
        printf("adult\n");
    }
    else{
        printf("child\n");
    }   */

    //other method
   // a>10?printf("pass\n"):printf("fail\n");

   //other qn
   /*
   if(a>10 && a<20){
    printf("Just pass\n");
   }
   else if(a>20 && a<30){
    printf("Pass\n");
   }
   else if(a>30 && a<40){
    printf("Good\n");
   }
   else if(a>40 && a<50){
    printf("Excellent\n");
   }
   printf("All the best\n");
    return 0;
    */

   // switch statements  //for numbers
   /*
   int day;
    printf("Enter day(1-7):");
    scanf("%d",&day);
    switch (day)
    {
    case 1:printf("Sunday\n");
        break;
    case 2:printf("monday\n");
        break;
    case 3:printf("tuesday\n");
        break;
    case 4:printf("wednesdey\n");
        break;
    case 5:printf("Thursday\n");
        break;
    case 6:printf("friday\n");
        break;
    case 7:printf("Saturday\n");
        break;
    
    default:printf("Not a valid day\n");
       return 0;
    }   */

    //for characters
    /*
   char day;
    printf("Enter day(1-7):");
    scanf("%s",&day);
    switch (day)
    {
    case 'S':printf("Sunday\n");
        break;
    case 'm':printf("monday\n");
        break;
    case 't':printf("tuesday\n");
        break;
    case 'w':printf("wednesdey\n");
        break;
    case 'T':printf("Thursday\n");
        break;
    case 'f':printf("friday\n");
        break;
    case 's':printf("Saturday\n");
        break;
    
    default:printf("Not a valid day\n");
       return 0;
    }
    */
//nested if and switchh
/*
int a;
printf("enter a number:\n");
scanf("%d",&a);
if(a>=0){
    printf("Positive\n");
    if(a%2==0){
        printf("even\n");
    }else{
        printf("odd\n");
    }
  
}
  else{
        printf("Negative\n");
    }
return 0;
*/
    //tricky qn
    /*
int a=5;
if(a=3){
    printf("a is equals to 3\n");
}else{
    printf("a is not equals to 3\n");
}
*/
//qn to find out uppercase or lowercase character
/*
char letter;
printf("Enter a letter:\n");
scanf("%c",&letter);
if(letter >= 'A' && letter <= 'Z'){
    printf("Upper case\n");
}
else if(letter >= 'a' && letter <= 'z'){
printf("Lower case\n");
}
else{
    printf("Not a letter");
}
  return 0;
*/

//armstrong number

int a , r,sum=0,temp;
printf("Enter a number:\n");
scanf("%d",&a);
temp=a;
while (a>0)
{
    r=a%10;
    sum=sum+(r*r*r);
    a=a/10;
}
if(temp==sum){
    printf("Armstrong num\n");
}
else{
    printf("Not an armstrong number\n");
}
}

