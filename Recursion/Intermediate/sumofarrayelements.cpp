#include<iostream>
int sumOfArrayElements(int *arr,int i,int n){
	if(i==n) return 0;
	return arr[i]+sumOfArrayElements(arr,i+1,n);
}
int main(){
int n;
std::cin>>n;
int arr[10];
for(int i=0;i<n;i++){
	std::cin>>arr[i];
}				
std::cout<<sumOfArrayElements(arr,0,n);
						return 0;
}
