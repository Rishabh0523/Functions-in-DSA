#include<iostream>
using namespace std;

void printCouting( int n) {

    for(int i=1; i<=n; i++) {
        cout<<i<<" ";

    }

    cout<<endl;
}


int main(){

int n;
cout<<"Enter the value of n:"<<endl;
cin>>n;

printCouting(n);
    
}