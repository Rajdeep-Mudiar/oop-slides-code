#include <iostream>
using namespace std;

class add{
    public:
        add(int x,int y){
            cout<<"Sum: "<<x+y;
        }

        add(int x,int y,int z){
            cout<<"Sum: "<<x+y+z;
        }

        add(int x){
            cout<<"Sum: "<<x;
        }
};
int main(){
    add ob1(10,30);
    add ob2(10,20,30);

    return 0;
}