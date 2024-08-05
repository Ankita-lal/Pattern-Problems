/***
Pattern - 7: Star Pyramid

Problem Statement: Given an integer N, print the following pattern : 


Examples:

Input Format: N = 3
Result: 
  *  
 *** 
*****   
Input Format: N = 6
Result:
     *     
    ***    
   *****   
  *******  
 ********* 
***********
***/

void printTriangle(int n) {
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1-i;j++){
                cout<<" ";
            }
            for(int k=0;k<2*i+1;k++){
                cout<<"*";
            }
            cout<<endl;
            
        }
        
}