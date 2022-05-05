#include<iostream>

using namespace std;

int main(){
    int numbers[5] = {5,6,7,7};

    cout<<"Numbers are: ";

    // This uses a range based loop 
    for(const int &n: numbers){
        cout<<n<<" ";
    }
}
