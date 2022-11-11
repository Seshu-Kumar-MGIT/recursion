#include<stdio.h> 

int fact=1;

int fact_no(int n)
{
    if(n>0)
    {
        fact=n*fact_no(n-1);
    }
    else if(n==0)
    return fact;
}

int main()    
{    
int num,fact1;
printf("Enter the number to find factorial:\n");
scanf("%d",&num);

fact1=fact_no(num);

printf("The factorial of %d number is:%d",num,fact1);
}

