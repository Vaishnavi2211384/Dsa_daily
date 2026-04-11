//Hello World

class Solution {
  public:
    void helloWorld() {

        // Type below cout<<"Hello World";
        // cout will output to console
        cout<<"Hello World";
    }
};


//Swap numbers

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    // Write Code to Swap
    swap(a,b);

    cout << a << " " << b << endl;    
    return 0;
}

//Binary to decimal

class Solution {
  public:
    int binaryToDecimal(string &b) {
        // Code here.
        int ans=0;
        for(int i=0;i<b.length();i++){
            ans=ans*2+(b[i]-'0');
        }
        return ans;
    }
};

//Swap the numbers

void swap(int &a, int &b) {
    // code here
    int temp=a;
    a=b;
    b=temp;
}



