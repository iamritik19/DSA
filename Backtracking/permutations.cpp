#include<iostream>
void printPermutations(std::string &s,int i){
	if(i==s.size()){
		std::cout<<s<<"\n";
		return;
	}
	for(int j=i;j<s.size();j++){
		std::swap(s[i],s[j]);
		printPermutations(s,i+1);
		std::swap(s[i],s[j]);
	}
}
int main(){
	std::string s;
	std::cin>>s;
	printPermutations(s,0);
	return 0;
}