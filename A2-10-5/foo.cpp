#include <cstdint>
namespace ns {
template <typename T> inline uintptr_t goo(T const x) noexcept { return x + 1; }

uintptr_t foo(uintptr_t p) noexcept { return goo(p); }

} // namespace ns
