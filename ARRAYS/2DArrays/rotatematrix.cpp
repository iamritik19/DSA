#include<iostream>
#include<vector>
//Approach 1 takes 0(n*n) time as well as 0(n*n) space
void brute(std::vector<std::vector<int> >&a,std::vector<std::vector<int> >&b,int n){
	for(int i=0;i<n;i++){     
		for(int j=0;j<n;j++){
			b[j][n-i-1]=a[i][j];
		}
	}
}
//Approach 2 1st transpose then swap upto middle
void optimal(std::vector<std::vector<int> >&a,int n){
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(i<j){
				std::swap(a[i][j],a[j][i]);
			}
		}
	}
	for(int i=0;i<n/2;i++){
		for(int j=0;j<n;j++){
				std::swap(a[j][i],a[j][n-i-1]);
		}
	}
}
    int main(){
int n;
std::cin>>n;
std::vector<std::vector<int> > a(n,std::vector<int> (n));
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		std::cin>>a[i][j];
	}
}
// std::vector<std::vector<int> > b(n,std::vector<int> (n));
// brute(a,b,n);
optimal(a,n);
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		std::cout<<a[i][j]<<" ";
	}
	std::cout<<"\n";
}

				    return 0;
}

