#include<iostream>
int binaryStringWithNoConsecutiveOnes(int n){
	if(n==0) return 0;
	if(n==1) return 2;
	return binaryStringWithNoConsecutiveOnes(n-1)+binaryStringWithNoConsecutiveOnes(n-2);
}
int main(){
	int n;
	std::cin>>n;
	std::cout<<binaryStringWithNoConsecutiveOnes(n);
	return 0;
}
