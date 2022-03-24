#pragma once

#include "BaseField.h"
#include "BaseValidator.h"

template<class T>
class Field : public BaseField {
public:
	Field(const std::string msg);
	virtual void addValidator(BaseValidator* validator);
	//void validate() {/*m_validator.validate(*this); */};

private:
}; std::vector<std::unique_ptr<BaseValidator>> m_validator;

//----------------------------------------------------

template<class T>
Field<T>::Field(const std::string msg)
	:BaseField(msg)
{
}

//----------------------------------------------------

template<class T>
void Field<T>::addValidator(BaseValidator* validator)
{
	m_validator.emplace_back(validator);
}