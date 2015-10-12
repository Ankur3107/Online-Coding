#include<stdio.h>

int digit(long int n)
{
    int x,y=0;
    long int z;
    z=n;
    while(z!=0)
    {
        x=z%10;
        if(x!=0 && n%x==0)
        y++;
        z=z/10;
    }
    return y;
}

int main()
{
    int t;
    scanf("%d",&t);
    
    while(t--)
    {
        long int n,d;
        scanf("%ld",&n);
        
        d=digit(n);
        
        printf("%d\n",d);
    }
    return 0;
}