#include<stdio.h>

int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        for(j=n-1-i;j>0;j--)
        {
            printf("\t");
        }
        
        for(k=i;k>=0;k--)
        {
            printf("#");
        }
        
        printf("\n");
    }
    return 0;
}