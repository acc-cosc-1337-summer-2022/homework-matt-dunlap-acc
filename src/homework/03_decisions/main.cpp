//write include statements
#include "decisions.h"
#include<iostream>

using std::cout;
using std::cin;

int main() 
{
	string letter_grade;
	
	int credit_hours, 
		credit_hours_sum, 
		credit_points_sum;

	char continue_input = 'n';

	do {
		cout << "Enter letter grade: ";
		cin >> letter_grade;
		cout << "Enter credit hours: ";
		cin >> credit_hours;

		credit_hours_sum = credit_hours;
		cout << "Credit hours sum" << credit_hours_sum;
		credit_points_sum = credit_hours * get_grade_points(letter_grade);
		cout << "Credit points sum" << credit_points_sum;

		cout << "Continue input? <y/n> ";
		cin >> continue_input;


	} while (continue_input == 'y');

	cout << "Credit hours: " << credit_hours_sum;
	cout << "Credit points: " << credit_points_sum;
	cout << "Your GPA is: " << calculate_gpa(credit_hours_sum, credit_points_sum);
	
	return 0;
}