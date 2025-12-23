#include<iostream>
using namespace std;

// obj as fn argunment 

    class time{
        private:
            int m,h;
        public:
        void getdata(){
            cout<<"enter hr and min ";
            cin>>h>>m;
        }
        void putdata(){
            cout<<"hour = "<<h<<endl;
            cout<<" min = "<<m<<endl;
        }
        void sum(time t1,time t2){
            h= (t1.m + t2.m)/60;
            m =(t1.m + t2.m)%60;
            h = h+ (t1.h + t2.h);

        }

    };
    int main(){
        time t1,t2,t3;
        t1.getdata();
        t2.getdata();
        t3.sum(t1,t2);
        t3.putdata();

    }

