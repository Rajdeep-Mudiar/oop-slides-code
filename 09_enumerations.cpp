#include<iostream>
using namespace std;
enum Color { RED, GREEN=2, BLUE }; // Define an enumeration for colors
enum suit { HEARTS, DIAMONDS=10, CLUBS, SPADES }; // Define an enumeration for card suits
int main(){
    Color c = RED;
    suit s = DIAMONDS;
    cout << "Color: " << c << endl;
    cout << "Suit: " << s << endl;

    cout<<"The value of enum color :"<<RED<<","<<GREEN<<","<<BLUE<<endl;
    cout<<"The value of enum suit :"<<HEARTS<<","<<DIAMONDS<<","<<CLUBS<<","<<SPADES<<endl;
    return 0;
}