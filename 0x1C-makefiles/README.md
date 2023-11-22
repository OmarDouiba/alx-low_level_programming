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
target: dependencies(prerequisites)
    command
```
## What is make
make is a build automation tool that is used to compile and build projects. It is designed to manage dependencies between files and execute the necessary commands to build a target file based on the modification times of source files. make reads a file called Makefile that contains rules and dependencies for building the project.
## Why we need Make ?
- To organize the compilation process
- To run our tools scripts
- To automate the process
- To be fully control on the outputs and its time
#### 1) Setting rule
```
target: prerequisites
     command
EX:
---
print:
	echo "Hi"
all:  print
	echo "Hello, World"
Output:
-------
>> make all
>> Hi
>> Hello, World

```
#### 2) Define Variable
```
var_name := value
OR
var_name = value
Ex:
---
file := test.py
name = omar
all:
	echo $(name)
output:
------
>> make all
>> omar
```
#### 3) Disaple echo
```
all:
	@echo "hi"
it will print 
Hi
only instead of
echo "Hi"
Hi
```


#### How This line work **(OBJ = $(SRC:.c=.o))**
```
consider we have three source files:
# Source files
SRC = main.c utils.c another_file.c
```
let's use the line OBJ = $(SRC:.c=.o) to generate a list of object files:
```
# Object files
OBJ = $(SRC:.c=.o)
```
After applying the substitution, the OBJ list would look like this:
```
OBJ = main.o utils.o another_file.o
```
