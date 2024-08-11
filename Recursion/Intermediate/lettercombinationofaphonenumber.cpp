#include<iostream> 
#include<vector> 
void fun(std::vector<std::string>&mapping,std::string s,int i,std::string output){
	if(s.size()==0){
		return;
	}
if(i==s.size()){
	std::cout<<output<<std::endl;
	return;
}
std::string temp=mapping[(s[i]-'0')];
for(int j=0;j<temp.size();j++){
  fun(mapping,s,i+1,output+temp[j]);
}
}
int main(){
std::string input;
std::cin>>input;
std::vector<std::string> mapping;
mapping.push_back("");
mapping.push_back(""); 
mapping.push_back("abc");
mapping.push_back("def");
mapping.push_back("ghi");
mapping.push_back("jkl");
mapping.push_back("mno");
mapping.push_back("pqrs");
mapping.push_back("tuv");
mapping.push_back("wxyz");         
fun(mapping,input,0,"");
	return 0;
}
