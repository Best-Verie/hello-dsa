#include <iostream>

using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

class BST{
    Node *root;

    Node* insert(int data,Node* node){
        if(node==nullptr){
           node = new Node;
           node->data = data;
           node->left = node->right = nullptr;
        }else if(data < node->data)
            node->left = insert(data,node->left);
        else if(data > node->data)
            node->right = insert(data,node->right);
        return node;
    }

    Node* findMin(Node* node){
        if(node == nullptr)
            return  nullptr;
        else if(node->left == nullptr)
            return node;
        else
            return findMin(node->left);
    }

    Node* findMax(Node* node){
        if(node == nullptr)
            return nullptr;
        else if(node->right == nullptr)
            return node;
        else 
            return findMax(node->right);
    }

    void inoder(Node* node){
        if(node == nullptr)
            return;
        inoder(node->left);
        cout<< node->data << " ";
        inoder(node->right);
    }

    Node* find(Node* node,int data){
        if(node == nullptr)
            return nullptr;
        else if(data < node->data)
            return find(node->left,data);
        else if(data > node->data)
            return find(node->right, data);
        return 
            node;
    }


    Node* remove(int data,Node* node){
    Node* temp;

    if(node == nullptr)
        return nullptr;
    else if(data < node->data)
        node->left = remove(data,node->left);
    else if(data > node->data)
        node->right = remove(data,node->right);
    else if(node->left && node->right){
        temp = findMin(node->right);
        node->data = temp->data;
        temp->right = remove(node->data,node->right);
    }else {
        temp = node;

        if(node->left == nullptr)
            node = node->right;
        else if(node->right == nullptr)
            node = node->left;
        delete temp;
    }
    return node;
    }

    Node* Emptize(Node* node){
        if(node == nullptr)
            return nullptr;
        {
            Emptize(node->left);
            Emptize(node->right);
            delete node;
        }
        return nullptr;
    }

    public:
      BST(){
          root = nullptr;
      }

      ~BST(){
          root = Emptize(root);
      }


     void insert(int data){
         root = insert(data,root);
     }

     void print(){
        inoder(root);
        cout<<endl;
     }

     void search(int data){
         cout<<"Found "<<find(root,data)->data<<endl;
     }

     void remove(int data){
         root = remove(data,root);
     }

    };


int main(){
    BST bst;

    bst.insert(20);
    bst.insert(25);
    bst.insert(50);
    bst.insert(30);
    bst.print();
    bst.remove(30);
    bst.print();
    bst.search(30);
    return 0;
}


