//For loop2
void utility(string s) {
    // length of string is given by s.length()
    // character at any index i is given by s[i]

    // Write your code here
    for(int i=0;i<s.length();i++){
        if(i%2==0){
        cout<<s[i];
        }
    }
}

//Bitwise Operators

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int d=a^a;
    int e=c^b;
    int f=a&b;
    int g=c|(a^a);
    e=~e;
    cout<<d<<" "<<e<<" "<<f<<" "<<g;

    // perform bitwise operations here

    return 0;
}

//Arithmetic Operators

// User function Template for C++

void operations(int x, int y) {
    // Perform addition x+y below
    int p =x+y;
        // Perform subtraction x-y below
        int q =x-y;
            // Perform multiplication x*y below
        int r =x*y;
            // Perform division x/y below
        int s =x/y;
            // Perform modulo operation x%y below
        int t =x%y;

            // The below code prints the output. Don't change it!
        cout << p << " " << q << " " << r << " " << s << " " << t << endl;
}

//Function With Return
// code here
#include<bits/stdc++.h>
using namespace std;
int returnValueFunction(int n){
   
    return 2*n;
}

//The Else Statement
#include <iostream>
using namespace std;

int main() {
    // code here
    int a;
    cin>>a;
    if(a>100){
        cout<<"Big";
    }
    else{
        cout<<"Small";
    }

    return 0;
}

//Find element at a given Index

class Solution {
  public:
    int findElementAtIndex(int key, vector<int> &arr) {
        // code here
           
            if(key>=0 && key<arr.size()){
                return arr[key];
            }
        return -1;
    }
};

//Addition of Two Numbers
class Solution {
  public:
    int addition(int a, int b) {
        // code here
        return (a+b);
    }
};


//TypeCast And Double It
#include <iostream>
#include <string>
using namespace std;

int main() {
    string num;
    getline(cin, num);
    // TypeCast to int double it and print
    int n=stoi(num);
    cout<< 2*n;

    return 0;
}

//C++ if-else (Decision Making)
class Solution {
  public:
    string compareFive(int n) {
        // code here
        if(n>5){
            return "Greater than 5";
        }
        else if(n<5){
            return "Less than 5";
        }
        else{
            return "Equal to 5";
        }
          
    }
};