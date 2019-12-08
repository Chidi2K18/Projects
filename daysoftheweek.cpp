#include <iostream>
using namespace std;
//this code could also be completed using enumerators
/* enum dayofweek {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
 dayofweek day = Sunday;

switch(day){
    case Monday:
    case Tuesday:
    case Wednesday:
    case Thursday:
    case Friday:
        cout << "Alarm set for 7.00! Gotta get to Uni" << endl;
        break;
    case Saturday:
    case Sunday:
        cout << "It's the weekend. No alarm. Time for sleep" << endl;
        break;            
}
*/
int main() {
	int chosenNum;
	cout << "Please enter a number between 1-7" << endl;
	while (!(cin >> chosenNum) || (chosenNum < 1 || chosenNum > 7)) {
		cout << "The number entered must be between 1 and 7" << endl;
		cout << "Please enter a number" << endl;
		cin.clear();
		cin.ignore(132, '\n');
	}
	switch (chosenNum)
	{
	case 1:
		cout << "you have chosen Monday" << endl;
		break;
	case 2:
		cout << "you have chosen Tuesday" << endl;
		break;
	case 3:
		cout << "you have chosen Wednesday" << endl;
		break;
	case 4:
		cout << "you have chosen Thursday" << endl;
		break;
	case 5:
		cout << "you have chosen Friday" << endl;
		break;
	case 6:
		cout << "you have chosen Saturday" << endl;
		break;
	case 7:
		cout << "you have chosen Sunday" << endl;
		break;
	}
	return 0;
}