#include<iostream>
    int main(){
int r1,c1,r2,c2;
std::cin>>r1>>c1>>r2>>c2;
int a[r1][c1],b[r2][c2];
for(int i=0;i<r1;i++){
	for(int j=0;j<c1;j++){
		std::cin>>a[i][j];
	}
}
for(int i=0;i<r2;i++){
	for(int j=0;j<c2;j++){
		std::cin>>b[i][j];
	}
}
if(c1!=r2){
std::cout<<"Cannot Multiply";
return 0;
}
int ans[r1][c2];
int sum;
for(int i=0;i<r1;i++){ //outer loop 1st matrix ke row ke upar
	for(int j=0;j<c2;j++){ //inner loop 2nd matrix ke column ke upar
		sum=0;
		for(int k=0;k<c1;k++){ //variable ke liye 
         sum+=(a[i][k]*b[k][j]);
		}
		ans[i][j]=sum;
	}
}
for(int i=0;i<r1;i++){ 
	for(int j=0;j<c2;j++){ 
		std::cout<<ans[i][j]<<" ";
	}
	std::cout<<"\n";
}

				    return 0;
}

