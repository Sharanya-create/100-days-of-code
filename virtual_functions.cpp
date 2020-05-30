#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Person{
    
    public:
    string name;
    int age;
    virtual void getdata(){
        cin>>name>>age;
    }
    virtual void putdata(){
        cout<<name<<" "<<age<<" ";
    }
};
class Professor:public Person{
    public:
  static int cur_id;
    
    int publications;
    
    
    void getdata(){
        cin>>name>>age>>publications;
        //cur_id++;
    }
    void putdata(){
        cout<<name<<" "<<age<<" "<<publications<<" "<<++cur_id<<endl;
    }
};
class Student:public Person{
    public:
    int marks[6],mtotal;
    static int cur_id;
    Student(){
        
        
        mtotal=0;
    }
    void getdata(){
        cin>>name>>age;
        for(int i=0;i<6;i++){
            cin>>marks[i];
        }
        //cur_id++;
        
    }
    void putdata(){
        cout<<name<<" "<<age<<" ";
        for(int j=0;j<6;j++){
            mtotal=mtotal+marks[j];
        }
        cout<<mtotal<<" "<<++cur_id<<endl;
    }
};
int Professor::cur_id=0;
int Student::cur_id=0;
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
