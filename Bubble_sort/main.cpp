#include <iostream>

using namespace std;

void swap_ele(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bub_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        for (int j=0;j<n-1-i;j++){
            if (arr[j+1]< arr[j]){
                swap_ele(&arr[j+1],&arr[j]);
            }
        }
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
    bub_sort(arr,n);
    print_array(arr,n);
    cout <<endl;
    cout<<"It's Working"<< endl;
    return 0;
}
