#pragma once

#include "BaseValidator.h"

template<class T>
class RangeValidator : public BaseValidator<T>
{
public:
	RangeValidator(T min, T max);
	
	virtual bool validate(const T& answer);
	virtual std::string getErrorMsg();

private:
	T m_min;
	T m_max;
};


//---------------------------------------------------


template<class T>
RangeValidator<T>::RangeValidator(T min, T max)
	: m_min(min) , m_max(max)
{
}

template<class T>
bool RangeValidator<T>::validate(const T& answer)
{
	return (answer >= m_min && answer <= m_max);
}

template<class T>
inline std::string RangeValidator<T>::getErrorMsg()
{
	return RANGE_ERROR_MSG;
}
