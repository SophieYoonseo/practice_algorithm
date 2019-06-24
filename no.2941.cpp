#include<iostream>
#include<cstring>
using namespace std;

int alphabet(char str[])
{
	int count(0), i(0);
	while (i < strlen(str)) {
		if (str[i] == 'c' && (str[i+1] == '=' || str[i+1] == '-')) i++;
		else if (str[i] == 'd') {
			if (str[i+1] == '-') i++;
			else if (str[i+1] == 'z' && str[i+2] == '=') i+=2;
		}
		else if ((str[i] == 'l' || str[i] == 'n') && str[i+1] == 'j') i++;
		else if ((str[i] == 's' || str[i] == 'z') && str[i+1] == '=') i++;
		i++, count++;
	}
	return count;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	char str[101] = {0,};
	int count(0);
	cin>>str;
	
	count = alphabet(str);

	cout<<count;
	return 0;
}
