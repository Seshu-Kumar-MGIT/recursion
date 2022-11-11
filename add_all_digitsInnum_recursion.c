#include<stdio.h> 
#define max 20

int last,sum;

int extractdigits_no(int n)
{
   if(n>0)
    {
        last=n%10;
        sum=sum+last;
        extractdigits_no(n/10);
        
        
    }
    
    
  
    return sum;
}

int main()    
{    
int num,sum1;
printf("Enter the number:\n");
scanf("%d",&num);


sum1=extractdigits_no(num);

printf("The sum of all digits of given number:%d",sum1);
}