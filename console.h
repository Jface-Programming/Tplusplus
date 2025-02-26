#ifndef CONSOLE_H
#define CONSOLE_H
int varToPrint = 0;
void console() {
    varToPrint = 0;
    getline(mainTppFile, currentLineData);
    if (currentLineData.contains("printLN")) {
        getline(mainTppFile, currentLineData);
        if (currentLineData.contains(")")) {
            getline(mainTppFile, currentLineData);
        }
        cout << currentLineData << endl;
    }
    if (currentLineData.contains("getLN")) {
        getline(mainTppFile, currentLineData);
        if (currentLineData.contains(")")) {
            getline(mainTppFile, currentLineData);
        }
        varToPrint = stoi(currentLineData);
        cin >> strings[varToPrint];
        cout << endl;
    }
    if (currentLineData.contains("getInt")) {
        getline(mainTppFile, currentLineData);
        if (currentLineData.contains(")")) {
            getline(mainTppFile, currentLineData);
        }
        varToPrint = stoi(currentLineData);
        cin >> integers[varToPrint];
        cout << endl;
    }
    if (currentLineData.contains("getDouble")) {
        getline(mainTppFile, currentLineData);
        if (currentLineData.contains(")")) {
            getline(mainTppFile, currentLineData);
        }
        varToPrint = stoi(currentLineData);
        cin >> doubles[varToPrint];
        cout << endl;
    }
    if (currentLineData.contains("getBool")) {
        getline(mainTppFile, currentLineData);
        if (currentLineData.contains(")")) {
            getline(mainTppFile, currentLineData);
        }
        varToPrint = stoi(currentLineData);
        cin >> booleans[varToPrint];
        cout << endl;
    }
    if (currentLineData.contains("printInt")) {
        getline(mainTppFile, currentLineData);
        if (currentLineData.contains(")")) {
            getline(mainTppFile, currentLineData);
        }
        varToPrint = stoi(currentLineData);
        cout << integers[varToPrint] << endl;
    }

    if (currentLineData.contains("printDouble")) {
        getline(mainTppFile, currentLineData);
        if (currentLineData.contains(")")) {
            getline(mainTppFile, currentLineData);
        }
        varToPrint = stoi(currentLineData);
        cout << doubles[varToPrint] << endl;
    }
    if (currentLineData.contains("printString")) {
        getline(mainTppFile, currentLineData);
        if (currentLineData.contains(")")) {
            getline(mainTppFile, currentLineData);
        }
        varToPrint = stoi(currentLineData);
        cout << strings[varToPrint] << endl;
    }
    if (currentLineData.contains("printBool")) {
        getline(mainTppFile, currentLineData);
        if (currentLineData.contains(")")) {
            getline(mainTppFile, currentLineData);
        }
        varToPrint = stoi(currentLineData);
        cout << boolalpha << booleans[varToPrint] << endl;
    }
}
#endif
