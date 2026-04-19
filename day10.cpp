//C++ 2-D Arrays | Set-1

vector<vector<int>> transpose(int a[][M], int n) {
    // Code here
    vector<vector<int>> result(n, vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            result[j][i]=a[i][j];
        }
        
    }
    return result;
}

//Print Even Positioned Characters

void utility(string s) {
    
    for(int i=0;i<s.length();i++){
        if(i%2==0){
            cout<<s[i];
        }
    }
    
}

//Find if +ve, -ve or 0

void fun(int a) {
    // code here
    if(a>0){
        cout<<"Positive";
        
    }
    else if(a<0){
        cout<<"Negative";
    }
    else{
        cout<<"Zero";
    }
}