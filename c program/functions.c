#include<stdio.h>
//void hello();
//void goodbye();
//void nepali();
//void french();
//int main(){
    /*
hello();
goodbye();
}
void hello(){
    printf("Hello world\n");
}
void goodbye(){
    printf("Good bye\n");
    */

   //printing namaste and bonjour
   /*
char a;
printf("Enter your country(f or n):\n");
scanf("%c",&a);
if(a=='f'){
    french();
}
else{
    nepali();
}
return 0;
}
void nepali(){
    printf("Namaste\n");
}
void french(){
    printf("Bonjour\n");
    */

   //passing parameters
   /*
    int sum(int a,int b);
    int main(){
        int a,b;
printf("Enter the numbers:\n");
scanf("%d",&a);
scanf("%d",&b);
int s= sum(a,b);
printf("The sum is %d\n",s);
return 0;
    }

    int sum(int x,int y){
        return x+y;
        
    }
    */


  // change in parameter doesnot changes anything in argument
/*
  void price(float pric);
  int main(){
    float pric=100.0;
    price(pric);
printf("The price is %f",pric);
return 0;
  }
void price(float pric){
    pric = pric + (pric*0.18);
    printf("The price with vat is %f",pric);
    
}
*/

//using library function to calculate the square of number entered by user
#include<math.h>
int main(){
    int power=2;
    int n;
    printf("Enter a number:\n");
    scanf("%f",&n);
    printf("The square of number is %f",pow(n,power));
    
    return 0;
}