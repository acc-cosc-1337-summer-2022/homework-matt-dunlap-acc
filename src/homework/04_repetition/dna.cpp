#include "dna.h"
														
//The GC-content of a DNA string is given by the percentage of symbols in the string that are 'C' or 'G'
double get_gc_content(const string& dna){
	
	double percentage = 0.0;
	int count = 0;
	
	for (char ch : dna){
		if (ch == 'C' || ch == 'G'){
			count += 1;
		}
	}
	
	if (count != 0){
		percentage = double(count) / dna.size();
	}
	
	return percentage;

}

string get_dna_complement(string dna){
	
	dna = reverse_string(dna);
	
	string complement = "";
	string symbol = "";
	
	for (int i = 0; i < dna.size() ; i++){
		
		symbol = dna[i];
		
		if (symbol == "A"){
			complement += "T";
		} else if (symbol == "T"){
			complement += "A";
		} else if (symbol == "C"){
			complement += "G";
		} else if (symbol == "G"){
			complement += "C";
		}
		
	}
	
	return complement;
	
}

string reverse_string(string dna){
	
	string reverse = "";
	
	for (int i = dna.size() - 1 ; i >= 0  ; i--){
		
		reverse += dna[i];
		
	}
	
	return reverse;

}