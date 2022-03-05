#include<iostream>
using namespace std;

int main()
{
	long long num;
	cin >> num;
	num /= 1000;
	num %= (24 * 60 * 60);

	int hour = num / 3600;
	num -= hour * 3600;
	int minute = num / 60;
	num -= 60 * minute;
	int second = num;
	printf("%02d:%02d:%02d", hour, minute, second);


	return 0;
}