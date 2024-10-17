namespace ns {
class C1 {
public:
  void foo(C1 &&other) noexcept { other.goo(); }
  void goo() noexcept {}
};

} // namespace ns
