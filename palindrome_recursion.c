#include<stdio.h> 

int rev,last;

int rev_no(int n)
{
    if(n)
    {
        last=n%10;
        rev=rev*10+last;
        rev_no(n/10);
    }
    else
    return rev;
}

int main()    
{    
int num,rev2;
printf("Enter the number to check palindrome:\n");
scanf("%d",&num);

rev2=rev_no(num);

(num==rev)?printf("number %d is a Palindrome",num):printf("number %d is not a Palindrome",num);
}

