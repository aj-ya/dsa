#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node * left;
    Node * right;
    Node(int val ){
        data=val;
        left=nullptr;
        right=nullptr;
    }
};
Node* insertBST(Node * root,int data){
    if(root!=nullptr){
        if(root->data>data){
            if(root->left==nullptr)
                root->left=insertBST(root->left,data);
            else
                insertBST(root->left,data);
        }
        else{
            if(root->right==nullptr)
                root->right=insertBST(root->right,data);
            else
                insertBST(root->right,data);
        }
    }
    else{
        return new Node(data); 
    }
    return root;
}
void preOrder(Node * root){
    if(root!=nullptr){
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}
void inOrder(Node * root){
    if(root!=nullptr){
        preOrder(root->left);
        cout<<root->data<<" ";
        preOrder(root->right);
    }
}
void postOrder(Node * root){
    if(root!=nullptr){
        preOrder(root->left);
        preOrder(root->right);
        cout<<root->data<<" ";
    }
}
int main(){
    Node * root = new Node(10);
    root->left=new Node(5);
    root->right=new Node(15);
    insertBST(root,20);
    insertBST(root,3);
    preOrder(root);
    cout<<"\n";
    inOrder(root);
    cout<<"\n";
    postOrder(root);
    cout<<"\n";
    return 0;
}