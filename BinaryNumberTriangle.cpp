Binary Number Triangle Pattern

Problem Statement: Given an integer N, print the following pattern : 

Examples:

Input Format: N = 3
Result: 
1
01
101

Input Format: N = 6
Result:   
1
01
101
0101
10101
010101

void nBinaryTriangle(int n) {
    for(int i=1;i<=n;i++){
        if(i%2!=0){

        
            for(int j=1;j<i+1;j++){
              if (j % 2 != 0) {
                cout << "1 ";
              } else
                cout << "0 ";
            }
            cout<<endl;
        }
        else{
            for(int j=1;j<i+1;j++){
              if (j % 2 != 0) {
                cout << "0 ";
              } else
                cout << "1 ";
            }
            cout<<endl;
        }

        cout<<endl;
    }

}