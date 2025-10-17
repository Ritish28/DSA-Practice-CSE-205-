//getter setter
#include<iostream>
using namespace std;
class Student{
    public:
    int rollNo;
    static int count;
    void setRollNo(int r){
        rollNo = r;
    }
    int getRollNo(){
        count ++;
        return rollNo;
    } 
    static void getcount(){
        cout<<"The count was increamented"<<count<<"times"<<endl;
    }
};
int student::count;
int main(){
    student s1;
    student s2;
    s1.setRollNo(101);
    s2.setRollNo(102);
    cout<<"Roll No of s1 is: "<<s1.getRollNo()<<endl;
    cout<<"Roll No of s2 is: "<<s2.getRollNo()<<endl;
    //print count is ................
}