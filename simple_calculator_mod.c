/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define NUM 30

int main()
{
    char ch;
    int num1, num2;
    float result;
    printf("\nSelect the operation you want to perform (+, -, *, /, '%'):");
    scanf("%c", &ch);
    printf("Enter the number_1:");
    scanf("%d", &num1);
    printf("\nEnter the number_2:");
    scanf("%d", &num2);
    
    
    switch(ch)
    {
        case '+':
                    printf("\nAddition:");
                    result = num1 + num2;
                    printf("%.2f",result);
                    break;
        
        case '-':
                    printf("\nSubstraction:");
                    result = num1 - num2;
                    printf("%.2f",result);
                    break;
                    
        case '*':
                    printf("\nMultiplication:");
                    result = num1*num2*NUM;
                    printf("%.2f",result);
                    break;
                    
        case '/':
                    printf("\nDivision:");
                    result = num1/num2;
                    printf("%.2f",result);
                    break;
                    
        case '%':
                    printf("\nModulus:");
                    result = (num1*num2)%NUM;
                    printf("%.2f",result);
                    
        default:
                   printf("\nYou haven't selected the option mentioned. So exiting the application....");
                   
                    
        
    }
                    
    return 0;
}
