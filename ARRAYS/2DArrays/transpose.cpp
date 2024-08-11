#include<iostream>

    int main(){
int n,m;
std::cin>>n>>m;
int arr[n][m];
for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		std::cin>>arr[i][j];
	}
}
for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		if(i<j){
			std::swap(arr[i][j],arr[j][i]);
		}
	}
}
for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		std::cout<<arr[i][j]<<" ";
	}
	std::cout<<"\n";
}

				    return 0;
}

