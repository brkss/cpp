#include <string>

class Zombie {
  private:
    std::string name;
  public:
    Zombie(std::string);
    ~Zombie();
    void announce(void);
};
