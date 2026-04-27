//C++ STL List

/*You are required to complete below methods*/

/*prints space separated
elements of list A*/
void print(list<int> &A) {
    // Your code here
    if(A.empty()){
        cout<<-1<<endl;
        return;
    }
    for (auto it: A){
        cout<<it<<" ";
    }
    cout<<endl;
    
}

/*remove element from
back of list A*/
void remove_from_back(list<int> &A) {
    if(!A.empty()) 
    A.pop_back();
    // Your code here
}

/*remove element from
front of list A*/
    
void remove_from_front(list<int> &A) {
    // Your code here
    if(!A.empty())
    A.pop_front();
}

/*inserts an element x at
    
the back of the list A */
void add_to_list(list<int> &A, int x) {
    // Your code here
    A.push_back(x);
}
    

/*sort the list A in ascending order*/
void sort_list(list<int> &A) {
    // Your code here
    A.sort();
    
}

/*reverses the list A*/
void reverse_list(list<int> &A) {
    A.reverse();
    // Your code here
}

/*returns the size of the list  A */
int size_of_list(list<int> &A) {
    return A.size();
    // Your code here
}

/*inserts an element x at
the front of the list A*/
void add_from_front(list<int> &A, int x) {
    // Your code here
    A.push_front(x);
}

//C++ STL | Set 6 (set)

/* You are required to complete below methods */

/*inserts an element x to the set s */
void insert(set<int> &s, int x) {
    // Your code here
    s.insert(x);
}

/*prints the contents of the set s */
void print_contents(set<int> &s) {
    for(auto it:s){
        cout<<it<<" ";
    }
  
    // Your code here
}

/*erases an element x from the set s */
    
void erase(set<int> &s, int x) {
    // Your code here
    s.erase(x);
}

/*returns 1 if the element x is
    
present in set s else returns -1 */
int find(set<int> &s, int x) {
    // Your code here
    if(s.find(x)!=s.end()){
        return 1;
    }
    return -1;
}
    

/*returns the size of the set s */
int size(set<int> &s) {
    // Your code here
    s.size();
}

//C++ STL | Set 8 (unordered set)

/* You are required to complete below methods */

/*inserts an element x to the unordered set s */
void insert(unordered_set<int> &s, int x) {
    // Your code here
    s.insert(x);
}

/*erases an element x from the unordered set s */
void erase(unordered_set<int> &s, int x) {
    s.erase(x);
    // Your code here
}

/*returns the size of the unordered set s */
    
int size(unordered_set<int> &s) {
    // Your code here
    return s.size();
}

/*returns 1 if the element x is present
    
in unordered set s else returns -1 */
int find(unordered_set<int> &s, int x) {
    // Your code here
    
        if(s.find(x)!=s.end()){
            return 1;
    }
    return -1;
}

//C++ STL | Set 4 (stack)

/*You are required to complete below methods*/

/*the function pushes an element
x into the stack s */
void push(stack<int> &s, int x) {
    // Your code here
    s.push(x);
}

/*pops the top element of the
stack and returns it */
int pop(stack<int> &s) {
    if(s.empty()) return -1;
    int topElement=s.top();
    s.pop();
    return topElement;
    // Your code here
}

/*returns the size of the stack */
    
int getSize(stack<int> &s) {
    // Your code here
    return s.size();
}

/*returns the top element
    
of the stack */
int getTop(stack<int> &s) {
    // Your code here
    if(s.empty()) return -1;
    return s.top();
}