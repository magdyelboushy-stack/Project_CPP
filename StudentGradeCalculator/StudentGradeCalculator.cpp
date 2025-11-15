#include <iostream>
#include <iomanip>
using namespace std;

const int SUBJECT_COUNT = 3;
const double PASSING_SCORE = 50.0;

int main()
{
	string student_name;
	double score1, score2, score3;
	double total_score;
	double average_score;
	string pass_status;
	char letter_grade;


	cout << "Enter student name: ";
	// نستخدم getline لقراءة الاسم بالكامل (حتى لو فيه مسافات)
	// (cin العادية هتقف عند أول مسافة)
	cin >> student_name;

	cout << "Enter score for Subject 1: ";
	cin >> score1;
	cout << "Enter score for Subject 2: ";
	cin >> score2;
	cout << "Enter score for Subject 3: ";
	cin >> score3;


	total_score = score1 + score2 + score3;
	average_score = total_score / SUBJECT_COUNT;

	pass_status = (average_score >= PASSING_SCORE) ? "Passed" : "Failed";

	int grade_key = static_cast<int>(average_score) / 10;

	switch (grade_key)
	{
	case 10:
	case 9:
		letter_grade = 'A';
		break;
	case 8:
		letter_grade = 'B';
		break;
	case 7:
		letter_grade = 'C';
		break;
	case 6:
		letter_grade = 'D';
		break;
	case 5:
		letter_grade = 'E';
		break;
	default:
		letter_grade = 'F';
		break;
	}
	cout << fixed << setprecision(2);
	cout << "--- Student Report Card --- \n";
	cout << "Total Score " << total_score << "\n";
	cout << "Average Score: " << average_score << "\n";
	cout << "Status: " << pass_status << "\n";
	cout << "Grade:	 " << letter_grade << "\n";


}