#include<iostream>
#include<vector>
#include<sstream>
using namespace std;
int main() {
   string my_str ;
   cin>>my_str;
   int a;
   
   stringstream s_stream(my_str); 
   while(s_stream.good()) {
      string substr;
      getline(s_stream, substr, ','); 
      //s_stream>>substr>>a;
      //result.push_back(a);
      stringstream ss(substr);
      ss>>a;
      cout<<a<<endl;
     
      
     
   }
  
}
