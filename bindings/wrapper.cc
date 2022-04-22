// pybind11_wrapper.cpp
#include <pybind11/pybind11.h>
#include "dog.h"
#include "cat.h"

namespace py = pybind11;

PYBIND11_MODULE(animal, m) {
  py::class_<Animal::Dog>(m, "Dog")
    .def(py::init<const std::string>())
    .def("walk", &Animal::Dog::walk)
    .def("talk", &Animal::Dog::talk);
  py::class_<Animal::Cat>(m, "Cat")
    .def(py::init<const std::string>())
    .def("walk", &Animal::Cat::walk)
    .def("talk", &Animal::Cat::talk);
}

