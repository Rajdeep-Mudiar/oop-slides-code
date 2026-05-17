#include <iostream>
using namespace std;

class Number{
    int value;

    public:
        Number(int v){
            value=v;
        }

        Number(const Number &n){
            value=n.value;
            cout<<"Copy constructor "<<endl;
            cout<<"Value : "<< value;
        }
};
int main(){
    Number n1(10);
    Number n2=n1;
    return 0;
}