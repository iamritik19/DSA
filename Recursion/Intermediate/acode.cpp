#include<iostream>
void fun(std::string s,int i,std::string output){
	if(i>=s.size()){
		std::cout<<output<<std::endl;
		return;
	}
	char c=(s[i]-'1')+'a';
	fun(s,i+1,output+c);
	if(i+1>=s.size()) return;
	int temp=(s[i]-'0')*10+(s[i+1]-'0')-1;
	if(temp>26) return;
	char ch=temp+'a';
	fun(s,i+2,output+ch);
}
int main(){
std::string input;
std::cin>>input;
fun(input,0,"");
	return 0;
}
