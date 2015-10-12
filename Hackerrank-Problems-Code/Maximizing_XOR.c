#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
/*
 * Complete the function below.
 */
int maxXor(int l, int r) {
    
         int i,j=0,xor,larger=0;
             i=l;
             
             
                do
                 {
                    j=i;
                   while(j<=r)
                       {
                        
                        xor=i^j;
                        if(larger<xor)
                          larger=xor;
                        j++;
                       }
                    i++;
                  }while(i!=j);
         return (larger);
}


int main() {
    int res;
    int _l;
    scanf("%d", &_l);
    
    int _r;
    scanf("%d", &_r);
    
    res = maxXor(_l, _r);
    printf("%d", res);
    
    return 0;
}
















