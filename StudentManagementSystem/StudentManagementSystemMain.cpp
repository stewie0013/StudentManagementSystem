// StudentManagementSystem.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"

#include <string>
using std::getline;
#include <vector>
using std::vector;

#include "ConsoleFunctions.h"
#include "Student.h" 

/* TODO: display function that displays options/menu
	modify student
		- add a class
		- remove a class
	search for student
	delete student
		- make sure to adjust ID's when deleting
		- use v.begin() + deletedStudentID to v.end()
	display all students (w/o list of classes) 
		- show (sort by) id, name, total credits, and gpa with nice formatting
	add confirmation output after student or class has been added or deleted
*/

int main()
{
	vector<Student> student_container;

	char ch = '0';
	do
	{
		cout << "  ----------------------------------------\n";
		display_menu();		// display main menu
		cin >> ch;			// get user input
		cout << "  ----------------------------------------\n";

		switch (ch)
		{
		case '1':
			add_student(student_container);
			break;

		case '2':
			edit_student(student_container);
			break;
		} // end switch

	} while (ch != '6');
	cout << endl;
}