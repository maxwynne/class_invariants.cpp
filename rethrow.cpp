// rethrow is important to handling exceptions in programs. often, a function has no way of completing its assigned task after exception is thrown out

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
