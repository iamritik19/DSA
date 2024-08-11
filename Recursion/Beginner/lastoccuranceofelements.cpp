#include<iostream>
#include<climits>
void fun(int *arr,int n,int i,int target,int &ans){
	if(i==n) return;	
	fun(arr,n,i+1,target,ans);
	if(arr[i]==target){
		ans=std::max(ans,i);
		return;
	}
}
int main(){
int n;
std::cin>>n;
int arr[10];
for(int i=0;i<n;i++){
	std::cin>>arr[i];
}
int target;
std::cin>>target;
int ans=-1;
fun(arr,n,0,target,ans);
if(ans==-1){
	std::cout<<"target is not present\n";
}
else{
	std::cout<<"target is present at index "<<ans<<"\n";
}

	return 0;
}
