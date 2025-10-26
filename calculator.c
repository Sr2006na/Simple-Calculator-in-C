#include <stdio.h>
int main(){
int choice;
float num1,num2,result;
char op;


while(1){
printf("//SIMPLE CALCULATOR//\n");
printf("Enter the operation ( + , - , * , / , 0-exit ): ");
scanf(" %c",&op);

if(op=='0'){
    printf("Exit the calculator thanks for using!\n");
    break;}
else{    
printf("Enter the first number: ");
scanf("%f",&num1);
printf("Enter the second number: ");
scanf("%f",&num2);
switch(op){
    case('+'):
    result=num1+num2;
    printf("Addition:%.1f + %.1f = %.1f\n",num1,num2,result);
    break;
    case('-'):
    result=num1-num2;
    printf("substration:%.1f - %.1f = %.1f\n",num1,num2,result);
    break;
    case('*'):
    result=num1*num2;
    printf("multiplication:%.1f * %.1f = %.1f\n",num1,num2,result);
    break;
    case('/'):
    if(num2!=0){
    result=num1/num2;
    printf("Divide:%.1f / %.1f = %.1f\n",num1,num2,result);
    }else{
    printf("ERROR divide by zero\n");
    }
    break;
    default:
    printf("Invalid Opertation!\n");
  }
}

printf("Do you want to perform another calculation? (1 for Yes / 0 for No):");
scanf("%d",&choice);
if (choice==0){
printf("Exit the calculator thanks!\n");
break;
}
}
  return 0;
}