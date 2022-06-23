//write include statements
#include<iostream>
//write using statements
using std::string;
using std::cout;
using std::cin;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/

int main(){

	int option = 0;
	string dna = "y";
	string result = "";
	
	while (option != "y" && option != "Y"){
	
		cout<<"\nPlease enter 1 for GC Content or 2 for DNA Complement (y or Y to quit): ";
		cin>>option;
		
		if (option == 1 || option == 2){
			cout<<"\nPlease enter DNA sequence: ";
			cin>>dna;
			
			if (option == 1){
				result = get_gc_content(dna);
			} else if (option == 2){
				result = get_dna_complement(dna);
			}
			
			cout<<"\nResult: "<<result;
		}
		
	}
	
	return 0;
}