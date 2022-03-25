#pragma once

#include "BaseFormValidator.h"

template <class T1, class T2>
class Courses2YearValidator : public BaseFormValidator
{
public:
	Courses2YearValidator(T1 num_of_courses_field, T2 year_field);

	virtual bool validate()const;
	virtual std::string getErrorMsg();
private:
	T1* m_numOfCoursesField;
	T2* m_yearField;

};





template<class T1, class T2>
Courses2YearValidator<T1, T2>::Courses2YearValidator(T1 num_of_courses_field, T2 year_field)
	: m_numOfCoursesField(num_of_courses_field), m_yearField(year_field)
{
}

template<class T1, class T2>
bool Courses2YearValidator<T1, T2>::validate() const
{
	int courses_num = 0; // m_numOfCoursesField->getAnswer();
	int year = 0; // m_yearField->getAnswer();
	
	if ((inRange(1, 2, year) && inRange(2, 6, courses_num)) ||
		(inRange(3, 4, year) && inRange(2, 10, courses_num)) ||
		(year >= 5 && inRange(2, 8, courses_num)))
	{
		return true;
	}
	
	return false;
}

template<class T1, class T2>
std::string Courses2YearValidator<T1, T2>::getErrorMsg()
{
	return std::string();
}
