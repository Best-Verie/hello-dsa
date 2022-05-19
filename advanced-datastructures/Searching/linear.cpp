//
// Created by verie on 5/19/2022.
//

#include <iostream>
using namespace std;

bool searchKey(int arr[], int key, int n){
    for (int i = 0; i <=n; ++i) {
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}

int main(){
    int array[5]={4,5,8,2,1};
    if(searchKey(array,3,5)==1){
        cout<<"Item Found!"<<endl;
    }
    else{
        cout<<"Item not found!"<<endl;
    }
}