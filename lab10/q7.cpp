#include <iostream>
using namespace std;
template <class Te>
class Max
{
	Te a, b;

public:
	Max(Te x, Te y)
	{
		a = x;
		b = y;
	}

	Te get_Max()
	{
		if (a > b)
		{
			return a;
		}
		return b;
	}
};

int main()
{
	Max<int> integ(10, 50);

	cout << "Maximum of 10 and 50 from user is : " << integ.get_Max() << endl;
	return 0;
}