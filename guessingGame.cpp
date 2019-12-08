#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void theGame(int guessCounter, char modeChoice);

int numberPicker[100] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100};
int randomIndex[100] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100};
int low = 25;
int high = 75;
int midHigh = 87;
int midlow = 12;
int mid = 50;
int guess;
int guessCounter = 1;
int maximum = 101;
int minimum = 1;
char modeChoice;

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

void scoringSystem(int guessCounter){
	
	if (guessCounter <= 3)
	{
		cout << "It took  you " << guessCounter << " tries to reach the answer so your grade is an A" << endl;
	} 
	
	else if (guessCounter <=6 && guessCounter > 3)
	
	{
		cout << "It took  you " << guessCounter << " tries to reach the answer so your grade is a B" << endl;
	} 
	
	else if (guessCounter <=9 && guessCounter> 6)
	
	{
		cout << "It took  you " << guessCounter << " tries to reach the answer so your grade is a C" << endl;
	}

	else if (guessCounter > 9)
	{
		cout << "It took you more than 9 tries so your grade is a U" << endl;
	}
	
}

void modechanger(char modeChoice){
	
	cout << "Before the game starts you have been gifted the option of changing the mode in which you play this game" << endl;
	cout << "Your options are as follows: " << endl;
	cout << "To play this game as origninally intended easy mode is available and you will be able to see exactly how far away you are from the correct answer " << endl;
	cout << "For those who wish for a slight challenge normal mode is available to you and you will essentially be playing a game of hot or cold" << endl;
	cout << "For the TRUE gamers!!!! there is Extreme mode and in here there will be no assistance no hot or cold no exact numbers AND you are limited to only 20 guesses Enter at your own risk " << endl;
	cout << "Finally for the Criminally insane there will be no assistance AND the number you are trying to guess will constantly change HOWEVER I am not without mercy your are free to guess to your hearts content" << endl;
	cout << "===========================================================" << endl;
	cout << "===========================================================" << endl;
	cout << "'S' for Standard " << endl;
	cout << "'N' for Normal" << endl;
	cout << "'E' for Extreme" << endl;
	cout << "'I' for Insanity" << endl;
	cout << "Make your choice now" << endl;
	cin >> modeChoice;

	if (modeChoice == 'S')
	{
		theGame(guessCounter, modeChoice);
	} 
	else if (modeChoice == 'N')
	{
		theGame(guessCounter, modeChoice);
	}
	else if (modeChoice == 'E')
	{
		theGame(guessCounter, modeChoice);
	}
	else if (modeChoice == 'I')
	{
		theGame(guessCounter, modeChoice);
	}
}

void theGame(int guessCounter, char modeChoice){
	
	switch (modeChoice)
	{
	case 'S':
	srand(time(NULL));
	shuffle(randomIndex, 100);
	cout << "Welcome Standard mode here you will be assisted with your guesses" << endl;
	cout << "A number between 1 and 100 has been chosen" << endl;
	cout << "Please enter your guess" << endl;
	cin >> guess;
		while (guess != numberPicker[randomIndex[1]]) {
		guessCounter++;
		
		if (guess > numberPicker[randomIndex[1]])

		{
			cout << "Your guess was too high you were +"<< guess - numberPicker[randomIndex[1]] << " too high"<< endl;
		} 
		
		else if (guess < numberPicker[randomIndex[1]])
		
		{
			cout << "Your guess was too low, you were "<< numberPicker[randomIndex[1]] - guess << " too low"<< endl;
		} 

		cin >> guess;
	} 
		
	
	if (guess == numberPicker[randomIndex[1]]) {
			cout << "well done you got it correctly and it took you " << guessCounter << " tries" << endl;
	}
	scoringSystem(guessCounter);
		break;
	
	case 'N':
	srand(time(NULL));
	shuffle(randomIndex, 100);
	cout << "Welcome to normal mode here the assistance you recieve will be more abiguous, Good luck!!" << endl;
	cout << "A number between 1 and 100 has been chosen" << endl;
	cout << "Please enter your guess" << endl;
	cin >> guess;
	
		while (guess != numberPicker[randomIndex[1]]) 
		{
		
		guessCounter++;
		
		
		if (numberPicker[randomIndex[1]] >= high && guess != numberPicker[randomIndex[1]])
		{	
			if (guess >= high && guess < maximum && guess != numberPicker[randomIndex[1]])
			{
				cout << "You are warm, your guess is close (guess higher)" << endl;
			} 
			else if (guess <= high && guess != numberPicker[randomIndex[1]])
			{
				cout << "You are colder, guess again (guess higher)" << endl;
			}
			else if (guess <= low && guess != numberPicker[randomIndex[1]])
			{
				cout << "You are very cold try to heat up (guess higher)" << endl;
			}
			else if (guess >= low && guess <= mid && guess != numberPicker[randomIndex[1]])
			{
				cout << "your guess is cold lukewarm (guess higher)" << endl;
			}
			else if (guess >= mid && guess <= high && guess != numberPicker[randomIndex[1]])
			{
				cout << "your guess is warm lukewarm (guess higher)" << endl;
			} 
			else 
			{
				cout << "I said 1-100 you MUPPET!!!\n";
			}
			 
		} 
		
		else if (numberPicker[randomIndex[1]] <= low && guess != numberPicker[randomIndex[1]])
		{
			if (guess >= high && guess != numberPicker[randomIndex[1]])
			{
				cout << "You are Very cold try to heat up (guess lower)" << endl;
			} 
			else if (guess <= low && guess != numberPicker[randomIndex[1]])
			{
				cout << "You are warm, your guess is close" << endl;
			}
			else if (guess >= low && guess <= mid && guess != numberPicker[randomIndex[1]])
			{
				cout << "your guess is lukewarm your on the right track (guess lower)" << endl;
			}
			else if (guess <= high && guess >= mid && guess != numberPicker[randomIndex[1]])
			{
				cout << "your guess is cold lukewarm (guess lower)" << endl;
			}
			else if (guess <= minimum)
			{
				cout << "I said 1 - 100 you MUPPET" << endl;
			}
		}
		cin >> guess;
		
		} 
		
		if (guess == numberPicker[randomIndex[1]]) 
		{
			cout << "well done you got it correctly and it took you " << guessCounter << " tries" << endl;
		}
		scoringSystem(guessCounter);
		break;
	case 'E':
	srand(time(NULL));
	shuffle(randomIndex, 100);
	cout << "Welcome to Extreme mode here you will not be assisted and you are limited to 20 guesses best of luck to you Gamer" << endl;
	cout << "A number between 1 and 100 has been chosen" << endl;
	cout << "Please enter your guess" << endl;
	cin >> guess;
	
		while (guess != numberPicker[randomIndex[1]]) {
		cout << numberPicker[randomIndex[1]] << endl;
		guessCounter++;

		if (guess == 'X')
		{
			break;
		}
		
		cin >> guess;
		
		if (guessCounter >= 20){
			cout << "you have used your alotted 20 guesses the game will now end" << endl;
			break;
		}
		} 
	
	if (guess == numberPicker[randomIndex[1]]) {
			cout << "well done you got it correctly and it took you " << guessCounter << " tries" << endl;
	}
	scoringSystem(guessCounter);
		break;
	
	case 'I':
	cout << "Welcome to INSANE mode here you will not be assisted and the number you are guessing for will change each guess you make" << endl;
	cout << "Because I am a kind soul you are able to admit defeat at any point by making your guess 'X'" << endl;
	cout << "A number between 1 and 100 has been chosen" << endl;
	cout << "Please enter your guess" << endl;
	cin >> guess;
	srand(time(NULL));
	shuffle(randomIndex, 100);
		while (guess != numberPicker[randomIndex[1]]) {
		shuffle(randomIndex, 100);
		cout << numberPicker[randomIndex[1]] << endl;
		guessCounter++;

		if (guess == 'X' || guess == 'x')
		{
			break;
		}
		
		cin >> guess;
		} 
		
	
	if (guess == numberPicker[randomIndex[1]]) {
			cout << "well done you got it correctly and it took you " << guessCounter << " tries" << endl;
	}
	scoringSystem(guessCounter);
		break;
	}
	
}

int main() {
	modechanger(modeChoice);
	theGame(guessCounter, modeChoice);
return 0;

}
// problem that I ran into is that for some reason the whole shuffle thing doesnt seem to work
// problem
//if x number is > midhigh && guess is > midhigh aswll (guess higher)
//if x number is < midhigh && > mid && guess > mid (guess higher)