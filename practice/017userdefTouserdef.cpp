#include<iostream>
using namespace std;
// by using constructor call
class meter
{
    private :
        int m;
    public:
        meter():m(0){}
        meter(int m1):m(m1){}
    int getdata(){
        return m;
    }
    
};

class killometer{
private :
        int km;
    public:
        killometer():km(0){}

    killometer(meter m){ // by constructor call
        km = ( m.getdata()/1000);

    }
    void showdata(){
        cout<<km;
    }
};
int main(){
    meter m(3400);
    killometer k;
    k= m;
    k.showdata();


}