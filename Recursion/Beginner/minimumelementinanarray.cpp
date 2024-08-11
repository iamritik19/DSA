#include<iostream>
#include<climits>
void fun(int *arr,int n,int i,int &ans){
	if(i==n) return;
	ans=(ans<arr[i])?ans:arr[i];
	fun(arr,n,i+1,ans);
}
int main(){
int n;
std::cin>>n;
int arr[10];
for(int i=0;i<n;i++){
	std::cin>>arr[i];
}
int ans=INT_MAX;
fun(arr,n,0,ans);
std::cout<<ans<<"\n";
	return 0;
}
