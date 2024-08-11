#include<iostream>
#include<cmath>
void fun(int x,int n,int i,int &count){
	int temp=std::pow(i,n);
	if(x==0){
		count++;
		return;
	}
	if(x<0 || temp>x){
		return;
	}
	fun(x-temp,n,i+1,count);
	fun(x,n,i+1,count);
}
int main(){
int x,n;
std::cin>>x>>n;
int count=0;
fun(x,n,1,count);
std::cout<<count;
	return 0;
}
