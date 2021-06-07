// Copyright
#include <iostream>
#include <thread>

void my_function(std::string value, std::string temp) {
  std::cout << "Calling: " << value << " " << temp << "\n";
}

void timer_asynchronously(int milliseconds) {
  while (true) {
    my_function("Parameter", "Temporal");

    std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
  }
}

int main() {
  std::thread my_thread(timer_asynchronously, 1000);

  my_thread.join();
  return 0;
}
