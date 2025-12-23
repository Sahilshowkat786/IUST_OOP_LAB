#include<iostream>
using namespace std;
class complex{
    private:
        int x,y;
    public:
        complex(int a,int b):x(a),y(b){}
    void get(){
        cout<<x<<y;

    }
    complex(complex &c){ // copy constructor 
        x = c.x;
        y = c.y;
    }



};
// nameless object
class add{
    public :
    int a;
    add(int x):a(x){}

};
int main(){
    complex 
    c(7,8);
    complex c2(c); // or c2 = c
    c2.get();
    
// nemeless
int result = add(4).a + add(5).a; // two nameless obj and a value used 
cout<<result;

}