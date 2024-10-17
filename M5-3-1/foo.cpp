#include <cstdint>
namespace ns {

class C1 {
public:
  int32_t foo(int32_t const x) noexcept {
    bool const z{x == 1};
    int32_t y;
    auto const goo = [z, &y]() { y = (!z) ? 1 : 2; };
    goo();
    return y;
  }
};

} // namespace ns
