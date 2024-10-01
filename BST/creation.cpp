#include <iostream>
#include <vector>
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
node* insert(node* root,int val){
    if(root==NULL){
        root=new node(val);
    }
    else if(root->data>val){
        root->left=insert(root->left,val);
    }
    else{
        root->right=insert(root->right,val);
    }
    return root;
}
void inorder(node* root){
    if(root==NULL) return;
    inorder(root->left);
    std::cout<<(root->data)<<" ";
    inorder(root->right);
}
bool search(node* root,int val){
    if(root==NULL) return false;
    if(root->data==val) return true;
    else if(root->data>val){
        return search(root->left,val);
    }
    else{
        return search(root->right,val);
    }
    return false;
}
node* helper(node* root){
    if(root->left==NULL){
        return root->right;
    }
    if(root->right==NULL){
        return root->left;
    }
    node* temp=root->left;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    temp->right=root->right;
    root=root->left;
    return root;
}
node* deleteNode(node* root,int key){
    if(root==NULL){
        return root;
    }
    else if(root->data==key){
        root=helper(root);
    }
    node* dummy=root;
    while(dummy!=NULL){
        if(dummy->data>key){
        if(dummy->left!=NULL && dummy->left->data==key){
            dummy->left=helper(dummy->left);
        }
        else{
            dummy=dummy->left;
        }
        }
        else{
           if(dummy->right!=NULL && dummy->right->data==key){
            dummy->right=helper(dummy->right);
        }
        else{
            dummy=dummy->right;
        }  
        }
    }
    return root;
}
int main(){
    node* root=NULL;
    int arr[]={5,4,3,2,1};
    for(int i=0;i<5;i++){
        root=insert(root,arr[i]);
    }
    inorder(root);
    // if(search(root,17)){
    //     std::cout<<"Key is present"<<std::endl;
    // }
    // else{
    //     std::cout<<"Key is not present"<<std::endl;
    // }
    root=deleteNode(root,3);
    std::cout<<std::endl;
    inorder(root);
    return 0;
}


