#include <iostream>
using namespace std;
class Math{
    public: 
        void add(int a ,int b){
            cout<<"Sum: "<<a+b<<endl;
        }

        void add(double a,double b){
            cout<<"Sum: "<<a+b<<endl;
        }
};
int main(){
    Math m;
    m.add(10.5,3.4);
    return 0;
}