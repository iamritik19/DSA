#include<iostream>
int sumOfDigitsInAString(std::string s,int i){
if(i==s.size()) return 0;
return s[i]-'0'+sumOfDigitsInAString(s,i+1);
}
int main(){
std::string s;
std::cin>>s;
std::cout<<sumOfDigitsInAString(s,0);
						return 0;
}
