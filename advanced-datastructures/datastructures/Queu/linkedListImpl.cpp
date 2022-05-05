#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef struct node {
    int data;
    node* next;
}Node;

Node* newNode(int d, int p)
{
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = d;
    temp->next = NULL;

    return temp;
}

//return the value at head
int peek(Node **head){
    return (*head)->data;
}

//removes the element

void pop(Node **head){
    Node *temp = *head;
    (*head) = (*head)->next;
    free(temp);
}

int isEmpty(Node **head){
    return (*head)==NULL;
}

//void display(Node **head){
//    while (**head)
//}

int main(){

}