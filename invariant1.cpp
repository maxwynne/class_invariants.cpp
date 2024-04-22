// it is the job of a constructor to establish the invariants of its class and for the member functions to make sure that the invariant holds when they exit
// initialise members and make sure arguments passed through make sense

Vector::Vector(int s)
{
    if (s<0)
          throw length_error{"Vector constructor: negative size"};
    elem = new double[s];
    sz = s;
}
