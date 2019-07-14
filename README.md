# Simple C++ class creator

This tool allows you to create a C++ class very easily. You just have to provide a class name, and an optional parent class.

Simply clone this project with :
```
git clone git@github.com:Rubytox/class_creator.git
```
or download the ZIP file. Then type `make` in the shell and you'll have the `class_creator` program under `bin` directory.

Running
```
sudo make install
```
will also build the tool and copy it in `/usr/local/bin`.

Then, you can use the class creator this way:
```
class_creator class_name parent_class_name
```
where `parent_class_name` is an optional argument. The files `class_name.h` and `class_name.cpp` will be created.

The header file `class_name.h` will contain:
```c++
#pragma once

class class_name : public parent_class_name
{
public:
    class_name();
    ~class_name();

private:

};
```

The source file `class_name.cpp` will contain:
```c++
#include "class_name.h"

class_name::class_name()
{
}

class_name::~class_name()
{
}
```
