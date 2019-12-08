/*This is a grading program where the user inputs the grade boundaries and their marks
as an integer and the system will compare their marks to the grade boundaries and output their grade making this system applicable in any situation
(this solution is inefficient and is in need of refinement*/
#include <iostream> // access input and output on the console
#include <string> // this allow access to string functionality and output
using namespace std; // this declares use of a standard library

int main() {
	/*Lines 12-18 are the variables and as the system compiles them they are empty
	until the user inputs the value they wish to store in them. 
	Line 19 is the variable store for the students score which the system will compare to the values stored grade boundary variables*/
	int fUBoundary; 
	int eBoundary;
	int dBoundary;
	int cBoundary;
	int bBoundary;
	int aBoundary;
	int aStarBoundary;
	int studentScore;
	/* Lines 23,26,29,32,35,38 and 41 show the system asking the user to input the integer for the grade boundaries.
	   Lines 25,28,31,34,37 and 40 show the system storing the input that the user has made into the variables listed above.
	   Lines 45 and 47 show the system asking the user to input their marks or score (45) and storing the input into the studentScore variable(47)*/
	cout << "Enter grade boundary for F/U: " << endl;

	cin >> fUBoundary;
	cout << "Enter grade boundary for E: " << endl;

	cin >> eBoundary;
	cout << "Enter grade boundary for D: " << endl;

	cin >> dBoundary;
	cout << "Enter grade boundary for C: " << endl;

	cin >> cBoundary;
	cout << "Enter grade boundary for B: " << endl;

	cin >> bBoundary;
	cout << "Enter grade boundary for A: " << endl;

	cin >> aBoundary;
	cout << "Enter grade boundary for A*: " << endl;

	cin >> aStarBoundary;

	cout << "Enter students score: " << endl;

	cin >> studentScore;
	/* lines 52-67 show the comparisons that will be taking place in the system to output the users grade 
	(note to self if there need to be multiple comparisons after the first "if" then they are to be "else if")
	the system will compare the students score with the grade boundaries 
	if their score is greater than or equal to the boundaries then they have achieved that grade or less than or equal to the fail boundary*/
	if (studentScore > aStarBoundary)
		cout << "Student got an A*" << endl;
	else if (studentScore >= aBoundary)
		cout << "Student got an A" << endl;
	else if (studentScore >= bBoundary)
		cout << "Student got an B" << endl;
	else if (studentScore >= cBoundary)
		cout << "Student got an C" << endl;
	else if (studentScore >= dBoundary)
		cout << "Student got an D" << endl;
	else if (studentScore >= eBoundary)
		cout << "Student got an E" << endl;
	else
	{
		(studentScore <= fUBoundary);
			cout << "Student got an F/U" << endl;
	} 
	system("pause"); // this will keep the console active after the program has completed its task
	return 0; // the console will output '0' to show that the program is running or has reached its conclusionhk
}