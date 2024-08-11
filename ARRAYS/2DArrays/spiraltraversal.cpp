#include<iostream>
    int main(){
int n,m;
std::cin>>n>>m;
int a[n][m];
for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		std::cin>>a[i][j];
	}
}
int top=0,left=0,bottom=n-1,right=m-1;
while(top<=bottom && left<=right){
   for(int i=left;i<=right;i++){
   	std::cout<<a[top][i]<<" ";
   }
   top++;
     for(int i=top;i<=bottom;i++){
   	std::cout<<a[i][right]<<" ";
   }
   right--;
   if(top<=bottom){ //may be our top goes down to the bottom
     for(int i=right;i>=left;i--){
   	std::cout<<a[bottom][i]<<" ";
   }
   bottom--;
}
if(left<=right){ //may be our right goes up to the left
     for(int i=bottom;i>=top;i--){
   	std::cout<<a[i][left]<<" ";
   }
   left++;
}
}

				    return 0;
}

