#include <libnotify/notify.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

void speak(const char *text) {
    pid_t pid = fork();  // create a child process
    if (pid == 0) {
        // child process runs spd-say
        execlp("spd-say", "spd-say", text, NULL);
        perror("execlp failed"); // if spd-say fails
        _exit(1);
    } else if (pid > 0) {
        // parent waits for child to finish speaking
        wait(NULL);
    } else {
        perror("fork failed");
    }
}
void future(int minutes){
    char body[50]; //! store the dynamic message
    //! notify_notification_new() doesnt accept numbers,
    //! it needs a string
    snprintf(body, sizeof(body), "%d minutes to grind", minutes);
    //! we pass the string
    NotifyNotification *n = notify_notification_new(
        "Future time",
        body,
        NULL
    );
    notify_notification_show(n, NULL);
    g_object_unref(G_OBJECT(n));
    speak("Time to Grind!");
    
}
void restTime(int minutes) {
    char body[50];
    snprintf(body, sizeof(body), "%d minutes of rest", minutes);
    NotifyNotification *n = notify_notification_new(
        "Break",
        body,
        NULL
    );
    notify_notification_show(n, NULL);
    g_object_unref(G_OBJECT(n));
    speak("Time to rest!");
}

int main(void){
    if (!notify_init("Pomodoro")){
        fprintf(stderr, "Failed to initialize notification\n"); // error message
        return 1;
    }


    int grind = 25;
    int rest = 5;
    while(1) {
        
        future(grind);
        for (int i = grind; i > 0; i--) {
            printf("%d minutes left to grind\n", i);
            sleep(60);
        }

        restTime(rest);
        for (int i = rest; i > 0; i--) {
            printf("%d minutes left of rest\n", i);
            sleep(60);
        }
        
    }
    notify_uninit();
    
    return 0;
}   