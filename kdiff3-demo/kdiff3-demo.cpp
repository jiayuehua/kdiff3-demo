// kdiff3-demo.cpp : Defines the entry point for the application.
//

#include "kdiff3-demo.h"
#include <algorithm>
#include <deque>
#include <iostream>
#include <functional>

using namespace std;

int main()
{
  std::deque<int> v{ 1,2,9,5,7 };
  std::sort(v.begin(), v.end(), std::greater{});
  cout << "Hello CMake." << endl;
  return 0;
}
