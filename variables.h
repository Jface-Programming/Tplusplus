#ifndef VARIABLES_H
#define VARIABLES_H
#include <iostream>
#include <string>
int varName;
void newInt() {
    varName = 0;
    string intNameString = currentLineData.substr(currentLineData.find_first_not_of("int ") - 1);
    varName = stoi(intNameString);
    getline(mainTppFile, currentLineData);
    string intDataString = currentLineData.substr(currentLineData.find_first_not_of("= "));
    int intData = stoi(intDataString);
    integers[varName] = intData;
}
void newDouble() {
    varName = 0;
    string doubleNameString = currentLineData.substr(currentLineData.find_first_not_of("double ") - 1);
    varName = stoi(doubleNameString);
    getline(mainTppFile, currentLineData);
    string doubleDataString = currentLineData.substr(currentLineData.find_first_not_of("= "));
    double doubleData = stoi(doubleDataString);
    doubles[varName] = doubleData;
}
void newString() {
    varName = 0;
    string stringNameString = currentLineData.substr(currentLineData.find_first_not_of("string ") - 1);
    varName = stoi(stringNameString);
    getline(mainTppFile, currentLineData);
    string stringData = currentLineData.substr(currentLineData.find_first_not_of("= '"));
    stringData.erase(stringData.find_last_of("'"));
    strings[varName] = stringData;
}
#endif
