# Makefiles
-----------
## How to install make in Ubuntu
```
1) sudo apt update
2) sudo apt install make
3) make -version
```
## What is Makefile
A Makefile is a simple text file that contains a set of rules describing how to compile and build a project. Each rule specifies a target (the file to be generated), dependencies (the files needed to generate the target), and the command to generate the target. The syntax is as follows:

.Makefile
```
target: dependencies
    command
```
## What is make
make is a build automation tool that is used to compile and build projects. It is designed to manage dependencies between files and execute the necessary commands to build a target file based on the modification times of source files. make reads a file called Makefile that contains rules and dependencies for building the project.
