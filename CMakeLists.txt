cmake_minimum_required(VERSION 3.9)

project(LearningModernCpp)

set(CMAKE_CXX_STANDARD 17)

file(GLOB LibFiles
        "Lib/*.h"
        "Lib/*.cpp"
        )

file(GLOB TestBinFiles
        "TestBin/*.cpp"
        )

file(GLOB TestLibFiles
        "TestLib/*.cpp"
        "TestLib/*.h"
        )

file(GLOB TestFiles
        "Tests/*.h"
        "Tests/*.cpp"
        )

add_executable(TestBin ${LibFiles} ${TestBinFiles} ${TestLibFiles} ${TestFiles})