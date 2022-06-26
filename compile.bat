@echo off

g++ -o build/maze_generator source/main.cpp source/Generator.cpp source/Maze.cpp source/Algorithm.cpp
.\build\maze_generator.exe
