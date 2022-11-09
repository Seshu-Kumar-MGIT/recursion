#include<stdio.h>

int evensum_nos(int n,int sum1,int l);
int oddsum_nos(int n,int sum1,int l);

int main()
{
    int num,low,sum=0;
    
    printf("Enter the range of numbers:\n");
    scanf("%d",&num);
    printf("Enter the low limit:\n");
    scanf("%d",&low);
    
    printf("Sum of all even numbers from %d number to %dth number is %d\n",low,num,evensum_nos(num,sum,low));
    printf("Sum of all odd numbers from %d number to %dth number is %d",low,num,oddsum_nos(num,sum,low));
  return 0;  
}

int evensum_nos(int n,int sum1,int l)
{
        if(n<l)
        return 0;
        
        return (n%2==0)?(sum1=sum1+n+evensum_nos(n-1,sum1,l)):(sum1=sum1+evensum_nos(n-1,sum1,l));

}

int oddsum_nos(int n,int sum1,int l)
{
        if(n<l)
        return 0;
        
        return (n%2!=0)?(sum1=sum1+n+oddsum_nos(n-1,sum1,l)):(sum1=sum1+oddsum_nos(n-1,sum1,l));

}