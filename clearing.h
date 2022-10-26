#include <iostream>
#include <sys/ioctl.h>
#include <stdio.h>
#include <unistd.h>

using namespace std;

void moveUp() {
    cout << "\033[A";
}
void clearLine() {
    cout << "\33[2K";
    cout << "\r";
}
void clearConsole() {
    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);

    for (int i = 0; i < w.ws_col; i++) {
        clearLine();
        moveUp();
        clearLine();
    }
}
