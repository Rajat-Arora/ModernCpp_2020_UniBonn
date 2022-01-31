#include <experimental/random>
#include <iostream>

int main(int argc, char **argv) {


        try {

          while (true) {
            int guessed_no = 0;
            const int random_number = std::experimental::randint(0, 99);
            std::cout << "guess the number between 0 to 99:" << std::endl;
            std::cin >> guessed_no;
            if (std::cin.fail()) {
              std::cout << "Error encountered, exiting..." << std::endl;
              exit(EXIT_FAILURE);
            }
              if (guessed_no == random_number) {
                std::cout << "Hurray!! You won the game" << std::endl;
                std::cout << "The generated number was: " << random_number
                          << std::endl;
                return EXIT_SUCCESS;
              } else if (guessed_no < 0 || guessed_no > 99) {
                std::cerr << "[WARNING] : Number must be between 0 and 99"
                          << std::endl;
                std::cout << "The generated number was: " << random_number
                          << std::endl;
              } else if (guessed_no > random_number) {
                std::cout << "its number is smaller" << std::endl;
                std::cout << "The generated number was: " << random_number
                          << std::endl;
              } else {
                std::cout << "The genrated number is larger" << std::endl;
                std::cout << "The generated number was: " << random_number
                          << std::endl;
              }
            }
          }
          catch (const std::exception &e) {
            std::cerr << "Error encountered, exiting...";
            exit(EXIT_FAILURE);
          }
      }
