#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int ColOne = 15;
	int ColTwo = 1;
	int ColThree = 15;

	//"Walmart Store Inventory List";
	// 
	// 
	// 
	//Radif1
	cout << setw(ColOne) << left << "Name"
		<< setw(ColTwo) << left << " " << setw(ColThree) << right << "Price" << endl;
	//Radif2
	cout << setw(ColOne) << left << "============" << setw(ColTwo) << left << " " << setw(ColThree) << right << "============" << endl;
	//Radif3
	cout << setw(ColOne) << left << "IceCream" << setw(ColTwo) << left << " " << setw(ColThree) << right << "12$" << endl;
	//Radif4
	cout << setw(ColOne) << left << "Milk" << setw(ColTwo) << left << "" << setw(ColThree) << right << "5$" << endl;
	//Radif4
	cout << setw(ColOne) << left << "Chips" << setw(ColTwo) << left << " " << setw(ColThree) << right << "25$" << endl;
	//Radif5
	cout << setw(ColOne) << left << "PopCorn" << setw(ColTwo) << left << " " << setw(ColThree) << right << "14$" << endl;
	//Radif6
	cout << setw(ColOne) << left << "Pack Of American Fruits" << setw(ColTwo) << left << " " << setw(ColThree) << right << "120$" << endl;

}

