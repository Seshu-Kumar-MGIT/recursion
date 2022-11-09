#include<stdio.h>

static int rev=0;
int lastdigit;
int reverse_num(int num1)
{
    if(num1)
    {
        lastdigit=num1%10;
        rev=rev*10+lastdigit;
        reverse_num(num1/10);
    }
    else
    return rev;
}

int main()
{
    int num,rev2;
    
    printf("Enter a number to be reversed:\n");
    scanf("%d",&num);
    
    rev2=reverse_num(num);
    printf("\nThe number %d after reversing %d",num,rev2);
  return 0;  
}