

#include <iostream>
using namespace std;
int main()
{
	char ch = 'a';
	char ch1 = 99;
	cout << "ch1 : " << ch1 << endl;
	cout << ch << endl;
	cout << "ch1 : " << (int)ch1 << endl;
	cout << (int)ch << endl;

	cout << numeric_limits<uint8_t>::max() << endl;

	cout << "%08x" << 255<<endl;
}

