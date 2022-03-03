//implemenation file, .cpp

/* translateEnglishWord : single string representing single English word as
input, returns the string translated in Tutnese */
/* translateEnglishSentence : single string representing English
sentence as input, returns the string translated in Tutnese */

#include "Translator.h"

Translator::Translator() {}

Translator::~Translator() {}

string Translator::translateEnglishWord(string englishWord) {
  string ret = "";
  char c;
  char d;
  for (int i = 0; i < englishWord.size(); ++i) {
    c = (englishWord[i]);
    d = (englishWord[i+1]);
    if (tolower(c) == tolower(d)) {
      ret += m.translateDoubleCharacter(c);
      ++i;
    }
    else {
      ret += m.translateSingleCharacter(c);
    }
  }
  return ret;
}

string Translator::translateEnglishSentence(string englishSentence) {
  string currentWord;
  string finalSentence;
  for (int i = 0; i < englishSentence.size(); ++i) {
    if (englishSentence[i] == '.' || '?' || '!') {
      currentWord += englishSentence[i];
    }
    else if (englishSentence[i] == ' ') {
      finalSentence += translateEnglishWord(currentWord);
      currentWord = "";
    }
    else {
      currentWord += englishSentence[i];
    }
  }
  finalSentence += translateEnglishWord(currentWord);
  return finalSentence;
}
