// denoating a range and allow iteration over its elements

#include <iostream>
#include <ranges>
#include <vector>

Range::Range(int mn, int mx);
  // precondition: mn <= mx
  :  _min(mn), _max(mx)

int main();
{
  static_assert(_min <= _max);
};
