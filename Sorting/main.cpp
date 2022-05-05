#include <iostream>
using namespace std;
void sort(int array[], int n){
    for(int i=1; i<n;i++){
        int current = array[i];
        int j = i-1;// start from prev element

        while (j>=0 && array[j] > current){
            //then we need to shift this element to the right
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = current;
    }
}

void printArray(int array[], int n ){
    int i;
    for(i=0; i<n;i++){
        cout<<array[i]<<" ";
        cout<<endl;
    }
}
int main() {
    std::cout << "Hello, World! This is insertion sort" << std::endl;
    int numbers[]= {8,2,6,1,5};
    int n = sizeof(numbers)/sizeof(numbers[0]);
    sort(numbers,n);
    printArray(numbers,n);
    return 0;
}
