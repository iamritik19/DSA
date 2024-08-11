#include<iostream>
using std::cout;
using std::endl;
class stack{
public:
	int *arr;
	int idx;
	int size;
	stack(int size){
     this->arr=new int[size];
     this->size=size;
     idx=-1;
	}
	void push(int data){
		if(idx>=size-1){
			cout<<"stack overflow cannot push\n";
		}
		else{
			idx++;
            arr[idx]=data;
		}
	}
	void pop(){
		if(idx==-1){
			cout<<"stack underflow cannot pop\n";
		}
		else{
			arr[idx]=-1;
			idx--;
		}
	}
	int top(){
		int ans=-1;
		if(idx==-1){
			cout<<"stack underflow cannot get top element\n";
		}
		else{
			ans=arr[idx];
		}
		return ans;
	}
	int getsize(){
		return idx+1;
	}
	bool isEmpty(){
		if(idx==-1){
			return true;
		}
		return false;
	}
	bool isFull(){
		if(idx>=size-1){
			return true;
		}
		return false;
	}

};
int main(){
	stack s(5);
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	cout<<s.getsize();
	cout<<s.isFull()<<endl;
	while(!s.isEmpty()){
		cout<<s.top()<<endl;
		s.pop();
	}
	s.pop();
	cout<<s.top()<<"h"<<s.isEmpty();
	return 0;
}