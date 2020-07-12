#pragma once
#include <string>
#include "degree.h"
using std::string;

class Student {

protected:
	string studentId;
	string firstName;
	string lastName;
	string email;
	int age;
	int* daysInCourse;
	DegreeProgram degree;

public:
	/* Constructors */
	Student();
	Student(string studentId, string firstName, string lastName, string email, int age, int daysInCourse[], DegreeProgram degree);
	const static int daysInCourseArraySize = 3;

	/* Setters */
	void setStudentId(string studentId);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setEmail(string email);
	void setAge(int age);
	void setDaysInCourse(int daysInCourse[]);
	void setDegree(DegreeProgram degree);

	/* Getters */
	string getStudentId() const;
	string getFirstName() const;
	string getLastName() const;
	string getEmail() const;
	int getAge() const;
	int* getDaysInCourse() const;
	virtual DegreeProgram getDegree() = 0;

	virtual void print();

  /* Deconstructor */ 
	~Student();
};