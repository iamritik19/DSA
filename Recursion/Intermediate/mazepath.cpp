#include<iostream>
void mazePath(int i,int j,int n,int m,std::string ans){
	if(i==n-1 && j==m-1){
    std::cout<<ans<<std::endl;
    return;
	}
	if(i>=n || j>=m){
	return;
	}
	mazePath(i,j+1,n,m,ans+'R');
	mazePath(i+1,j,n,m,ans+'D');
}
//We can also do it using this method
//void mazePath(int n,int m,int i,int j,std::string output){
//	if(i==n-1 && j==m-1){
//		std::cout<<output<<std::endl;
//		return;
//	}
//	if(i<n-1){
//		mazePath(n,m,i+1,j,output+'D');
//	}
//	if(j<m-1){
//		mazePath(n,m,i,j+1,output+'R');
//	}
//}
int main(){
int n,m;
std::cin>>n>>m;
std::string output="";
mazePath(0,0,n,m,output);
						return 0;
}
