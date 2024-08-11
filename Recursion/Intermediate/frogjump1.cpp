#include <iostream> 
#include<vector>
int ans(std::vector<int> &heights,int n,int i){
    if(i==n-1) return 0;
    if(i==n-2) return abs(heights[i]-heights[i+1]);
    return std::min(ans(heights,n,i+1)+abs(heights[i+1]-heights[i]),ans(heights,n,i+2)+abs(heights[i+2]-heights[i]));
}
int frogJump(std::vector<int> &heights,int n)
{
    return ans(heights,n,0);
}
int main(){
	int n;
	std::cin>>n;
	std::vector<int> heights(n);
	for(int i=0;i<n;i++){
		std::cin>>heights[i];
	}
	std::cout<<frogJump(heights,n);
	return 0;
}
