#include <cstdint>
namespace ns {
struct ST {
  int32_t b;
};

void foo(int32_t const a, ST &st) {
  if (a > 0) {
    st.b = 1;
  }
}
} // namespace ns
