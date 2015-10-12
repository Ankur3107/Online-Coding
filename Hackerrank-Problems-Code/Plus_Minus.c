#include<stdio.h>

int main()
{
    int n1,a[100],i;
    float z=0,p=0,n=0;
    scanf("%d",&n1);
    
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
        
        if(a[i]==0)
        z++;
        if(a[i]>0)
        p++;
        if(a[i]<0)
        n++;
    }
    
    printf("%.3f\n%.3f\n%.3f",(p/n1),(n/n1),(z/n1));
    return 0;
    
}