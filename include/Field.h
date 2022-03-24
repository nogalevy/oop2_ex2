#pragma once

#include "BaseField.h"
#include "BaseValidator.h"

template<class T>
class Field : public BaseField {
public:
	Field(const std::string q);
	virtual void addValidator(BaseValidator<T>* validator);
	bool validate() {/*m_validator.validate(m_answer); */};
private:
	T m_answer
	std::vector<std::unique_ptr<BaseValidator<T>>> m_validator;
};

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