#include<iostream>
void fun(int n,int o,int c,std::string output){
	if(o==n && o==c){
		std::cout<<output<<"\n";
		return;
	}
	if(o>c){
		fun(n,o,c+1,output+')');
	}
	if(o<n){
		fun(n,o+1,c,output+'(');
	}
}
int main(){
int n;
std::cin>>n;
fun(n,0,0,"");

	return 0;
}
