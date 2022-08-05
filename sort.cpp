#include<bits/stdc++.h>

using namespace std;

int sortSmall(vector<int>& arr){

   sort(arr.begin(),arr.end());
   return arr[0];

}



int main(){
      vector <int> arr1 = {1, 3, 5,6};
      vector <int> arr2 = {3, 6, 8, 0};
        cout << sortSmall(arr1) <<endl;
        cout<< sortSmall(arr2)<<endl;
   

    return 0;
}