#include <cstdint>
namespace ns {
class SA final {
  uint32_t *a;
};

SA foo() {
  SA res;
  return res;
}

} // namespace ns
