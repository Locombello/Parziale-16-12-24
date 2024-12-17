cmake_minimum_required(VERSION 3.30)
project(Esercizio_6)

set(CMAKE_CXX_STANDARD 26)

add_executable(Esercizio_6 main.cpp
        Device.cpp
        Device.h
        Observer.h
        Position.cpp
        Position.h
        Smartphone.cpp
        Smartphone.h
        Tablet.cpp
        Tablet.h
        Laptop.cpp
        Laptop.h
        GPS.cpp
        GPS.h
        Notifier.cpp
        Notifier.h
        App.cpp
        App.h)
