#include <iostream>
#include "Class.h"
#include "Solution1.h"
#include <cstdio>
#include <string>

using namespace std;

int main()
{
	Class a;
	a.sayhelloworld();
	//----³ÌÐò
	string s;
	getline(cin, s);
	Solution Get_toAns;
	bool bo = false;
	bo = Get_toAns.isValid(s);
	switch (bo)
	{
	case true:cout << "true" << endl; break;
	case false:cout << "false" << endl; break;
	}
	return 0;
}