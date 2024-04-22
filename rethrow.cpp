void test()
{
      try {
            Vector v(-27);
      }
      catch (std::length_error) {
          cout << "test failed: length error\n";
          throw;  // rethrow
      }
      catch (std::bad_alloc) {
          // test not designed to handle memory exhaustion
          std::terminate();
      }
}
