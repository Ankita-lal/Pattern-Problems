/***Pattern: Symmetric-Void Pattern

Problem Statement: Given an integer N, print the following pattern : 

Examples:

Input Format: N = 3
Result: 
******
**  **
*    *
*    *
**  **
******

Input Format: N = 6
Result:   
************
*****  *****
****    ****
***      ***
**        **
*          *
*          *
**        **
***      ***
****    ****
*****  *****
************
***/

oid symmetry(int n) {
    for(int i=n;i>0;i--){
            for(int j=0;j<i;j++){
                cout<<"* ";
            }
            for(int k=0;k<n-i;k++){
                cout<<" ";
            }
            for(int k=0;k<n-i;k++){
                cout<<" ";
            }
            for(int l=0;l<i;l++){
                cout<<"* ";
            }
            cout<<endl;
        }
      
        for(int i=1;i<=n;i++){
            for(int j=0;j<i;j++){
                cout<<"* ";
            }
            for(int k=0;k<n-i;k++){
                cout<<" ";
            }
            for(int k=0;k<n-i;k++){
                cout<<" ";
            }
            for(int l=0;l<i;l++){
                cout<<"* ";
            }
            cout<<endl;
        }
}