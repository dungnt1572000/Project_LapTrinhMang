//
// Created by hainguyen on 30/12/2021.
//

#include "stdio.h"
#include "handleMain.h"
#include "structScreen.h"
#include "string.h"

#include "gtk/gtk.h"

#include "mainController.h"


void on_join_random_room_clicked(GtkButton *button, UserData *userData){
    printf("Clicked join random\n");
    joinRandomRoom(userData->sockFd,userData);

}

void on_create_room_clicked(GtkButton *button, UserData *userData){
    printf("Clicked create room: \n");
    createRoom(userData->sockFd,userData);

}

void on_join_room_clicked(GtkButton *button, UserData *userData){
    printf("Click join room by ID\n");
    char *room_id = (char *) gtk_entry_get_text(GTK_ENTRY(userData->ScreenApp->mainContainer.input_room_id));
    if (strcmp(room_id,"") == 0)
    {
        gtk_label_set_text(GTK_LABEL(userData->ScreenApp->mainContainer.show_main_status),"Input room ID");
        gtk_widget_set_visible(userData->ScreenApp->mainContainer.show_main_status,TRUE);
    }
    else{
        joinRoomByID(userData->sockFd,userData);
       // gtk_entry_get_text(GTK_ENTRY(userData->ScreenApp->mainContainer.input_room_id));
    }
}

void on_submit_in_main_clicked(GtkButton *button, UserData *userData){
    gtk_widget_hide(userData->ScreenApp->mainContainer.main_window);
    gtk_widget_show(userData->ScreenApp->roomContainer.room_window);
}
