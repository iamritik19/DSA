#include<iostream>
void fun(std::string s,std::string output){
	if(s.size()==0){
		std::cout<<output<<"\n";
		return;
	}
	for(int i=0;i<s.size();i++){
		std::string temp=s.substr(0,i)+s.substr(i+1);
		fun(temp,output+s[i]);
	}
}
int main(){
	std::string s;
	std::cin>>s;
	fun(s,"");
		return 0;
}
