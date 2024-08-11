#include<iostream>
bool fun(int *arr,int n){
	if(n<3) return false; // size<3 not possible
	int i=0; 
	while(i<n-1 && arr[i]<arr[i+1]){ 
		i++; //we check for strictly increasing part 
	}
	if(i==0 || i==n-1) return false; //i==0 array is Strictly Decreasing and i==n-1  means array is strictly Increasing
	while(i<n-1 && arr[i]>arr[i+1]){ //some part of array is strictly increasing then,check for stricly decreasing
		i++;
	}
	if(i<n-1) return false; //it is not strictly decreasing throughout
	return true;
}
int main(){
	int n;
	std::cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++){
		std::cin>>arr[i];
	}
	bool ans=fun(arr,n);
	std::cout<<ans;
	return 0;
}
