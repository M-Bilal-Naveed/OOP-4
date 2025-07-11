#include <iostream>
using namespace std;
class batsman
{
	private:
		int bcode;
		char bname[20];
		int innings,notout,runs;
		float batavg;
		float calcavg()
		{
			batavg = runs / (innings - notout);
		}
	protected:
	public:
		void readdata()
		{
			cout<<"Enter Batsman code:";
			cin>>bcode;
			cout<<"Enter batsman name:";
			cin>>bname;
			cout<<"Enter batsman inning played:";
			cin>>innings;
			cout<<"Enter batsman runs:";
			cin>>runs;
			cout<<"Enter notout:";
			cin>>notout;
	    calcavg();
		}
		void displaydata()
		{
			cout<<"bcode is"<<bcode<<endl;
			cout<<"Name is"<<bname<<endl;
			cout<<"Innings is"<<innings<<endl;
			cout<<"notout is"<<notout<<endl;
			cout<<"runs are"<<runs<<endl;
			cout<<"batavg is"<<batavg<<endl;
		}
};
int main()
{
batsman x;
x.readdata();
x.displaydata();
return 0;
}
