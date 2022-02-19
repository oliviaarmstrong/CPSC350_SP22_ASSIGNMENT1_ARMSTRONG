//implemenation file, .cpp

/* translateSingleCharacter : single character as input, returns string translated
in Tutnese */
/* translateDoubleCharacter : single character as input that appears twice in
a row, returns string translated in Tutnese */

#include "Model.h"
#include <cctype>

Model::Model() {}

Model::~Model() {}

string Model::translateSingleCharacter(char singleInput) {
  switch (singleInput) {
    case 'B':
    return "Bub";
    break;

    case 'b':
    return "bub";
    break;

    case 'C':
    return "Cash";
    break;

    case 'c':
    return "cash";
    break;

    case 'D':
    return "Dud";
    break;

    case 'd':
    return "dud";
    break;

    case 'F':
    return "Fuf";
    break;

    case 'f':
    return "fuf";
    break;

    case 'G':
    return "Gug";
    break;

    case 'g':
    return "gug";
    break;

    case 'H':
    return "Hash";
    break;

    case 'h':
    return "hash";
    break;

    case 'J':
    return "Jay";
    break;

    case 'j':
    return "jay";
    break;

    case 'K':
    return "Kuck";
    break;

    case 'k':
    return "kuck";
    break;

    case 'L':
    return "Lul";
    break;

    case 'l':
    return "lul";
    break;

    case 'M':
    return "Mum";
    break;

    case 'm':
    return "mum";
    break;

    case 'N':
    return "Nun";
    break;

    case 'n':
    return "nun";
    break;

    case 'P':
    return "Pub";
    break;

    case 'p':
    return "pub";
    break;

    case 'Q':
    return "Quack";
    break;

    case 'q':
    return "quack";
    break;

    case 'R':
    return "Rug";
    break;

    case 'r':
    return "rug";
    break;

    case 'S':
    return "Sus";
    break;

    case 's':
    return "sus";
    break;

    case 'T':
    return "Tut";
    break;

    case 't':
    return "tut";
    break;

    case 'V':
    return "Vuv";
    break;

    case 'v':
    return "vuv";
    break;

    case 'W':
    return "Wack";
    break;

    case 'w':
    return "wack";
    break;

    case 'X':
    return "Ex";
    break;

    case 'x':
    return "ex";
    break;

    case 'Y':
    return "Yub";
    break;

    case 'y':
    return "yub";
    break;

    case 'Z':
    return "Zub";
    break;

    case 'z':
    return "zub";
    break;

    default:
    string ret = "";
    ret += singleInput;
    return ret;
    break;
  }
}

string Model::translateDoubleCharacter(char doubleInput) {
  string ret = "";
  if (doubleInput == 'A' || doubleInput == 'E' || doubleInput == 'I' || doubleInput == 'O'|| doubleInput == 'U') {
    ret += "Squat";/* code */
  }
  else if (doubleInput == 'a' || doubleInput == 'e' || doubleInput == 'i' || doubleInput == 'o'|| doubleInput == 'u') {
    ret += "squat";/* code */
  }
  else if(isupper(doubleInput)){
    ret += "Squa";
  }
  else {
    ret += "squa";
  }
  ret += translateSingleCharacter(doubleInput);
  return ret;

}
