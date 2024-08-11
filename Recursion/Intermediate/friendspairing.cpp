#include<iostream>
int fun(int n){
	if(n==1 || n==2)return n;
	return fun(n-1)+(n-1)*fun(n-2);
}
int main(){
int n;
std::cin>>n;
std::cout<<fun(n)<<"\n";
	return 0;
}
