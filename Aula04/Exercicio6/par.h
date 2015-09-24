#ifndef _PAR_H_
#define _PAR_H_
#include <sstream>
#include <string>

class Par {
public:
  int anterior, posterior;

  Par() {
    anterior = posterior = -1;

  }

  Par (int x, int y) {
    anterior = x;
    posterior = y;
  }

  std::string toString() {
    std::stringstream stream;
    if (anterior == -1)
      stream << "Inserir antes do primeiro elemento";
    else if (posterior == -1) 
      stream << "Inserir após o último elemento";
    else 
      stream << "Inserir entre " << anterior << " e " << posterior;

    return stream.str();
  }
};

#endif