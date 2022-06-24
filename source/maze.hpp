#ifndef MAZE_HPP
#define MAZE_HPP

#include <string>

class maze
{
private:
  std::string name;
public:
  maze(/* args */);
  ~maze();
  void setName(std::string name);
};

#endif