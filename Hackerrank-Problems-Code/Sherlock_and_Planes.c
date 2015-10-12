#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>






int main() {

    int t,i,j;
    scanf("%d",&t);
    
    int a[3][1000];
    
    for(i=0;i<t;i++)
        {
        for(j=0;j<4;j++)
            {
              scanf("%d%d%d",&a[j][0],&a[j][1],&a[j][2]);
            }
        
         
        int i,flag1=0,flag2=0,flag3=0,x,y,z;
        
    x=a[0][0];
    y=a[0][1];
    z=a[0][2];
    
    
    for(i=0;i<4;i++)
        {
        
        if(a[i][0]==x)
            flag1++;
        if(a[i][1]==y)
            flag2++;
        if(a[i][2]==z)
            flag3++;
         }
    
    if(flag1==4||flag2==4||flag3==4)
        printf("YES\n");
    else
        printf("NO\n");
        
        }
    
 return 0;   
    
}
