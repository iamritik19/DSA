#include<iostream>
//Approach 1 using s.size() function
// bool isPalindrome(std::string s,int i,int j){
// 	if(i>=j) return true;
// 	return (s[i]==s[j]) && isPalindrome(s,i+1,j-1);
// }
//Approach 2 without using s.size() function
bool isPalindrome(std::string &s,int &i,int j){
	if(s[j]=='\0') return true;
	if(i>j) return true;
return isPalindrome(s,i,j+1) && (s[i++]==s[j]);
}
int main(){
std::string s;
std::cin>>s;
// bool ans=isPalindrome(s,0,s.size()-1);
int i=0;
bool ans=isPalindrome(s,i,0);
if(ans){
	std::cout<<"It is a Palindrome Number\n";
}
else{
	std::cout<<"It is Not a Palindrome Number\n";
}
	return 0;
}
