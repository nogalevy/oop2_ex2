#pragma once 

#include <iostream>
#include "utilities.h"

class FacultyValue
{
public:
	FacultyValue();
	~FacultyValue();

	void setFaculty(int faculty);
	int getFaculty()const;

private:
	int m_faculty;
};


std::ostream& operator<<(std::ostream& ostr, const FacultyValue& faculty_value);
std::istream& operator>>(std::istream& istr, FacultyValue& faculty_value);

//Noga: we need here <= and >= operators !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

