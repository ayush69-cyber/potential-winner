#pragma once

class matrix {

  int rows;
  int columns;

  float *data;

public:
  matrix();

  matrix(int rows, int columns);

  void set_data(float data[]);

  void print();

  ~matrix();
};