#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
	priority_queue<int>q;
    for (int i=0;i<3;i++)
    {
    	cin>>a;
		q.push(a);
	}
    cout<<q.top();
	
	return 0;
}
