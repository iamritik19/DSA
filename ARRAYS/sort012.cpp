#include<iostream>
void sort012(int *arr,int n){
	int low=0;
	int mid=0;
	int high=n-1;
	while(mid<=high){
		if(arr[mid]==0){ //low ke pointer se phle ka sara element sorted hai
			std::swap(arr[low],arr[mid]);
			low++;
			mid++;
		}
		else if(arr[mid]==1){
			mid++;
		}
		else{
			std::swap(arr[mid],arr[high]);
			high--;
		}
	}
}
    int main(){
int n;
std::cin>>n;
int arr[101];
for(int i=0;i<n;i++){
	std::cin>>arr[i];
}
sort012(arr,n);
for(int i=0;i<n;i++){
	std::cout<<arr[i]<<" ";
}

				    return 0;
}

