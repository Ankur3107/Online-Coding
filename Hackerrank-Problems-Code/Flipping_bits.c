
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


unsigned long flipping(unsigned long n)
    {
     int a[32],i=0;
     unsigned long x;
     x=n;
     
     while(x!=0)
         {
         
         a[i++]=x%2;
         x=x/2;
         
         }
     while(i!=32)
         {
         a[i]=0;
         i++;
         
         }
    
    for(i=0;i<32;i++)
        {
        
        if(a[i]==0)
            a[i]=1;
        else
            a[i]=0;
        }
       
    unsigned long sum=0;
    
    for(i=0;i<32;i++)
        {
        
        sum=sum+(a[i]*pow(2,i));
        
        }

    return sum;
    
    
    }






int main() {

    int t,i;
    scanf("%d",&t);
    
    for(i=0;i<t;i++)
        {
        
        unsigned long n;
        scanf("%lu",&n);
        unsigned long l;
        l=flipping(n);
        
        printf("%lu\n",l);
        }
    
    
   return 0;
}
