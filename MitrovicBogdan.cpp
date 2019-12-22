#include <iostream>
using namespace std;

int main() {
	long n,i,z;
	cout<<"Unesite broj";
	cin>>n;
	z=0;
	while(n)
	{   
	z=z+(n%10);
	n=n/10;
    }
	cout<<"Zbir je "<<z;;
	return 0;
}

