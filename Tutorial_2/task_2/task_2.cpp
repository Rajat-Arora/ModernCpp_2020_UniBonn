#include <iostream>
#include <math.h>
#include <sstream>
#include <string>

int do_operation(int &num_1, std::string &ext_1, int &num_2,
                 std::string &ext_2) {
  std::string s1 = ".txt";
  std::string s2 = ".png";
  int last_num_2 = num_2 % 10;
  int digits = (int)log10(num_1);
  int first_num_1 = (int)(num_1 / pow(10, digits));

  if (ext_1 == ext_2) {
    if (ext_1 == s1)
      return ((first_num_1 + last_num_2) / 2);
    else if (ext_1 == s2)
      return (first_num_1 + last_num_2);
  }
  if (ext_1 == s1 && ext_2 == s2)
    return first_num_1 % last_num_2;

  return 0;
}

  int main(const int argc, const char *argv[]) {
    if((argc-1)!=2)
    {
        std::cout<<"More than required input arguments.Aborting!!"<<std::endl;
        exit(EXIT_FAILURE);
    }

    int num_1 = 0;
    int num_2 = 0;
    std::string ext_1;
    std::string ext_2;

    std::stringstream filename1{argv[1]};
    std::stringstream filename2{argv[2]};

    filename1 >> num_1 >> ext_1;
    filename2 >> num_2 >> ext_2;

    if (num_1 == num_2 && ext_1 == ext_2) {
      std::cout << "Same files given as input.Aborting!!" << std::endl;
      exit(EXIT_FAILURE);
    }

    std::cout << "Finally the answer is:"
              << do_operation(num_1, ext_1, num_2, ext_2) << std::endl;

    return 0;
}

