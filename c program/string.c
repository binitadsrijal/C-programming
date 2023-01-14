#include<stdio.h>
/*
void printname(char arr[]);
int main(){
    char name[]="BINITA";
    char surename[]="RIJAL";

printname(name);
printname(surename);
return 0;
}
void printname (char arr[]){
    for(int i=0;arr[i] != '\0';i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}
*/

//
//int main(){
   /* char name[]="Binita";
    printf("%s",name);  */ //%s format specifier for string
/*
       char name[100];
    printf("enter your name : \n");
    scanf("%s",name);
    printf("%s",name) ;
    */
//scanf cannot take multiwords as a input in string
//we use gets() and puts() for multiword 
/*
char str[20];
fgets(str,20,stdin);   //gets function is outdated and dangerous so we dont use it
puts(str);
return 0;  */

//}

//string using pointers
/*
int main(){
    char *str="Binita rijal";
    puts(str);   //[]this does not allows us to modify a value
    str="Binita";
    puts(str);
    return 0;
}
*/

//make a program that takes users name and prints the length
/*
int count(char arr[]);
int main(){
    char name[50];
    fgets(name,50,stdin);
printf("the length is %d",count(name));
    return 0;
}
int count(char arr[]){
    int countt=0;
    for(int i=0;arr[i]!='\0';i++){
        countt++;
    }
    return countt-1;
}
*/

//standard library functions
//use of strlen which gives the length
#include<string.h>
/*
int main(){
#include<string.h>
//char str[]="inita";
char str[40];
fgets(str,40,stdin);
int length = strlen(str);
printf("the number of letters is %d",length-1);
return 0;
}
*/
//use of strcopy which copies the value of oldstr in newstr
/*
int main(){
    char newstr[]="binita";
    char oldstr[]="rijal";
    puts(newstr);
    
    strcpy(newstr,oldstr);
    puts(newstr);
}
*/
//use of  strcat  library function  //concatenation
/*
int main(){
    char newstr[40]="Binita";
    char oldstr[30]="rijal";
    strcat(newstr,oldstr);
   // printf("%s\n",newstr);
   puts(newstr);
    return 0;
}
*/
//using strcmp
/*
int main(){
    char newstr[]="Bini";
    char oldstr[]="rija";
    //puts(strcmp(newstr,oldstr));
    printf("%d\n",strcmp(newstr,oldstr));  //depends on different letters
}
*/

//entering a multiword with %c
/*
int main(){
    char ch;
    char str[100];
    int i=0;
    while (ch!='\n')
    {
        scanf("%c",&ch);
        str[i]=ch;
        i++;
    }
    str[i]='\0';
    puts(str);
    return 0;
}
*/

//salting concept used for hacking
/*
void salting(char password[]);
int main()
{
char password[100];
scanf("%s",password);
salting(password);
}
void salting(char password[]){
    char newpass[200];
    char salt[]="1234";
    strcpy(newpass,password);
    strcat(newpass,salt);
    puts(newpass);
}
*/

//making function which takes an string and returns a slice of string
/*
void slice(char str[],int n,int m);
int main(){
char str[]="BINITARIJAL";
slice(str,3,7);

return 0;
}
void slice(char str[],int n,int m){
char newstr[100];
int j=0;
for(int i=n;i<=m;i++,j++){
    newstr[j]=str[i];
}
newstr[j]='\0';
puts(newstr);
}
*/

//write a function to count the occurence of vowels in string
int vowel(char str[]);
int main(){
    char str[]="argenigomlujihi";
printf("number of vowels in string : %d ",vowel(str));
return 0;
}
int vowel(char str[]){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count++;
        }
    }
    return count;
}