#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int lane(long int *a,long int n,int x,int y )
    {
    
    int long smaller;
    smaller=a[x];
    while(y>=x)
        {
        
        if(a[x]<smaller)
            {
            smaller=a[x];
            }
        x++;
        }
    return (smaller);
    
    
}




int main() {

    int t,l[1000],i;
    long int a[100000],n;
    scanf("%ld",&n);
    scanf("%d",&t);
    
    for(i=0;i<n;i++)
        {
        
        scanf("%ld",&a[i]);
        
        }
    
   for(i=0;i<t;i++)
    {
        int x,y;
        scanf("%d",&x);
        scanf("%d",&y);
        l[i]=lane(a,n,x,y);
    }
    
    
   for(i=0;i<t;i++)
       {
       
       printf("%d\n",l[i]);
       
       }
    return 0;
    
}
