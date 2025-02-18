#include <iostream>

class App {
public:
  App(bool debug_mode = false);
  ~App();

  void run();
  void handle_exit();

  bool get_is_running();
  bool set_should_exit();

private:
  bool m_is_running;
  bool m_should_exit;
  bool m_debug_mode;
  size_t m_debug_iter_counter;
};
