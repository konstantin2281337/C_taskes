// КНБ
#include <iostream>
#include <cstdlib> // dlya funcii rand()

using namespace std;

int bot_choose() {
	return (rand() % 3 + 1); // berem ostatok ot deleniya na 3 i pribavlyaem 1 v itoge poluchaem chislo ot 1 do 3 
}

int main() {
	int man, bot;
	cout << "stone - 1, scissors - 2, paper - 3" << endl;
	cin >> man;
	bot = bot_choose();

	cout << "You: " << man << endl;
	cout << "Bot: " << bot << endl;

	if (man == bot)
	{
		cout << "DRAW";
	}
	else if ((bot == 1 && man == 2) || (bot == 2 && man == 3) || (bot == 3 && man == 1))
	{
		cout << "YOU LOSE...";
	}
	else if ((man == 1 && bot == 2) || (man == 2 && bot == 3) || (man == 3 && bot == 1))
	{
		cout << "YOU WIN!!!";
	}
	return 0;
}
