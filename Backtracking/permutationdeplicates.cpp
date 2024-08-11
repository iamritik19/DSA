#include<iostream>
#include<unordered_set>
void printPermutations(std::string &s,int i){
	if(i==s.size()){
		std::cout<<s<<"\n";
		return;
	}
	std::unordered_set<char> mpp;
	for(int j=i;j<s.size();j++){
		if(mpp.find(s[j])==mpp.end()){
		std::swap(s[i],s[j]);
		mpp.insert(s[i]);
		printPermutations(s,i+1);
		std::swap(s[i],s[j]);
	}
	}
}
int main(){
	std::string s;
	std::cin>>s;
	printPermutations(s,0);
	return 0;
}
