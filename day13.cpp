//C++ Classes Introduction

// CollegeCourse Class
class CollegeCourse {
    // your code here
    public:
    string courseID;
    char grade;
    int credits;
    int gradePoints;
    float honorPoints;
    
    void set_CourseId( string CID){
        courseID=CID;
    }
    void set_Grade(char g){
        grade=g;
    }
    void set_Credit(int cr){
        credits=cr;
    }
    int calculateGradePoints(char g){
        g=toupper(g);
        if(g=='A') gradePoints=10;
        else if (g=='B') gradePoints=9;
        else if (g=='C') gradePoints=8;
        else if (g=='D') gradePoints=7;
        else if (g=='E') gradePoints=6;
        else if (g=='F') gradePoints=5;
     return gradePoints;
    }
    int  calculateHonorPoints(int gp,int cr){
        honorPoints=(float)(gp*cr);
        return honorPoints;
    }
    void display(){
        cout<<gradePoints<<" "<<(int)honorPoints<<"\n ";
       
    }
        
    
};
