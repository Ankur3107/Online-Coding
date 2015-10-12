#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


  int fibonacci_check(long long int n)
      {
      
      long long int first=0,second=1,next,c=0;
       
       while(next<n)
      {
           
              if ( c <= 1 )
                  {
                    next = c;
                    c++;
                  }
              else
                  {
                    next = first + second;
                    first = second;
                    second = next;
                    
                  }
     
        }
        
        if(next==n)
            return 0;
        else
            return 1;
      
      
      
      }










int main() {

    long int t,i;
    scanf("%ld",&t);
    long int a[t];
    for(i=0;i<t;i++)
        {
          
           long long int n;
           scanf("%lld",&n);
           
           a[i]=fibonacci_check(n);
        
        }
    
    for(i=0;i<t;i++)
        {
        
         if(a[i]==0)
             printf("IsFibo\n");
        else
            printf("IsNotFibo\n");
        
        
        }
    
    return 0;    
}
