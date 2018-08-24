#include<bits/stdc++.h>
using namespace std;
int* generateRandomArray(int n,int rangeL,int rangeR){
	int* arr=new int[n];
	srand(time(NULL));
	for(int i=0;i<n;i++){
		arr[i]=rand()%(rangeR-rangeL+1)+rangeL;
	}
	return arr;
}
int main(void){
	int n=20;
	int* arr=generateRandomArray(n,1,n);
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
	cout<<endl;
	sort(arr,arr+n);
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
	cout<<endl;
	
	delete(arr);
	return 0;
}
