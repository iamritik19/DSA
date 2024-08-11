#include<iostream>
#include<vector>
#include<utility>
#include<unordered_map>
//Approach 1 using hashmap takes time O(n) and space O(n)
long long fun(std::vector<std::vector<int> > &v){
	std::unordered_map<double,int> mpp; //we are storing (a/b) and its count
	for(int i=0;i<v.size();i++){
       mpp[double(v[i][0])/v[i][1]]++;
	}
	long long ans=0;
	long long temp;
   std::unordered_map<double,int> ::iterator it;
	for(it=mpp.begin();it!=mpp.end();it++){ // no of pairs=n*(n-1)/2
		temp=(*it).second;
		ans+=((temp*(temp-1))/2); //counting all pairs
	}
	return ans;
}
int main(){
	int n;
	std::cin>>n;
	std::vector<std::vector<int> > v(n);
		for(int i=0;i<n;i++){
		for(int j=0;j<2;j++){
			int x;
			std::cin>>x;
			v[i].push_back(x);
		}
	}
	long long ans=fun(v);
	std::cout<<ans;
	return 0;
}
