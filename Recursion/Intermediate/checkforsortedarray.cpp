#include<iostream>
//This Function only checks that the given array is sorted in Non-Decresing order or Not..
bool isSorted(int *arr,int i,int n){
	if(i==n-1) return true;
	return (arr[i]<=arr[i+1]) && (isSorted(arr,i+1,n));
}
int main(){
int n;
std::cin>>n;
int arr[10];
for(int i=0;i<n;i++){
	std::cin>>arr[i];
}
bool flag=isSorted(arr,0,n);
if(flag) std::cout<<"It is Sorted"<<std::endl;
else std::cout<<"It is not Sorted"<<std::endl;
						return 0;
}
