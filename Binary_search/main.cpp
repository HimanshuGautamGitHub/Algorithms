#include <iostream>
#include<math.h>

using namespace std;

int bin_search(int arr[],int n, int low,int high){


    if(n==arr[low]){
        cout<< "Element is at \t" << low+1 << "\t position"<<endl;
        return 0;

    }
    if(n==arr[high]){
        cout<< "Element is at \t" << high+1 << "\t position"<<endl;
        return 0;
    }
    if (high-low<=1){cout<<"element not found"<<endl;return 0;}
    int mid = floor((low+high)/2);

    if (n==arr[mid]){ cout<<"element found at \t"<<mid+1 << "\t position" <<endl;
    return 0;}

    if(n<arr[mid]){
        high = mid;
        bin_search(arr,n,low,high);

    }
    if(n>arr[mid]){
        low = mid;
        bin_search(arr,n,low,high);
    }

}


int main()
{
    int arr[]={1,2, 4,6,8,9};
    int t = sizeof(arr)/sizeof(arr[0])-1;

    cout<< "Type the element to be searched!"<<endl;
    int i;
    cin>>i;

    bin_search(arr,i,0,t);
    return 0;
}
