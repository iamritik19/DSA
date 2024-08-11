#include<iostream>
void sort01(int *arr,int n){
	int left=0;
	int right=n-1;
	while(left<right){
		if(arr[left]==0){
           left++;
		}
		else{
			std::swap(arr[left],arr[right]);
			right--;
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
sort01(arr,n);
for(int i=0;i<n;i++){
	std::cout<<arr[i]<<" ";
}

				    return 0;
}

