// struct is a class with different default member access 

struct Point
{
  std::pair<int x, int y>
};

// avoid situations where _min is greater than _max

#include <iostream>
#include <ranges>
#include <vector>

std::Range(int mn, int mx) 
  : _min(mn), _max(mx)
{
  if (_min > _max)
      throw some_exception();
}
