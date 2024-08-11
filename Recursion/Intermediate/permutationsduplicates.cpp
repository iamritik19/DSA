#include<iostream>
#include<unordered_set>
void fun(std::string s,std::string output){
	if(s.size()==0){
		std::cout<<output<<"\n";
		return;
	}
	std::unordered_set<char> mpp;
	for(int i=0;i<s.size();i++){
		if(mpp.find(s[i])==mpp.end()){
		std::string temp=s.substr(0,i)+s.substr(i+1);
				mpp.insert(s[i]);
		fun(temp,output+s[i]);
	}
}
}
int main(){
	std::string s;
	std::cin>>s;
	fun(s,"");
		return 0;
}

