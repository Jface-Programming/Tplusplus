#ifndef IFSTATEMENT_H
#define IFSTATEMENT_H
int IfStatementVarName = 0;
bool checkForLoopEndIf = true;
string ifStatementVarDataString;
int ifStatementVarData;

void ifStatementData() {
    getline(mainTppFile, currentLineData);
    if (currentLineData.contains("int")) {
        newInt();
    }
    if (currentLineData.contains("double")) {
        newDouble();
    }
    if (currentLineData.contains("string")) {
        newString();
    }
    if (currentLineData.contains("bool")) {
        newBool();
    }
    if (currentLineData.contains("math (")) {
        math();
    }
    if (currentLineData.contains("console (")) {
        console();
    }
    if (currentLineData.contains("system.setAutoExit(false)")) {
        autoexit = false;
    }
    if (currentLineData.contains("system.setAutoExit(true)")) {
        autoexit = true;
    }
    if (currentLineData.contains("system.endIfStatement")) {
        checkForLoopEndIf = false;
    }
}

void ifStatement() {
    checkForLoopEndIf = true;
    getline(mainTppFile, currentLineData);
    if (currentLineData.contains("bool = true")) {
        getline(mainTppFile, currentLineData);
        if (currentLineData.contains(")")) {
            getline(mainTppFile, currentLineData);
        }
        IfStatementVarName = stoi(currentLineData);
        if (booleans[IfStatementVarName] == true) {
            while (checkForLoopEndIf == true) {
                ifStatementData();
            }
        } else {
            while (checkForLoopEndIf == true) {
                getline(mainTppFile, currentLineData);
                if (currentLineData.contains("system.endIfStatement")) {
                    checkForLoopEndIf = false;
                }
            }
        }
    }
    if (currentLineData.contains("bool = false")) {
        getline(mainTppFile, currentLineData);
        if (currentLineData.contains(")")) {
            getline(mainTppFile, currentLineData);
        }
        IfStatementVarName = stoi(currentLineData);
        if (booleans[IfStatementVarName] == false) {
            while (checkForLoopEndIf == true) {
                ifStatementData();
            }
        } else {
            while (checkForLoopEndIf == true) {
                getline(mainTppFile, currentLineData);
                if (currentLineData.contains("system.endIfStatement")) {
                    checkForLoopEndIf = false;
                }
            }
        }
    }
    if (currentLineData.contains("integer")) {
        getline(mainTppFile, currentLineData);
        if (currentLineData.contains(")")) {
            getline(mainTppFile, currentLineData);
        }
        getline(mainTppFile, ifStatementVarDataString);
        ifStatementVarData = stoi(ifStatementVarDataString);
        IfStatementVarName = stoi(currentLineData);
        if (integers[IfStatementVarName] == ifStatementVarData) {
            while (checkForLoopEndIf == true) {
                ifStatementData();
            }
        } else {
            while (checkForLoopEndIf == true) {
                getline(mainTppFile, currentLineData);
                if (currentLineData.contains("system.endIfStatement")) {
                    checkForLoopEndIf = false;
                }
            }
        }
    }
    if (currentLineData.contains("double")) {
        getline(mainTppFile, currentLineData);
        if (currentLineData.contains(")")) {
            getline(mainTppFile, currentLineData);
        }
        getline(mainTppFile, ifStatementVarDataString);
        ifStatementVarData = stoi(ifStatementVarDataString);
        IfStatementVarName = stoi(currentLineData);
        if (doubles[IfStatementVarName] == ifStatementVarData) {
            while (checkForLoopEndIf == true) {
                ifStatementData();
            }
        } else {
            while (checkForLoopEndIf == true) {
                getline(mainTppFile, currentLineData);
                if (currentLineData.contains("system.endIfStatement")) {
                    checkForLoopEndIf = false;
                }
            }
        }
    }
}

#endif
