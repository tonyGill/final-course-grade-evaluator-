/*
Lab 2
Tony Gill
Due Date: January 26, 2019

Algorithm was designed in the following series of steps:
1) Declare fixed and input variables to be initialized in order to have student grade result
2) Initialize all fixed/constant variables with values predefined in course outline
3) Read user input for all scores (converted to percentage)obtained from evaluation scheme elements : labs, quizzes, assignments, midterm and final exam 
4) Use total formulas to determine total score for each evaluation element mentioned in step 3
5) Use total formula for the entire course score based on total score formulas obtained in step 4
6) Use if-else statements to represent a range of letter grades based on grading scale 
7) Course totals with corresponding letter are represented as a char data type output 

Functions/Formulas:

Formula for total score based on each evaluation scheme element: 
total[evaluation element] = [evaluation element]Points * [evaluation element]Score;
Example:
totalQuiz = quizPoints * (quizScore/percentConvert);

Formula for converting user score input to percentage using percent constant:
Score Input = ([evaluation element]Score/percentConvert);


Formula for total course score is a summation of the formulas for each evaluation element total scores:
totalCourse = totalLab + totalAssignment + totalQuiz + totalMidterm + totalFinal;
Function in this case was only the main function with all data, formulas, input & output


Revision History:
January 19, 2019: First working edition created, revised and completed


*/

#include <iostream>
using namespace std;


int main()
{

	// This represents the fixed or constant variables predefined in the course outline
	const int labPoints = 10;
	const int assignmentPoints = 10;
	const int quizPoints = 20;
	const int midtermPoints = 20;
	const int finalPoints = 40;
	
	// This variable serves as a constant to convert user input of scores to percent format required for calculating totals
    const int percentConvert = 100;

	/*These variables are based on user input entered as scores representing all evaluation elements listed in the course outline*/
	double labScore;
	double assignmentScore;
	double quizScore;
	double midtermScore;
	double finalScore;

	/*Declarations of variables representing totals of each evaluation element used in all totals formulas */
	double totalLab;
	double totalAssignment;
	double totalQuiz;
	double totalMidterm;
	double totalFinal;

	//Course total represented as a single character within a range of integers based on grading scale
	char totalCourse;



	// Represents output asking for accumulated lab scores 
	cout << "What was your score in the labs?" << endl;
	// Represents user input for accumulated lab scores 
	cin >> labScore;
	//formula for calculating total lab score
	totalLab = labPoints * (labScore/percentConvert);	totalCourse = totalLab + totalAssignment + totalQuiz + totalMidterm + totalFinal;

	// Represents output asking for accumulated assignment scores 
	cout << "What was your score on the assignments?" << endl;
	// Represents user input for accumulated assignment scores 
	cin >> assignmentScore;
	//formula for calculating total assignment score
	totalAssignment = assignmentPoints * (assignmentScore/percentConvert);
	
	// Represents output asking for accumulated quiz scores 
	cout << "What was your score on the quizzes?" << endl;
	// Represents user input for accumulated quiz scores 
	cin >> quizScore;
	//formula for calculating total quizzes score
	totalQuiz = quizPoints * (quizScore/percentConvert);

	// Represents output asking for midterm score
	cout << "What was your score on the midterm?" << endl;
	// Represents user input for midterm score
	cin >> midtermScore;
	//formula for calculating total midterm score
	totalMidterm = midtermPoints * (midtermScore/percentConvert);
	
	// Represents output asking for final exam score
	cout << "What was your score on the final?" << endl;
	// Represents user input for final exam score
	cin >> finalScore;
	//Formula for calculating total final exam score
	totalFinal = finalPoints * (finalScore/percentConvert);

	
	//Formula for calculating total of all course evaluation element scores 
	totalCourse = totalLab + totalAssignment + totalQuiz + totalMidterm + totalFinal;
	
	// Range of score values needed to acheive an A in the course
	if (totalCourse <= 100 && totalCourse >= 80) {
		totalCourse = 'A';
	}
	// Range of score values needed to acheive a B in the course
	else if (totalCourse <= 79 && totalCourse >= 68) {
		totalCourse = 'B';
	}
	// Range of score values needed to acheive a C in the course
	else if (totalCourse <= 67 && totalCourse >= 56) {
		totalCourse = 'C';

	}
	// Range of score values needed to acheive a passing grade (D) in the course
	else if (totalCourse <= 55 && totalCourse >= 50) {
		totalCourse = 'D';
	}
	// Range of score values based on student failing the course
	else if (totalCourse < 50 && totalCourse > 0) {
		totalCourse = 'F';
	}

  // outputs the final grade student has received in the course 
  cout << "The final course grade you received: " << totalCourse << endl;


	return 0;
}
