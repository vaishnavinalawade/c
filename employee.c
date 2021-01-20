/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define N 100

int main()
{
    int emp[N][N], n, basic_sal, emp_id, ta, da, pf;
    
    printf("Enter the number of employees:");
    scanf("%d",&n);
    
    int j = 0;
    for(int i=0; i<n;i++)
    {
        printf("\nEnter the employee id:");
        scanf("%d", &emp_id);
        *(*(emp+i)+j) = emp_id;
        printf("\nEnter the employees basic salary:");
        scanf("%d", &basic_sal);
        *(*(emp+i)+j+1) = basic_sal;
        *(*(emp+i)+j+2) = (basic_sal * 12) / 100;
        *(*(emp+i)+j+3) = (basic_sal * 10) / 100;
        *(*(emp+i)+j+4) = (basic_sal * 5) / 100;
        
    }
    
    
    for(int i=0; i<n;i++)
    {
        int gross_sal = 0;
        printf("\nDetails of employee");
        printf("\nEmployee Id : %d \tBasic Salary: %d \tDearness Allowance: %d \nTravelling Allowance: %d \tProvident Fund:%d", emp[i][0], emp[i][1], emp[i][2], emp[i][3], emp[i][4]);
        
        gross_sal =  *(*(emp+i)+j+1) + *(*(emp+i)+j+2) + *(*(emp+i)+j+3) - *(*(emp+i)+j+4);
        printf("\nGross Salary: %d\n", gross_sal);
    }
}