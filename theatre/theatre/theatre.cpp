#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
using namespace std;

int main()
{
	string movie;
	int noAdult;
	float ADULT_PRICE=6;
	float CHILD_PRICE=3;
	int noChild;
	float gross;
	float netBox;
	float amountDistribution;
	float percentage=0.2;
	cout << "Enter The Name Of The Movie" << endl;
	cin >> movie;
	cout << "Enter The Adult Tickets Sold" << endl;
	cin >> noAdult;
	cout << "Enter The Child Tickets Sold" << endl;
	cin >> noChild;
	gross = (noAdult*ADULT_PRICE) + (noChild*CHILD_PRICE);
	netBox = gross*percentage;
	amountDistribution = gross - netBox;
	cout << setw(20) << "The Name Of Movie Is" << setw(20) << movie << endl;
	cout << setw(20) << "The Number Of Adult Tickets Sold =" <<setw(20)<< noAdult << endl;
	cout << setw(20) << "The Number Of Child Tickets Sold =" << setw(20) << noChild << endl;
	cout << setw(20) << "Gross Box Office Profit : $" << setw(20) << gross << endl;
	cout << setw(20) << "Net Box Office Profit : $" << setw(20) << netBox << endl;
	cout << setw(20) << "Amount Paid Of Distribution : $" << setw(20) << amountDistribution << endl;


	












}
