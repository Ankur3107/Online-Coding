#include<stdio.h>
#include<string.h>
#define MAX 256


 

int compare(char arr1[], char arr2[])
{
	int i;
    for (i=0; i<MAX; i++)
        if (arr1[i] != arr2[i])
            return 0;
    return 1;
}
 

int search(char *pat, char *txt)
{
    int M = strlen(pat), N = strlen(txt),no=0,i;
 
    
    char countP[MAX] = {0}, countTW[MAX] = {0};
    for (i = 0; i < M; i++)
    {
        (countP[pat[i]])++;
        (countTW[txt[i]])++;
    }
 
    
    for (i = M; i < N; i++)
    {
       
        if (compare(countP, countTW))
            no++;
 
        
        (countTW[txt[i]])++;
 
        
        countTW[txt[i-M]]--;
    }
 
   
    if (compare(countP, countTW))
        no++;
        
   return no;
}
 

int main()
{
   int t;
   scanf("%d",&t);
   
   while(t--)
   {
   		char txt[50],pat[50];
   		scanf("%s",txt);
   		scanf("%s",pat);
   		printf("%d\n",search(pat,txt));
   }
   
    return 0;
}










