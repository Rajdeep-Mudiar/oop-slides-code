#include<iostream>
using namespace std;

class base1{
    protected:
        int i;
        public:
            base1(int x){
                i=x;
                cout<<"Constructing base1"<<endl;
            }

            ~base1(){
                cout<<"Destructing base1"<<endl;
            }
};

class base2{
    protected:
        int k;
        public:
            base2(int x){
                k=x;
                cout<<"Constructing base2"<<endl;
            }

            ~base2(){
                cout<<"Destructing base1"<<endl;
            }
};

class derived: public base1, public base2{
    int j;
    public:
        derived(int x,int y,int z) : base1(y), base2(z){
            j=x;
            cout<<"Constructing derived"<<endl;
        }

        ~derived(){
            cout<<"Destructing derived"<<endl;
        }

        void show(){
            cout<<i<<" "<<j<<" "<<k<<endl;
        }
};

int main(){
    derived ob(3,4,5);
    ob.show(); //displays 4 3 5
    return 0;
}