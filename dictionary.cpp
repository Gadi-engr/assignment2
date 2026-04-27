#include <iostream>
#include <string>

// API prototypes
std::string getDefinition(std::string word);
std::string getAudioURL(std::string word);
std::string getPronunciation(std::string word);

void displayMenu() {
  std::cout << "\n--- Dictionary Menu ---" << std::endl;
  std::cout << "1. Definition" << std::endl;
  std::cout << "2. Audio URL" << std::endl;
  std::cout << "3. Pronunciation" << std::endl;
  std::cout << "4. Exit" << std::endl;
  std::cout << "Choice: ";
}

void handleLookup(int choice) {
  std::string word;
  std::cout << "Enter word: ";
  std::cin >> word;

  std::string result;
  if (choice == 1) result = getDefinition(word);
  else if (choice == 2) result = getAudioURL(word);
  else if (choice == 3) result = getPronunciation(word);

  if (result.empty()) {
    std::cout << "Information not found." << std::endl;
  } else {
    std::cout << "Result: " << result << std::endl;
  }
}

int main() {
  int choice = 0;
  while (choice != 4) {
    displayMenu();
    if (!(std::cin >> choice)) {
      std::cin.clear();
      std::string dummy;
      std::cin >> dummy;
      std::cout << "Invalid input." << std::endl;
      continue;
    }

    if (choice >= 1 && choice <= 3) {
      handleLookup(choice);
    } else if (choice != 4) {
      std::cout << "Invalid choice." << std::endl;
    }
  }
  std::cout << "Goodbye!" << std::endl;
  return 0;
}

// Placeholder API implementations
std::string getDefinition(std::string word) { return ""; }
std::string getAudioURL(std::string word) { return ""; }
std::string getPronunciation(std::string word) { return ""; }
