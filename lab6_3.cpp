#include<iostream>
using namespace std;

char before(char x)
{
	if(x>64&&x<91)
	{
		int order=(int(x)-66);
		if(order>-1)
		{
			return 'A'+order;
		}
		else
		{
			return 'Z';
		}
		
	}
	else
	{
		return '0';
	}
	
}

int main()
{
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}

