#include<iostream>
void PrintSubsequences(std::string s,int i,std::string output){
	if(i==s.size()){
		std::cout<<output<<std::endl;
		return;
	}
	PrintSubsequences(s,i+1,output);
	PrintSubsequences(s,i+1,output+s[i]);
}
int main(){
std::string s;
std::cin>>s;
PrintSubsequences(s,0,"");
						return 0;
}
