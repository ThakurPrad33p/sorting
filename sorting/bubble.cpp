#include<iostream>
using namespace std;

int main(){
    int arr[] = {4,1,3,9,7};
    int n= 5;
    for(int i=0;i<n;i++){
        int index = i;
        for(int j = 0; j<n-i-1;j++){
            if(arr[j]>arr[index])
            index = j;
        }
        swap(arr[i],arr[index]);
    }

    for(int i =0; i<5;i++){
        cout<<arr[i]<<" ";
    }

}