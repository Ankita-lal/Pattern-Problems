Pattern - 12: Number Crown Pattern


Problem Statement: Given an integer N, print the following pattern : 

Examples:

Input Format: N = 3
Result: 
1    1
12  21
123321

Input Format: N = 6
Result:   
1          1
12        21
12       321
1234    4321
12345  54321
123456654321


void numberCrown(int n) {
    
    for(int i=0;i<n;i++){
        for(int j=1;j<i+2;j++){
            cout<<j<<" ";
        }
        for(int k=0;k<n-i*2;k++){
            cout<<" ";
        }
        for(int l=i+1;l>0;l--){
            cout<<l<<" ";
        }
        cout<<endl;
    }
}