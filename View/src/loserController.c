//
// Created by dung on 18/01/2022.
//

#include "stdio.h"
#include "handleLogin.h"
#include "structScreen.h"
#include "string.h"
#include "gtk/gtk.h"
#include "loserController.h"

#include "handleThread.h"
void back_home(GtkButton *button,UserData *userData){
    gtk_widget_hide(userData->ScreenApp->loserContainer.loser_window);
    gtk_widget_show(userData->ScreenApp->mainContainer.main_window);
}
