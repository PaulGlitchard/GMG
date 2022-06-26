#include "Generator.hpp"

Generator::Generator()
{
}

Generator::~Generator()
{
}

Generator* Generator::getInstance(){
  if (Generator::_instance == nullptr)
    _instance = new Generator();
  return _instance;
}