/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
	int a;
	cout<< "Enter a number:";
		cin>> a;
	for (int i=a;a>0;a--)
	{
		if (a==2)
		{
			continue;
		}
		cout<<a<<",";
	}
	cout<<"start!";
	return 0;
}




