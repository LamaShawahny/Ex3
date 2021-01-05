#include <stdio.h>
#include "isort.h"

   void shift_element(int* arr, int i)
  { 
     int myLocation =*arr;
     int next ;
     int afterpointer =*(arr+i);
     int j;
    for ( j=0 ; j<i ; j++){
        
       next = *(arr+1+j);
       *(arr+1+j)= myLocation ; 
       myLocation=next;
    }
    *arr=afterpointer;


  }

int findminindex(int *arr ,int start,int len)
{
    int min=*(arr+start);
    int indexofmin=start;
    int i;
    for(i=start;i<len;i++)
    {
    if (*(arr+i)<min)     
        {
            min=*(arr+i);
            indexofmin=i;
        }
    }
    return indexofmin;
}



void insertion_sort(int *arr, int len) 
{ 
    int indx; 
   
    for (indx = 0; indx < len; indx++)
     {
        int x=findminindex(arr,indx,len);
        shift_element( (arr+indx), x);
     } 
} 



