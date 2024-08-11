#include<iostream>
#include<vector>
#define ll long long
ll fun(std::vector<std::vector<int> > &mat,int i){
     std::vector<std::vector<ll> > dp(mat.size(),std::vector<ll> (3,0));
     dp[0][0]=mat[0][0];
     dp[0][1]=mat[0][1];
     dp[0][2]=mat[0][2];
     for(int i=1;i<mat.size();i++){
     	dp[i][0]=mat[i][0]+std::max(dp[i-1][1],dp[i-1][2]);
     	dp[i][1]=mat[i][1]+std::max(dp[i-1][0],dp[i-1][2]);
     	dp[i][2]=mat[i][2]+std::max(dp[i-1][0],dp[i-1][1]);
       }
     int n=mat.size();
     return std::max(dp[n-1][0],std::max(dp[n-1][1],dp[n-1][2]));
	}
  int main(){
int n;
std::cin>>n;
std::vector<std::vector<int> > mat(n);
int x;
for(int i=0;i<n;i++){
	for(int j=0;j<3;j++){
		std::cin>>x;
		mat[i].push_back(x);
	}
}
std::cout<<fun(mat,0);
	return 0;
}

