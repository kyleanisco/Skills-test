#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main(){
    double pay; 
	double grossInc; 
	double netInc;
	double schoolAmt; 
	double bondsAmt;
    double clothesAmt, parentsBondsAmt, hours;
    
    const double TaxRate = 0.14;
    const double ClothesPercentageOfInc = 0.10;
    const double SchooPercentageOfInc = 0.01;
    const double SavingBonds = 0.25;
    const double ParentsContribution = 0.50;
    
    cout << "How many hours did you work?"<<endl;
    cin >> hours;
    
    cout << "What is your the hourly rate?"<<endl;
    cin >> pay;
    
    grossInc = hours * pay;
    netInc = grossInc *= TaxRate;
    clothesAmt = netInc * ClothesPercentageOfInc;
    schoolAmt = netInc * SchooPercentageOfInc;
    netInc -= (clothesAmt + schoolAmt);
    bondsAmt = netInc * SavingBonds;
    parentsBondsAmt = bondsAmt* ParentsContribution;
    
    cout << fixed << showpoint << setprecision(2);
    cout<< "============================================= \n"; 
    cout << "Gross Income: $" << grossInc << endl;
      
    cout << "Net Income: $" << netInc << endl;
	       
    cout << "Clothes & Accessories: $" << clothesAmt << endl;
	
    cout << "School Supplies: $" << schoolAmt << endl;
	       
    cout << "Savings Bonds: $" << bondsAmt << endl;
      
    cout << "Parents Bonds Co-Contribution: $" <<parentsBondsAmt << endl;
    cout<< "============================================= \n";  
    
    _getch();
    return 0;
}
