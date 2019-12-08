#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
#include <thread>
using namespace std;

//btw there is only one question and it is "what shall I eat tonight"
int main() {
	/*ofstream outfile;
	ifstream infile;
	string name;
	outfile.open("Magic 8 Ball savefile.txt");
	char startOrContinue;
	string question;
	string answer = out
	getline(cout, 1);
	cout << "Give the magic 8 Ball your question and you will be answered" << endl;
	cin >> question;
	cout << "The Magic 8 Ball is consulting the heavens for your answer" << endl;
	
	std::this_thread::sleep_for(std::chrono::seconds(7));//this creates a time delay
	cout << answer << endl;
	return 0;*/
	
	//below is just me experimenting with using external files
	ofstream outfile;
	ifstream infile;
	string name;
	int age;
	string hometown;
	outfile.open("savefile.txt");
	cin >> name;
	cin >> age;
	cin >> hometown;
	outfile << name << endl;
	outfile << age << endl;
	outfile << hometown << endl;
	infile >> name;
	infile >> age;
	infile >> hometown;
	cout << "your name is: " << name << endl;
	cout << "your age is: " << age << endl;
	cout << "your  is: " << hometown << endl;
	
	return 0;

}