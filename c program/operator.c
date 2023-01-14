#include<stdio.h>
//#include<math.h>
//int main(){
    /*
    int b,c;
    b=c=2;
int power=pow(b,c);
printf("%d",power);
return 0;
*/

//printf("%d\n",7%4);
//printf("%d\n",-8%3);
//printf("%d\n",7%4);
//printf("%f",2.0*2);
//return 0;

//type conversion
/*
int a=(int)10.999999;
printf("%d",a);
return 0;
*/


//}
/*
int main(){
    int a=2*4-1*2;
printf("%d",a);
return 0;
}
*/
//relational operators
//int main(){
  //  printf("%d\n",4==4);
  //  return 0;
 //   printf("%d\n",4>=4);
  //  return 0;
   // printf("%d\n",4<=4);
   // return 0;
  //  printf("%d\n",4!=4);
  //  return 0;
//}

//logical operator
/*
int main(){
    printf("%d\n",2<3 && 2>1);
    printf("%d\n",3>7 && 3>2);
    printf("%d\n",3>7 || 3>2);
    printf("%d\n",!((3>7) || (3>2)));
    printf("%d\n",!(3>2)); //opposite if true it gives false if false it gives true
    return 0;
}
*/

//checking a number is odd or even

int main(){
    //checking a number is odd or even
    /*
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("%d",a%2==0);
    return 0;
    */
/*
   printf("%d",8^8);
   char star='*';
   printf("%c",star);
   return 0;
   */

  //average of three numbers
/*
  int a,b,c;
  printf("Enter numbers:\n");
  scanf("%d %d %d",&a,&b,&c);
  printf("the average of three numbers are %d",(a+b+c)/3);
  return 0;
 */

//checking if the given character is digit

char ch;
printf("enter the digit:\n");
scanf("%c",&ch);
if(ch>'0' && ch<='9'){
    printf("character is digit %c",ch);
}
else{
    printf("character is not a digit %c",ch);
}
return 0;
}