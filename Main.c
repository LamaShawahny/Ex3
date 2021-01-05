#include <stdio.h>
#include "isort.h"
#include "isort.c"

#define Length 50
int main(){
    int arr[Length];
    int i;

     for (i = 0; i < Length; i++)
    {
        printf("Insert the %d number: ",i+1);
	int x;
       scanf("%d",&x);
       *(arr+i)=x;
    }
    printf(" original array befor sorting :\n");
       for ( i = 0; i < Length; i++)
    {
        printf("%d ",*(arr+i));
    }
    insertion_sort(arr,Length);
    printf("\n final sorted array:\n");
    for ( i = 0; i < Length; i++)
    {
        printf("%d ,",*(arr+i));
    }
    printf("\n");
    return 0;
}
