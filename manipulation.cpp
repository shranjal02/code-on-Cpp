#include<iostream>
using namespace std;

int main(){

    int n1, n2, n3;
    cin>> n1 >> n2 >> n3;

    int m1[n1][n2];
    int m2[n2][n3];

     for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            cin >> m1[n1][n2];
        }
     }

     for(int i=0; i<n2; i++){
        for(int j=0; j<n3; j++){
            cin >> m2[n2][n3];
        }
     }
     int arr[n1][n3];
       for(int i=0; i<n1; i++){
        for(int j=0; j<n3; j++){
            arr[i][j] = 0;
        }
       }

     for(int i=0; i<n1; i++){
        for(int j=0; j<n3; j++){
            for(int k=0; k<n2; k++){
                arr[i][j] += m1[n1][n2]*m2[n2][n3];
            }
        }         

     }

     for(int i=0; i<n1; i++){
        for(int j=0; j<n3; j++){
            cout << arr[i][j];
        }
     }

    return 0;
}