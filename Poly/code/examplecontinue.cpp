#include <iostream.h>


int main()
{
	for (int i = 0; i<10; i++)
	{
		if (i % 2 == 1)
		{
			continue;
		}
		cout << i << endl;
	}
	return 0;
}