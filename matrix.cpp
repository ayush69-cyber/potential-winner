#include "matrix.hpp"
#include <iostream>

matrix::matrix() {
  rows = 2;
  columns = 2;

  data = nullptr;
}

matrix::~matrix() { delete data; }

matrix::matrix(int rows, int columns) {
  this->rows = rows;
  this->columns = columns;

  data = nullptr;
}

void matrix::set_data(float d[]) {
  data = new float[rows * columns];

  for (int i = 0; i < rows * columns; i++) {
    this->data[i] = d[i];
  }
}

void matrix::print() {
  for (int i = 0; i < rows * columns; i++) {
    std::cout << data[i] << '\t';
    if ((i + 1) % columns == 0) {
      std::cout << '\n';
    }
  }
}