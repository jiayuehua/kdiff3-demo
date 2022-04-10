// kdiff3-demo.cpp : Defines the entry point for the application.
//

#include "kdiff3-demo.h"
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;



int main()
{
  std::vector<int> v1{ 1,3,5,9,7 };
  std::sort(v1.begin(), v1.end(), [](int l, int r) {
    return l > r;
    });
  cout << "Hello CMake." << endl;
  return 0;
}
