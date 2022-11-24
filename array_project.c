#include <stdio.h>
#define MAX_LENGTH 100
int main(){
int input;
int data[MAX_LENGTH];
int lenght=0;
int value;

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


switch (input)
{
case 0:
  
    break;
    case 1:
    // Add data;
    printf("Enter a Integer value :  ");

    scanf("%d",&value);

    data[lenght]=value;

    printf("%d Insert at Index %d\n",value,lenght);

    lenght++;
    break;

    case 2:
  
    break;
    case 3:
  
    break;
    case 4:
  
    break;
    case 5:
    // Display data item
    // printf("---------Result-----------\n");
     printf("Data : ");
    for(int i = 0; i < lenght; i++){
        
        printf("%d\t",data[i]);
        
    }
  printf("\n");
    break;
    case 6:
   for(int i = 0; i < lenght; i++){
        
       data[i]=0;
        
    }
    lenght = 0;
    printf("Clear Data\n");
    break;

default:
printf("Invalide Input\n");
    break;
}

printf("----------Result End----------\n");


          }while(input!=0);
system("cls");



  
    return 0;
}