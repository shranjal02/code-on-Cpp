#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){

        cin >>arr[i];
    }
    int currentElement=0;
    int maxSum = INT_MIN;

    for(int i=0; i<n; i++){
        currentElement += arr[i];
        int sum;
        if(currentElement<0){
            currentElement=0;
        }
        maxSum = max(maxSum, currentElement);
                
    }
    cout<<maxSum<<endl;
    

    return 0;
}