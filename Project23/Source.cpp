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
		int accruals = salary * (NOWDIM / NODWIM);
		cout << accruals<<"\n";
	}
	void Retention()
	{
		int  retentiom = campingTax * 0.1;
		int fieldtax = (campingTax - retentiom) * 0.13;
		cout << retentiom;
		cout << endl;
		cout << "\nfieldtax\n" << fieldtax;
		cout << endl;
        int all = retentiom + fieldtax;
		cout << "\nall\n" << all;
		cout << endl;
		int forIssuance = campingTax - all;
		cout <<"\nforIssuance" << forIssuance;
	}

	void Print()
	{
		cout << "Surname: " << surname << "\nName: " << name << "\nPatronymic:" << patronymic << "\nSalary: " << salary << "\nYear of Empoyment:" << yearofEmpoyment <<
			"\nBonuspercentage:" << bonuspercentage << "\n Camping Tax:" << campingTax << "\nNumber of days worked in months:" << NODWIM << "\nNumber of working days in a month:" << NOWDIM << "\nAccruals and deductions of amounts:" << AADOTA << endl;
	}
};

int main()
{
Payment obj("Ivanov", "Ivan", "Ivanovich",30000,     2015,    15.0,     25000.0,    20,
		22,
		6);
cout << " Print\n";
obj.Print();

cout << "Work experience\n";
obj.WorkExperience();

cout << "\n Accruals \n";
obj.Accruals();

cout << "\n Retention\n";
obj.Retention();
}