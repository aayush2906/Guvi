#include <iostream>
using namespace std;

int main()
{
    char c;
    int x;
    cin>>c;
    x=c;
    if((65<=x&&x<=90)||(97<=x&&x<=122))
    {
    	cout<<"Alphabet\n";
	}
	else
		cout<<"No\n";

    return 0;
}
