# CharCat

The toy example for learning:
* C++: class inheritance 
  * [cppreference](https://en.cppreference.com/w/cpp/language/derived_class)
* C++: pure virtual method and overriding
  * [cppreference](https://en.cppreference.com/w/cpp/language/virtual)
* C++: dynamic casting
  * [cppreference](https://en.cppreference.com/w/cpp/language/dynamic_cast)
* C++: smart pointers
  * [cppreference](https://en.cppreference.com/w/cpp/memory)
* C++: Pimpl Idiom
  * [cppreference](https://en.cppreference.com/w/cpp/language/pimpl)
* CMake: library generation and linking
  * [CMake Doc: `add_library`](https://cmake.org/cmake/help/latest/command/add_library.html)
  * [CMake Doc: `target_link_libraries`](https://cmake.org/cmake/help/latest/command/target_link_libraries.html)


## Tasks

1. Inherit `CharCat`
2. Implement the class, overriding the virtual methods
3. Implement the `MakeCharCat` method that returns pointer typed in your **derived class**
4. Write the `CMakeLists.txt` to build the **dynamic** library of `CharCat`
5. Write a C++ program to test your `CharCat` library, from `MakeCharChat` to `FeedChar` and `Results`.
