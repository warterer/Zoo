#pragma once
#include <iostream>
#include <string>
using namespace std;

class ZooException {
public:
	virtual string showMessage()const = 0;
};

class PredatorException : public ZooException 
{
public:
    string showMessage() const override {
        return "Predator Exception!";
    }
};

class MaxCapacityException : public ZooException 
{
public:
    string showMessage() const override {
        return "MaxCapacity Exception!";
    }
};

class NameException : public ZooException {
public:
    string showMessage() const override {
        return "Name Exception!";
    }
};