#include<stdio.h>

int feast(int x,int m,int i)
{
    int s1,s2;
    if(x>=m)
    {
        s1=x/m;
        i=i+s1;
        s2=x%m;
        return feast((s1+s2),m,i);
    }
    
    else
    return i;
}



int main()
{
    int t;
    scanf("%d",&t);
    
    while(t--)
    {
        int n,c,m,x,ans,i=0;
        scanf("%d%d%d",&n,&c,&m);
        
        x=n/c;
        
        ans=feast(x,m,i);
        printf("%d\n",ans+x);
    }
return 0;
}