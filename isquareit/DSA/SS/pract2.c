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

void occurance_word(char* str){
	char copy[100];
	char* words[50];
	int total_words = 0;
	char* token;

	strcpy(copy, str);
	token = strtok(copy, " \n\t");
	while(token != NULL){
		words[total_words++] = token;
		token = strtok(NULL, " \n\t");
	}

	printf("The list of Occurances of each word in the string is as follows:\n");

	for(int i = 0; i < total_words; i++){
		int already_printed = 0;

		for(int j = 0; j < i; j++){
			if(strcmp(words[j], words[i]) == 0){
				already_printed = 1;
				break;
			}
		}

		if(already_printed){
			continue;
		}

		int count = 0;
		for(int k = 0; k < total_words; k++){
			if(strcmp(words[k], words[i]) == 0){
				count++;
			}
		}

		printf("%s: %d times.\n", words[i], count);
	}
} 

int main(){
	char str[100], sub_str[100];
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	palindrome(str);
	//fgets(sub_str, 100, stdin);
	occurance_word(strcpy(sub_str, str));
	
	return 0;
}
