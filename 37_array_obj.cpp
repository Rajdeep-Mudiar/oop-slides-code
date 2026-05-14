#include <iostream>
using namespace std;

class cl{
    int i;
    public:
        //constructor
        cl(int j){
            i=j; 
        }

        int get_i(){
            return i;
        }
}
int main(){
    cl ob[3]={1,2,3}; //initializers
    int i;
    for(i=0;i<3;i++){
        cout<<ob[i].get_i()<<endl;
    }

    return 0;
}