//
// Created by verie on 5/19/2022.
//

#include <iostream>
using  namespace std;


void swap(int *fNumber, int *sNumber){
    int temp = *fNumber;
    *fNumber = *sNumber;
    *sNumber = temp;

}

void sort(int arr[], int n){
    // bubble sort

    for (int i = 0; i <n-1; ++i) {
        for(int j=0; j<=n-i-1; j++){
            swap(&arr[j], &arr[j+1]);
        }
    }
}

void binarySearch(int arr[], int left, int right, int key){
    int mid;
    if(left<=right){
        mid = (left+right)/2;
    }
    if(arr[mid] == key){
        cout<<"found key! "<<endl;
    }


    if(arr[mid]>key){
        return(binarySearch(arr,left,mid-1, key));
    }
    else if(arr[mid]<key){
        return(binarySearch(arr,mid+1, right,key));
    }

}


int main(){
int array[5] ={15,21,34,67,90};
//void *sortedArray = sort(array, 5);

    binarySearch(array,0,4,304);
}