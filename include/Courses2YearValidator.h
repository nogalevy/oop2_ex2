#pragma once

#include "BaseFormValidator.h"

template <class T1, class T2>
class Courses2YearValidator : public BaseFormValidator
{
public:
	Courses2YearValidator(T1 *num_of_courses_field, T2 *year_field);
	//Tali : deconstructor!!

	virtual bool validate();
	virtual std::string getErrorMsg();
	virtual void refillFields();
private:
	T1* m_numOfCoursesField;
	T2* m_yearField;

};


template<class T1, class T2>
Courses2YearValidator<T1, T2>::Courses2YearValidator(T1 *num_of_courses_field, T2 *year_field)
	: m_numOfCoursesField(num_of_courses_field), m_yearField(year_field)
{
}

template<class T1, class T2>
bool Courses2YearValidator<T1, T2>::validate()
{
	//m_isValid = false;
	set2FieldValidity(false);

	auto courses_num = m_numOfCoursesField->getAnswer();
	auto year = m_yearField->getAnswer();
	
	if ((inRange(1, 2, year) && inRange(2, 6, courses_num)) ||
		(inRange(3, 4, year) && inRange(2, 10, courses_num)) ||
		(year >= 5 && inRange(2, 8, courses_num)))
	{
		//m_isValid = true;
		set2FieldValidity(true);

	}
	
	//return m_isValid;
	return get2FieldValidity();
}

template<class T1, class T2>
std::string Courses2YearValidator<T1, T2>::getErrorMsg()
{
	return COURSE_YEAR_ERROR_MSG;
}

template<class T1, class T2>
void Courses2YearValidator<T1, T2 >::refillFields()
{
	m_yearField->fillField();
	m_numOfCoursesField->fillField();
}