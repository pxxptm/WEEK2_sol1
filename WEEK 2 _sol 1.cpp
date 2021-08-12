#include<iostream>
#include<string>
using namespace std;

main()
{
	string s;
	int i,a=0,b=0;
	// a=cap b=small

	cin >> s;

	for(string::iterator it=s.begin();it!=s.end();it++)
	{
		if(*it>=65&&*it<=90) {a++;}
		else {b++;}
	}
	if(a==0) cout<<"All Small Letter";
	else if(b==0) cout << "All Capital Letter";
	else cout << "Mix";
}
