#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int max(int l,int b)
 {
   int x,y,t,z;
    
    x=l>b?l:b;
   
    if(x==l)
        y=b;
    else
        y=l;
   
 
  while (y != 0) {
    t = y;
    y = x % y;
    x = t;
  }
    
   z=(l*b)/(x*x);
    return z;
    
 }



int main() {

   int t,a[1000],i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
        {
        int l,b;
        scanf("%d",&l);
        scanf("%d",&b);
        int z;
        z=max(l,b);
        printf("%d\n",z);
        }
}
