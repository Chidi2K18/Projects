#include <iostream>
using namespace std;
/*This is a note for future me so that you at least have context for this program
this is a program for company employees to work out how much taxt that are due to pay
*/
int main(){
    int taxCode;
    int taxThreshold = 10 * taxCode;
    int annualGrossPay; //pleae note that 'annual' in this instance is monthly
    int annualTaxDue;
    cout << "please enter your tax code" << endl;
    cin >> taxCode;
    cout << "please enter your annual gross pay" << endl;
    cin >> annualGrossPay;
    if (annualGrossPay < taxThreshold){
        annualTaxDue = 0;
        cout << "no tax due" << endl;
    }
    if (annualGrossPay > taxThreshold){
        annualTaxDue = annualGrossPay - taxThreshold * 0.2;
        cout << "Your annual tax is: " << annualTaxDue << endl;
    }
    return 0;
}