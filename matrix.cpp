#include "matrix.hpp"
#include <iostream>

matrix::matrix() {
  rows = 2;
  columns = 2;
  *data = NULL;
}

matrix::~matrix() { delete data; }

matrix::matrix(int rows, int columns) {
  this->rows = rows;
  this->columns = columns;
  data = new float*[rows];
  for(int i = 0; i<= rows ; i++)
  {
    data[i] = new float[columns];
  }

}

void matrix::set_data(float d[]) {
  int k = 0;
  for(int i = 0; i<rows ; i++)
  {
    for(int j = 0; j<columns ; j++)
    {
      data[i][j] = d[k];
      k++;
    }
  }
}

void matrix::print() {
  for(int i = 0; i< rows ; i++)
  {
    for(int j = 0 ; j< columns ; j++)
    {
      std::cout << data[i][j] << '\t';
    }
    std:: cout << std::endl;
  }
}
void matrix:: operator+(matrix mat)
{
  matrix matc(rows,columns);
  for(int i = 0; i < rows ; i++)
  {
    for(int j = 0; j < columns ; j++)
    {
      matc.data[i][j] = data[i][j] + mat.data[i][j];
    }
  }
  matc.print();
}
void matrix::operator-(matrix mat)
{
  matrix matc(rows,columns);
  for(int i = 0; i < rows ; i++)
  {
    for(int j = 0; j < columns ; j++)
    {
      matc.data[i][j] = data[i][j] - mat.data[i][j];
    }
  }
  matc.print();
}
void matrix :: operator*(matrix mat)
{
  matrix matc(rows,mat.columns);
  for(int i = 0; i<rows ; i++)
  {
    for(int j = 0 ; j<mat.columns ; j++)
    {
      matc.data[i][j] = 0;
      for(int k = 0 ; k < columns ; k++)
      {
        matc.data[i][j] += data[i][k]*mat.data[k][j];
      }
    }
  }
  matc.print();
}