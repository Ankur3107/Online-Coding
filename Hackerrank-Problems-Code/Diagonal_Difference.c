#include <stdio.h>

int main() {
    int n,a[100][100],i,j,d1=0,d2=0;
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            
            if(i==j)
            d1=d1+a[i][j];
            
            if((i+j)==(n-1))
            d2=d2+a[i][j];
        }
    }
 printf("%d",abs(d1-d2));
 return 0;
 }