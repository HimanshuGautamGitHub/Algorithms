#include <iostream>

using namespace std;

int main()
{

    cout<< " Type the matrix 1 dimensions (separate by pressing enter key)." << endl;
    int r1,c1;
    cin >> r1;
    cin >> c1;

    cout<< " Type the matrix 2 dimensions (separate by pressing enter key)." << endl;
    int r2,c2;
    cin >> r2;
    cin >> c2;

    if(c1!=r2){
        cout<<" Dimensions do not match. Matrix multiplication not possible" << endl;
        return 0;
    }
    int e,mat1[r1][c1],mat2[r2][c2];
    cout<< "Type the elements of matrix 1 (row-wise)"<< endl;
    for(int i=0;i<r1;i++){
        for (int j=0;j<c1;j++){
            cin>>e;
            mat1[i][j] = e;
        }
    }
    cout<< "Type the elements of matrix 2 (row-wise)"<< endl;
    for(int i=0;i<r2;i++){
        for (int j=0;j<c2;j++){
            cin>>e;
            mat2[i][j] = e;
        }
    }
    int j=0,i =0;
    int mat3[r1][c2],sum;
    for (int k=0;k<r1;k++){
        for (j=0;j<c2;j++){
            sum=0;
            for (int l=0;l<c1;l++){
                sum += mat1[k][l]*mat2[l][j];
            }
            mat3[k][j] = sum;

        }
    }
    // Print the final matrix
    for (int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout << mat3[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
