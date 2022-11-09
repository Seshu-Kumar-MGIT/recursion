#include<stdio.h>

int print_nos(int n,int l);

int main()
{
    int num,low=1;
    printf("Enter the range of numbers:\n");
    scanf("%d",&num);
    printf("Numbers from %d to %d:\n",low,num);
    print_nos(num,low);
  return 0;  
}

int print_nos(int n,int l)
{
        if(l > n)
        return 0;
        
        printf("%d\t",l);
        
        return print_nos(n,l+1);

}