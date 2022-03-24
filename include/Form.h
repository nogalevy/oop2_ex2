#pragma once
#include <memory>
#include <vector>
#include <iostream>

#include "BaseField.h"
#include "BaseFormValidator.h"

class Form {
public:
	Form() = default;
	//void fillForm();
	//void addField();
	//void addValidator();
	//bool ValidateForm();
private:
	std::vector<std::unique_ptr<BaseField>> m_fields;
	std::vector<std::unique_ptr<BaseFormValidator>> m_2FieldValidators;

};
//operator<<