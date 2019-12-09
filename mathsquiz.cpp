#include <iostream>
#include <time.h> 
#include <string>
using namespace std;
void easyMode(modeChoice);
char modeChoice;
int y;
int x;
string mathOperator[2] = { "+" , "-" };
int randomIndex[2] = {1,2};
int question;
int numOfQuestions = 1;
int answer;
bool correct;
int correctCounter = 0;
int correctAnswerPercentage = correctCounter / numOfQuestions * 100;

void shuffle(int randomIndex[], int len){
  int temp =0;
  int random = 0;
  
  for(int i = 0; i < len; i++){
    random = rand() % len;
    temp = randomIndex[i];
    randomIndex[i] = randomIndex[random];
    randomIndex[random] = temp;
  }
}

void modechanger(char modeChoice){
	
	cout << "Before the game starts you have been gifted the option of changing the mode in which you play this game" << endl;
	cout << "Your options are as follows: " << endl;
	cout << "Easy mode where you only have to answer questions using 2 digit numbers" << endl;
    cout << "Normal mode where you will have to answer questions using 2 and 3 digit numbers" << endl;
    cout << "Hard mode where you will have to answer questions using up to 4 digit numbers" << endl;
	cout << "===========================================================" << endl;
	cout << "===========================================================" << endl;
	cout << "'E' for Easy " << endl;
	cout << "'N' for Normal" << endl;
	cout << "'H' for Hard" << endl;
	cout << "Make your choice now" << endl;
	cin >> modeChoice;

	if (modeChoice == 'H')
	{
		hardMode(modeChoice);
	} 
	else if (modeChoice == 'N')
	{
        normalMode(modeChoice);
	}
	else if (modeChoice == 'E')
	{
		easyMode(modeChoice);
	}
}

void normalMode (char modeChoice)
{
    srand(time(NULL)); //set random seed
	int y = rand() % 100 + 1; //get random number between 1 and 100
    srand(time(NULL)); //set random seed
	int x = rand() % 100 + 1; //get random number between 1 and 100
}

void hardMode (char modeChoice)
{
    srand(time(NULL)); //set random seed
	int y = rand() % 1000 + 1; //get random number between 1 and 1000
    srand(time(NULL)); //set random seed
	int x = rand() % 100 + 1; //get random number between 1 and 1000
}

int main(){
    modechanger(modeChoice);
    return 0;
}
void easyMode(char modeChoice)
{
	while (numOfQuestions != 10)
	{
		srand(time(NULL)); //set random seed
		int y = rand() % 10 + 1; //get random number between 1 and 10
		srand(time(NULL)); //set random seed
		int x = rand() % 10 + 1; //get random number between 1 and 10
		shuffle(randomIndex, 2);
		if (mathOperator[randomIndex[1]] == mathOperator[0]) // if random array index picker is equal to '+' or array element 0
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
				cout << "Congratulations your answer is correct" << endl;
				numOfQuestions++;
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
					correct = true;
					if (correct == true)
					{
						correctCounter++;
					}
					cout << "Congratulations your answer is correct" << endl;
					numOfQuestions++;
				}
				else if (answer != question)
				{
					cout << "You are out of chances" << endl;
					numOfQuestions++;
				}
			}
		}
		else if (mathOperator[randomIndex[1]] == mathOperator[1]) // if random array index picker is equal to '-' or array element 1
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
				cout << "Congratulations your answer is correct" << endl;
				numOfQuestions++;
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
				correct = true;
				if (correct == true)
				{
					correctCounter++;
				}
				cout << "Congratulations your answer is correct" << endl;
				numOfQuestions++;
			}
			else if (answer != question)
			{
				cout << "You are out of chances" << endl;
				numOfQuestions++;
			}
		}

	}
}

