#pragma once
#include <memory>
#include <vector>
#include <iostream>

#include "BaseField.h"
#include "BaseFormValidator.h"

class Form {
public:
	Form() = default;
	~Form();
	void fillForm();
	void addField(BaseField* field);
	void addValidator(BaseFormValidator* formValidator);
	bool validateForm();
	void printForm(std::ostream& ostr)const;
private:
	std::vector <BaseField*> m_fields;
	std::vector<BaseFormValidator*> m_2FieldValidators;

};
std::ostream& operator<<(std::ostream& ostr, const Form& my_form);