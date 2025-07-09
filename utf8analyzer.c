#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>

bool validity_check(char input[]) {
	// int index = 0;
	int len = strlen(input);
	// while(input[index] != 0) {
	for (int index = 0; index < len - 1; index += 1) {
	    char c = (char) input[index];
	    if((c & 0b10000000) != 0b00000000) { return false; }
	}
	return true;
}


void capitalizeLowerCaseLetter(char stringFromInput[]){
	int index =0; 
	while(stringFromInput[index]!= '\0'){
		char c = stringFromInput[index]; 
		if(c>='a'&& c<='z'){
			printf("%c",c-32);
		}
		else{
			printf("%c",c); 
		}

		index++;
	}
}



int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: utf8analyzer \"<UTF-8 encoded string>\"\n");
        return 1;
    }

    bool isvalid = validity_check(argv[1]);
    if (isvalid) { printf("Valid ASCII: true\n"); }
    else { printf("Valid ASCII: false\n"); }


    char supposedToReturn[] = "HELLO";
    capitalizeLowerCaseLetter(argv[1]);
    


}
    // implement the UTF-8 analyzer here


