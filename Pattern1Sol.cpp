/***Pattern-1: Rectangular Star Pattern


Problem Statement: Given an integer N, print the following pattern.


Examples:

Example 1:
Input: N = 3
Output: 
* * *
* * *
* * *


Example 2:
Input: N = 6
Output:
* * * * * *
* * * * * *
* * * * * *
* * * * * *
* * * * * *
* * * * * *
***/
#include<iostream>
using namespace std;

void printSquare(int n) {
        for(int j=0;j<n;j++){
            for(int i=0;i<n;i++){
                cout<<"* ";
            }
            cout<<endl;
        }

}
int main(){
    int n;
    cin>>n;
    printSquare(n);
    return 0;
}