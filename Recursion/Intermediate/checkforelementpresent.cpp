#include<iostream>
bool isPresent(int *arr,int i,int n,int target){
	if(i==n) return false;
	return (arr[i]==target) or isPresent(arr,i+1,n,target);
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
bool flag=isPresent(arr,0,n,target);
if(flag) std::cout<<"It is Present"<<std::endl;
else std::cout<<"It is Not Present"<<std::endl;
						return 0;
}
