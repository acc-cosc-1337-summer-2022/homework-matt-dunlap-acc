//write include statements
#include "decisions.h"
#include<iostream>

using std::cout;
using std::cin;

int main() 
{
	string letter_grade;
	
	int credit_hours = 0;
	int credit_hours_sum = 0;
	int credit_points_sum = 0;

	char continue_input = 'n';

	do {
		cout << "Enter letter grade: ";
		cin >> letter_grade;
		
		cout << "Enter credit hours: ";
		cin >> credit_hours;

		credit_hours_sum += credit_hours;
		credit_points_sum += credit_hours * get_grade_points(letter_grade);

		cout << "Continue input? <y/n> ";
		cin >> continue_input;


	} while (continue_input == 'y');

	cout << "Your GPA is: " << calculate_gpa(credit_hours_sum, credit_points_sum);
	
	return 0;
}