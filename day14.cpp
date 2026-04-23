//C++ STL | Set 5 (queue)

/*You are required to complete below methods*/

/*inserts an element x at
the back of the queue q */
void push(queue<int> &q, int x) {
    // Your code here
    q.push(x);
}

/*pop out the front element
from the queue q and returns it */
int pop(queue<int> &q) {
    if(q.empty()) return -1;
    int front=q.front();
    q.pop();
    return front;
    // Your code here
}

/*returns the size of the queue q */
    
int getSize(queue<int> &q) {
    // Your code here
    return q.size();
    
}

    
/*returns the last element of the queue */
int getBack(queue<int> &q) {
    // Your code here
    if(q.empty()) return -1;
    return q.back();
}
    

/*returns the first element of the queue */
int getFront(queue<int> &q) {
    // Your code here
    if(q.empty()) return -1;
    return q.front();
}

//C++ STL | Set 3 (map)

/* Adds a value with key x and value y to the map*/
void add_value(map<int, int> &m, int x, int y) {
    // Your code here
    m[x]=y;
    
}

/* Returns the value of the key
 x if present else returns -1 */
int find_value(map<int, int> &m, int x) {
    if(m.find(x)!=m.end())
    return m[x];
    else return -1;
    // Your code here
}

/* Prints contents of the map ie keys and values*/
    
void print_contents(map<int, int> &m) {
    // Your code here
    // for(auto it=m.begin();it!=m.end();it++){
    for(auto it:m)
        cout<<it.first<<" "<<it.second<<" ";
    //}
}

//C++ Inheritance introduction

class Cuboid {
    // Add your code here.
    public:
    int length,width,height;
    //  Cuboid() {
    //     length = 0;
    //     width = 0;
    //     height = 0;
    // }
    void display(){
        cout<<length<<" "<<width<<" "<<height<<endl;
    }
};

class CuboidVol : public Cuboid {
    // Add your code here.
    public:
    void read_input(int l,int w,int h){
        length=l;
        width=w;
        height=h;
   
    }
    void display(){
      cout<<length*width*height<<endl;  
    }
    
};


