#include<iostream>
using namespace std;
int main()

// Matrix& Matrix::calculate_inverse_gause(Matrix& out) const
{
  int i, j, k;
  float copied[3][6] = { 0 }, d;

  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
      copied[i][j] = data[i][j];

  copied[0][3] = 1;
  copied[1][4] = 1;
  copied[2][5] = 1;

  /************** partial pivoting **************/
  for (i = 2; i > 0; i--)
  {
    if (copied[i - 1][1] < copied[i][1])
      for (j = 0; j < 6; j++)
      {
        d = copied[i][j];
        copied[i][j] = copied[i - 1][j];
        copied[i - 1][j] = d;
      }
  }

  /********** reducing to diagonal  matrix ***********/
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
      if (j != i && copied[j][i] != 0)
      {
        d = copied[j][i] / copied[i][i];
        for (k = 0; k < 6; k++)
          copied[j][k] -= copied[i][k] * d;
      }
  }

  /************** reducing to unit matrix *************/
  out.data[0][0] = copied[0][3] / copied[0][0];
  out.data[0][1] = copied[0][4] / copied[0][0];
  out.data[0][2] = copied[0][5] / copied[0][0];
  out.data[1][0] = copied[1][3] / copied[1][1];
  out.data[1][1] = copied[1][4] / copied[1][1];
  out.data[1][2] = copied[1][5] / copied[1][1];
  out.data[2][0] = copied[2][3] / copied[2][2];
  out.data[2][1] = copied[2][4] / copied[2][2];
  out.data[2][2] = copied[2][5] / copied[2][2];

  return out;
}