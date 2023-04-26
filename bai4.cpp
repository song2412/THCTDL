#include <iostream>
using namespace std;
int Insertion_Sort(int a[], int n){
	int j, i;
	int x;
	for(i=1; i<n; i++){
		x = a[i]; j = i-1;
	
		while((j>=0)&&(a[j]>x)){
               
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = x;
	}
}
int main()
{
	int a[5] = {8, 4, 1, 6, 5};
	Insertion_Sort(a, 5);
	cout<<"Mang sau khi sap xep:"<<endl;
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
}