#include<iostream>
using namespace std;
class complex
{
int real,imag;
public:
void set()
{
cout<<"Enter real and imag part are :";
cin>>real>>imag;
}
friend complex sum(complex,complex);
void display();
};

void complex::display()
{

cout<<"the sum of complex num "<<real<<"+i"<<imag;

}
complex sum(complex x,complex y)
{

complex C;
C.real=x.real+y.real;
C.imag=x.imag+y.imag;
return C;
}
int main()
{
complex x,y,z;
x.set();
y.set();
z=sum(x,y);
z.display();
return(0);
}
