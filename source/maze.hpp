#ifndef MAZE_HPP
#define MAZE_HPP

#include <string>

class Maze
{
private:
  std::string name;
public:
  Maze(/* args */);
  ~Maze();
  void setName(std::string name);
};

#endif