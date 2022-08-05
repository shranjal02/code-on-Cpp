#include<bits/stdc++.h>
using namespace std;
 
int sortArr(vector<int>& arr) {
    sort(arr.begin(),arr.end());
    return arr[1],arr[arr.size()-2];
}
 
int main() {
    vector<int> arr1 = {2,5,1,3,0};
   
    cout<<sortArr(arr1)<<endl;
   
    return 0;
}
