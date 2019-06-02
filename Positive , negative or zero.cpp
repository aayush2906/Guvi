#include<bits/stdc++.h>

using namespace std;

main()
{
	int x;
	cin>>x;
	
	if(x>0)
		cout<<"Positive\n";
	else if(x<0)
		cout<<"Negative\n";
	else if(x==0)
		cout<<"Zero\n";
	else
		cout<<"Invalid Input";
}
