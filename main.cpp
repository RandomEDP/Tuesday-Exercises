#include <iostream>
using namespace std;

// Workshop 3-2A
// Exercise 1

// int main() {
//   string word;
//   int wordLength;
//   cout << "Please enter a word: \n";
//   cin >> word;
//   wordLength = word.length();
//   int n=wordLength-1;
//   for(int i=0;i<(wordLength/2);i++){
//       swap(word[i],word[n]);
//       n = n-1;
//   }
//   cout<<word;
// }

// Exercise 2

// int main(){
//   string word;
//   cout << "Please enter a word: ";
//   cin >> word;
//   string lowerCase = word;
//   for(int i = 0; i < lowerCase.length(); i++) { //step through every letter
//     lowerCase[i] = tolower(lowerCase[i]);
//   }
//   cout << lowerCase;
// }

// Exercise 3

int main(){
  string word;
  cout << "Please enter a word: ";
  cin >> word;
    string lowerCase = word;
  for(int i = 0; i < lowerCase.length(); i++) { //step through every letter
    lowerCase[i] = tolower(lowerCase[i]);
  }
  int wordLength;
  wordLength = word.length();
  int n=wordLength-1;
  string swapped = lowerCase;
  for(int i=0;i<(wordLength/2);i++){
      swap(swapped[i],swapped[n]);
      n = n-1;
  }

  if(lowerCase == swapped){
    cout << "The word " << word << " is a palindrome";
  }
  else{
    cout << "The word " << word << " is not a palindrome";
  }

}




