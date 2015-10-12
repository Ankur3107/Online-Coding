#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t,i,j,k,l;
    scanf("%d",&t);
    
    for(i=0;i<t;i++)
        {
        
        int m;
        scanf("%d",&m);
        int n;
        scanf("%d",&n);
        int c[10000];
        for(j=0;j<n;j++)
            {
            scanf("%d",&c[j]);
            }
        
        for(k=0;k<n;k++)
            {
            
              for(l=k+1;l<n;l++)
                  {
                  
                  if(c[k]+c[l]==m)
                      printf("%d %d\n",(k+1),(l+1));
                  
                  }
            
            }
        }
    
    return 0;
}
