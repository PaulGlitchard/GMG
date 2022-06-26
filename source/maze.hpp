#ifndef MAZE_HPP
#define MAZE_HPP

#include <string>
 
class Maze
{
private:
  std::string _name;
  std::string _description;
  
public:
  Maze(/* args */);
  ~Maze();
  void setName(std::string name);
  void setDescription(std::string description);
};

#endif