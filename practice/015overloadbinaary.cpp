//binary operator overloading (+)
#include<iostream>
using namespace std;
class complex
{
    private :
        int real, imag;
    public :
        complex():real(0),imag(0){}
        complex(int r,int i):real( r),imag( i){}
    void input(){
        cin>>real>>imag;
    }
    void display(){
        cout<<real<<imag;
    }
    complex operator +(complex c){
       // complex temp;
        // temp.real = real + c.real;
        // temp.imag = imag + c.imag;
            // or method
        return complex(real+c.real,imag + c.imag);

    }
};
int main(){
    complex c1(1,2),c2(2,4),c3;
        // or by user input
        // c1.input();
        // c2.input();
        c3 = c1 + c2;
        c3 = c1 + c2;
    c3.display();

}