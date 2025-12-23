#include <libnotify/notify.h>
#include <stdio.h>
#include <unistd.h>
void greet(){
    
    NotifyNotification *n = notify_notification_new(
        "Yo dawg",
        "HAHHAHAHHAH",
        NULL
    );
    notify_notification_show(n, NULL);
    g_object_unref(G_OBJECT(n));
    
}

int main(void){
    notify_init("Greeting");
    greet();
    notify_uninit();
    return 0;
}