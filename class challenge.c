#include <iostream>
#include <string>
#include<sstream>
using namespace std;

class details{
    string fname,lname;
    int age, std;
    public:
    void set_age(int a){
        age=a;

    }
    void set_standard(int s){
        std=s;
        
    }
    void set_first_name(string f ){
        fname=f;
        
    }
    void set_last_name(string l){
        lname=l;
        
    }
    int get_age(){
        return age;
    }
    int get_standard(){
        return std;
    }
    string get_first_name(){
        return fname;
    }
    string get_last_name(){
        return lname;
    }
    string to_stringy(){
        stringstream ss;
        ss<<age<<" "<<std;
        string age1,std1;
        ss>>age1>>std1;
        string res= age1+","+fname+","+lname+","+std1;
        return res;
    }
};

int main() {
    int age, standard;
    string first_name, last_name;
    //stringstream ss;
    
    cin >> age >> first_name >> last_name >> standard;
    
    details st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << "," <<" "<< st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout <<endl;

    cout<< st.to_stringy();
    
    return 0;
}
