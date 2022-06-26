#include "Generator.hpp"


Generator::Generator():
_maze{nullptr},
_algorithm{nullptr}
{
  _maze_names = {"Tutorial Maze", ""};
  _algorithm_names = {"Tutorial Algorithm", ""};
}

Generator::~Generator()
{
  delete _instance;
}

Generator* Generator::_instance = nullptr;

Generator* Generator::getInstance(){
  if (_instance == nullptr)
    _instance = new Generator();
  return _instance;
}


