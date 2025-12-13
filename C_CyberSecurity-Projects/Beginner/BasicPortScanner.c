#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

int main(void) {
    int sock;
    struct sockaddr_in target; // sockaddr_in struct already defined in arpa/net
    int port = 80;
    sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock < 0) {
        perror("socket");
        return 1;
    }
    target.sin_family = AF_INET;
    target.sin_port = htons(port);
    target.sin_addr.s_addr = inet_addr("192.168.1.2");
    if (connect(sock, (struct sockaddr *)&target, sizeof(target)) == 0) {
        printf("Port %d is open\n", port);
    }
    else {
        printf("port %d is closed\n", port);
    }
    close(sock);
    return 0;
}