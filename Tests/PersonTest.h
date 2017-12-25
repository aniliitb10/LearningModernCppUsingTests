//
// Created by anil on 25/12/17.
//
#pragma once

#include "../Lib/Person.h"
#include "../TestLib/TestUtil.h"

void PersonClassTest()
{
  TestUtil test("PersonClassTest");

  Person p1{ "theNameIsAnil" };
  test.expectTrue(p1.getName() == "theNameIsAnil", "Constructed p1");

  Person p2 = p1;
  test.expectTrue(p1.getName() == p2.getName() && !p1.getName().empty(), "Copy-Constructed p2, p1 is still alive.");

  Person p3 = std::move(p1);
  test.expectTrue(p3.getName() == "theNameIsAnil" && p1.getName().empty(), "Move-Constructed p3, p1 is gone.");

  p3 = p2;
  test.expectTrue(p3.getName() == p2.getName(), "Copy-assigned to p3 from p2, p2 is still alive.");

  p3 = { std::move(p2) };
  test.expectTrue(p3.getName() == "theNameIsAnil" && p2.getName().empty(), "Move-Assigned to p3, p2 is gone.");

//  marking constructors explicit doesn't allow following to compile
//  std::string someName{ "some name" };
//  Person p4 = someName;
//  test.expectTrue(p4.getName() == "some name" && !someName.empty(), "Copy-Constructed p4, someName is still alive.");
//
//  Person p5 = std::move(someName);
//  test.expectTrue(p5.getName() == "some name" && someName.empty(), "Move-Constructed p5, someName is gone.");
}
