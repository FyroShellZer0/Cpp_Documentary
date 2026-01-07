#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>

void speak(const char *text) {
    pid_t pid = fork();  // create a child process
    if (pid == 0) {
        // child process runs spd-say
        execlp("spd-say", "spd-say", text, NULL); // Replaces the child process with a new program: //? spd-say
        perror("execlp failed"); // if spd-say fails
        _exit(1);
    } else if (pid > 0) {
        // parent waits for child to finish speaking
        wait(NULL);
    } else {
        perror("fork failed");
    }
}

int main() {
    printf("Speaking...\n");
    //speak("PO TANG INNA MO");
    speak("HELLO WORLD");
    printf("Done speaking!\n");
    return 0;
}

