#include<iostream>
#include<vector>
    std::vector<int> FindExitPoint(std::vector<std::vector<int> >&matrix){
		// Code here
		int n=matrix.size();
		int m=matrix[0].size();
		int drn=0;
		int i=0,j=0;
		std::vector<int> ans;
		if(matrix[0][0]==1){
		    drn=1;
		}
		while(true){
		if(drn==0){
		    for(j=j+1;j<m;j++){
		  	 if(matrix[i][j]==1){
		            drn++;
		            drn=drn%4;
		            break;
		        }
		    }
		    if(drn==0){
		        ans.push_back(i);
		        ans.push_back(m-1);
		        return ans;
		    }
		}
			if(drn==1){
		    for(i=i+1;i<n;i++){
		        if(matrix[i][j]==1){
		            drn++;
		            drn=drn%4;
		            break;
		        }
		    }
		    if(drn==1){
		        ans.push_back(n-1);
		        ans.push_back(j);
		        return ans;
		    }
		}
			if(drn==2){
		    for(j=j-1;j>=0;j--){
		        if(matrix[i][j]==1){
		            drn++;
		            drn=drn%4;
		            break;
		        }
		    }
		    if(drn==2){
		        ans.push_back(i);
		        ans.push_back(0);
		        return ans;
		    }
		}
			if(drn==3){
		    for(i=i-1;i>=0;i--){
		        if(matrix[i][j]==1){
		            drn++;
		            drn=drn%4;
		            break;
		        }
		    }
		    if(drn==3){
		        ans.push_back(0);
		        ans.push_back(j);
		        return ans;
		    }
		}
		}
		return ans;
    }    int main(){
int n,m;
std::cin>>n>>m;
std::vector<std::vector<int> > matrix(n,std::vector<int> (m));
for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		std::cin>>matrix[i][j];
	}
}
std::vector<int> ans=FindExitPoint(matrix);
for(int i=0;i<ans.size();i++){
	std::cout<<ans[i]<<" ";
}

				    return 0;
}
