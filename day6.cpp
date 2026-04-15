//For Loop - 1

void utility(int n) {
    // code here
    for(int i=1;i<=10;i++){
        int temp=n*i;
        cout<<temp<<" ";
    }
}

//Print With Space

void utility() {
    string a, b;
    cin >> a >> b;
    cout<<a<<" "<<b<<endl;
    // Write your code below that prints a <space> b
}

//Input Integer


#include <iostream>
using namespace std;

int main() {
    // Take input
    int n;
    cin>>n;
    int temp=n+10;
    cout<<temp;
    // Add 10 and Print
    return 0;
}

//Evaluate Formulae

class Solution {
  public:
    int calculate(int a, int b, int c, int d) {
        // Code here
        cin>>a>>b>>c>>d;
        int temp=((a+b)/c)+d;
        return temp;
    }
};

//Factorial

class Solution {
  public:
    int factorial(int n) {
        // code here
        int temp=1;
        for(int i=1;i<=n;i++){
            
            temp=temp*i;
             
           
        }
        return temp;
       
    }
};


//Table Difference

// User function Template for C++

void difference(int n1, int n2) {

    // Write your code here
    
    if(n1>n2){
    for(int i=1;i<=10;i++){
       int table=(n1*i)-(n2*i);
       cout<<table<<" ";
    }
    }
}

//Function With No Arguments


 void helloFunction() {
        cout << "Hello";
    }

//Reverse String

// User function Template for C++

// complete the function
// the function should return the reversed string
string reverseString(string &s) {
    // code here
    int start=0;
    int end=s.length()-1;
    
    while(start<end){
        swap(s[start],s[end]);
        start++;
        end--;
        
    }
    return s;
};