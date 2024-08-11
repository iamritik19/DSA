#include<iostream>
long long fun(std::string &s){
	long long counter=1;
	long long ans=0;
	for(int i=s.size()-1;i>=0;i--){
      ans+=((s[i]-'0')*counter);
      counter*=2;
	}
 return ans;
}
int main(){
std::string s;
std::cin>>s;
std::cout<<fun(s);
	return 0;
}
