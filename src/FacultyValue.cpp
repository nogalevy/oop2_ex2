#include "FacultyValue.h"

FacultyValue::FacultyValue(int faculty) : m_faculty(faculty)
{
}

FacultyValue::~FacultyValue()
{
}

void FacultyValue::setFaculty(int faculty)
{
	m_faculty = faculty;
}

int FacultyValue::getFaculty() const
{
	return m_faculty;
}

std::ostream& operator<<(std::ostream& ostr, const FacultyValue& faculty_value)
{
	switch (faculty_value.getFaculty())
	{
	case COMPUTER_SCIENCE:
		ostr << "Computer Science";
		break;
	case MEDICINE:
		ostr << "Medicine";
		break;
	case LITERATURE:
		ostr << "Literature";
		break;
	default:
		ostr << faculty_value.getFaculty();
		break;
	}
	return ostr;
}

std::istream& operator>>(std::istream& istr, FacultyValue& faculty_value)
{
	int faculty = 0;
	istr >> faculty;

	faculty_value.setFaculty(faculty);

	return istr;
}

bool operator>=(const FacultyValue& fv1, const FacultyValue& fv2)
{
	return fv1.getFaculty() >= fv2.getFaculty();
}

bool operator<=(const FacultyValue& fv1, const FacultyValue& fv2)
{
	return fv1.getFaculty() <= fv2.getFaculty();
}

bool operator==(const FacultyValue& fv1, const FacultyValue& fv2)
{
	return fv1.getFaculty() == fv2.getFaculty();
}
