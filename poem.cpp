#include <iostream>
#include <string>
using namespace std;


string makePoem() {
  
  cout << "Enter a poem one line at a time, then press enter" << endl;
  cout << "To quit, type 'q' and press enter." << endl;

  
  string poem;
  string line;
  while (true) {
    
    cout << "> ";
    getline(cin, line);

    
    if (line == "q") {
      break;
    }

    
    poem += line + '\n';
  }

  
  return poem;
}
string get_user_input() {
  
  string input;

  // Prompt the user 
  cout << "> ";
  getline(cin, input);

  
  return input;
}
int main() {
  // Get the poem 
  string poem = makePoem();

  
  cout << poem << endl;

  return 0;
}
