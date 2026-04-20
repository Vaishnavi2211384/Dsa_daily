//LCM

// User function Template for C++

int LCM(int a, int b) {

    // write your code here
   int g=gcd(a,b);
   return (a/g)*b;
    
    // return LCM of a and b
}

//Slice The String

string sliceString(string &s) {
    // code here
    return s.substr(1, s.length()-2);
}

//C++ STL | Set 1 (vector)


/*You are required to complete below methods*/

/*inserts an element x at
the back of the vector A */
void add_to_vector(vector<int> &A, int x) {
    // Your code here
    
    A.push_back(x);
}

/*sort the vector A in ascending order*/
void sort_vector_asc(vector<int> &A) {
    sort(A.begin(),A.end());
    // Your code here
}

/*reverses the vector A*/
    
void reverse_vector(vector<int> &A) {
    // Your code here
     reverse(A.begin(),A.end());
}

    
/*returns the size of the vector  A */
int size_of_vector(vector<int> &A) {
    // Your code here
     A.size();
}
    

/*sorts the vector A in descending order*/
void sort_vector_desc(vector<int> &A) {
    // Your code here
     sort(A.begin(),A.end(),greater<int>());
}
    

/*prints space separated
elements of vector A*/
void print_vector(vector<int> &A) {
    // Your code here
    for(int i=0;i<A.size();i++){
        cout<<A[i]<<" ";
    }
}

//Print With Separator

// User function Template for C++
void utility() {
    string a, b, separator;
    cin >> a >> b >> separator;
    // Your code here
    cout<<a<<separator<<b<<endl;
}

//C++ Operators (Relational) | Set 2



class Solution {
  public:
    string compareNum(int A, int B) {
        // code here
        if(A>B){
            return to_string (A) +" is greater than "+ to_string(B);
        } 
        else if(A<B){
            return to_string(A) + " is less than "+ to_string(B);
        }
        else {
            return to_string(A) +" is equals to "+ to_string(B);
        }
    }
};

//Print GeeksForGeeks

#include <iostream>
using namespace std;

int main() {

    // Prints Hello World
   // cout << "Hello World\n";

    // Print GeeksforGeeks
    cout << "GeeksForGeeks\n";

    return 0;
}

//Print GeeksForGeeks with quotes

// User function Template for C++

void print() {

    // code here
    cout<<"\"GeeksForGeeks\""<<endl;
}

//Size of an Array


class Solution {
  private:
    vector<int> a;

  public:
    // Constructor to initialize the array
    Solution(vector<int> arr) { this->a = arr; }

    int getSize() {
        // code here
        return a.size();
    }
};


//Sum of N Numbers

int nSum(int n) {
    // code here
    
    int ans = 0;
    for(int i=0;i<=n;i++){
        ans=ans+i;
    }
    return ans;
}


