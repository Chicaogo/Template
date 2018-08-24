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
int* ChoosSort(int* arr,int len){
	for(int i=0;i<len;i++){
		for(int k=i;k<len;k++){
			if(arr[i]>arr[k]){
				int cnt=arr[i];
				arr[i]=arr[k];
				arr[k]=cnt;
			}
		}
		
	}
	return arr;
}
int main(){
	int n=20;
	int* arr=generateRandomArray(n,1,n);
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
	cout<<endl;
	ChoosSort(arr,n);
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
	return 0;
}
