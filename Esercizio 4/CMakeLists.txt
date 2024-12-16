cmake_minimum_required(VERSION 3.30)
project(Esercizio_4)

set(CMAKE_CXX_STANDARD 20)

add_executable(Esercizio_4 main.cpp
        Motorcycle.cpp
        Motorcycle.h
        Vehicle.cpp
        Vehicle.h
        Car.cpp
        Car.h
        Van.cpp
        Van.h
        Rental.cpp
        Rental.h)
