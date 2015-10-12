#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int tree(int n)
    {
      int i,x=1;
       for(i=1;i<=n;i++)
           {
             if(i%2==0)
                 {
                   x=x+1;
                 }
             else
                 {
                   x=x*2;
                 }
           }
    
      return(x);
    }


int main() {
    
    int t,c[10],i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
        {
            int n;
            
            scanf("%d",&n);
            c[i]=tree(n);
        }
     for(i=0;i<t;i++)
         {
           printf("%d\n",c[i]);
         }
    
   return 0;
}
