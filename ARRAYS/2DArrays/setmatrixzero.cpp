#include<iostream>
#include<vector>
//Approach-1 brute force solution takes O(n*n*n) time with O(1) space
void bruteforcesolution(std::vector<std::vector<int> >&a,int n,int m){
	for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		if(a[i][j]==0){
			for(int k=0;k<m;k++){ //make row -1 where non-zero encounters
              if(a[i][k]!=0){
              	a[i][k]=-1;
              }
			}
			for(int k=0;k<m;k++){ //make column -1 where non-zero encounters
              if(a[k][j]!=0){
              	a[k][j]=-1;
              }
			}
		}
	}
}
for(int i=0;i<n;i++){ //those elements which are -1 becomes 0
	for(int j=0;j<m;j++){
		if(a[i][j]==-1){
			a[i][j]=0;
		}
	}
}
}
//approach 2-some better optimisation takes time-O(n*n) and space O(n)
void better(std::vector<std::vector<int> >&a,int n,int m){
	std::vector<bool> row(n,false);
	std::vector<bool> col(m,false);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]==0){
				row[i]=true;
				col[j]=true;
			}
		}
	}
	for(int i=0;i<row.size();i++){
		if(row[i]){
			for(int j=0;j<m;j++){
				a[i][j]=0;
			}
		}
	}
		for(int i=0;i<col.size();i++){
		if(col[i]){
			for(int j=0;j<n;j++){
				a[j][i]=0;
			}
		}
	}
}
//Approach 3 takes O(n*n) time and o(1) space we are using 1st row and 1st column for keeping track of 0
void optimal(std::vector<std::vector<int> >&a,int n,int m){
	int col0=1; //tracks 1st column
for(int i=0;i<n;i++){
 for(int j=0;j<m;j++){
 	if(a[i][j]==0){
 		a[i][0]=0; //marking the ith row
        if(j==0){  // we cannot mark a[0][0] because it will make 1st row 0
        	col0=0;
        }
        else{
 		a[0][j]=0;
 	}
 	}
 }
}
for(int i=1;i<n;i++){
	for(int j=1;j<m;j++){
		if(a[i][j]!=0){
			if(a[0][j]==0 || a[i][0]==0){
				a[i][j]=0;
			}
		}
	}
}
if(a[0][0]==0){ //it will make 1st row 0
	for(int j=0;j<m;j++){
		a[0][j]=0;
	}
}
if(col0==0){ //it will make 1st col 0
	for(int i=0;i<n;i++){
		a[i][0]=0;
	}
}
}
    int main(){
int n,m;
std::cin>>n>>m;
std::vector<std::vector<int> > a(n,std::vector<int> (m));
for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		std::cin>>a[i][j];
	}
}
// bruteforcesolution(a,n,m);
// better(a,n,m);
optimal(a,n,m);
for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		std::cout<<a[i][j]<<" ";
	}
	std::cout<<"\n";


}

				    return 0;
}

