


#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av){

  std::ifstream file;
  std::string readed;

  if(ac != 4){
    std::cout << "Invalid Input \n";
    std::cout << ac << "\n";
    return 0;
  }

  std::string filename = std::string(av[1]);
  file.open(filename);

  std::ofstream fileCopy("copy_" + filename);
  std::string s1 = std::string(av[2]);
  std::string s2 = std::string(av[3]);


  while(std::getline(file, readed)){
    //std::cout << readed ;
    int finded = readed.find(s1);
    if(finded > -1){
      std::cout << "finded : " << finded << "\n";
      readed.replace(finded, s1.length() - 1, s2);
    }
        
    fileCopy << readed + "\n";
  }


}
