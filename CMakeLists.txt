cmake_minimum_required(VERSION 3.28)
project(Projet)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_executable(Projet
        src/Borrower.cpp
        src/Borrower.h
        src/Lender.cpp
        src/Lender.h
        src/main.cpp)
