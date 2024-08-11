#include<iostream>
//TOP DOWN APRROACH MEMOIZATION TC-O(N),SC-O(N)
int fibonacci(int *dp,int n){
	if(n==0 || n==1){
		return dp[n]=n;
	}
	if(dp[n]!=-1) return dp[n];
	return dp[n]=fibonacci(dp,n-1)+fibonacci(dp,n-2);
}
//BOTTOM UP APPROACH TABULATION
//
int main(){
	int n;
	std::cin>>n;
	int dp[10001];
	for(int i=0;i<10001;i++){
		dp[i]=-1;
	}
	std::cout<<fibonacci(dp,n);
	return 0;
}
