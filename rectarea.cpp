#include <iostream>

using namespace std;
class Rectangle{
    public:
   static int width,height;
    //Rectangle r1;
    Rectangle(){
       ; 
    }
    Rectangle(int w, int h){
      width=w;
       height=h;
    }
    void display(){
        cout<<width<<" "<<height<<endl;
        
    }
    
};
int Rectangle::width=0;
int Rectangle::height=0;

class RectangleArea: public Rectangle{
   public:
   int width,height;
   
   void read_input(){
       cin>>width;
       cin>>height;
       Rectangle r(width,height);

   }
   void display(){
       cout<<width*height<<endl;
   }

};


int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}
