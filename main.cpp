#include <iostream>
using namespace std;

char* copyCString(const char* repack) {
    int dovzhyna = 0;
    
    while (repack[dovzhyna] != '\0') {
        ++dovzhyna;
    }

    char* ryadok = new char[dovzhyna + 1];
    
    for (int i = 0; i < dovzhyna; ++i) {
        ryadok[i] = repack[i];
    }

    ryadok[dovzhyna] = '\0';

    return ryadok;
}

int main() {
    const char* text = "Hi, everyone!";
    char* copypasta = copyCString(text);
    
    cout << "Pathetic parody: " << text << endl;
    cout << "Unique original: " << copypasta << endl;

    delete[] copypasta;

    return 0;
}
