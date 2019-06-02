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
    	if(x==65||x==69||x==73||x==79||x==85||x==97||x==101||x==105||x==111||x==117)
    	cout<<"Vowel\n"<<x;
    	else
    	cout<<"Consonant\n";
	}
	else
		cout<<"Invalid\n";

    return 0;
}
