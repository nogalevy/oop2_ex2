#pragma once

#include "BaseField.h"

template <class T>
class BaseValidator
{
public:
	BaseValidator() {}
	~BaseValidator() = default;

	virtual bool validate(T answer)const = 0;
private:
	T m;
};