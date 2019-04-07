#include <iostream>
using namespace std;

void splitFloat (float x,int*intpart,float*fracpart)
{
	*intpart=static_cast<int>(x);
	*fracpart=x-*intpart;
}
int main()
{
	cout<<"Enter 3 float point number:"<<endl;
	for(int i=0;i<3;i++)
	{
		float x,f;
		int n;
		cin>>x;
		splitFloat(x,n&,&f);
		cout<<"Integer part="<<n<<"Fraction part="<<f<<0;
	}
	return 0;
}
