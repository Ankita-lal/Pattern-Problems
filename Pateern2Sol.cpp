#include<iostream>
using namespace std;
void printTriangle(int n) {
        for(int i=1;i<=n;i++){
            for(int j=0;j<i;j++){
                cout<<"* ";
                
            }
            cout<<endl;
            
        } 
}
int main(){
    int n;
    cin>>n;
    printTriangle(n);
    return 0;
}