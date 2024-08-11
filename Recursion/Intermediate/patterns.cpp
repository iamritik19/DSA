#include<iostream>
//Approach 1 time complexity-O(n*n),space complexity-O(n)
void fun1(int n,int i){
	if(i>n) return;
	for(int j=1;j<=i;j++){
		std::cout<<"* ";
	}
	std::cout<<"\n";
	fun1(n,i+1);
}
//Approach 2 time complexity-O(n*n),space complexity-O(n)
void fun2(int n,int i,std::string output){
	if(i>n) return;
	if(i>0){
	std::cout<<output<<"\n";
}
	fun2(n,i+1,output+"* ");
}
//Approach 3 No loop used and No heavy functions used
void fun3(int n,int r,int c){
	if(r>n) return;
	if(c>r){
		std::cout<<"\n";
		fun3(n,r+1,1);
		return;
	}
	std::cout<<"* ";
	fun3(n,r,c+1);
}
int main(){
int n;
std::cin>>n;
fun1(n,1);
fun2(n,0,"");
fun3(n,1,1);
	return 0;
}
