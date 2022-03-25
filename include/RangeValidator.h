#pragma once

#include "BaseValidator.h"

template<class T>
class RangeValidator : public BaseValidator<T>
{
public:
	RangeValidator(T min, T max);
	
	virtual bool validate(T answer)const;
	virtual std::string getErrorMsg();

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
bool RangeValidator<T>::validate(T answer)const
{
	return (answer >= m_min && answer <= m_max);
}

template<class T>
inline std::string RangeValidator<T>::getErrorMsg()
{
	return RANGE_ERROR_MSG;
}
