/* 
 * File:   main.cpp
 * Author: yeyanwan
 *
 * Created on November 29, 2016, 1:13 AM
 */

#include <iostream>
#include <string>
using namespace std;

// Global constants
const int STUDENTS = 5;	// The number of students
const int SCORES   = 4;	// The number of test scores

// Function prototypes
void inputData(string &, double []);
void calcGrade(double[], char &, double &);
void displayData(string, double [], double, char);

int main()
{
	string names[STUDENTS];		 // Students' names
	char grades[STUDENTS];       // The letter grades
	double averages[STUDENTS];   // The average scores
	double testScores1[SCORES];  // Student 1's test scores
	double testScores2[SCORES];  // Student 2's test scores
	double testScores3[SCORES];  // Student 3's test scores
	double testScores4[SCORES];  // Student 4's test scores
	double testScores5[SCORES];  // Student 5's test scores

	// Get student 1's data and calculate a grade.
	cout << "Enter the data for student 1.\n";
	inputData(names[0], testScores1);
	calcGrade(testScores1, grades[0], averages[0]);

	// Get student 2's data and calculate a grade.
	cout << "Enter the data for student 2.\n";
	cin.ignore(); // Remove the remaining newline.
	inputData(names[1], testScores2);
	calcGrade(testScores2, grades[1], averages[1]);

	// Get student 3's data and calculate a grade.
	cout << "Enter the data for student 3.\n";
	cin.ignore(); // Remove the remaining newline.
	inputData(names[2], testScores3);
	calcGrade(testScores3, grades[2], averages[2]);

	// Get student 4's data and calculate a grade.
	cout << "Enter the data for student 4.\n";
	cin.ignore(); // Remove the remaining newline.
	inputData(names[3], testScores4);
	calcGrade(testScores4, grades[3], averages[3]);

	// Get student 5's data and calculate a grade.
	cout << "Enter the data for student 5.\n";
	cin.ignore(); // Remove the remaining newline.
	inputData(names[4], testScores5);
	calcGrade(testScores5, grades[4], averages[4]);

	// Display student 1's data.
	displayData(names[0], testScores1, averages[0], grades[0]);

	// Display student 2's data.
	displayData(names[1], testScores2, averages[1],  grades[1]);

	// Display student 3's data.
	displayData(names[2], testScores3, averages[2],  grades[2]);

	// Display student 4's data.
	displayData(names[3], testScores4, averages[3],  grades[3]);

	// Display student 5's data.
	displayData(names[4], testScores5, averages[4],  grades[4]);

	return 0;
}

void inputData(string &name, double testScores[])
{
	// Get each student's name.
	cout << "Student name: ";
	getline(cin, name);

	// Get the student's test scores.
	for (int score = 0; score < SCORES; score++)
	{
		cout << "Test score " << (score + 1) << ": ";
		cin >> testScores[score];
	}
}


void calcGrade(double testScores[], char &grade, 
	           double &average)
{
	double sum = 0.0;

	// Calculate the sum of the scores.
	for (int i = 0; i < SCORES; i++)
	sum += testScores[i];

	// Calculate the average.
	average = sum / SCORES;

	// Determine the letter grade.
	if (average >= 90)
		grade = 'A';
	else if (average >= 80)
		grade = 'B';
	else if (average >= 70)
		grade = 'C';
	else if (average >= 60)
		grade = 'D';
	else
		grade = 'F';
}

void displayData(string name, double testScores[], 
	             double average, char grade)
{
	// Display the student's name.
	cout << "\nName: " << name << endl;
   
	// Display the student's scores.
	for (int i = 0; i < SCORES; i++)
	{
		cout << "Test " << (i + 1) << ": " 
			 << testScores[i] << endl;
	}
   
	// Display the average score.
	cout << "Average: " << average << endl;
   
	// Display the letter grade.
	cout << "Grade : " << grade << endl;
}