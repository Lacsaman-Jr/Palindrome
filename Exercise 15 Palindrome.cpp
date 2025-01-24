#include <iostream>
using namespace std;


int palindrome(int x);
int main()
{
	int x;
	
	cout <<"Input a Number: ";
	cin >>x;
	
	
	if (palindrome(x) == x)
	{
		cout <<x <<" is a palindrome";
	}
	else 
	{
		cout <<x <<" is not a palindrome";
	}
	
	return 0;
}

int palindrome(int x)
{
	
	int result, initial = 0, y = x;
	for (int i = 1; i <= 1000; i++)
	{
		result = x % 10;
		
		initial = (initial + result) * 10;
		
		x /= 10;
		
		if (x == 0)
		break;
	}
	initial /= 10;
	
	return initial;
}