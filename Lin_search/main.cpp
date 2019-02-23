#include <iostream>

using namespace std;

void lin_search(int arr[],int n,int t){
    int i=0;
    int counts =0;

    for(i=0;i<t;i++){
        if(arr[i]==n){
            cout<< "found the element in this array, \t "<<n<< endl;
            counts+=1;
            break;
        }

    }
    if(counts==0){
        cout<< "Element not in the array"<<endl;
    }
}


int main()
{
    int arr[]={2, 1, 9, 8, 4,6};
    int t = sizeof(arr)/sizeof(arr[0]);
    cout<< "Type the element to be searched!"<<endl;
    int i;
    cin>>i;
    lin_search(arr,i,t);

    return 0;
}
