#include<iostream>
using namespace std;


// int getSum(int n) {

//     int sum = 0;
//     for(int i=1; i<=n ; i++) {
//         sum = sum +i;
//     }
//     return sum; 
// }

int evenSum(int n) {

    int sum = 0;

    for(int i=2; i<=n ; i = i+2){

        sum= sum + i ;

    }
    return sum;
}

int main()
{
//      int n ;
//      cout<<"Enter the value of n" <<endl;
//      cin>>n;

//      int ans = getSum(n);

//      cout<<"Sum upto" << n <<" is" <<ans <<endl;
// 

     int n ;
     cout<<"Enter the value of n" <<endl;
     cin>>n;

int ans = evenSum(n);

cout<<"Even sum is" << ans <<endl;

}