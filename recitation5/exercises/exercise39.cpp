#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
Class EE3223R C++ & Data Structures
Author: Divyaansh Dandona
Instructor: Dr. Jeff Prevost
File: exercise39.cpp


Problem: Given a list of words and their respective replacements.
Perform a replacement on a user inputed sentence. 

Topics: Functions

*/

int findWord(vector<string> words, string targetWord)
{
  /*  
  Function returns the index at which a targetWord is found in vector words, else -1
 */

  // for loop performs search
  for (int i = 0; i < words.size(); i++)
  {
    if (words.at(i) == targetWord)
    {
      return i;
    }
  }

  return -1;
}

int main()
{

  int numOfVals;

  vector<string> originalWords;
  vector<string> replacementWords;
  string curVal;

  // number of inputs expected
  cin >> numOfVals;

  // for loop performs storing/populating of values
  for (int i = 0; i < numOfVals; ++i)
  {

    // store original word
    cin >> curVal;
    originalWords.push_back(curVal);

    // store replacement word
    cin >> curVal;
    replacementWords.push_back(curVal);
  }

  // length of sentence
  cin >> numOfVals;

  // for loop modifies print output
  for (int i = 0; i < numOfVals; ++i)
  {
    // grab word in sentence
    cin >> curVal;

    // check for membership in original words
    int index = findWord(originalWords, curVal);

    // logic for replacement or continuation
    if (index == -1)
    {
      // not found
      cout << curVal << " ";
    }
    else
    {
      // found and replaced
      cout << replacementWords.at(index) << " ";
    }
  }
  cout << endl;

  return 0;
}
