#include <iostream>
using namespace std;

float dados[10] = {54.3, 63.8, 12.9, 13.1, 22.3, 32.5, 17.6, 34.2, 37.9, 39.6};

float* sort(float* input) {
  float buffer;
  //for (int i = 1; i < 2; i++) {
    buffer = input[0];
    input[0] = input[1];
    input[1] = buffer;
  //}
  return input;
} 

int main() 
{
    cout << "omem arana ferias dakia doisme zes" << endl;
    for (int i = 0; i < 10; i++) {
      cout << *(sort(dados) + i) << " ";
    }
    return 0;
}
