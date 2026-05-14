#include <iostream>
using namespace std;

class base{
    protected:
        int i;
        public:
            base(int x){
                i=x;
                cout<<"Constructing base"<<endl;
            }

            ~base(){
                cout<<"Destructing base"<<endl;
            }
};

class derived: public base{
    int j;
    public:
        //derived uses x; y is passed along to base.
        derived(int x,int y):base(y){
            j=x;
            cout<<"Constructing derived"<<endl;
        }

        ~(derived){
            cout<<"Destructing derived"<<endl;
        }

        void show(){
            cout<<i<<" "<<j<<endl;
        }
};

int main(){
    derived ob(3,4);
    ob.show(); //displays 4 3

    return 0;
}