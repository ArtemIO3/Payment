#include <iostream>
#include <string>
using namespace std;

class Payment
{
	string surname;
	string name;
	string patronymic;
	int salary;
	int yearofEmpoyment;
	double bonuspercentage;//процент надбавки 
	double campingTax;//походний налог 
	int NODWIM;//количество отработаных дней в месецах
	int NOWDIM;//количество робочих дней в мес€це
	int AADOTA;//начислени€ и удержани€ суммы
public:
	Payment() {
		salary = 0; yearofEmpoyment = 0; bonuspercentage = 0.0; campingTax = 0.0; NODWIM = 0; NOWDIM = 0; AADOTA = 0;}
	Payment(string s, string n, string p, int sal,int year,double bonus,double camp,int nod,int now,int aa)
	{
		surname = s;
		name = n;
		patronymic = p;
		salary = sal;
		yearofEmpoyment = year;
		bonuspercentage = bonus;
		campingTax = camp;
		NODWIM = nod;
		NOWDIM = now;
		AADOTA = aa;
	}
	void Input(string s, string n, string p, int sal, int year, double bonus, double camp, int nod, int now, int aa)
	{
		surname = s;
		name = n;
		patronymic = p;
		salary = sal;
		yearofEmpoyment = year;
		bonuspercentage = bonus;
		campingTax = camp;
		NODWIM = nod;
		NOWDIM = now;
		AADOTA = aa;
	}
	void WorkExperience()
	{
		int  workexperience = 2025 - yearofEmpoyment;
		cout << workexperience;
	}
	void Accruals()
	{

	}
	void Print()
	{
		cout << "Surname: " << surname << "\nName: " << name << "\nPatronymic:" << patronymic << "\nSalary: " << salary << "\nYear of Empoyment:" << yearofEmpoyment <<
			"\nBonuspercentage:" << bonuspercentage << "\n Camping Tax:" << campingTax << "\nNumber of days worked in months:" << NODWIM << "\nNumber of working days in a month:" << NOWDIM << "\nAccruals and deductions of amounts:" << AADOTA << endl;
	}
};

int main()
{

}