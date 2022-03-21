#pragma once

#include <iostream>
#include <string>

#include "BaseValidator.h"


class BaseField {
private:
	BaseField() = default;
	//void addValidator();
	//virtual void validate() {m_validator.validate();}
public:
	std::vector<std::unique_ptr<BaseValidator>> m_validator;
	std::string m_message;
};