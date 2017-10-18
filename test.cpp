#include <iostream>
using namespace std;

class Test
{
	public:
		void show()
		{
			static int count=0;
			count++;
			cout<<"count = "<<count<<endl;
		}
};

int main()
{
	Test t1,t2;
	t1.show();//1
	t1.show();//2
	t2.show();//3
	t1.show();//4
}
