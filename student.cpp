#include <iostream>
#include "student.h"

/* Constructors */
Student::Student()
	: studentId(""), firstName(""), lastName(""), email(""), age(-1), daysInCourse(new int[daysInCourseArraySize])
{
	for (int i = 0; i < daysInCourseArraySize; ++i) {
		this->daysInCourse[i] = 0;
	}
}

Student::Student(string studentId, string firstName, string lastName, string email, int age, int daysInCourse[], DegreeProgram degree)
	: studentId(studentId), firstName(firstName), lastName(lastName), email(email), age(age), daysInCourse(new int[daysInCourseArraySize])
{
	for (int i = 0; i < daysInCourseArraySize; ++i) {
		this->daysInCourse[i] = daysInCourse[i];
	}
}

/* Setters */
void Student::setStudentId(string studentId) {
	this->studentId = studentId;
}

void Student::setFirstName(string firstName) {
	this->firstName = firstName;
}

void Student::setLastName(string lastName) {
	this->lastName = lastName;
}

void Student::setEmail(string email) {
	this->email = email;
}

void Student::setAge(int age) {
	this->age = age;
}

void Student::setDaysInCourse(int daysInCourse[]) {
	this->daysInCourse = new int[daysInCourseArraySize];
	for (int i = 0; i < daysInCourseArraySize; ++i) this->daysInCourse[i] = daysInCourse[i];
}

void Student::setDegree(DegreeProgram degree) {
	this->degree = degree;
}

/* Getters */
string Student::getStudentId() const {
	return studentId;
}

string Student::getFirstName() const {
	return firstName;
}

string Student::getLastName() const {
	return lastName;
}

string Student::getEmail() const {
	return email;
}

int Student::getAge() const {
	return age;
}

int* Student::getDaysInCourse() const {
	return daysInCourse;
}

DegreeProgram Student::getDegree() { 
	return degree;
}

/* Print */
void Student::print() {
	std::cout << getStudentId();
	std::cout << "\tFirst name: " << getFirstName();
	std::cout << "\tLast name: " << getLastName();
	std::cout << "\tAge: " << getAge();

	int* days = getDaysInCourse();
	std::cout << "\t  Days in course: " << days[0] << ", " << days[1] << ", " << days[2];

	string degreeString = "";
	switch (getDegree()) {
    case NETWORK:
      degreeString = "NETWORK";
      break;
    case SECURITY:
      degreeString = "SECURITY";
      break;
    case SOFTWARE:
      degreeString = "SOFTWARE";
      break;
	}
	std::cout << "\tDegree: " << degreeString << std::endl;
}

/* Destructor */
Student::~Student() {}