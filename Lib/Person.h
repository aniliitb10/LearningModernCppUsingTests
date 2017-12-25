#pragma once

#include <string>

class Person
{
public:
	// constructors
	explicit Person(const std::string& name_);
	explicit Person(std::string&& name_);
	explicit Person(const char* name_);

	// copy/move constructors
	Person(const Person& person_) = default;
	Person(Person&& person_) noexcept;

	// copy/move operators
	Person& operator=(const Person& person_) = default;
	Person& operator=(Person&& person_) noexcept;

	// getter, only for testing
	std::string getName();

private:
	std::string _name;
};