#include<iostream>
void printDecreasing(int n){
	if(n==0) return;
	std::cout<<n<<" ";
    printDecreasing(n-1);
}
int main(){
	int n;
	std::cin>>n;
	printDecreasing(n);
	return 0;
}
