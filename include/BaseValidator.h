#pragma once

#include "BaseField.h"

template <class T>
class BaseValidator
{
public:
	BaseValidator() = default;
	~BaseValidator() = default;

	virtual bool validate(BaseField f)const = 0;
private:
	T m;
};