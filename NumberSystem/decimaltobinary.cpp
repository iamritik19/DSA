#include<iostream>
std::string fun(int n){
	std::string ans;
	while(n){
     ans+=(n%2+'0'); 
     n/=2;
	}
	if(ans.size()==0) return "0"; //for 0 only
	std::reverse(ans.begin(),ans.end());
	return ans;
}
int main(){
int n;
std::cin>>n;
std::string ans=fun(n);
std::cout<<ans;
	return 0;
}
