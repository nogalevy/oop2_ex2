#pragma once

#include "BaseValidator.h"

template<class T>
class MinValidator : public BaseValidator<T> {
public:
	MinValidator(T min);

	virtual bool validate(const T& answer);
	virtual std::string getErrorMsg();

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
bool MinValidator<T>::validate(const T& answer)
{
	return answer > m_min;
}

template<class T>
inline std::string MinValidator<T>::getErrorMsg()
{
	return MIN_ERROR_MSG;
}

