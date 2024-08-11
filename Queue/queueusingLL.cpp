#include<iostream>
using std::cout;
class Node{
public:
	int data;
	Node* next;
	Node(int data){
		this->data=data;
		this->next=NULL;
	}
};
class Queue{
public:
	Node* front;
	Node* rear;
	int size;
	Queue(){
		this->front=NULL;
		this->rear=NULL;
		this->size=0;
	}
	//1.push
	void push(int data){
		if(front==NULL && rear==NULL){
			front=rear=new Node(data);
		}
		else{
		rear->next=new Node(data);
		rear=rear->next;
	}
	size++;
	}
	//2.pop
	int pop(){
		int ans=-1;
		if(front==NULL && rear==NULL){
			cout<<"cannot pop queue is empty ";
			return ans;
		}
        else if(front==rear){
           ans=front->data;
           Node* temp=front;
           front=rear=NULL;
           delete temp;
           size--;
           return ans;
        }
        else{
          ans=front->data;
          Node* temp=front;
          front=front->next;
          delete temp;
          size--;
          return ans;
        }
	}
	//3.Front Element
	int frontElement(){
		int ans=-1;
		if(front==NULL && rear==NULL){
			cout<<"queue is empty ";
			return ans;
		}
      ans=front->data;
      return ans;
	}
	//4.Rear Element
	int rearElement(){
		int ans=-1;
		if(front==NULL && rear==NULL){
			cout<<"queue is empty ";
			return ans;
		}
      ans=rear->data;
      return ans;
	}
	//5.isEmpty
	bool isEmpty(){
		if(front==NULL && rear==NULL){
			return true;
		}
		return false;
	}

};
int main(){
	Queue q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	cout<<q.frontElement()<<" "<<q.rearElement()<<"\n";
	cout<<q.pop()<<"\n";
	cout<<q.frontElement()<<" "<<q.rearElement()<<"\n";
	cout<<q.pop()<<"\n";
	cout<<q.frontElement()<<" "<<q.rearElement()<<"\n";
	cout<<q.pop()<<"\n";
	cout<<q.frontElement()<<" "<<q.rearElement()<<"\n";
	cout<<q.pop()<<"\n";
	cout<<q.frontElement()<<" "<<q.rearElement()<<"\n";
	cout<<q.pop()<<"\n";
	cout<<q.frontElement()<<" "<<q.rearElement()<<"\n";
	cout<<q.size;
	return 0;
}