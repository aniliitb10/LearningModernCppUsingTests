//
// Created by anil on 25/12/17.
//

#pragma once
#include <iostream>

class TestUtil
{
public:
  explicit TestUtil(const char* name_);
  void expectTrue(bool condition_, const std::string& msg_);
  ~TestUtil();

private:
  std::string _name;
  bool _allPassed = true;
};