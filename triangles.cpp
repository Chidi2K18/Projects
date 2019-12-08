#include <iostream>
#include <string>
using namespace std;

//This should now be Jake proof :)

/*Feedback from jake for previous implementation of this code:
I like the fact you have implemented functions, however you end up with duplicate code because of this. 
To resolve this I would get your angle inputs before running the function and pass the angles as function parameters. 
Passing the angles as parameters would also allow you to avoid declaring your variables globally. */

string triangle[4] = {"Equalateral", "Right-Angle", "Iscocelies", "Scaline"}; // simple array containing the names of the triangles as strings
int triangleangle = 180; // simple variable set to 180

double triangleType(double angleA, double angleB, double angleC){
	if (angleA == 60 && angleB == 60 && angleC == 60){ // this is for an equalateral triangle and all sides must be of equal length and equal to 180
		cout << triangle[0] << endl;
	}else if (angleA == angleB && angleC != angleA || angleB == angleC && angleA != angleB || angleC == angleA && angleB != angleC){ // this is for an iscocelies basically two angles are the same and one is different but sum of exterior angles must be 180
		if (angleA + angleB + angleC == triangleangle){
			cout << triangle[2] << endl;
		}
	}else if (angleA == 90 || angleB == 90 || angleC == 90)// this is for a right angle triangle and one angle must be 90 degrees and the total must be 180
	{
		if (angleA + angleB + angleC == triangleangle){
			cout << triangle[1] << endl;
		}
		
	}else if (angleA != angleB && angleC && angleB != angleA && angleC){ // this is for scaline basically none of the angles can be the same but must add up to 180
		if (angleA + angleB + angleC == triangleangle){
			cout << triangle[3] << endl;
		}

	}
	if (angleA + angleB + angleC > triangleangle){ // this is to ensure that if the total angles exceed 180 that an error occurs
		cout << "you may not be making a triangle here try to keep it within 180 total degrees" << endl;
	}
	return 0;
}

int main(){
	int angleA, angleB, angleC;
	cout << "please input your first angle" << endl;
	cin >> angleA;
	cout << "please input your second angle" << endl;
	cin >> angleB;
	cout << "please input your third angle" << endl;
	cin >> angleC;
	int triangleAngles = triangleType(angleA, angleB, angleC);
	return 0;
}
/*int iscocelies() {
	cout << "below you will be asked to input angles, please input angles that will make an iscocelies triangle" << endl;
	cout << "please enter angle 1" << endl;
	cin >> angle1;
	cout << "please enter angle 2" << endl;
	cin >> angle2;
	cout << "please enter angle 3" << endl;
	cin >> angle3;
	int angle5 = angle1 + angle2 + angle3;
	if (angle5 != angle4) {
		cout << "This is not an iscocilies triangle" << endl;
		cout << "The 3 angles you input must equal to 180 and two sides must be equal and the third mustnot be equal to the rest" << endl;
	}
	if (angle5 = angle4) {
		cout << "This is correct congratulations" << endl;
	}
	return 0;
}

int rightangle() {
	cout << "below you will be asked to input angles, please input angles that will make a right-angled triangle" << endl;
	cout << "please enter angle 1" << endl;
	cin >> angle1;
	cout << "please enter angle 2" << endl;
	cin >> angle2;
	cout << "please enter angle 3" << endl;
	cin >> angle3;
	int angle5 = angle1 + angle2 + angle3;
	if (angle5 != angle4) {
		cout << "This is not a right angle triangle" << endl;
		cout << "The 3 angles you input must equal to 180 and one side must have a 90 degree angle" << endl;
	}
	if (angle5 = angle4) {
		cout << "This is correct congratulations" << endl;
	}
	return 0;
}

int equilateral() {
	cout << "below you will be asked to input angles, please input angles that will make an equilateral triangle" << endl;
	cout << "please enter angle 1" << endl;
	cin >> angle1;
	cout << "please enter angle 2" << endl;
	cin >> angle2;
	cout << "please enter angle 3" << endl;
	cin >> angle3;
	int angle5 = angle1 + angle2 + angle3;
	if (angle5 != angle4) {
		cout << "This is not a right angle triangle" << endl;
		cout << "The 3 angles you input must equal to 180 and all sides must have the same length" << endl;
	}
	if (angle5 = angle4) {
		cout << "This is correct congratulations" << endl;
	}
	return 0;
}

int main() {
	int choice;
	cout << "please enter a number between 1 and 3. 1(for rightangle triangle), 2(for iscocelies triangle), 3(for equilateral triangle)" << endl; 
	cin >> choice;
	switch (choice)
	{
	case 1:
		rightangle();
		break;
	case 2:
		iscocelies();
		break;
	case 3:
		equilateral();
		break;
	}
}*/

