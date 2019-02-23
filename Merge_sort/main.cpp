#include <iostream>
#include<math.h>

using namespace std;

void merge_sort(int arr[],int low, int high, int size0farray){

    int mid = floor((low+high)/2);

    merge_sort(arr,low,mid,size0farray);
    merge_sort(arr, mid,high,size0farray);
    merge_();



}

void merge_(int arr1[],int arr2[]){
    int arr3={};
    int i=0;
    int j=0;
    while(){

    }



}

void print_array(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<< "\t";
    }
}

int main()
{
    int arr[]={2, 1, 9, 8, 4,6};
    int n = sizeof(arr)/sizeof(*arr);
    int low =0;
    int high = n
    merge_sort(arr,n);
    print_array(arr,low,high,n);
    cout <<endl;
    cout<<"It's Working"<< endl;
    return 0;
}
