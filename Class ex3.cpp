#include <iostream>
using namespace std;
class Test
    {
    	private:
    		int x;
    	public:
    		void setX()
    		{
    			cin>>x;
			}
			void getX()
			{
				cout<<x;
			}
	};
int main()
    {
    	Test obj;
    	obj.setX();
    	obj.getX();
    	return 0;
	}
