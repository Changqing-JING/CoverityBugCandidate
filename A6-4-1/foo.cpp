#include <cstdint>
namespace ns {
enum class EM : uint8_t { A, B, C };
int32_t foo(EM const em) noexcept {
  switch (em) {
  case (EM::A): {
    return 1;
  }
  case (EM::B): {
    return 2;
  }
  case (EM::C): {
    return 3;
  }
  default: {
    return 100;
  }
  }
}
} // namespace ns
