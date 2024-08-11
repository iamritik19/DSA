#include<iostream>
#include<vector>
#include<climits>
//The subsequence must be in strictly increasing order
void fun(std::vector<int> v,int i,int prev,int temp,int &ans){
	if(i==v.size()){
		ans=std::max(temp,ans);
		return;
	}
	if(prev<v[i]){
		fun(v,i+1,v[i],temp+1,ans);
	}
		fun(v,i+1,v[i],temp,ans);
}
int main(){
int n;
std::cin>>n;
std::vector<int> v;
for(int i=0;i<n;i++){
	int x;
	std::cin>>x;
	v.push_back(x);
}
int ans=0;
fun(v,0,INT_MIN,0,ans);
std::cout<<ans<<"\n";
	return 0;
}
