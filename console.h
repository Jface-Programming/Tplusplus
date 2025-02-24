#ifndef CONSOLE_H
#define CONSOLE_H
int varToPrint = 0;
void console() {
    varToPrint = 0;
    getline(mainTppFile, currentLineData);
    if (currentLineData.contains("printLN")) {
        getline(mainTppFile, currentLineData);
        cout << currentLineData << endl;
    }
    if (currentLineData.contains("printInt")) {
        getline(mainTppFile, currentLineData);
        varToPrint = stoi(currentLineData);
        cout << integers[varToPrint] << endl;
    }
    if (currentLineData.contains("printDouble")) {
        getline(mainTppFile, currentLineData);
        varToPrint = stoi(currentLineData);
        cout << doubles[varToPrint] << endl;
    }
    if (currentLineData.contains("printString")) {
        getline(mainTppFile, currentLineData);
        varToPrint = stoi(currentLineData);
        cout << strings[varToPrint] << endl;
    }
}
#endif //CONSOLE_H
