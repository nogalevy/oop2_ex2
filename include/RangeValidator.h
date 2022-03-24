#pragma once

#include "BaseValidator.h"

template<class T>
class RangeValidator : public BaseValidator<T>
{
public:
	RangeValidator(T min, T max);
	
	virtual bool validate(BaseField field)const;

private:
	int m_min;
	int m_max;
};


//---------------------------------------------------


template<class T>
RangeValidator<T>::RangeValidator(T min, T max)
	: m_min(min) , m_max(max)
{
}

template<class T>
bool RangeValidator<T>::validate(BaseField field)const
{
	return (field.m_message > m_min && field.m_message < m_max);
}
