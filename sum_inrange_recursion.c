#include<stdio.h>

int sum_nos(int n,int sum1,int l);

int main()
{
    int num,low,sum=0;
    printf("Enter the range of numbers:\n");
    scanf("%d",&num);
    printf("Enter the low limit:\n");
    scanf("%d",&low);
    
    printf("Sum of %d numbers from %dth number is %d",num,low,sum_nos(num,sum,low));
  return 0;  
}

int sum_nos(int n,int sum1,int l)
{
        if(n<l)
        return 0;
        
        
        return sum1=sum1+n+sum_nos(n-1,sum1,l);

}

