/***************************************************************************************************************************************************************************
Program Filename: 1.cpp 
Author: Allison Skinner
Date: 10/10/2019
Description: This program calculates and outputs the user's gross income, taxes, and remaining income after taxes from reading input from the user for the following:
monthly salary, number of months worked in a year, the cost of the car, the number of cars sold, number of misconducts observed, in which tax year, and in which state.
Input: Integers and characters
Output: Floats, integers, characters, and strings
****************************************************************************************************************************************************************************/

#include <iostream> //cin and cout
#include <cstdlib> //rand and srand
#include <ctime> //time
#include <cmath>//pow

using namespace std;

int main()
{
	//initialize variables
	int monthSalary = 0, months = 0, cost = 0, numCars = 0, misconducts = 0, deduction =0, annualSalary = 0, taxYear = 0, profit = 0, minPrice = 0, maxPrice = 0, income =0, balance=0; 
	float avgPrice = 0, taxes=0;
	char state = 0, a=0, b=0, c=0;
	srand(time(NULL)); //initialize random seed


	cout << "Enter your monthly salary: ";
	cin >> monthSalary; //gets user's monthly salary

	cout << "Enter the number of months you worked in the past year: ";
	cin >> months; //gets user's number of months worked
	
	cout << "Enter the cost of the car: ";
	cin >> cost; //gets user's cost of car

	cout << "Enter the number of cars you've sold in the past year: ";
	cin >> numCars; //gets user's number of cars sold

	cout << "Enter the number of misconducts observed in the past year: ";
	cin >> misconducts; //gets user's number of misconducts observed

	cout << "Which tax year are you in, 1 for 2017, 2 for 2018: ";
	cin >> taxYear; //gets user's tax year

	cout << "Which state are you in, enter a, b, or c: ";
	cin >> state; //gets user's state


	//calculate deduction
	deduction = 100 * pow(2, misconducts - 1);
	//cout << deduction << endl;

	//calculate annnual salary
	annualSalary = monthSalary * months;
	//cout << annualSalary << endl;

	//calculate average selling price
	minPrice = cost * 1.05;
	maxPrice = cost * 1.1;
	avgPrice = (((rand() % (maxPrice - minPrice)) + minPrice)); //randomly generate a number that is 5% - 10% above the cost
	//cout << avgPrice << endl;
	cout << "The average selling price, generated randomly, is: $" << avgPrice << endl;

	//calculate profit
	profit = numCars * (avgPrice - cost);
	//cout << profit << endl;

	//calculate gross income
	income = (annualSalary + (0.02 * profit)-deduction);
	cout << "Your gross income is: $"<< income << endl;


	//taxes and remaining balance
	//tax year 2017
	if (taxYear == 1 && state == 'a') {
		//cout << "You'll pay 6% of your income" << endl;
		taxes = (0.06 * income); //calculate taxes
		cout << "The tax you'll need to pay is: $"<< taxes << endl;
		balance = income - taxes; //calculate remaining balance
		cout << "Your remaining balance: $" << balance << endl;
	}
	if (taxYear == 1 && state == 'b' && income<2000) {
		//cout << "You'll pay $0" << endl;
		taxes = 0;
		cout << "The tax you'll need to pay is: $" << taxes << endl;
		balance = income - taxes; //calculate remaining balance
		cout << "Your remaining balance: $" << balance << endl;
	}
	if (taxYear == 1 && state == 'b' && income>2000 && income < 10000) {
		//cout << "You'll pay $100" << endl;
		taxes = 100;
		cout << "The tax you'll need to pay is: $" << taxes << endl;
		balance = income - taxes; //calculate remaining balance
		cout << "Your remaining balance: $" << balance << endl;	
	}
	if (taxYear == 1 && state == 'b' && income > 10000) {
		//cout << "You'll pay 10%, plus $100" << endl;
		taxes = ((0.1 * income) + 100); //calculate taxes
		cout << "The tax you'll need to pay is: $" << taxes << endl;
		balance = income - taxes; //calculate remaining balance
		cout << "Your remaining balance: $" << balance << endl;
	}
	if (taxYear == 1 && state == 'c' && income >0 && income<3500) {
		//cout << "You'll pay 5%" << endl;
		taxes = (0.5 * income); //calculate taxes
		cout << "The tax you'll need to pay is: $" << taxes << endl;
		balance = income - taxes; //calculate remaining balance
		cout << "Your remaining balance: $" << balance << endl;
	}
	if (taxYear == 1 && state == 'c' && income >3500 && income < 9000) {
		//cout << "You'll pay 7%, plus $175" << endl;
		taxes = ((0.7 * income) + 175); //calculate taxes
		cout << "The tax you'll need to pay is: $" << taxes << endl;
		balance = income - taxes; //calculate remaining balance
		cout << "Your remaining balance: $" << balance << endl;
	}
	if (taxYear == 1 && state == 'c' && income > 9000 && income < 125000) {
		//cout << "You'll pay 9%, plus $560" << endl;
		taxes = ((0.9 * income) + 560); //calculate taxes
		cout << "The tax you'll need to pay is: $" << taxes << endl;
		balance = income - taxes; //calculate remaining balance
		cout << "Your remaining balance: $" << balance << endl;
	}
	if (taxYear == 1 && state == 'c' && income > 125000) {
		//cout << "You'll pay 9.9%, plus $11,000" << endl;
		taxes = ((0.099 * income) + 11000); //calculate taxes
		cout << "The tax you'll need to pay is: $" << taxes << endl;
		balance = income - taxes; //calculate remaining balance
		cout << "Your remaining balance: $" << balance << endl;
	}

	//tax year 2018
	if (taxYear == 2 && state == 'a') {
		//cout << "You'll pay 8% of your income" << endl;
		taxes = (0.8 * income); //calculate taxes
		cout << "The tax you'll need to pay is: $" << taxes << endl;
		balance = income - taxes; //calculate remaining balance
		cout << "Your remaining balance: $" << balance << endl;
	}
	if (taxYear == 2 && state == 'b' && income < 2500) {
		//cout << "You'll pay $0" << endl;
		taxes = 0;
		cout << "The tax you'll need to pay is: $" << taxes << endl;
		balance = income - taxes; //calculate remaining balance
		cout << "Your remaining balance: $" << balance << endl;
	}
	if (taxYear == 2 && state == 'b' && income >2500 && income < 10000) {
		//cout << "You'll pay $115" << endl;
		taxes = 115;
		cout << "The tax you'll need to pay is: $" << taxes << endl;
		balance = income - taxes; //calculate remaining balance
		cout << "Your remaining balance: $" << balance << endl;
	}
	if (taxYear == 2 && state == 'b' && income > 10000) {
		//cout << "You'll pay 10.5%, plus $115" << endl;
		taxes = ((0.105* income) + 115); //calculate taxes
		cout << "The tax you'll need to pay is: $" << taxes << endl;
		balance = income - taxes; //calculate remaining balance
		cout << "Your remaining balance: $" << balance << endl;
	}
	if (taxYear == 2 && state == 'c' && income>0 && income < 3450) {
		//cout << "You'll pay 5%" << endl;
		taxes = (0.5 * income); //calculate taxes
		cout << "The tax you'll need to pay is: $" << taxes << endl;
		balance = income - taxes; //calculate remaining balance
		cout << "Your remaining balance: $" << balance << endl;
	}
	if (taxYear == 2 && state == 'c' && income> 3450 && income < 8700) {
		//cout << "You'll pay 7%, plus $172.5" << endl;
		taxes = ((0.7 *income) + 172.5); //calculate taxes
		cout << "The tax you'll need to pay is: $" << taxes << endl;
		balance = income - taxes; //calculate remaining balance
		cout << "Your remaining balance: $" << balance << endl;
	}
	if (taxYear == 2 && state == 'c' && income > 8700 && income < 125000) {
		//cout << "You'll pay 9%, plus $540" << endl;
		taxes = ((0.9 * income) + 540); //calculate taxes
		cout << "The tax you'll need to pay is: $" << taxes << endl;
		balance = income - taxes; //calculate remaining balance
		cout << "Your remaining balance: $" << balance << endl;
	}
	if (taxYear == 2 && state == 'c' && income > 125000) {
		//cout << "You'll pay 9.9%, plus $11,007" << endl;
		taxes = ((0.099 * income) + 11007); //calculate taxes
		cout << "The tax you'll need to pay is: $" << taxes << endl;
		balance = income - taxes; //calculate remaining balance
		cout << "Your remaining balance: $" << balance << endl;		
	}
}


