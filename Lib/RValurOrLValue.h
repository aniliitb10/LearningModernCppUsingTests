//
// Created by anil on 24/12/17.
//

#pragma once
#include <iostream>

class RValueOrLValue
{
public:
  std::string RValueOrLValueType() const&&
  {
    return std::string("rvalue");
  }

  std::string RValueOrLValueType() const&
  {
    return std::string("lvalue");
  }
};
