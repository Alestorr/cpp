#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	//Moteghayer haye sal tavalod
	int Year1;
	int Month1;
	int Day1;
	//Moteghayer haye sal jari
	int Year;
	int Month;
	int Day;



	cout << "Enter The Year Of Your Birth:";
	cin >> Year;

	cout << "Enter The Month Of Your Birth:";
	cin >> Month;

	cout << "Enter The Day Of Your Birth:";
	cin >> Day;

	




	cout << "Enter The Year Of Your Birth:";
	cin >> Year1;

	cout << "Enter The Month Of Your Birth:";
	cin >> Month1;

	cout << "Enter The Day Of Your Birth:";
	cin >> Day1;


	if (Month1 <= 12)
	{
		if (Month1 > Month)
		{
			cout << Month + 12;
			
		}
		Month = Month + 12;
		
		cout << "Ok";
	}
	else
	{
		cout << "You Entered The Wrong Variable";
	}
	cout << "                                                                          ";
	if (Day1 <= 31)
	{
		if (Day1 > Day)
		{
			cout << Day + 30;
		}
		cout << "Ok";
	}
	else
	{
		cout << "You Entered The Wrong Variable";
		cout << "           ";
	}
	cout << "                                                                          ";
	cout << "													";
	cout << "Enter The Date:";
	cout << "  Or    ";
	cout << "Enter The Year(Now):";
	cin >> Year;
	cout << "                                                                          ";
	cout << "Enter The Month(Now):";
	cin >> Month;
	cout << "                                                                          ";
	cout << "Enter The Day(Now):";
	cin >> Day;
	cout << "                                                                          ";
	//moteghayer haye namayangar Sen feli dar ghaleb sal,mah,rooz
	int YearT = Year - Year1;
	int MonthT = Month - Month1;
	int DayT = Day - Day1;

	
	cout << "                                                                          ";
	cout << "Age:" << YearT <<"Year" << MonthT <<"Month "  << DayT<<"Day";
	cout << "                                                                          ";
	//moteghayer haye namayangar Sen feli dar ghaleb sal, mah, rooz
	//Mohasebe Chand Sanie Az Omr Migzare
	int YearSec= YearT*31104000;
	int MonthSec= MonthT*2592000;
	int DaySec= DayT*86400;
	int MeghdarSanieOmr = YearSec + MonthSec + DaySec;


	int YearMin = YearT * 10368000;
	int MonthMin = MonthT * 43200;
	int DayMin = DayT * 1440;
	int MeghdarDaghigheOmr = YearMin + MonthMin + DayMin;

	int YearHour = YearT*8760;
	int MonthHour = MonthT*720;
	int DayHour = DayT*24;
	int MeghdarSaatomr = YearHour + MonthHour + DayHour;

	int YearDay = YearT*365;
	int MonthDay = MonthT*30;
	int DayDay = DayT;
	int MeghdarRoozOmr = YearDay + MonthDay + DayDay;


	cout << "Meghdar Seconds Ke Az Omreman Migozarad:" << MeghdarSanieOmr<<"Seconds";
	cout << "                                                                          ";
	cout << "Meghdar Minutes ke Az Omremoon Gozashte:"<< MeghdarSaatomr <<"Minutes";
	cout << "                                                                          ";
	cout << "Meghdar Hours ke Az Omremoon Gozashte:"<< MeghdarSaatomr <<"Hours";
	cout << "                                                                          ";
	cout << "Meghdar Day ke Az Omremoon Gozashte:"<< MeghdarRoozOmr << "Day";
	cout << "                                                                          ";


}