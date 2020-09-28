#include <iostream>
#include <cstdlib>

#include "stack.h"

#define COUT std::cout
#define ENDL std::endl

int water(int heights [], int bars) {
  int ans = 0;
  stack <int> maxHeight_index;
  for(int i = 0; i < bars; ++i) {
    while(!maxHeight_index.empty() && heights[i] > heights[maxHeight_index.top()]) {
      int peak = heights[maxHeight_index.top()];
      maxHeight_index.pop();
      if(maxHeight_index.empty()) {
        break;
      }
      int width = i - maxHeight_index.top() - 1;
      int minHeight;
      if(heights[i] < heights[maxHeight_index.top()]){
        minHeight = heights[i];
      }
      else {
        minHeight = heights[maxHeight_index.top()];
      }
      int valleyDepth = minHeight-peak;
      ans += valleyDepth * width;
    }
    maxHeight_index.push(i);
  }
  return ans;
}
