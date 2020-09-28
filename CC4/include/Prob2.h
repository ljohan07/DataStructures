// Author: Livia Johan
// File: Prob2.h

#include <iostream>
#include <cstdlib>

#include "stack.h"

#define COUT std::cout
#define ENDL std::endl

int water(int heights [], int bars) {
  int ans = 0;
  // stores indices of heights
  stack <int> height_index;
  // iterate through each "bar"
  for(int i = 0; i < bars; ++i) {
    while(!height_index.empty() && heights[i] > heights[height_index.top()]) {
      // stores top of stack & pops it
      int peak = heights[height_index.top()];
      height_index.pop();
      if(height_index.empty()) {
        break;
      }
      // calculate how wide valley
      int width = i - height_index.top() - 1;
      int minHeight;
      // min of current index of heights or the height at index stored @
      // top of stack
      if(heights[i] < heights[height_index.top()]){
        minHeight = heights[i];
      }
      else {
        minHeight = heights[height_index.top()];
      }
      // gets depth/height of the water that will be stored
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
