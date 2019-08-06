#include<iostream>
#include<string>

using namespace std;

string str;

int calculator()
{
	int ans(0);
	string temp = "";
	bool sub = false;
	
	for(int i=0; i<=str.size(); i++)
	{
		// If it is a operator
		if(str[i] == '+' || str[i] == '-' || str[i] == '\0')
		{
			if(sub)	
				ans -= stoi(temp);
			else
				ans += stoi(temp);
			temp = "";	// initialization
			
			// If you write parenthesis after minus, you can get a minimum.
			if(str[i] == '-')	sub = true;
			continue;
		}
		//If it is a operand,
		temp += str[i];
	}
	
	return ans;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>str;
	
	cout<<calculator()<<"\n";
	
	return 0;
}
