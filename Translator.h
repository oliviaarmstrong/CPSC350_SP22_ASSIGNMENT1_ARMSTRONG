//header file to define Translator class

#include <iostream>
#include "Model.h"
using namespace std;

class Translator {
public:
  Translator();
  ~Translator();
  string translateEnglishWord(string englishWord);
  string translateEnglishSentence(string englishSentence);
private:
  Model m;
};
