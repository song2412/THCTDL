#include <stdio.h>

int linear_search(int A[], int n, int x){
    int i;
    for (i = 0; i < n; i++)
      
        if (A[i] == x){
            return i; 
        }
    return -1; 
}
int main{
    int n = 9;

    int A[] = {2,3,4,10,40};
   
    int x = 10;
  
    int index = linear_search(A,n,x);
    
    if(index == -1){
        printf("Khong tim thay phan tu x = %d", x);
    }else{ 
        printf("Tim thay x = %d tai vi tri %d", x, index);
    }
}