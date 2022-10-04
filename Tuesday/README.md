# WM164 Smart Solutions Development I / Block 1 / Tuesday

## Homework

### Ternary statements

> What is a ternary operator? Explain using an example.

A ternary is more compact way to represent `if`/`else` selection, typically used to conditionally assign values to variables.

```cpp
int main() {
  bool negative = true;

  int num = negative ? -1 : 1;
}
```

In this example, the ternary statement conditionally sets the value of `num` based on the `bool` stored as `negative`. If `negative` is true, then `num` will be set to `-1`, else it will be set to `1`.

The code produces a similar effect to the code below:

```cpp
int main() {
  bool negative = true;

  int num;

  if (negative) {
    num = -1;
  } else {
    num = 1;
  }
}
```

Ternaries are not just limited to checking variable values -- they can also be used to perform comparisons.

Writing a ternary such as `num = 10 > 5 ? -1 : 1` is also valid, and so is calling functions within the ternary cases:

```cpp
int main() {
  int num = 5 > 6 ? a() : b();
  // num = 10
}

int a() {
  return 5
}

int b() {
  return 10;
}
```

### Rule-based systems

> Give examples of rules that can be implemented in a rule-based expert system?

A rule-based system is an algorithm which attempts to solve a problem through a set of pre-defined rules. Common examples could be simple "AI" to compete against players in a computer game.

The idea of a rule-based **expert** system is to become as good as possible at its task, typically through inputs from another human expert.

A common example online is the Akinator, which asks a series of questions about a person you're thinking of, to which it knows the answer already, in order to guess who you're thinking of.
