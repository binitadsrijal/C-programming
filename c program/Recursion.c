#include <stdio.h>

// when the functions calls itself again and again directly or indirectly is called recursion
//  printing hello world using recursion
/*
int count = 5;
void hello(int count);
int main()
{
    hello(count);
    return 0;
}
void hello(int count)
{
    if (count == 0)
    {
        return;
    }
    printf("Hello world\n");
    hello(count - 1);

}
*/

// sum of n natural numbers using recursion
/*
int n = 5;
int sumofn(int n);
int main()
{
    printf("The sum of first 5 natural number is %d", sumofn(n));
    return 0;
}
int sumofn(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int sumofnmo = sumofn(n - 1);
    int sumofn = sumofnmo + n;
    return sumofn;
}
*/
// factorial of number using recursion
/*
int factorial(int n);
int main(){
int n=5;
printf("The factorial of n is %d",factorial(n));
return 0;
}
int factorial(int n){
  if(n==0){
    return 1;
  }

    int facnmo =factorial(n-1);
    int factof =factorial(n-1)*n;
    return factof;
}
*/

// function to conver celsius to fahrenheit
/*
float ctf(float n) ;
int main()
{
    float f = ctf(37);
    printf("37 degree celsius is equals to %f", f);
    return 0;
}

float ctf(float n)
{
    float f = n * (9.0 / 5.0) + 32;
    return f;
}
*/

// write functions to calculate % of students
/*
int percentage(int math,int science, int sanskrit);
int main(){
int math =98;
int science = 89;
int sanskrit =78;
int percen =percentage(math,science,sanskrit);
printf("The percentage is %d",percen);
return 0;
}
int percentage(int math,int science,int sanskrit){
    int percen = (math+science+sanskrit)/3;
    return percen;
}
*/

//write a function to calculate a fibonacci sequence of n term
int fibonacci(int n);
int main(){
printf("The fib of 6 is %d",fibonacci(6));
return 0;
}
int fibonacci(int n){
    if(n==0 || n==1){
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
    }
    int nmo=fibonacci(n-1);
    int nt =fibonacci(n-2);
    int nterm = nmo+nt;
   // printf("fib of %d is %d\n",n,nterm);
    return nterm;
}