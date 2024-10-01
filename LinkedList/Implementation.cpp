#include<iostream>
class node{
public:
	int data;
	node* next;
	node(int data){
		this->data=data;
		this->next=NULL;
	}
};
class linkedList{
public:
	node* head;
	node* tail;
	int size;
		linkedList(){
		head=NULL;
        tail=NULL;
        size=0;
	}
	void insertAtHead(int data){
      size++;
      node* temp=new node(data);
      if(head==NULL){
      	head=temp;
      	tail=head;
      }
      else{
      	temp->next=head;
      	head=temp;
      }
	}
	void insertAtTail(int data){
      size++;
      node* temp=new node(data);
      if(head==NULL){
      	head=temp;
      	tail=head;
      }
      else{
      	tail->next=temp;
      	tail=tail->next;
      }
	}
	void display(){
		node* temp=head;
		while(temp!=NULL){
			std::cout<<temp->data<<std::endl;
			temp=temp->next;
		}
	}

};

int main(){
	linkedList* ll=new linkedList();
	ll->insertAtHead(7);
	ll->insertAtHead(6);
	ll->insertAtHead(5);
	ll->insertAtTail(8);
	ll->insertAtTail(9);
	ll->insertAtTail(10);
	ll->display();

	

	return 0;
}