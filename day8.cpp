//Function With Arguments

int argumentFunction(int a, int b){
    return a+b;
}

//Print With Separator

void utility() {
    string a, b, separator;
    cin >> a >> b >> separator;
    // Your code here
    cout<<a<<separator<<b<<endl;
}

//The Else if Statement

void utility(int number) {
    if(number>100){
        cout<<"Big"<<endl;
    }
    else if(number<10){
        cout<<"Small"<<endl;
        
    }
    else{
        cout<<"Number"<<endl;
    }
}

//C++ Strings

string conCat(string s1, string s2) {
    // code here.
    return s1+s2;
}
