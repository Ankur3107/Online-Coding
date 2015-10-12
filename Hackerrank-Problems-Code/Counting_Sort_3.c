#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long int a[100];
int main() {

    long int n,s=0;
    scanf("%ld",&n);
    
    while(n--)
        {
        
        long int x;
        char c[50];
        scanf("%ld%s",&x,c);
        a[x]++;
         }
    
    for(int i=0;i<100;i++)
        {
        s=s+a[i];
        printf("%ld\t",s);
    }
    
    
    return 0;
}
