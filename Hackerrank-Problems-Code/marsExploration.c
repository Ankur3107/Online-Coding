#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char str[1000];
    
    gets(str);
    int i=0,l=strlen(str);
    int count=0;
    while(str[i]!='\0')
        {
            int x=0;
            if(str[i]=='S')
               x++;
            if(str[i+1]=='O')
               x++;
            if(str[i+2]=='S')
               x++;
        if(x==3)
         count++; 
        i=i+3;
        
        }
    
    printf("%d",(l/3)-count);
    
    
    
    return 0;
}
