// Author: Livia Johan
// File: Prob2.h

#include <iostream>
#include <cstdlib>

#include "stack.h"

#define COUT std::cout
#define ENDL std::endl

int water(int heights [], int bars) {
  int ans = 0;
  // stores
  stack <int> height_index;
  for(int i = 0; i < bars; ++i) {
    while(!height_index.empty() && heights[i] > heights[height_index.top()]) {
      int peak = heights[height_index.top()];
      height_index.pop();
      if(height_index.empty()) {
        break;
      }
      int width = i - height_index.top() - 1;
      int minHeight;
      if(heights[i] < heights[height_index.top()]){
        minHeight = heights[i];
      }
      else {
        minHeight = heights[height_index.top()];
      }
      int valleyDepth = minHeight-peak;
      ans += valleyDepth * width;
    }
    height_index.push(i);
  }
  return ans;
}

void printArr(int heights [], int bars) {
  COUT << "[";
  for(int i = 0; i < bars; ++i) {
    if(i != 0) {
      COUT << ", ";
    }
    COUT << heights[i];
  }
  COUT << "]" << ENDL;
}
