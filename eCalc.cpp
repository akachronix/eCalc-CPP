// eCalc v1.2
// by Brendan Gowen
// https://www.github.com/thatoneguy107
//
// A exponent calculator.

#include <iostream>
#include <unistd.h>

using namespace std;

void Greeting()
{
	cout << "Welcome to eCalc v1.2." << endl;
	cout << "by Brendan Gowen" << endl;
	cout << "https://www.github.com/thatoneguy107\n" << endl;
}

void Ending()
{
	cout << "\nThanks for using eCalc v1.2." << endl;
}

void Delay(long double a)
{
	long double b;
	b = a * 1000;
	usleep(b);
}

long double GetValue(string question)
{
	long double input;
	cout << question << endl;
	cin >> input;
	cout << "\n";
	return input;
}

long double Multiply(long double a, long double b)
{
	long double answer;
	answer = a * b;
	return answer;
}

int main(void)
{
	Greeting();
	
	cout.precision(100);
	
	string Question1 = "What number do you what to multiply?";
	string Question2 = "To what power?";
	
	long double userNum;
	long double userNum2;
	long double userExponent;
	
	userNum = GetValue(Question1);
	userNum2 = userNum;
	userExponent = GetValue(Question2);
	
	long double i;
	i = 1;
	
	while (i < userExponent)
	{
		userNum = userNum * userNum2;
		i++;
	}
	
	cout << "The answer is: " << userNum << endl;
	
	Ending();
	
	Delay(2500);
	
	return 0;
}
