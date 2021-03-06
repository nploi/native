# Native Library
[![Join Gitter Chat Channel -](https://badges.gitter.im/tiny-express/native.svg)](https://gitter.im/tiny-express/native?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge&utm_content=badge)
[![Build status](https://ci.appveyor.com/api/projects/status/5rbqtwl3nyb1vcyl/branch/master?svg=true)](https://ci.appveyor.com/project/tiny-express/native)&nbsp;[![Build Status](https://travis-ci.org/tiny-express/native.svg?branch=master)](https://travis-ci.org/tiny-express/native)
[![Coverage status](https://img.shields.io/codecov/c/github/tiny-express/native/master.svg)](https://codecov.io/gh/tiny-express/native)&nbsp;[![Support Platform](https://img.shields.io/badge/platform-windows%20%7C%20linux%20%7C%20darwin-blue.svg)]()

**Native Library** provides a set of Java packages are re-written in C++

* Blazing fast, small footprint with no dependency required
* Cross platform, outstanding performance with multiple-core support from STL
* Prevents nearly all memory leak and segmentation fault via automatic storage
* Packages are strictly tested with unit tests, clean with Valgrind and follow Oracle documentation
* Feel free to use in your commercial products and welcome for contributions

## Getting started
#### Docker
```bash
$ docker pull foodtiny/native:latest
```

#### Installation
```bash
$ git clone https://github.com/tiny-express/native.git
$ cd native
$ cmake . -DCMAKE_BUILD_TYPE=Release
$ make native
$ sudo make install
```

#### Examples
```cpp
#include <native/library.hpp>

class MainApplication {
public:
    static void main(Array<String> arguments) {
        HashMap<String, String> hashMap;
        int counter = 0;
        for (String argument : arguments) {
            hashMap.put("argument " + String::valueOf(counter), argument);
            counter++;
        }
        System::out::println("We have 4 pairs:");
        String pairs = "Pairs: \n";
        for (Map<String, String>::Entry entry : hashMap.entrySet()) {
            pairs += entry.getKey() + String(" - ") + entry.getValue() + String("\n");
        }
        System::out::println(pairs);
        ArrayList<HashMap<String, String>> arrayList;
        arrayList.add(hashMap);
        System::out::println(arrayList.toString());
    }
};

int main(int argc, char **argv) {
    return Application(MainApplication::main, argc, argv);
}
```

Compile your source and link with native library
```bash
$ g++ -c -o main.o HelloWorld.cpp
$ g++ -o main main.o -lnative -lstdc++
$ ./main one two three
```

Output:
```javascript
We have 4 pairs:
argument 3 is three
argument 2 is two
argument 1 is one
argument 0 is ./main

[{"argument 0": "./main", "argument 1": "one", "argument 2": "two", "argument 3": "three"}]
```
More examples can be found [here](https://github.com/tiny-express/native/tree/master/examples)
Support unit test by default via ApplicationTest [here](https://github.com/tiny-express/native/tree/master/examples/Docker/ApplicationTest)  - Powered by C-Unit

# Documentation
[![Documentation](https://img.shields.io/badge/documentation-doxygen-ff69b4.svg)](https://tiny-express.github.io/native/annotated.html)
#### Differences
This library provides Java classes in C++ so its syntax are friendly for
both programming languages:

- Namespace - Package
```java
// Java
System.out.println("Java");
```
```cpp
// C++
System::out::println("C++");
```
- Array
```java
// Java
byte[] byes = {};
```
```cpp
// C++
Array<byte> bytes = {};
```

#### Data Types
All data types are implemented and ready to use in C++ Application
- [x] char - Java.Lang.Character
- [x] byte - Java.Lang.Byte
- [x] string - Java.Lang.String
- [x] short - Java.Lang.Short
- [x] int - Java.Lang.Integer
- [x] long - Java.Lang.Long
- [x] float - Java.Lang.Float
- [x] double - Java.Lang.Double
- [x] boolean - Java.Lang.Boolean
- [x] enum - Java.Lang.Enum
