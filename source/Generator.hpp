#ifndef GENERATOR_HPP
#define GENERATOR_HPP

#include <iostream>

 

class Generator
{
private:
  static Generator* _instance;
  Generator();
  Generator(const Generator&);
  ~Generator();
public:
  static Generator* getInstance();
};

Generator* Generator::_instance = nullptr;

#endif