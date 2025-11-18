#include <gtk/gtk.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool isLong(char pass[]);
bool hasSymbols(char pass[]);
bool hasNumbers(char pass[]);
bool hasUppercase(char pass[]);
void Checker(char pass[], char *result);

void on_check_clicked(GtkButton *button, gpointer user_data) {
    GtkEntry *entry = GTK_ENTRY(user_data);
    const char *pass = gtk_entry_get_text(entry);

    char result[500] = "";
    Checker((char *)pass, result);

    GtkWidget *dialog = gtk_message_dialog_new(NULL,
        GTK_DIALOG_MODAL,
        GTK_MESSAGE_INFO,
        GTK_BUTTONS_OK,
        "%s", result);
    gtk_dialog_run(GTK_DIALOG(dialog));
    gtk_widget_destroy(dialog);
}

int main(int argc, char *argv[]) {
    gtk_init(&argc, &argv);

    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Password Checker");
    gtk_window_set_default_size(GTK_WINDOW(window), 400, 100);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    GtkWidget *grid = gtk_grid_new();
    gtk_container_add(GTK_CONTAINER(window), grid);

    GtkWidget *entry = gtk_entry_new();
    gtk_entry_set_placeholder_text(GTK_ENTRY(entry), "Enter password");
    gtk_grid_attach(GTK_GRID(grid), entry, 0, 0, 1, 1);

    GtkWidget *button = gtk_button_new_with_label("Check Password");
    gtk_grid_attach(GTK_GRID(grid), button, 0, 1, 1, 1);

    g_signal_connect(button, "clicked", G_CALLBACK(on_check_clicked), entry);

    gtk_widget_show_all(window);
    gtk_main();

    return 0;
}

// Checker adapted for GTK
void Checker(char pass[], char *result){
    strcpy(result, "");  // clear result

    if (isLong(pass) && hasSymbols(pass) && hasNumbers(pass) && hasUppercase(pass)) {
        strcat(result, "Overall: Strong!\n");
    } else {
        if (!isLong(pass)) strcat(result, "Too short, 16 characters recommended.\n");
        if (!hasSymbols(pass)) strcat(result, "Please include symbols!\n");
        if (!hasNumbers(pass)) strcat(result, "Please include numbers!\n");
        if (!hasUppercase(pass)) strcat(result, "Please include uppercase letters!\n");
    }
}

bool isLong(char pass[]) { return strlen(pass) >= 16; }
bool hasSymbols(char pass[]) { for(int i=0; pass[i]; i++) if(!isalnum(pass[i])) return true; return false; }
bool hasNumbers(char pass[]) { for(int i=0; pass[i]; i++) if(isdigit(pass[i])) return true; return false; }
bool hasUppercase(char pass[]) { for(int i=0; pass[i]; i++) if(isupper(pass[i])) return true; return false; }
