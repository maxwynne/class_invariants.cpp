// standard-library exception length_error reports a non-positive number of elements 
// no new memory to allocate via new? throw out a std::bad_alloc

void test()
{
      try{
          Vector v(-27);
      }
      catch (std::length_error) {
            // handle negative size
      }
      catch (std::bad_alloc) {
            // handle memory exhaustion
      }
}
