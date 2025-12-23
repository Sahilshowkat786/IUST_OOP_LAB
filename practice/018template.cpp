#include<iostream>
using namespace std;
template<class T>// template of t 
T sq(T x){
    return x*x;
}

int main(){
  cout<<  sq(4.5);

}