#include<iostream>
#include<cstring>
using namespace std;


class employee{
    char name[80]; //private by default

    public:
        //these are public
        void putname(const char *n);
        void getname(char *n) const;

    private:
        //now private again
        double wage;

    public:
        //back to public
        void putwage(double w);
        double getwage() const;
};

void employee::putname(const char *n){
    strcpy(name,n);
}

void employee::getname(char *n) const{
    strcpy(n,name);
}

void employee::putwage(double w){
    wage=w;
}

double employee::getwage() const{
    return wage;
}

int main(){
    employee ted;
    char name[80];
    ted.putname("Virat");
    ted.putwage(500);
    ted.getname(name);

    cout<<name<<" makes "<<ted.getwage()<<" crores (INR) per year. ";
    return 0;
}