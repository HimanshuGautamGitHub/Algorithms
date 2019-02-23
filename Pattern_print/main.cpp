#include <iostream>

using namespace std;

// Function to print equilateral triangle pattern
void print_tri(int n){

    for (int i=0;i<n+1;i++){

        for (int j=n;j>i;j--){

            cout << " ";

        }

        for (int j=0;j<i;j++){
            cout << j+1 << " ";

        }
        cout<< endl;

    }


}


int main()
{   //Taking the number from the user
    cout<< "Type in the number of elements you want to print" <<endl;
    int n;
    cin >> n;
    // Calling the function
    print_tri(n);
    return 0;
}
