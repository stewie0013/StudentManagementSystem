// StudentManagementSystem.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"

#include <string>
using std::getline;
#include <vector>
using std::vector;

#include "ConsoleFunctions.h"
#include "Student.h" 

/* TODO: 
	display all students (w/o list of classes) 
		- show (sort by) id, name, total credits, and gpa with nice formatting
	make it so Student cannot have more than 18 credits at a time
*/

int main()
{
	vector<Student> student_container;

	char ch = '0';
	do
	{
		cout << "  ---------------------------------------------------------------\n";
		display_menu();		// display main menu
		cin >> ch;			// get user input
		cout << "  ---------------------------------------------------------------\n";

		switch (ch)
		{
		case '1':
			add_student(student_container);
			break;

		case '2':
			edit_student(student_container);
			break;

		case '3':
			remove_student(student_container);
			break;

		case '4':
			search_student(student_container);
			break;

		case '5':
			display_all(student_container);
			break;
		} // end switch

	} while (ch != '6');
	cout << endl;
}