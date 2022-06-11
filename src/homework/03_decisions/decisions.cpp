//write include statement for decisions header
#include "decisions.h"

//Write code for function(s) code here
int get_grade_points(string letter_grade){
    int result = 0;
    
    if (letter_grade == "A"){
        result = 4;
    } else if (letter_grade == "B"){
        result = 3;
    } else if (letter_grade == "C"){
        result = 2;
    } else if (letter_grade == "D"){
        result = 1;
    } 

    return result;
}

double calculate_gpa(int credit_hours, double credit_points){
    double result = -1.0;
    
    if (credit_hours != 0) {
        result = credit_points / credit_hours;
    }

    return result;
}