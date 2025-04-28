#include <cstdint>
uint32_t z;
uint32_t foo() {
  static constexpr uint32_t x{1};
  auto goo = []() -> uint32_t { return x; };
  if (z > 0) {
    z = x;
  }
  return goo();
}
