#ifndef GENERATOR_HPP
#define GENERATOR_HPP

#include <iostream>
#include <vector>
#include "Maze.hpp"
#include "Algorithm.hpp"


 
// this class manages all the algorithms and mazes
class Generator
{
private:
  static Generator* _instance;
  std::vector<std::string> _maze_names;
  std::vector<std::string> _algorithm_names;

  Maze* _maze;
  Algorithm* _algorithm;
  Generator();
  ~Generator();
public:
  Generator(Generator &other) = delete;
  void operator=(const Generator&) = delete;

  // returns the instance of the class
  static Generator* getInstance();

  // 
  void setMaze();
  void setAlgorithm();
};

#endif
