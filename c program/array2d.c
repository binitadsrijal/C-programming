#include <stdio.h>
/*int main(){

    int marks[2][3];
     marks[0][0]=90;
     marks[0][1]=50;
     marks[0][2]=80;


     marks[1][0]=20;
     marks[1][1]=75;
     marks[1][2]=95;

    printf("%d\t",marks[1][1]);
    return 0;

}    */

// a function to count the number of odd number present in an array
/*
int oddnum(int arr[],int n);
int main(){
int arr[]={1,2,3,4,5,6,7,8,9};
printf("%d",oddnum(arr,9));
return 0;
}
int oddnum(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            count++;
        }
    }
    return count;
}
*/

// practise qn
//*(arr+2) gives what
//*(arr+5) gives what
/*
int main(){
    int arr[]={1,2,3,4,5,6,7};
    printf("%d\n",*(arr+2));
    printf("%d\n",*(arr+7));
    return 0;
}
*/

// write a function to reverse an array
/*
void reverse(int arr[],int n);
void print(int arr[],int n);
int main(){
    int arr[]={1,2,3,4,5,6,7};
 reverse(arr,7);
 print(arr,7);
    return 0;
}
void print(int arr[],int n){
for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);
}
printf("\n");
}
void reverse(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int firstval=arr[i];
        int lastval=arr[n-i-1];
        arr[i]=lastval;
        arr[n-i-1]=firstval;
    }
}
*/
// write a program to store first n fibonacci numbers
// 0,1,1,2,3,5,8,13,............
/*
int main()
{
    int n;
    printf("Enter the number n(n>2)\n");
    scanf("%d", &n);

    int fib[n];
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
        printf("%d\t", fib[i]);
    }
    printf("\n");
    return 0;
}
*/

//create a 2d array storing a multiple of 2 and 3
void storetable(int table[][],int n,int m,int number);
int main()
{
    int table[2][10];
storetable(table,0,10,2);
storetable(table,1,10,3);
return 0;
}
void storetable(int table[][],int n,int m,int number){
    for(int i=0;i<m;i++){
        arr[n][m]=number*(i+1);
    }
}