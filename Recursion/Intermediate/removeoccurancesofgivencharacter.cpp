#include<iostream>
#include<vector>
void fun(std::string &input,int i,char &ch,std::vector<char> &output){
	if(i==input.size()){
		return;
	}
	if(input[i]!=ch){
		output.push_back(input[i]);
		fun(input,i+1,ch,output);
	}
	else{
		fun(input,i+1,ch,output);
	}
}
int main(){
std::string input;
std::cin>>input;
char ch;
std::cin>>ch;
std::vector<char> output;
fun(input,0,ch,output);
for(int x=0;x<output.size();x++){
	std::cout<<output[x];
} 
	std::cout<<std::endl;
	return 0;
}
