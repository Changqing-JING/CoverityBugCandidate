#include <cstdint>
namespace ns {

void goo(uint32_t *p);

class C1 {
public:
  static thread_local uint32_t x;
};

thread_local uint32_t C1::x = 1U;

void foo() noexcept { goo(&C1::x); }

} // namespace ns
