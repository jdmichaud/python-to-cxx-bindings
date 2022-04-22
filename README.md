# Python binding to C++ sample project using `pybind11`

- `src/`: The sources of a very simple library with a parent class `Animal` and
children classes `Dog` and `Cat`. The output of calling `make` in this folder
will be the static library `libanimal.a`.
- `bindgins/`: `wrapper.cc` contains the code used by `pybind11` to generate the
the dynamic library.

## How to

```bash
cd src
make
cd ../bindings
make
python
>>> import animal
>>> snoopy = animal.Dog('Snoopy')
>>> snoopy.talk()
waf!
```

## Process

[process graph](process.svg)