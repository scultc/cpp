
#include <iostream>

using namespace std;

class Complex {
public:
    Complex() {
        real = 0;
        imag = 0;
    }

    Complex (double r, double i) {
        real = r;
        imag = i;
    }
    Complex operator+(Complex &c2);
   friend  Complex operator+(int i,Complex &c);
   friend  Complex operator+(Complex &c,int i);
    void display();
private:
    double real;
    double imag;
};

Complex Complex::operator +(Complex& c2)
{Complex c;
c.real=real+c2.real;
c.imag=imag+c2.imag;
return c;
}

Complex operator +(Complex	&c,int i){
return Complex(i+c.real,c.imag);
}
Complex operator +(int i,Complex &c){
return Complex(i+c.real,c.imag);
}

void Complex::display()
{cout<<"("<<real<<","<<imag<<"i)"<<endl;}

int main()
{
Complex c1(3,4),c2(5,-10),c3,c4,c5;
int i=10;
c3=c1+c2;
c4=c1+i;
c5=i+c1;
cout<<"c1=";c1.display();
cout<<"c2=";c2.display();
cout<<"c1+c2=";c3.display();
cout<<"c1+i=";c4.display();
cout<<"i+c1=";c5.display();
    return 0;

}