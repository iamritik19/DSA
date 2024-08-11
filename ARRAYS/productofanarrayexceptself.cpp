#include<iostream>
//This is a Brute Force Solution takes O(n*n) time and O(1) space
void fun1(int *arr,int n,int *ans){
	int product;
	for(int i=0;i<n;i++){
		product=1;
		for(int j=0;j<n;j++){
          if(i!=j){
          	product*=arr[j];
          }
		}
		ans[i]=product;
	}
}
//Some level of Optimisation over Brute Force takes O(n) time and O(n) space
void fun2(int *arr,int n,int *ans){
	int *left=new int[n];
	int *right=new int[n];
	int product=1;
	for(int i=0;i<n;i++){
		left[i]=product;
		product*=arr[i];
	}
	product=1;
	for(int i=n-1;i>=0;i--){
		right[i]=product;
		product*=arr[i];
	}
	for(int i=0;i<n;i++){
		ans[i]=left[i]*right[i];
	}
	delete[] left;
	delete[] right;
}
//Most Optimised Solution 
void fun3(int *arr,int n,int *ans){
	int product=1;
	for(int i=0;i<n;i++){
		ans[i]=product;
		product*=arr[i];
	}
	product=1;
	for(int i=n-1;i>=0;i--){
		ans[i]*=product;
		product*=arr[i];
	}
}
int main(){
	int n;
	std::cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++){
		std::cin>>arr[i];
	}
	int *ans=new int[n];
	fun3(arr,n,ans);
	for(int i=0;i<n;i++){
		std::cout<<ans[i]<<" ";
	}
	delete[] ans;
	delete[] arr;
	return 0;
}