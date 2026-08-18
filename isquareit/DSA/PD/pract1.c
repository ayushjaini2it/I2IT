/* Write a C program to store marks scored in subject “Fundamental
of Data Structure” by N students in the class. Write functions to compute following:
a) The average score of class
b) Highest score and lowest score of class
c) Count of students who were absent for the test
d) Display mark with highest frequency
 */
 
#include <stdio.h>
 void average(int* marks, int n){
 	int total = 0, absent = 0;
 	for(int i = 0; i < n; i++){
 		if(marks[i] == -1){
 			absent++;
 			continue;
 		}
 		total += marks[i];
 	}
 	
 	float average = total/(n-absent)*1.00;
 	printf("Total Marks: %d\n", total);
 	printf("Average Marks: %.2f\n", average);
 }
 
 void min_max( int* marks, int n){
 	int highest = 0, lowest = 100; 
 	for(int i = 0; i < n; i++){
 		if(marks[i] > highest){
			highest = marks[i];
		}
		if((marks[i] < lowest) && marks[i] != -1){
			lowest = marks[i];
		}
 	}
 	printf("Maximum Marks scored: %d\n", highest);
 	printf("Minimum Marks scored: %d\n", lowest);
 }
 
 void absent(int* marks, int n){
 	int absent = 0;
 	for(int i = 0; i < n; i++){
 		if(marks[i] == -1){
			absent++;
		}
 	}
 	printf("Total number of absent students: %d\n", absent);
 }
 
 
 void high_freq(int* marks, int n){
 	int highest_freq = 0, highest_freq_marks;
 	for(int i = 0; i < n; i++){
		int frequency = 1;
		for(int j = 0; j < n; j++){
			if(marks[i] == marks[j] && i !=j){
				frequency++;
			}
			
		}
		if(frequency > highest_freq) {
			highest_freq_marks = marks[i];
			highest_freq = frequency;
		}
	}
	
	printf("Most frequently occuring marks are: %d\n", highest_freq_marks);
 }
 
int main(){
	int n;
	printf("Enter the Number of Students: ");
	scanf("%d", &n);
	int marks[n], choice;
	printf("Enter the marks of students (Enter -1 for absent):\n");
	for(int i = 0; i < n; i++){
		printf("\tEnter the marks of student %d: ", i+1);
		scanf("%d", &marks[i]);
	}
	printf("Enter your choice:\n1. Average Marks\n2. Minimum and Maximum Marks\n3. Total Absent Students\n4. Most Frequently Occuring Marks\n:");
	scanf("%d", &choice);
	switch(choice){
		case 1:
			average(marks,n);
			break;
		case 2:
			min_max(marks, n);
			break;
		case 3:
			absent(marks, n);
			break;
		case 4:
			high_freq(marks, n);
			break;
		default:
			printf("Invalid Choice");
	}
	
	return 0;
}

/* 
//OUTPUT:
Enter the Number of Students: 6
Enter the marks of students (Enter -1 for absent):
        Enter the marks of student 1: 75      
        Enter the marks of student 2: 84
        Enter the marks of student 3: -1
        Enter the marks of student 4: 97
        Enter the marks of student 5: 67
        Enter the marks of student 6: 97
Enter your choice:
1. Average Marks
2. Minimum and Maximum Marks
3. Total Absent Students
4. Most Frequently Occuring Marks
:1
Total Marks: 420
Average Marks: 84.00
:2
Maximum Marks scored: 97
Minimum Marks scored: 67
:3
Total number of absent students: 1
:4
Most frequently occuring marks are: 97
*/