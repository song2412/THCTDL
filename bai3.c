#include <stdio.h>
//Hàm đổi chỗ 2 số nguên a,b
void Swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
//Hàm sắp xếp Interchange Sort
void InterchangeSort(int a[], int n){   
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if(a[i] > a[j]) //Thực hiện đổi chỗ phần tử nhỏ hơn với phần tử thứ i.
                Swap(a[i], a[j]);
}
int main()
{
    int arr[] = {3,4,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    InterchangeSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}