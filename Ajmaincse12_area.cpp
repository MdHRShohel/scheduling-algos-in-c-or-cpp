#include <iostream>
using namespace std;

class Area{
   public:
   double heigth;
   double width;
};
class Rectangle:public Area{
public:
void setheigth(double l){
   heigth=l;
}
void setwidth(double b){
   width=b;
}
   double area(){
      return heigth*width;
   }
};

int main() {
  Rectangle rec;
  rec.setheigth(30);
  rec.setwidth(15);
  cout<<"the area of Rectangle is : "<<rec.area()<<endl;
    return 0;
}
