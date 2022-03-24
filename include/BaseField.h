#pragma once

#include <iostream>
#include <string>
#include <vector>

class BaseField {
public:
	BaseField(const std::string msg);
	~BaseField() {};

	virtual void fillField() = 0;
	void setFieldValidity(const bool valid);
	bool getFieldValidity()const;

private:
	std::string m_message;
	bool m_isValid;
};