#include<iostream>
using namespace std;
int main(){
    int i=0;
    start:
        cout<<i<<"\n";
        ++i;
        if(i<5)
            goto start;
    return 0;
}