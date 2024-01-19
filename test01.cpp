#include <iostream>
using namespace std;
int main()
{
	int choice = 0;
	cout<<"Input to 1or2"<<endl;
	cin >> choice;
	if(choice == 1)
	{
		cout<<"you choose 1"<<endl;
	}
	else if(choice == 2)
	{
		cout<<"you choose 2"<<endl;
	}
	else{
		cout<<"erro"<<endl;
	}
	return 0;
}
