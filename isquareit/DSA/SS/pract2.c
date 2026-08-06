#include <stdio.h>
#include <string.h>

char* longest_word(char* str){
	char* word = strtok(str, " ");
	char* long_word = word;
	int long_len = 0;
	while(word != NULL){
		int c_len = strlen(word);
		if(c_len > long_len){
			long_len = c_len;
			long_word = word;
		}
		word = strtok(NULL, " ");
	}
	return long_word;
}

int count(char* sub_str, char* str){
	int count = 0;
	int sub_len = strlen(sub_str);
	for(int i = 0; i < strlen(str); i++){
		if(str[i] == sub_str[0]){
			int j = 0;
			while(j < sub_len && str[i+j] == sub_str[j]){
				j++;
			}
			if(j == sub_len){
				count++;
			}
		}
	}
	return count;
}

int palindrome(char str[]){
	int size = strlen(str) - 1;
	for(int i = 0, j = size - 1; i < size/2; i++, j--){
		if(str[i] != str[j]){
			printf("The Entered String is not a Palindrome.\n");
			return 0;
		}
	}
	printf("The Entered String is a Palindrome.\n");
	return 1;
}

int sub_string(char* sub_str, char*str){
	sub_str[strlen(sub_str) - 1] = '\0';
	return strstr(str, sub_str) - str;
}

/* void occurance_word(char* str){
	char* word = strtok(str, " ");
	printf("The list of Occurances of each word in the string is as follows:\n");
	while(word != NULL){
		printf("%s: %d times.\n", word, count(word, str));
		word = strtok(NULL, " ");
	}
} */

int main(){
	char str[100], sub_str[100];
	fgets(str, 100, stdin);
	palindrome(str);
	fgets(sub_str, 100, stdin);
	/* occurance_word(str); */
	printf("%d\n", sub_string(sub_str, str));
	
	return 0;
}
