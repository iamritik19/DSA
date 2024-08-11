#include<iostream>
using std::cout;
using std::endl;
class Node{
public:
	int data;
	Node* next;
	Node(int data){
		this->data=data;
		this->next=NULL;
	}
};
class Stack{
public:
	Node* head;
	int size;
	Stack(){
		head=NULL;
		size=0;
	}
	void push(int data){
		if(head==NULL){
			head=new Node(data);
		}
		else{
			Node* temp=new Node(data);
			temp->next=head;
			head=temp;
		}
		size++;
	}
	int pop(){
		int ans=-1;
		if(head==NULL){
			cout<<"cannot pop stack is empty ";
		}
		else{
           Node* temp=head;
           ans=temp->data;
           head=head->next;
           delete temp;
           size--;
  		}
  	return ans;
	}
	int top(){
		int ans=-1;
		if(head==NULL){
			cout<<"stack is empty ";
		}
		else{
			ans=head->data;
		}
       return ans;
	}
	bool isempty(){
		if(head==NULL){
			return true;
		}
		return false;	}
};
int main(){
	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	cout<<s.top()<<" "<<s.size<<endl;
	cout<<s.pop()<<endl;
	cout<<s.top()<<" "<<s.size<<endl;
	cout<<s.pop()<<endl;
	cout<<s.top()<<" "<<s.size<<endl;
	cout<<s.pop()<<endl;
	cout<<s.top()<<" "<<s.size<<endl;
	cout<<s.pop()<<endl;
	cout<<s.top()<<" "<<s.size<<endl;
	cout<<s.pop()<<endl;
	cout<<s.top()<<" "<<s.size<<endl;
	cout<<s.pop()<<endl;
	return 0;
}