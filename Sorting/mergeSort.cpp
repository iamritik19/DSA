#include<iostream>
using namespace std;
void merge(int *arr,int low,int mid,int high){
	int size1=mid-low+1;
	int size2=high-mid;
	int *arr1=new int[size1];
	int *arr2=new int[size2];
	int j=0,k=0;
	for(int i=low;i<=mid;i++){
       arr1[j++]=arr[i];
	}
	for(int i=mid+1;i<=high;i++){
       arr2[k++]=arr[i];
	}
	j=0;
    int i=0,idx=low;
    while(i<size1 && j<size2){
    	if(arr1[i]<=arr2[j]){
          arr[idx++]=arr1[i++];
    	}
    	else{
    		arr[idx++]=arr2[j++];

    	}
    }
    while(i<size1){
    	arr[idx++]=arr1[i++];

    }
     while(j<size2){
    	arr[idx++]=arr2[j++];

    }

}
void mergeSort(int *arr,int low,int high){
	if(low>=high) return;
	int mid=(low+high)/2;
	mergeSort(arr,low,mid);
	mergeSort(arr,mid+1,high);
	merge(arr,low,mid,high);
}
int main(){
	int arr[101];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	mergeSort(arr,0,n-1);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}
