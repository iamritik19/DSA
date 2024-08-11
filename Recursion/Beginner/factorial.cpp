#include<iostream>
int Factorail(int n){
	if(n==0 || n==1) return 1;
	return n*Factorail(n-1);
}
int main(){
	int n;
	std::cin>>n;
	std::cout<<Factorail(n);
	return 0;
}
