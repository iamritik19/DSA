#include<iostream>
#include<vector>
void fun(std::string s1,std::string s2,int i,int j,std::vector<char> &ans,int carry){
	if(i<0 && j<0){
		if(carry!=0){
			ans.push_back(carry+'0');
		}
		return;
	}
int d1=(i>=0)?(s1[i]-'0'):0;
int d2=(j>=0)?(s2[j]-'0'):0;
int sum=d1+d2+carry;
ans.push_back((sum%10)+'0');
fun(s1,s2,i-1,j-1,ans,sum/10);
}
void reverse(std::vector<char> &ans,int i,int j){
	if(i>=j) return;
	std::swap(ans[i],ans[j]);
	reverse(ans,i+1,j-1);
}
int main(){
std::string s1,s2;
std::cin>>s1>>s2;
std::vector<char> ans;
fun(s1,s2,s1.size()-1,s2.size()-1,ans,0);
reverse(ans,0,ans.size()-1);
for(int i=0;i<ans.size();i++){
	std::cout<<ans[i];
}

	return 0;
}
