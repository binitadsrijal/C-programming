#include <stdio.h>
// a program to enter a price of 3items and output of price with gst
/*
int main(){
    float price[3];
    printf("Enter the price of 3 items:\n");
    scanf("%f",&price[0]);
    scanf("%f",&price[1]);
    scanf("%f",&price[2]);
  printf("price of 1st item with vat is %f",(price[0]*0.18)+price[0]);
  printf("price of 2st item with vat is %f",(price[1]*0.18)+price[1]);
  printf("price of 3st item with vat is %f",(price[2]*0.18)+price[2]);
    return 0;
}
*/

// pointer arithmetic
// pointer can be incremented and decremented
/*
 int main(){
  int age =22;
  int *ptr =&age;
  printf("ptr = %u",ptr);
  ptr++;
  printf("ptr = %u",ptr);
  return 0;
 }
 */

// one pointer can be subtracted from the other pointed or they can be compared
/*
int main(){
  int age=22;
  int _age=23;
  int *ptr=&age;
  int *ptr_=&_age;
  printf("difference=%u \n",ptr_-ptr);
   ptr_=&age;
  printf("comparision =%u\n",ptr_==ptr);
  return 0;
}
*/

//int main()
//{
  // array is a pointer

  /*  int *ptr=&marks[0];  //same
    int *ptr=marks;    //same
    */

  // array as a pointer
  /*
  int adhar[5];
  int *ptr = &adhar[0];
  for (int i = 0; i < 5; i++)
  {
    printf("%d index : ", i);
    scanf("%d", (ptr + i));
  }
  for (int i = 0; i < 5; i++)
  {
    printf("%d index : %d\n", i, *(ptr + i));
  }
  return 0;
  */
 //another way
 /*
  int adhar[5];
  int *ptr = &adhar[0];
  for (int i = 0; i < 5; i++)
  {
    printf("%d index : ", i);
    scanf("%d", adhar[i]);
  }
  for (int i = 0; i < 5; i++)
  {
    printf("%d index : %d\n", i, adhar[i]);
  }
  return 0;
  */
//}
//arrays as a function argument

//void printnumbers(int arr[],int n);
void printnumbers(int *arr,int n);
 int main(){
int arr[]={3,4,5,6,7,8,9};
printnumbers(arr,7);
return 0;
 }
//void printnumbers(int arr[],int n){
void printnumbers(int *arr,int n){
  for(int i=0;i<n;i++){
   printf("%d\t",arr[i]);
  }
  printf("\n");
}