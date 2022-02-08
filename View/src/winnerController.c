//
// Created by dung on 18/01/2022.
//

#include "structScreen.h"
#include "string.h"
#include "stdio.h"
#include "gtk/gtk.h"

#include "handleRoom.h"
#include "winnerController.h"
#include "constant.h"
void winner_back_home(GtkButton *button,UserData *userData){
    gtk_widget_hide(userData->ScreenApp->winnerContainer.winner_window);
    gtk_widget_show(userData->ScreenApp->mainContainer.main_window);
    printf("hh");
}
