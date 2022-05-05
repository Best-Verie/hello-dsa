#include <iostream>
#define SIZE 10

using namespace std;

class Stack{
private:
    int stack[SIZE]{};
    int top;
public:
    Stack(){
        //pointer called tp is used to keep track of the top element in the stack
        top = -1;
    }
    bool isEmpty(){
        if(top == -1)return true;
        return false;
    }

    bool isFull(){
        if(top == (SIZE -1)) return true;
        return false;
    }

    void push(int data){
        if(isFull()) {
            cout<<"stack underflow!"<<endl;
        }
        ++top;
        stack[top] = data;
    }

    void peek(){
        if(isEmpty())
            cout<<"stack underflow!"<<endl;
        else{
            cout<<"the peeked element is "<<stack[top]<<endl;
            top--;
        }
    }

    void display(){
        cout<<"stack values: ";
        for (int i = top; i >= 0 ; i--) {
            cout<<stack[i]<<" ";
        }
        cout<<endl;
    }

};
int main() {
    std::cout << "Hello, World! this is stack implementation" << std::endl;
    Stack stack;
    stack.push(4);
    stack.push(14);
    stack.push(56);
    stack.push(7);
    stack.push(49);

    stack.display();

    stack.peek();
    stack.display();
    return 0;
}
