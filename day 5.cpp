//C++ Input / Output


class Solution {
  public:
    int multiplication(int A, int B) {
        // code here
        return A*B
    }
};

//Vowel or Not


class Solution {
  public:
    string isVowel(char c) {
        // code here
        if(c=='a' || c=='A' || c=='e' || c=='E'|| c=='i' || c=='I'||c=='o'|| c=='O' || c=='u' ||c=='U'){
            return "YES";
        }
        else{
            return "NO";
        }
    }
};

//Switch Statement

// User function Template for C++

string utility(int number) {

    // write your code here
   
    switch(number){
        case 1:
        return "One";
        break;
        
         case 2:
        return "Two";
        break;
         case 3:
        return "Three";
        break;
         case 4:
        return "Four";
        break;
         case 5:
        return "Five";
        break;
         case 6:
        return "Six";
        break;
         case 7:
        return "Seven";
        break;
         case 8:
        return "Eight";
        break;
         case 9:
        return "Nine";
        break;
        default:
        return "Unknown";
    }
}


//While Loop

class Solution {
  public:
    void utility(int x) {
        // code here
        
        while(x>=0){
            cout<<x<<" ";
            x--;
        }
    }
};

// Greatest of three numbers
class Solution {
  public:
    int greatestOfThree(int a, int b, int c) {
        // code here
        if(a>=b && a>=c){
           return a; 
        }
        else if(b>=c && b>=a){
            return b;
        }
        else {
            return c;
        }
    }
};

//Concatenate Integers

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    string s=to_string(a)+to_string(b);
    
    // Write Your Code to Concate and Print
    cout<<s;
    return 0;
}

//Print Without Space

class Solution {
  public:
    void concatAndPrint(string& a, string& b) {
        // code here
       
        cin>>a>>b;
        string c=a+b;
        cout<<c<<endl;
    }
};
