#include <iostream>
using namespace std;

int main(){
	cout<<"Enter a no:";
	int n,fact=1;
	cin>>n;
	
	for(int i=1;i<=n;i++){
		fact*=i;
	}
	
	cout<<"Factorial of "<<n<<" is: "<<fact<<endl;

	return 0;
}
