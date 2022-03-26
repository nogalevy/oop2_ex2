#pragma once

#include "BaseField.h"
#include "BaseValidator.h"
#include <iostream>
#include <iomanip>

template<class T>
class Field : public BaseField 
{
public:
	Field(const std::string q);

	void addValidator(BaseValidator<T>* validator);
	void fillField();
	bool validateField();
	void printField(std::ostream& ostr);
	void printErrors(std::ostream& ostr);
	T getAnswer()const;
private:
	T m_answer;
	std::vector<BaseValidator<T>*> m_validator;
};

//----------------------------------------------------

//template<class T>
//std::ostream& operator<<(std::ostream& ostr, const Field<T>& myField)
//{
//	myField.printQuestion();
//	ostr << " = " << myField.getAnswer();
//
//	if (!myField.getFieldValidity())
//		myField.printErrors(ostr);
//		
//	ostr << std::endl;
//	return ostr;
//}

//----------------------------------------------------

template<class T>
Field<T>::Field(const std::string q)
	:BaseField(q)
{
}

//----------------------------------------------------

template<class T>
void Field<T>::addValidator(BaseValidator<T>* validator)
{
	m_validator.emplace_back(validator);
}

//----------------------------------------------------

template<class T>
void Field<T>::fillField()
{
	printQuestion();
	std::cout << std::endl;
	std::cin >> m_answer;
}

//----------------------------------------------------

template<class T>
bool Field<T>::validateField()
{
	setFieldValidity(true);

	for (auto& val : m_validator)
	{
		if (!val->validate(m_answer))
			setFieldValidity(false);
	}
	return getFieldValidity();
}

//----------------------------------------------------

template<class T>
void Field<T>::printField(std::ostream& ostr)
{
	printQuestion();
	ostr << " = " << m_answer;

	if (!getFieldValidity())
		printErrors(ostr);
	
	ostr << std::endl;
}

//----------------------------------------------------

template<class T>
T Field<T>::getAnswer()const
{
	return m_answer;
}

//----------------------------------------------------

template<class T>
void Field<T>::printErrors(std::ostream& ostr)
{
	for (auto& val : m_validator)
		ostr << /*std::right <<*/ std::setw(50) /* << std::fixed */ << val->getErrorMsg();
}













