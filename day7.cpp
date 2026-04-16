//GCD

#include <iostream>
using namespace std;

int main() {
    // code here
    
    int a,b;
    cin>>a>>b;
   while(b!=0){
       int temp=b;
       b=a%b;
       a=temp;
   }
   cout<<a<<endl;
    return 0;
}

//Divisor

class Solution {
  public:
    void printDivisors(int n) {
        // code here
       
       for(int i=1;i<=n;i++){
           if(n%i==0){
               cout<<i<<" ";
          }
        }
       
    }
    
};