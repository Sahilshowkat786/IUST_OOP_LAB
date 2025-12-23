#include<iostream>
using namespace std;
class number
{
    private :
        int x;
    public:
        number():x(0){}
        number(int n):x(n){}

        // overload > or < 
    bool operator > (number obj){
        return x > obj.x;
    }
    
};
int main(){
    number n1(23),n2(45);
    if(n1>n2){
        cout<<"n1 is greater than n2";
    }
    else {
        cout<<"n2 is grater";
    }
    }
    


