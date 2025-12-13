#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <fcntl.h>
#include <sys/select.h>

int main() {
    int sock;
    struct sockaddr_in target;
    struct timeval timeout;
    fd_set fdset;
    char address[50];
    printf("Enter address: ");
    fgets(address, sizeof(address), stdin);
    address[strcspn(address, "\n")] = 0;
    target.sin_family = AF_INET;
    target.sin_addr.s_addr = inet_addr(address);

    for (int port = 1; port <= 1024; port++) {
        sock = socket(AF_INET, SOCK_STREAM, 0);
        if (sock < 0) continue;

        // make socket non-blocking
        fcntl(sock, F_SETFL, O_NONBLOCK);

        target.sin_port = htons(port);

        connect(sock, (struct sockaddr *)&target, sizeof(target));

        FD_ZERO(&fdset);
        FD_SET(sock, &fdset);

        timeout.tv_sec = 1;   // 1 second timeout
        timeout.tv_usec = 0;

        if (select(sock + 1, NULL, &fdset, NULL, &timeout) == 1) {
            int error;
            socklen_t len = sizeof(error);

            getsockopt(sock, SOL_SOCKET, SO_ERROR, &error, &len);

            if (error == 0) {
                printf("[+] Port %d OPEN\n", port);
            }
        }


        close(sock);
    }

    return 0;
}
