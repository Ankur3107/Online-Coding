#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long int a[100];
int main() {

    long int n;
    scanf("%ld",&n);
    
    while(n--)
        {
        
        long int x;
        scanf("%ld",&x);
        a[x]++;
         }
    for(int i=0;i<100;i++)
        printf("%ld\t",a[i]);
    
    return 0;
}
