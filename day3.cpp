//Last Digit of a number

class Solution {
  public:
    int lastDigit(int n) {
        // Code here
        int temp =n%10;
        return abs(temp);
    }
  
};


//The If Statement
#include <iostream>
using namespace std;

int main() {
    // code here
    int n;
    cin>>n;
    if(n>100){
        cout<<"Big"<<endl;
    }
    
    cout<<"Number"<<endl;
    

    return 0;
}