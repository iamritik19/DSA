#include<iostream>
double multiply(double mid,int n){
	double ans=1.0;
     for(int i=0;i<n;i++){
     	ans*=mid;
     }
     return ans;
}
double fun(int n,double num){
	if(num==0) return 0;
	double low=0;
	double high=num;
	while((high-low)>0.0000001){
     double mid=(low+high)/2;
     if(multiply(mid,n)<num){
     	low=mid;
     }
     else{
     	high=mid;
     }
	}
	return low;
}
int main(){
	int n;
double num;
std::cin>>n>>num;
double ans=fun(n,num);
std::cout<<ans;
	return 0;
}
//nth root of a number(num)
