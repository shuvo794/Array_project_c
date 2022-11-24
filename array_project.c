#include <stdio.h>
#define MAX_LENGTH 100
int main(){
int input;
system("cls");

do{
    printf(" Menu :  \n");
    printf("--------------------\n");
    printf("1.Add\n");
    printf("2.Insert\n");
    printf("3.Edit\n");
    printf("4.Delete\n");
    printf("5.Display\n");
    printf("6.clear\n");
    printf("0.Exist\n");

  printf("--------------------\n");

 printf("Enter a Manu\n");

 scanf("%d",&input);

system("cls");
printf("----------Result Start----------\n");
printf("You have Slect NO %d\n",input);

printf("----------Result End----------\n");

          }while(input!=0);
system("cls");



  
    return 0;
}