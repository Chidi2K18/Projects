#include <iostream>
#include <time.h> 
#include <string>

using namespace std;
void easyMode();
void normalMode();
void hardMode();
char modeChoice;
int y;
int x;
string mathOperator[2] = { "+" , "-" };
int randomIndex[2] = { 0,1 };
int question;
int numOfQuestions;
int answer;
bool correct;
float correctCounter;
float correctAnswerPercentage;
int max = 10;

void shuffle(int randomIndex[], int len) {
	int temp = 0;
	int random = 0;

	for (int i = 0; i < len; i++) {
		random = rand() % len;
		temp = randomIndex[i];
		randomIndex[i] = randomIndex[random];
		randomIndex[random] = temp;
	}
}

void modechanger(char modeChoice) {

	cout << "Before the game starts you have been gifted the option of changing the mode in which you play this game" << endl;
	cout << "Your options are as follows: " << endl;
	cout << "Easy mode where you only have to answer questions using 1 digit numbers" << endl;
	cout << "Normal mode where you will have to answer questions using 2 and 3 digit numbers" << endl;
	cout << "Hard mode where you will have to answer questions using up to 4 digit numbers" << endl;
	cout << "===========================================================" << endl;
	cout << "===========================================================" << endl;
	cout << "'E' for Easy " << endl;
	cout << "'N' for Normal" << endl;
	cout << "'H' for Hard" << endl;
	cout << "Make your choice now" << endl;
	cin >> modeChoice;

	switch (modeChoice)
	{
	case 'E':
		easyMode();
		break;
	case 'N':
		normalMode();
		break;
	case 'H':
		hardMode();
	}
}

int main() {
	modechanger(modeChoice);
	return 0;
}
void easyMode()
{
	srand(time(NULL)); //set random seed
	while (numOfQuestions != 10)
	{

		int y = rand() % 10 + 1; //get random number between 1 and 10
		int x = rand() % max; //^^
		shuffle(randomIndex, 2);
		if (mathOperator[randomIndex[0]] == mathOperator[0]) // if random array index picker is equal to '+' or array element 0
		{
			question = y + x; // question is set to this

			cout << y << "+" << x << endl; // outputs the question 
			cout << "please enter the answer" << endl;

			cin >> answer;

			if (answer == question)//if user answers correctly
			{

				correct = true;
				if (correct == true)
				{
					correctCounter++;
				}
				numOfQuestions++;
				cout << "Congratulations your answer is correct" << endl;

			}
			else if (answer != question)
			{
				correct = false;

				cout << "you have one chance remaining" << endl;

				cout << y << "+" << x << endl; // outputs the question 

				cout << "please enter the answer" << endl;

				cin >> answer;

				if (answer == question)
				{

					correct = true;
					if (correct == true)
					{
						correctCounter++;
					}
					numOfQuestions++;
					cout << "Congratulations your answer is correct" << endl;
					cout << correctCounter << endl;
					correctAnswerPercentage = correctCounter / 10 * 100;


				}
				else if (answer != question)
				{
					correct = false;
					cout << "You are out of chances" << endl;
					numOfQuestions++;
					cout << correctCounter << endl;
					correctAnswerPercentage = correctCounter / 10 * 100;

				}
			}
		}
		else if (mathOperator[randomIndex[0]] == mathOperator[1]) // if random array index picker is equal to '-' or array element 1
		{
			question = y - x;

			cout << y << "-" << x << endl;

			cout << "please enter the answer" << endl;

			cin >> answer;

			if (answer == question) //if user answers correctly
			{

				correct = true;
				if (correct == true)
				{
					correctCounter++;
				}
				numOfQuestions++;
				cout << "Congratulations your answer is correct" << endl;
				cout << correctCounter << endl;
				correctAnswerPercentage = correctCounter / 10 * 100;

			}
		}
		else if (answer != question)
		{
			correct = false;
			cout << "you have one chance remaining" << endl;

			cout << y << "+" << x << endl; // outputs the question 

			cout << "please enter the answer" << endl;

			cin >> answer;
			if (answer == question)
			{
				correct = true;
				if (correct == true)
				{
					correctCounter++;
				}
				numOfQuestions++;
				cout << "Congratulations your answer is correct" << endl;
				cout << correctCounter << endl;
				correctAnswerPercentage = correctCounter / 10 * 100;

			}
			else if (answer != question)
			{
				correct = false;
				cout << "You are out of chances" << endl;
				numOfQuestions++;
				cout << correctCounter << endl;
				correctAnswerPercentage = correctCounter / 10 * 100;
			}
		}
		if (numOfQuestions >= 10) {
			cout << "your percentage of correct answers is: " << correctAnswerPercentage << "%" << endl;
			cout << "this quiz is now complete" << endl;
			break;
		}
	}
}

void normalMode()
{
	srand(time(NULL)); //set random seed
	while (numOfQuestions != 10)
	{

		int y = rand() % 100 + 1; //get random number between 1 and 10
		int x = rand() % 100; //^^
		shuffle(randomIndex, 2);
		if (mathOperator[randomIndex[0]] == mathOperator[0]) // if random array index picker is equal to '+' or array element 0
		{
			question = y + x; // question is set to this

			cout << y << "+" << x << endl; // outputs the question 
			cout << "please enter the answer" << endl;

			cin >> answer;

			if (answer == question)//if user answers correctly
			{

				correct = true;
				if (correct == true)
				{
					correctCounter++;
				}
				numOfQuestions++;
				cout << "Congratulations your answer is correct" << endl;

			}
			else if (answer != question)
			{
				correct = false;

				cout << "you have one chance remaining" << endl;

				cout << y << "+" << x << endl; // outputs the question 

				cout << "please enter the answer" << endl;

				cin >> answer;

				if (answer == question)
				{

					correct = true;
					if (correct == true)
					{
						correctCounter++;
					}
					numOfQuestions++;
					cout << "Congratulations your answer is correct" << endl;
					cout << correctCounter << endl;
					correctAnswerPercentage = correctCounter / 10 * 100;


				}
				else if (answer != question)
				{
					correct = false;
					cout << "You are out of chances" << endl;
					numOfQuestions++;
					cout << correctCounter << endl;
					correctAnswerPercentage = correctCounter / 10 * 100;

				}
			}
		}
		else if (mathOperator[randomIndex[0]] == mathOperator[1]) // if random array index picker is equal to '-' or array element 1
		{
			question = y - x;

			cout << y << "-" << x << endl;

			cout << "please enter the answer" << endl;

			cin >> answer;

			if (answer == question) //if user answers correctly
			{

				correct = true;
				if (correct == true)
				{
					correctCounter++;
				}
				numOfQuestions++;
				cout << "Congratulations your answer is correct" << endl;
				cout << correctCounter << endl;
				correctAnswerPercentage = correctCounter / 10 * 100;

			}
		}
		else if (answer != question)
		{
			correct = false;
			cout << "you have one chance remaining" << endl;

			cout << y << "+" << x << endl; // outputs the question 

			cout << "please enter the answer" << endl;

			cin >> answer;
			if (answer == question)
			{
				correct = true;
				if (correct == true)
				{
					correctCounter++;
				}
				numOfQuestions++;
				cout << "Congratulations your answer is correct" << endl;
				cout << correctCounter << endl;
				correctAnswerPercentage = correctCounter / 10 * 100;

			}
			else if (answer != question)
			{
				correct = false;
				cout << "You are out of chances" << endl;
				numOfQuestions++;
				cout << correctCounter << endl;
				correctAnswerPercentage = correctCounter / 10 * 100;
			}
		}
		if (numOfQuestions >= 10) {
			cout << "your percentage of correct answers is: " << correctAnswerPercentage << "%" << endl;
			cout << "this quiz is now complete" << endl;
			break;
		}
	}
}

void hardMode()
{
	srand(time(NULL)); //set random seed
	while (numOfQuestions != 10)
	{

		int y = rand() % 10000 + 1; //get random number between 1 and 10
		int x = rand() % 10000; //^^
		shuffle(randomIndex, 2);
		if (mathOperator[randomIndex[0]] == mathOperator[0]) // if random array index picker is equal to '+' or array element 0
		{
			question = y + x; // question is set to this

			cout << y << "+" << x << endl; // outputs the question 
			cout << "please enter the answer" << endl;

			cin >> answer;

			if (answer == question)//if user answers correctly
			{

				correct = true;
				if (correct == true)
				{
					correctCounter++;
				}
				numOfQuestions++;
				cout << "Congratulations your answer is correct" << endl;

			}
			else if (answer != question)
			{
				correct = false;

				cout << "you have one chance remaining" << endl;

				cout << y << "+" << x << endl; // outputs the question 

				cout << "please enter the answer" << endl;

				cin >> answer;

				if (answer == question)
				{

					correct = true;
					if (correct == true)
					{
						correctCounter++;
					}
					numOfQuestions++;
					cout << "Congratulations your answer is correct" << endl;
					cout << correctCounter << endl;
					correctAnswerPercentage = correctCounter / 10 * 100;


				}
				else if (answer != question)
				{
					correct = false;
					cout << "You are out of chances" << endl;
					numOfQuestions++;
					cout << correctCounter << endl;
					correctAnswerPercentage = correctCounter / 10 * 100;

				}
			}
		}
		else if (mathOperator[randomIndex[0]] == mathOperator[1]) // if random array index picker is equal to '-' or array element 1
		{
			question = y - x;

			cout << y << "-" << x << endl;

			cout << "please enter the answer" << endl;

			cin >> answer;

			if (answer == question) //if user answers correctly
			{

				correct = true;
				if (correct == true)
				{
					correctCounter++;
				}
				numOfQuestions++;
				cout << "Congratulations your answer is correct" << endl;
				cout << correctCounter << endl;
				correctAnswerPercentage = correctCounter / 10 * 100;

			}
		}
		else if (answer != question)
		{
			correct = false;
			cout << "you have one chance remaining" << endl;

			cout << y << "+" << x << endl; // outputs the question 

			cout << "please enter the answer" << endl;

			cin >> answer;
			if (answer == question)
			{
				correct = true;
				if (correct == true)
				{
					correctCounter++;
				}
				numOfQuestions++;
				cout << "Congratulations your answer is correct" << endl;
				cout << correctCounter << endl;
				correctAnswerPercentage = correctCounter / 10 * 100;

			}
			else if (answer != question)
			{
				correct = false;
				cout << "You are out of chances" << endl;
				numOfQuestions++;
				cout << correctCounter << endl;
				correctAnswerPercentage = correctCounter / 10 * 100;
			}
		}
		if (numOfQuestions >= 10) {
			cout << "your percentage of correct answers is: " << correctAnswerPercentage << "%" << endl;
			cout << "this quiz is now complete" << endl;
			break;
		}
	}
}