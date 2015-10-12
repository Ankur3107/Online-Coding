#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int square(long int m,long int n)
    {
    
    long int i,s,x,flag=0;
    i=sqrt(m);
    x=sqrt(n);
    
    while(i<=x)
        {
       
           s=pow(i,2);
        if(s>=m && s<=n)
            flag++;
          i++;
        
        }
    return flag;
    }



int main() {

    int t,i;
    scanf("%d",&t);
    
    for(i=0;i<t;i++)
        {
        
        long int m,n;
        scanf("%ld",&m);
        scanf("%ld",&n);
        
        long int l;
        
        l=square(m,n);
        printf("%ld\n",l);
        
        
        
        }
    return 0;
}
