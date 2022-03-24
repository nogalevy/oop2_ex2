#pragma once

#include "BaseField.h"
#include "BaseValidator.h"

template<class T>
class Field : public BaseField 
{
public:
	Field(const std::string q);

	void addValidator(BaseValidator<T>* validator);
	void fillField() override;
	bool validateField() override;
	void printField(std::ostream& ostr) override;
private:
	T m_answer;
	std::vector<BaseValidator<T>*> m_validator;
};

//----------------------------------------------------

template<class T>
Field<T>::Field(const std::string q)
	:BaseField(q)
{
}

//----------------------------------------------------

template<class T>
void Field<T>::addValidator(BaseValidator<T>* validator) //Tali: maybe  BaseValidator<T>* const validator - cause of address??
{
	m_validator.emplace_back(validator);
}

//----------------------------------------------------

template<class T>
void Field<T>::fillField()
{
	printQuestion();
	std::endl;
	std::cin >> m_answer;
}

//----------------------------------------------------

template<class T>
bool Field<T>::validateField() override
{
	setFieldValidity(true);

	for (auto& val : m_validator)
	{
		if (!val->validate(m_answer))
			setFieldValidity(false);
	}
	return getFieldValidity();
}

template<class T>
void Field<T>::printField(std::ostream& ostr) override
{
	printQuestion();
	//ostr << " = " << m_answer;
}