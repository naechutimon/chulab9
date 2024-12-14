#include<iostream>
#include<iomanip> 
using namespace std;

int main(){
    
    double initial,rate,amount;
	cout << "Enter initial loan: ";
	cin>>initial;
	cout << "Enter interest rate per year (%): ";
	cin>>rate;
	cout << "Enter amount you can pay per year: ";
	cin>>amount;

    int year = 0;
    double balance=initial;
    
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total"; 
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
    cout << fixed << setprecision(2); 
    
    while (balance>0) {
        double interest = balance*(rate/100);
        double total = balance+interest;
        double payment = (total>amount)? amount : total;
        double newbalance = total-payment;
        year++;
        
        cout << setw(13) << left << year; 
	    cout << setw(13) << left << balance;
	    cout << setw(13) << left << interest;
	    cout << setw(13) << left << total;
	    cout << setw(13) << left << payment;
	    cout << setw(13) << left << newbalance;
	    cout << "\n";
	
	    balance = newbalance ;
    }
	
	return 0;
}




