#pragma once

#include "BaseFormValidator.h"

template <class T1, class T2>
class Faculty2YearValidator : public BaseFormValidator
{
public:
	Faculty2YearValidator(T1 faculty_field, T2 year_field);

	virtual bool validate()const;
	virtual std::string getErrorMsg();
private:
	T1* m_facultyField;
	T2* m_yearField;
};


template<class T1, class T2>
Faculty2YearValidator<T1, T2>::Faculty2YearValidator(T1 faculty_field, T2 year_field)
	: m_facultyField(faculty_field) , m_yearField(year_field)
{
}

template<class T1, class T2>
bool Faculty2YearValidator<T1, T2>::validate() const
{
	int faculty = 0; // m_facultyField->getAnswer();
	int year = 0; //m_yearField->getAnswer();

	if((faculty == COMPUTER_SCIENCE && inRange(1, 4, year)) ||
		(faculty == LITERATURE && inRange(1, 3, year)) ||
		(faculty == MEDICINE && inRange(1, 7, year)))
	{
		return true;
	}

	return false;
}

template<class T1, class T2>
std::string Faculty2YearValidator<T1, T2>::getErrorMsg()
{
	return std::string();
}
