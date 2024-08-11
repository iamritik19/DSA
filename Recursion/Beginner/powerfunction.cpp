#include<iostream>
int powerFunction(int a,int b){
	if(a==0) return 0;
	if(b==0) return 1;
	if((b&1)) return a*powerFunction(a,b-1);
	return powerFunction(a,b/2)*powerFunction(a,b/2);
}
int main(){
	int a,b;
	std::cin>>a>>b;
	std::cout<<powerFunction(a,b);
	return 0;
}
