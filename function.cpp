#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int num){
   for(int i=2; i<=sqrt(num); i++){

    if(num%i==0){
        return false;
    }

   }
   return true;

}

int main(){
     int n,m;
     cin>>n>>m;

     for(int i=n; i<=m; i++)
     {
        if(isPrime(i)){
             cout<<i<<endl;
        }
     }


    return 0;
}