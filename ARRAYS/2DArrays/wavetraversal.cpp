#include<iostream>
#include<vector>
    int main(){
int n,m;
std::cin>>n>>m;
int a[n][m];
for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		std::cin>>a[i][j];
	}
}
for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		if((i&1)){
			std::cout<<a[n-1-j][i]<<" ";
		}
		else{
			std::cout<<a[j][i]<<" ";
		}

}
}

				    return 0;
}

