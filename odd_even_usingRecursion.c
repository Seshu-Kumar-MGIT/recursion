#include<stdio.h>

int even_nos(int n,int l);
int odd_nos(int n,int l);

int main()
{
    int num,low;
    printf("Enter the range of numbers:\n");
    scanf("%d",&num);
    printf("Enter the low limit:\n");
    scanf("%d",&low);
    printf("Even numbers in the range %d to %d:\n",low,num);
    even_nos(num,low);
    printf("Odd numbers in the range %d to %d:\n",low,num);
    odd_nos(num,low);
  return 0;  
}

int even_nos(int n,int l)
{
        if(l > n)
        return 0;
        
        else if(l%2==0)
        printf("%d\t",l);
        
        return even_nos(n,l+1);

}

int odd_nos(int n,int l)
{
        if(l > n)
        return 0;
        
        else if(l%2!=0)
        printf("%d\t",l);
        
        return odd_nos(n,l+1);

}