//
// Created by anil on 25/12/17.
//

#include "TestUtil.h"

static const std::string GreenLog   = "\033[32m";
static const std::string RedLog     = "\033[31m";
static const std::string DefaultLog = "\033[39m";
static const std::string BlueLog    = "\033[34m";

TestUtil::TestUtil(const char * name_):
  _name(name_)
{
  std::cout << BlueLog << "\n## Running test: " << _name << " ##" << DefaultLog << std::endl;
}

void TestUtil::expectTrue(bool condition_, const std::string &msg_)
{
  std::cout << msg_;

  if (condition_)
  {
    std::cout << GreenLog << "-> Passed" << DefaultLog << std::endl;
  }
  else
  {
    std::cout << RedLog << "-> Failed" << DefaultLog << std::endl;
    _allPassed = false;
  }
}

TestUtil::~TestUtil()
{
  if (_allPassed)
  {
    std::cout << GreenLog << _name <<  " passed" << DefaultLog << std::endl;
  }
  else
  {
    std::cout << RedLog << _name <<  " failed" << DefaultLog << std::endl;
  }
}
