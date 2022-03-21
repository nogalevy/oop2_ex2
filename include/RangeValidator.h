#pragma once

#include "BaseValidator.h"

template<class T>
class RangeValidator : BaseValidator{
public:
private:
	int m_min;
	int m_max;
};