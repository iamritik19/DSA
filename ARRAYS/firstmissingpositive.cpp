#include<iostream>
#include<algorithm>
#include<unordered_set>
//Approach 1 takes time O(n*log(n)) and space O(1) using Sorting
int fun1(int *arr,int n){
	std::sort(arr,arr+n);
	int i=0;
	bool flag=false;
	for(;i<n;i++){
		if(arr[i]>0){
			flag=true;
			break;
		}
	}
	if(flag==false || arr[i]!=1) return 1; //if it contains NON-Positive OR first positive element is not equals to 1 then return 1
	for(;i<n-1;i++){
		if(arr[i+1]-arr[i]>1){ //difference of 2 consecutive elements must be 0 or 1 otherwise return arr[i]+1
           return arr[i]+1;
		}
	}
	return arr[n-1]+1; //if all elements are present.then,return last element+1
}
//Approach 2 takes O(n) time ans o(n) space
int fun2(int *arr,int n){
	std::unordered_set<int> s;
	for(int i=0;i<n;i++){
		if(arr[i]>0){ //only insert elements>0 
			s.insert(arr[i]);
		}
	}
	for(int i=1;i<=n;i++){ // check from 1 to n
		if(s.find(i)==s.end()){
			return i;
		}
	}
	return n+1; //If all are present from 1 to n return n+1
}
//Approach 3 ATTENDANCE OF ELEMENTS METHOD
int fun3(int *arr,int n){
	bool flag=false; //check for 1's presence 
	for(int i=0;i<n;i++){
		if(arr[i]==1){
			flag=true;
			break;
		}
	}
	if(flag==false) return 1; // if not present return 1
	for(int i=0;i<n;i++){// since 1 is already marked 
		if(arr[i]<1 || arr[i]>n){ 
			arr[i]=1; //elements less than 1 or greater than n is of no use so replace it with 1
		}
	}
	for(int i=0;i<n;i++){
		int idx=abs(arr[i]); //mark elements presence
		if(arr[idx-1]>0){
		arr[idx-1]*=-1;
	}
	}
	for(int i=0;i<n;i++){
		if(arr[i]>0){ //if any positive element appears that is our answer
			return i+1;
		}
	}
	return n+1;
}
int main(){
	int n;
	std::cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++){
		std::cin>>arr[i];
	}
	int ans=fun3(arr,n);
	delete[] arr;
	std::cout<<ans;
}