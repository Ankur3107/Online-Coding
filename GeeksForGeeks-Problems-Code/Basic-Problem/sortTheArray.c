#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void sortThem(int *arr, int n)
{
    int i, j;
   for (i = 0; i < n-1; i++)      
       for (j = 0; j < n-i-1; j++) 
            if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
	//code
	
	int t;
	
	scanf("%d",&t);
	
	while(t--)
        {
            int i,n,a[1000];
            scanf("%d",&n);
            
            for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
            }
            
            sortThem(a,n);
            printArray(a,n);
            
        }
	
	
	return 0;
}