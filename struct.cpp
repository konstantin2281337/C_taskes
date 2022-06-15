#include <iostream>
#include <string>


using namespace std;


struct Company {
	string name, second_name, post;
	int birthday, paycheck;
};


int main() {
	int count, avg_paycheck;
	int sum_paycheck = 0;

	Company staff[8] = {
	{"Konstantin", "Shevchenko", "chief", 2003, 50000},
	{"Konstantin", "Labcov", "cleaner", 1988, 15000},
	{"Stanislaw", "Garanin", "cook", 1974, 25000},
	{"Artem", "Prokopec", "manager", 1989, 30000},
	{"Philipp", "Paukov", "logistician", 2000, 27000},
	{"Daniil", "Vlasov", "mechanic", 1999, 25000},
	{"Denis", "Budnikov", "driver", 1984, 29000},
	{"Roman", "Lega", "doter", 1974, 100000} };


	for (count = 0; count < 8; count++) {
		sum_paycheck += staff[count].paycheck;
		avg_paycheck = sum_paycheck / 8;
	}


	{
		cout << "Average paycheck: " << avg_paycheck << endl;
		cout << "\n" << endl;
		cout << "Names people who > 30 y.o. :" << endl;
		cout << " " << endl;
	}

	for (count = 0; count < 8; count++) {
		if (2022 - staff[count].birthday > 30)
			cout << staff[count].name << " " << staff[count].second_name << endl;
	}

	return 0;
}
