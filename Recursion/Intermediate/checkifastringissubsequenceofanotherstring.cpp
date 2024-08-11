#include<iostream>
void fun(std::string s1,std::string s2,int i,int j,int &count){
	if(i>=s1.size() || j>=s2.size()) return;
	if(s1[i]==s2[j]){
		count++;
		fun(s1,s2,i+1,j+1,count);
	}
	else{
		fun(s1,s2,i,j+1,count);
	}
}
int main(){
std::string s1,s2;
std::cin>>s1>>s2;
int count=0;
fun(s1,s2,0,0,count);
if(count==s1.size()){
	std::cout<<"Yes,S1 is a subsequence of s2\n";
}
else{
    std::cout<<"No,S1 is not a subsequence of s2\n";
}

	return 0;
}
