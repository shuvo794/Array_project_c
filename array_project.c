#include <stdio.h>
#define MAX_LENGTH 100

int main(){
int input;
int data[MAX_LENGTH];
int lenght=0;
int value, index;
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
//   Insert Opareation ;
 printf("Enter a Integer value :  ");

    scanf("%d",&value);
     printf("Enter a Index 0 - %d :  ",lenght);

    scanf("%d",&index);

    for( int i = lenght; i > index; i--){
        data [i]=data[i-1];
    }

data[index]=value;
lenght ++;
printf("%d Insert Index %d\n",value,index);


    break;
    case 3:
 
     printf("Enter a Index 0 - %d :  ",lenght-1);

    scanf("%d",&index);

     printf("Enter a Integer value :  ");

    scanf("%d",&value);

    data[index]=value;
    printf("%d Updated value %d\n",value, index);


    break;
    case 4:
     printf("Enter a Index 0 - %d :  ",lenght-1);

    scanf("%d",&index);
    int dv=data[index];

    for(int i= index;i<lenght;i++){
         data [i]=data[i+1];

    }
    data[lenght]=0;
    lenght --;
  printf("%d Deketed value %d\n",dv, index);
    break;
    case 5:
   // printf("---------Result-----------\n");
  
  if(lenght==0){
    printf("There is no data\n");
    break;
}else{


     printf("Data : ");
    for(int i = 0; i < lenght; i++){
        
        printf("%d\t",data[i]);
        
    }
  printf("\n");
}
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

printf("Thank you using this app\n");



  
    return 0;
}