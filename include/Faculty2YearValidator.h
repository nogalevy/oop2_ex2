#pragma once

#include "BaseFormValidator.h"

template <class T1, class T2>
class Faculty2YearValidator : public BaseFormValidator
{
public:
	Faculty2YearValidator(T1 *faculty_field, T2 *year_field);

	virtual bool validate();
	virtual std::string getErrorMsg();
	virtual void refillFields();
private:
	T1* m_facultyField;
	T2* m_yearField;
};

//----------------------------------------------------

template<class T1, class T2>
Faculty2YearValidator<T1, T2>::Faculty2YearValidator(T1 *faculty_field, T2 *year_field)
	: m_facultyField(faculty_field) , m_yearField(year_field)
{
}

//----------------------------------------------------

template<class T1, class T2>
bool Faculty2YearValidator<T1, T2>::validate() 
{
	set2FieldValidity(false);

	auto faculty = m_facultyField->getAnswer();
	auto year = m_yearField->getAnswer();

	if((faculty == COMPUTER_SCIENCE && inRange(1, 4, year)) ||
		(faculty == LITERATURE && inRange(1, 3, year)) ||
		(faculty == MEDICINE && inRange(1, 7, year)))
	{
		set2FieldValidity(true);

	}
	return get2FieldValidity();
}

//----------------------------------------------------

template<class T1, class T2>
std::string Faculty2YearValidator<T1, T2>::getErrorMsg()
{
	return FACULTY_YEAR_ERROR_MSG;
}

//----------------------------------------------------

template<class T1, class T2>
void Faculty2YearValidator<T1, T2>::refillFields()
{
	m_facultyField->fillField();
	m_yearField->fillField();
}

