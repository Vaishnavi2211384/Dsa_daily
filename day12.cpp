//Compare two numbers

#include <iostream>
using namespace std;

int main() {
    // code here
    int a,b;
    if(a>b){
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
    }

    return 0;
}

//C++ Call by reference

void reverse_dig(int &a, int &b) {
    // Add your code here.
   int reva=0,revb=0;
   int temp=a;
   while(temp!=0){
       reva=reva*10+temp%10;
       temp/=10;
   }
   temp=b;
   while(temp!=0){
       revb=revb*10+temp%10;
       temp/=10;
   }
   a=reva;
   b=revb;
    
}

void swap(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}


