#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> & matrix){
  int n=matrix.size() , m= matrix[0].size();

  for(int i=0; i<n; i++){
    for(int j=i; j<m; j++){
      swap(matrix[i][j], matrix[j][i]);
    }
  }
  for(int j = m-1; j>=0; j--){
  reverse(matrix[j].begin(), matrix[j].end());
  }

}

int main(){

  vector < vector < int >> arr ={{1,2,3},{0,7,8},{3,5,6}};
  rotate(arr);
  for(int i=0; i<arr.size(); i++){
    for(int j=0; j<arr[0].size(); j++){
         cout<< arr[i][j] << "  " ;
    }
    cout << endl;
  }


  return 0;
}