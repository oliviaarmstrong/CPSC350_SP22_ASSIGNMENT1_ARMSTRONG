//implemenation file, .cpp

/* processFile : Takes a string representing the input file containing text in English
as well as a string representing the output file which will contain the text
translated in Tutnese */

#include "FileProcessor.h"

FileProcessor::FileProcessor() {}

FileProcessor::~FileProcessor() {}

void FileProcessor::processFile(string english, string tutnese) {
  ifstream inFS;
  ofstream ofFS;
  string line;

  inFS.open(english);
  ofFS.open(tutnese);
  while(getline(inFS,line)) {
    ofFS << t.translateEnglishSentence(line) << endl;
  }
  inFS.close();
  ofFS.close();
}
