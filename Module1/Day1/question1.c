/*1. Write a function to find biggest of 2 numbers using 
    - if else
    - ternary operator

a) Using - if else :*/

#include <stdio.h>

int Biggestnumber(int x, int y) {
if (x>y) {      
return x;   
}
    
else{       
return y;   
}
    
if(x==y) {      
return 0;  
}

}

int main() 
{  
int a,b;
printf("Please enter the values of a and b"); 
scanf("%d %d", &a,&b);
printf("The biggest number is  %d", Biggestnumber(a,b));  
return 0;
}



/*b) Using - ternary operator :

#include <stdio.h>
int main() 
{
int a,b;
printf("Please enter the values of a and b");
scanf("%d %d", &a,&b);
( a>b) ? printf("The biggest number is %d",a) : printf("The biggest number is %d",b);
return 0;
}*/
