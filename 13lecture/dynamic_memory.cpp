#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    // new int[10]; array in heap
    // new int*[10]; pointer array in heap
    
    // new int; 
    // new int(50); int in heap
    // int *ptr=new int(50); to store in stack

    // new int* address of pointer in heap
    //int ** ptr=new int*; to store in stack

    int ** arr= new int *[10];
    int size_array[10];
    for (int i=0;i<10;i++){
        int size;
        cin>>size;
        size_array[i]=size;
        arr[i]=new int [size];
    }
    for (int i=0;i<10;i++){
        int size=size_array[i];
        for(int j=0;j<size;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        }
    return 0;
}