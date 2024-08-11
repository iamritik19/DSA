#include<iostream>
using std::cin;
using std::cout;
using std::endl;
class node{
public:
	int data;
	node* next;
	node(int data){
		this->data=data;
		this->next=NULL;
	}
};
void insertathead(node* &head,int val){
	if(head==NULL){
		head=new node(val);
		return;
	}
	node* temp=new node(val);
	temp->next=head;
	head=temp;
}
void insertattail(node* &head,int val){
	if(head==NULL){
		head=new node(val);
		return;
	}
    node* temp=head;
    while(temp->next!=NULL){
    	temp=temp->next;
    }
    temp->next=new node(val);
}
void deletionathead(node* &head){
	if(head==NULL) return;
	node* temp=head;
	head=head->next;
	delete temp;
}
void deletionattail(node* &head){
	if(head==NULL) return;
	if(head->next==NULL){
		node* temp=head;
		head=NULL;
		delete temp;
		return;
	}
	node* temp=head;
	while(temp->next->next!=NULL){
     temp=temp->next;
	}
	node* nodeToBeDeleted=temp->next;
	temp->next=NULL;
	delete nodeToBeDeleted;
}
void printList(node* head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
}
	int getSize(node* head){
		if(head==NULL) return 0;
		return 1+getSize(head->next);
	}
	bool isPresent(node* head,int val){
		if(head==NULL) return false;
		return (head->data==val) || isPresent(head->next,val);

	}
int main(){
	int arr[5]={5,4,3,2,1};
node* head=NULL;
for(int i=0;i<5;i++){
	insertathead(head,arr[i]);
}
printList(head);
cout<<endl;
cout<<getSize(head)<<endl;
insertattail(head,6);
insertattail(head,7);
insertattail(head,8);
insertattail(head,9);
insertattail(head,10);
printList(head);
cout<<endl;
cout<<getSize(head)<<endl;
cout<<isPresent(head,10)<<" "<<isPresent(head,11)<<endl;
deletionathead(head);
deletionathead(head);
deletionathead(head);
deletionathead(head);
deletionathead(head);
printList(head);
cout<<endl;
cout<<getSize(head)<<endl;
deletionattail(head);
deletionattail(head);
deletionattail(head);
deletionattail(head);
deletionattail(head);
printList(head);
cout<<endl;
cout<<getSize(head)<<endl;





	return 0;
}