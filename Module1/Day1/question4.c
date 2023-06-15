/*4. Write a simple calculator program which should accept inputs in the same order.
    - Operand 1
    - Operator
    - Operand 2
The order of scan should be same, for example, you should first scan in the following order.
printf("Enter Number1: );
Scan the first number form the user.
printf("Enter the operator: );
Scan the operator from the user.
printf("Enter Number2: );
Scan the second number form the user.*/

#include <stdio.h>
int main() 
{
int operand1, operand2, w;
char operatorr; 
printf("Enter any one of the operators : +, -,*, /\t");
scanf("%s",&operatorr); 
printf("Enter the first operand\t");
scanf("%d",&operand1); 
printf("Enter the second operand\t"); 
scanf("%d",&operand2);
switch(operatorr)
{
        
case '+':     
printf("The output is %d+%d = %d", operand1, operand2, operand1+operand2);     
break;
        
case '-':    
printf("The output is %d-%d = %d", operand1, operand2, operand1-operand2);    
break;
        
case '*':     
printf("The output is %d*%d = %d", operand1, operand2, operand1*operand2);     
break;
        
case '/':    
printf("The output is %d/%d = %d", operand1, operand2, operand1/operand2);    
break;

default:
printf("Please enter valid operator");   
}

return 0;
}