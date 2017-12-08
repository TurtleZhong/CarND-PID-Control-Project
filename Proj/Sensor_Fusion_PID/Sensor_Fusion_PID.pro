QT += core
QT -= gui

CONFIG += c++11

TARGET = Sensor_Fusion_PID
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += \
    ../../src/main.cpp \
    ../../src/PID.cpp

HEADERS += \
    ../../src/json.hpp \
    ../../src/PID.h
