# WM164 Smart Solutions Development I / Block 1 / Wednesday

## Contents

- [WM164 Smart Solutions Development I / Block 1 / Wednesday](#wm164-smart-solutions-development-i--block-1--wednesday)
  - [Contents](#contents)
  - [Homework](#homework)
    - [Returning multiple values from a function](#returning-multiple-values-from-a-function)
      - [Tuples](#tuples)
      - [Reference/pointer parameters](#referencepointer-parameters)
    - [What are the 'bad smells' in code (i.e. triggers for refactoring)?](#what-are-the-bad-smells-in-code-ie-triggers-for-refactoring)

## Homework

### Returning multiple values from a function

> Can a function return more than one value in C++?

Functions can return multiple values in a few different ways. One example is by taking advantage of a data type called a Tuple.

#### Tuples

This is very easy in modern C++ (starting with C++17). In the example below, the function `func` is defined with the return type of `auto`, meaning the compiler will infer the return type at compile-time. We can return `std::make_tuple` which will automatically handle the creation of a tuple with the correct data types.

In our code, we can then destructure the tuple using array-like syntax to split the tuple back into individual variables automatically.

```cpp
#include <tuple>

auto func() {
    return std::make_tuple(123, 0.1234, std::string("hello"), "c-world");
}

int main() {
    auto [myInt, myDouble, myString, myCString] = func();

    // do stuff...
}
```

> Code derived from [Piotr Henryk Dabrowski's answer on StackOverflow](https://stackoverflow.com/a/70769118/11091039).

In C++11, it is more complicated and manual, though:

```cpp
#include <tuple>

std::tuple<int, double> func() {
    return std::make_tuple(123, 0.1234);
}

int main() {
    int myInt;
    double myDouble;

    std::tie(quotient, remainder) = func();

    // do stuff...
}
```

#### Reference/pointer parameters

You can also use reference or pointer parameters. This allows the function being called to directly modify the variables in the scope of the call itself. This can cause confusion and unexpected issues if it's not expected, though.

It's generally preferred to use pointer parameters since this requires the calling code to explicitly pass it as a referential parameter, making it clear to the developer what is happening, rather than silently treating the parameters as references.

```cpp
void referential(int &param) {
  param += 10;
}

void pointer(int *param) {
  param += 20;
}

int main() {
  int a = 10,
      b = 10;

  referential(a);
  pointer(&a);

  std::cout << "a: " << a << std::endl;
  std::cout << "b: " << b << std::endl;

  // a: 20
  // b: 30
}
```

### What are the 'bad smells' in code (i.e. triggers for refactoring)?

- bad naming of variables/methods/classes
  - should be named based on their use or function
- repetition
  - makes changing code difficult if you need to find all instances of something in the application
- "magic numbers"
  - seemingly random numbers on their own with no apparent meaning or description
- unpredictable variable mutation
  - code seemingly changes variables randomly
- providing excess or returning excess data unnecessarily
- too many comments
  - implies that the code is too unclear in its current state
  - comments may be useless (i.e., explaining a simple piece of code)
- too much code
  - very long methods
    - likely able to be split into multiple smaller functions instead
  - very long lines
    - hard to debug
- code bloat/unused code
