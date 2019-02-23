#include <iostream>
#include <time.h>
#include <math.h>

using namespace std;

// Using Recursion
int power_(int base, int power){
    if(power==0){
        return 1;
    }
    return base*power_(base,power-1);

}

// using Divide and Conquer
int power__(int base, int power){
    if(power==1){return base;}
    int ans = power__(base,floor(power/2))*power__(base,ceil(power/2));

}

int main()
{
    int base,power;
    cout << "Print out the base of the exponential" << endl;
    cin >> base;
    cout << "Print out the exponential power of the exponential" << endl;
    cin >> power;

    // Using Recursion

    //int ans = power_(base,power);

    // Using Divide and Conquer
    int ans = power__(base,power);
    cout << base <<" to the power " << power << " is " << ans << endl;
    return 0;
}
