#include <iostream>
#include <string>

using namespace std;
 
int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	 
    string str;
    cin >> str;
 
    int index(0);
    for (char i = 'a'; i <= 'z'; i++) {
        index = str.find(i);
        cout << index << " ";
    }
 
    cout << '\n';
 
    return 0;
}


