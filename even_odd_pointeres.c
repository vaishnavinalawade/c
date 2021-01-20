/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>
#define N 200
void check_num(int[], int[] , int[] ,int);
void display(int[] ,int);
int o,e;
int odd[N],even[N];

int main()
{
    int a[] = {12,34,23,7,6,56,4,8,90,3,45,67,23,1,84,66};
    int len = sizeof(a)/sizeof(a[0]);
    
    check_num(a,&odd[0],&even[0],len);

    printf("The even elements in the array are:");
    display(even,e);
   
    printf("\nThe odd elements in the array are:");
    display(odd,o);

   
    return 0;
}

void check_num(int a[], int *odd, int *even, int len)
{
    int *ptr;
    
    for(ptr=&a[0]; ptr<&a[len]; ptr++)
    {
        if(*ptr%2 == 0)
        {
            *(even+e) = *ptr;
            e++;
        }
        else
        {
            *(odd+o) = *ptr;
            o++;
        }
    }
}

void display(int display[], int ele)
{
    for(int i=0; i<ele; i++)
    {
        printf("%d\t", display[i]);
    }
}