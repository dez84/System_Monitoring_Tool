#include <stdio.h>
#include <stdlib.h>

int main() {
    system("echo 'CPU Usage:'");
    system("top -bn1 | grep 'Cpu(s)'");
    system("echo 'Memory Usage:'");
    system("free -h");
    return 0;
}
