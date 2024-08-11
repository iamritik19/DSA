#include<iostream>
using namespace std;
void insertionSort(std::vector<int> &v){
	int n=v.size();
	for(int i=1;i<n;i++){
		int j=i-1;
		while(v[j]>v[j+1]){
			std::swap(v[j],v[j+1]);
			j--;
		}
	}
}
int main(){
	int n;
	std::cin>>n;
std::vector<int> v;
for(int i=0;i<n;i++){
	int x;
	std::cin>>x;
	v.push_back(x);
}

insertionSort(v);
for(int i=0;i<v.size();i++){
	cout<<v[i]<<" ";
}


	return 0;
}
