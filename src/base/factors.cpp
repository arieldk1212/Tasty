
template <typename T>

class Asserts {
  public:
  template <typename T> bool assert_equal(T in, T out);
};

template bool Asserts::assert_equal<int>(int, int) {

};