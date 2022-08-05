#include<bits/stdc++.h>
using namespace std;

void setMatrix(vector<vector<int>> & matrix){

int rows = matrix.size(), cols = matrix[0].size();
vector<int> dummy1(rows,-1), dummy2(cols, -1);

for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
        if(matrix[i][j] == 0){
            dummy1[i] = 0;
            dummy2[j] = 0;
        }
    }
}

for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
        if(dummy1[i] == 0  ||  dummy2[j] == 0){
            matrix[i][j] = 0;

        }
    }
}
}

int main(){
    vector<vector<int>> arr = {{1,2,2},{2,0,4},{1,2,5}};
    setMatrix(arr);
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[0].size(); j++){
            cout<< arr[i][j] << "  ";
        }
        cout << endl;
    }
    return 0;
}