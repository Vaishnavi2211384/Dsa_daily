//C++ Switch Case Statement

class Solution {
  public:
    void isInRange(int n) {
        // you don't need to take input
        // here just write code which print correct answer according to n
        switch(n){
        case 1:
        cout<<"one"<<endl;
        break;
        case 2:
        cout<<"two"<<endl;
        break;
        case 3:
        cout<<"three"<<endl;
        break;
        case 4:
        cout<<"four"<<"\n";
        break;
        case 5:
        cout<<"five"<<"\n";
        break;
        case 6:
        cout<<"six"<<"\n";
        break;
        case 7:
        cout<<"seven"<<"\n";
        break;
        case 8:
        cout<<"eight"<<"\n";
        break;
        case 9:
        cout<<"nine"<<"\n";
        break;
        case 10:
        cout<<"ten"<<"\n";
        break;
        default:
        cout<<"not in range";
         }
    }
};

//Fibonacci Number

// User function Template for C++

int fibonacci(int n) {

    // Write your code here to calculate
    // to calculate the nth fibonacci number
    if(n==0) return 0;
    if(n==1) return 1;
    int a=0,b=1;
    for(int i=2;i<=n;i++){
        int c=a+b;
        a=b;
        b=c;
    }
    return b;
}

//Sum of N Numbers

int nSum(int n) {
    // code here
    
    int ans = 0;
    for(int i=0;i<=n;i++){
    ans=ans+i;
    }
    return ans;
}

//Bitwise Right Shift

void rightShift(int a, int b) {

    // just complete below statement
    int ans =a>>b;

        // print the result
        cout << ans << endl;
}

//Inverted Right AngleTriangle

class Solution {
  public:
    void printPattern(int n) {
        // code here
        for(int i=n;i>=1;i--){
            for (int j=1;j<=i;j++){
                cout<<"*"<<" ";
            }
        cout<<endl;

        }
    }
};

//Array Traversal

void arrayTraversal(int numbers[], int size) {
    // Code here
    for(int i=0;i<size;i++)
{   cout<<numbers[i]<<" ";
    
}}

//C++ Functions (Sum of numbers) | Set 1

int calcSum(int a, int b, int c) {
    // Your code here
    return (a+b+c);
}

//Sum of N Numbers

int nSum(int n) {
    // code here
     int ans = 0;
    for(int i=0;i<=n;i++){
        ans=ans+i;
    }
    return ans;
}