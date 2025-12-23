#include<iostream>
using namespace std;
class counter
{
    private:
      static int count;
    public:
        counter(){
            count++;
        }
   int get(){
        return count;
    }
};

int counter::count = 0; /// important 

int main(){
    counter c1,c2,c3;
    cout<<c3.get();

}