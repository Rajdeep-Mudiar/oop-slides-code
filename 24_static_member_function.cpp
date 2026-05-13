#include<iostream>
using namespace std;

class cl{
    static int resource;
    public:
        static int get_resource();
        void free_resource(){
            resource=0;
        }
};

int cl::resource; //define resource

int cl::get_resource(){
    if(resource){
        return 0; //resource already in use
    }
    else{
        resource=1;
        return 1; //resource allocated to this object
    }
}

int main(){
    cl ob1,ob2;

    //get_resource() is static so may be called independent of any object.
    if(cl::get_resource()){
        cout<<"ob1 has resource"<<endl;
    }
    if(!cl::get_resource()){
        cout<<"ob2 denied resource"<<endl;
    }
    ob1.free_resource();

    //can still call using object syntax
    if(ob2.get_resource()){
        cout<<"ob2 can now use resource"<<endl;
    }

    return 0;
}