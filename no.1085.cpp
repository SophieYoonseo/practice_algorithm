#include<iostream>
#include<algorithm>

using namespace std;

int x, y;  //Hansu is here
int w, h;  //the right top

int escape()
{
	int distance = 0;

    //�켱 �� �Ʒ� Ȯ�� 
    distance = min(w - x, x);

    //���� ������ Ȯ�� 
    distance = min(distance, min(h - y, y));

    return distance;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>x>>y>>w>>h;
	
	cout<<escape()<<"\n";
	return 0;
}
