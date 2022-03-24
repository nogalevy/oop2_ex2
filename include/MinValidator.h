#pragma once

#include "BaseValidator.h"

template<class T>
class MinValidator : public BaseValidator<T> {
public:
	MinValidator(T min);

	virtual bool validate(BaseField field)const;

private:
	T m_min;
};



//--------------------------------------------------

template<class T>
MinValidator<T>::MinValidator(T min)
	: m_min(min)
{
}

template<class T>
bool MinValidator<T>::validate(BaseField field)const
{
	return field.m_message > m_min;
}

