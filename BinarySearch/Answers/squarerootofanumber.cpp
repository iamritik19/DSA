#include<iostream>
double fun(double n){
	if(n==0) return 0;
	double low=0;
	double high=n;
	while((high-low)>0.00001){
     double mid=(low+high)/2;
     if(mid*mid<n){
     	low=mid;
     }
     else{
     	high=mid;
     }
	}
	return low;
}
int main(){
double n;
std::cin>>n;
double ans=fun(n);
std::cout<<ans;
	return 0;
}
