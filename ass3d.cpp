#include <iostream>
using namespace std;
class Book
{
	private:
		int bookid, pages, price;
	protected:
	public:
		void get()
		{
			cout<<"Enter bookid, pages, price:"<<endl;
			cin>>bookid>>pages>>price;
		}
	void show()
	{
		cout<<"Book ID is:"<<bookid<<endl;
		cout<<"pages is:"<<pages<<endl;
		cout<<"Price is:"<<price<<endl;
	}
	void set(int a ,int b ,int c)
	{
		bookid = a;
		pages = b;
		price = c;
	}
	int Price()
	{
		return price;
	}
};
int main()
{
	Book b1, b2;
	b1.get();
	b1.show();
	int a, b, c;
	cin>>a>>b>>c;
	b2.set(a,b,c);
	if (b1.Price() > b2.Price())
	b1.show();
	else b2.show();
	return 0;
}
