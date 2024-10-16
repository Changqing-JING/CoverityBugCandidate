#include <cstdint>
namespace ns {
class SA final {};

class ST final {
public:
  union IM {
    SA safeValue;
    int32_t rawValue = 0;
  };
  IM rawLow;
};

} // namespace ns
