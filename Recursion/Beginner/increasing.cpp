#include<iostream>
void printIncreasing(int n){
	if(n==0) return;
	printIncreasing(n-1);
	std::cout<<n<<" ";
}
int main(){
	int n;
	std::cin>>n;
	printIncreasing(n);
	return 0;
}
