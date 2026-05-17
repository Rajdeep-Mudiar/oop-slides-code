#include<iostream>
using namespace std;

class Exception{
    public:
        Exception(const string &msg) : msg_(msg){}
        ~Exception(){}

        string getMessage(){
            return (msg_);
        }

        private:
            string msg_;
};

void f(){
    throw (Exception("Rajdeep"));
}
int main(){
    try{
        f();
    }
    catch(Exception &e){
        cout<<"You threw an exception: "<<e.getMessage()<<endl;
    }
    return 0;
}