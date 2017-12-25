//
// Created by anil on 25/12/17.
//

#pragma once

#include "../TestLib/TestUtil.h"
#include "../Lib/RValurOrLValue.h"

void RValueOrLValueTest()
{
  TestUtil test("RValueOrLValueTest");
  test.expectTrue(RValueOrLValue().RValueOrLValueType() == "rvalue", "RValue test");

  RValueOrLValue lvalue;
  test.expectTrue(lvalue.RValueOrLValueType() == "lvalue", "LValue test");

  test.expectTrue(std::move(lvalue).RValueOrLValueType() == "rvalue", "std::move does produce an rvalue!");
  test.expectTrue(lvalue.RValueOrLValueType() == "lvalue", "Even after using std::move, lvalue is still lvalue");
}
