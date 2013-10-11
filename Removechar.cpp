//This program takes a string and character as the input
//and removes all occurences of that char
#include <iostream>
#include <string>
using namespace std;

void removeChars(string &str, char ch)
{
	int i;
	int resInd = 0; //Result string index
	for( i = 0; i < str.length(); i++ )
	{
		//retain str[i] only if it is not ch
		if( str[i] != ch )
		{
			str[resInd] = str[i];
			resInd++;
		}
	}
	//Resize the string so that chars beyond resInd will be erased.
	str.resize(resInd);
}
int main()
{
	string str;
	getline(cin, str);
	char removeCh;
	cin >> noskipws >>removeCh;
	cin >>skipws;
	removeChars(str, removeCh);
	cout<<str;
	return 0;
}
