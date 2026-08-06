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
	int n; /*,total = 0, lowest = 100, absent = 0, highest = 0, highest_freq = 0, highest_freq_marks;*/;
	//float average;
	printf("Enter the Number of Students: ");
	scanf("%d", &n);
	int marks[n];
	printf("Enter the marks of students (Enter -1 for absent):\n");
	for(int i = 0; i < n; i++){
		printf("\tEnter the marks of student %d: ", i+1);
		scanf("%d", &marks[i]);
		/*if(marks[i] != -1){
			total += marks[i];}
		if(marks[i] > highest){
			highest = marks[i];}
		if((marks[i] < lowest) && marks[i] != -1){
			lowest = marks[i];}
		if(marks[i] == -1){
			absent++;}*/
	}
	/*average += total/(n-absent)*1.00;		
	for(int i = 0; i < n; i++){
		int frequency = 1;
		for(int j = 0; j < n; j++){
			if(marks[i] == marks[j] && i !=j){
				frequency++;
			}
			
		}
		if(frequency > highest_freq) highest_freq_marks = marks[i];
	}
	
	printf("total %d \n", total);
	printf("average %.2f \n", average);
	printf("absent %d \n", absent);
	printf("highest %d \n", highest);
	printf("lowest %d \n", lowest);
	printf("frequency %d \n", highest_freq_marks);*/
	average(marks,n);
	min_max(marks, n);
	absent(marks, n);
	high_freq(marks, n);
	
	
}
