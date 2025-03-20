#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <cmath>
using namespace std;

template <typename T>
class comel {
public:
    T cheslo;
    double step;
    comel(T c1, double s1) : cheslo(c1), step(s1) {}
    void stepen() {
        cout << "–езультат: " << pow(cheslo, step) << endl;
    };
};



template <typename N>
class matric {
public:
    N** matrix;
    int n;
    matric(int n=0) : n{ n } {
        matrix = new int* [n];
        for (int i = 0;i < n;i++)
      matrix[i]= new int[n];
      
    };
    void cinmatr() {
        for (int i = 0;i < n;i++) {
            for (int j = 0;j < n;j++) {
                cout << "Ёлемент массива" << i << "," << j << "= ";
                cin >> matrix[i][j];
            }
        }
    }
    ~matric() {
        for (int i = 0; i < n; i++) {
            delete[] matrix[i];
        }
        delete[] matrix;
    }

    void print() {
         for (int i = 0;i < n;i++) {
            for (int j = 0;j < n;j++) {
                cout << "Ёлемент массива" << i << "," << j << "= " << matrix[i][j] << "\n";
            }
       }
    }
matric <N> proizved(matric<N> m1) {
    matric <N> result(2);
    result.matrix = new int* [n];
  for (int i = 0;i < n;i++)
      result.matrix[i] = new int[n];
        for (int i = 0;i < n;++i){
            for (int j = 0; j < n;++j){
                result.matrix[i][j] = 0;
                for (int k = 0;k < n;++k){
                    result.matrix[i][j] += matrix[i][k] * m1.matrix[k][j];
                }
            }
        }
        return result;
    }
};

#endif
