#include <iostream>

using namespace std;
void swap_ele(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;

}
void print_array(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<< "\t";
    }
}

void insert_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        if(i==0){
            continue;
        }
        for(int j=i;j>0;j--){
                if(arr[j]<arr[j-1]){
            swap_ele(&arr[j],&arr[j-1]);}


        }
        print_array(arr,n);
        cout <<endl;
    }
}



int main()
{
    int arr[]={2, 1, 9, 8, 4,6};
    int n = sizeof(arr)/sizeof(*arr);
    insert_sort(arr,n);
    print_array(arr,n);
    cout <<endl;
    cout<<"It's Working"<< endl;
    return 0;
}
