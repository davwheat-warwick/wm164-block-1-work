# WM164 Smart Solutions Development I / Block 1 / Thursday

## Contents

- [WM164 Smart Solutions Development I / Block 1 / Thursday](#wm164-smart-solutions-development-i--block-1--thursday)
  - [Contents](#contents)
  - [Homework](#homework)
    - [Destructors](#destructors)
    - [BCS Code of Conduct](#bcs-code-of-conduct)

## Homework

### Destructors

> What are destructors? What are destructors used for?

Destructors are run when an class is being deleted (i.e., the scope it was created in has been left, so the variable is no longer accessible, and its memory can be freed).

```cpp
class A {
  A() {
    std::cout << "Created" << std::endl;
  }

  ~A() {
    std::cout << "Destroyed" << std::endl;
  }
}

int main() {
  {
    A a;
    // Output: Created
  }
  // Output: Destroyed

  return 0
}
```

Destructors must:

- not accept any arguments
- not return a value
- not be declared as `const`, `volatile` or `static`

In inheritance, child classes do not inherit their superclass destructors.

Destructors are primarily used to free up any memory reserved by the class. For example, the `string` class definition contains a destructor that frees up any memory used to store the string content in a `char*` array.

### BCS Code of Conduct

> What is the Code of Conduct of the British Computer Society (BCS)?

The BCS Code of Conduct is a set of rules that members of the British Computer Society must adhere by.

The code of conduct encompasses four key principles:

- You make IT for everyone.
- Show what you know, learn what you don't.
- Respect the organisation/individual you work for.
- Keep IT real. Keep IT professional. Pass IT on.

[Source and full code of conduct](https://www.bcs.org/membership-and-registrations/become-a-member/bcs-code-of-conduct)
