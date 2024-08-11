#include<iostream>
int Fibonacci(int n){
	if(n==0 || n==1) return n;
	return Fibonacci(n-1)+Fibonacci(n-2);
}
int main(){
	int n;
	std::cin>>n;
	std::cout<<Fibonacci(n);
	return 0;
}
