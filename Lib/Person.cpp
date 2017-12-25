//
// Created by anil on 24/12/17.
//

#include "Person.h"
#include <iostream>
#include <utility>

Person::Person(const std::string& name_) :
  _name(name_)
{
}

Person::Person(std::string&& name_) :
  _name(std::move(name_))
{
}

Person::Person(const char* name_) :
  _name(name_)
{
}

Person::Person(Person&& person_) noexcept :
  _name(std::move(person_._name))
{
}

Person& Person::operator=(Person&& person_) noexcept
{
  _name = std::exchange(person_._name, std::string());
  return *this;
}

std::string Person::getName()
{
  return _name;
}