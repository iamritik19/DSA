#include<iostream>
using namespace std;
void decreasingIncreasing(int n){
	if(n==0) return;
	std::cout<<n<<" ";
	decreasingIncreasing(n-1);
	std::cout<<n<<" ";
}
int main(){
	int n;
	std::cin>>n;
	decreasingIncreasing(n);
	return 0;
}
