#include <iostream>
#include <math.h>
using namespace std;

void swap_ele(int *a, int *b){

    int temp = *a;
    *a = *b;
    *b = temp;

}

void print_array(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<< arr[i] << "\t";
    }

}

int sel_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        //int current= arr[i];
        int *min_ele= &arr[i];
        int c = *min_ele;
        for(int j=i+1;j<n;j++){
            if(arr[j]<*min_ele){
                min_ele = &arr[j];

                //cout<< *min_ele <<endl;

            }

        }

        swap_ele(&arr[i],min_ele);

        print_array(arr,n);
        cout <<endl;


    }

}

int main(){
	//code
    int arr[]={2, 1, 9, 8, 4,6};
    int n = sizeof(arr)/sizeof(*arr);
    sel_sort(arr,n);
    //print_array(arr,n);
    cout<<"It's Working"<< endl;
	return 0;
}
