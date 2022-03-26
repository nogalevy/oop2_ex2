#pragma once 

#include <iostream>
#include "utilities.h"

class FacultyValue
{
public:
	FacultyValue(int faculty = 0);
	~FacultyValue();

	void setFaculty(int faculty);
	int getFaculty()const;

private:
	int m_faculty;
};


std::ostream& operator<<(std::ostream& ostr, const FacultyValue& faculty_value);
std::istream& operator>>(std::istream& istr, FacultyValue& faculty_value);
bool operator>=(const FacultyValue& fv1, const FacultyValue& fv2);
bool operator<=(const FacultyValue& fv1, const FacultyValue& fv2);
bool operator==(const FacultyValue& fv1, const FacultyValue& fv2);

