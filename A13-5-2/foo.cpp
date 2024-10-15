#include <cstddef>
#include <cstdint>
namespace ns {
template <size_t range> class SI final {
public:
  template <size_t newRange> explicit operator SI<newRange>() const noexcept {
    SI<newRange> res{};
    res.value_ = this->value_;
    return res;
  }

  uint32_t value_;
};

SI<10> foo(SI<9> s) { return static_cast<SI<10>>(s); }

} // namespace ns
