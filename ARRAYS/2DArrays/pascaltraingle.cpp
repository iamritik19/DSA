#include<iostream>
#include<vector>
long long fun(int a,int b){
	if(b==0) return 1;
    long long ans=1;
    int temp=1;  //we have to start diving by 1,2,3,... otherwise 4/3=1
    while(temp<=b){ //4c3=(4*3*2)/(1*2*3);
        ans*=(a--);
        ans/=(temp++);
    }
    return ans;
}
    int main(){
int n;
std::cin>>n;
    std::vector<std::vector<int> > ans(n);
       for(int i=0;i<n;i++){
           for(int j=0;j<=i;j++){
             ans[i].push_back(fun(i,j));
           }
       } 
       for(int i=0;i<ans.size();i++){
       	for(int j=0;j<ans[i].size();j++){
       		std::cout<<ans[i][j]<<" ";
       	}
       	std::cout<<"\n";
       }

				    return 0;
}

