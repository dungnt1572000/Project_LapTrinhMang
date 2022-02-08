//
// Created by dung on 16/01/2022.
//

//
// Created by dung on 31/12/2021.
//
#include "stdio.h"
#include "string.h"
#include "structScreen.h"
#include "finalController.h"
#include "gtk/gtk.h"


/* Display seconds expired */
static int sec_expired = 15;
int  check=0 ;
int sock_fd ;
int check_btn =0 ;
static UserData *user;
void onSubmitLastAnswer(GtkButton *button,UserData *userData){

    char buffer[30];
    int count_buffer=0;
    for (int i = 0; i < strlen(userData->ScreenApp->gameContainer.result_final); ++i) {
        buffer[count_buffer] = userData->ScreenApp->gameContainer.result_final[i];
        count_buffer++;
    }
    buffer[count_buffer]='\0';
    sec_expired = 0;
    check_btn =1;
    char *answer = (char *) gtk_entry_get_text(GTK_ENTRY(userData->ScreenApp->finalContainer.your_text_answer));
    if (strcmp(answer,buffer)==0){
        printf("OK! Dung, sang man hinh chuc mung\n");
        gtk_widget_hide(userData->ScreenApp->finalContainer.final_window);
        gtk_widget_show(userData->ScreenApp->winnerContainer.winner_window);
    }else{
        printf("Sai me roi! Sang man hinh thua cuoc\n");
        gtk_widget_hide(userData->ScreenApp->finalContainer.final_window);
        gtk_widget_show(userData->ScreenApp->loserContainer.loser_window);
    }
    gtk_entry_set_text(GTK_ENTRY(userData->ScreenApp->finalContainer.your_text_answer),"");

    return;
}
static gboolean _label_update(gpointer data)
{
    GtkLabel *label = (GtkLabel*)data;
    char buf[256];
    memset(&buf, 0x0, 256);
    snprintf(buf, 255, "Time elapsed: %d secs", sec_expired);

    gtk_label_set_label(label, buf);
    if (sec_expired==0){
        if(check_btn==0){
            // thong bao thua cuoc!
            printf("End roi ne!\n");
            gtk_widget_hide(user->ScreenApp->finalContainer.final_window);
            gtk_widget_show(user->ScreenApp->loserContainer.loser_window);
        }

        return gtk_false();
    }
    sec_expired--;
    return gtk_true();
}

void onSubmit3character(GtkButton *button, UserData *userData){
    char hint_char_array[4];
    char str[3];
    char buffer[30];
    int count_buffer=0;
    sock_fd = userData->sockFd;
    hint_char_array[0] = (char ) gtk_entry_get_text(GTK_ENTRY(userData->ScreenApp->finalContainer.str1))[0];
    hint_char_array[1] = (char ) gtk_entry_get_text(GTK_ENTRY(userData->ScreenApp->finalContainer.str2))[0];
    hint_char_array[2] = (char ) gtk_entry_get_text(GTK_ENTRY(userData->ScreenApp->finalContainer.str3))[0];


    for (int i = 0; i < strlen(userData->ScreenApp->gameContainer.result_final); ++i) {
        buffer[count_buffer] = userData->ScreenApp->gameContainer.result_final[i];
        count_buffer++;
    }
    buffer[count_buffer]='\0';
    for (int i=0 ;  i < strlen(buffer); i++){
        if (hint_char_array[0] == buffer[i]){
            buffer[i] = hint_char_array[0];
        }
        else if (hint_char_array[1] == buffer[i]){
            buffer[i] = hint_char_array[1];
        }
        else if (hint_char_array[2] == buffer[i]){
            buffer[i] = hint_char_array[2];
        }else{
            buffer[i]='*';
        }
    }
    user = userData;
    g_timeout_add_seconds(1,_label_update,userData->ScreenApp->finalContainer.time_down);

    gtk_label_set_text((GtkLabel *) userData->ScreenApp->finalContainer.final_question, buffer);
//    gtk_entry_set_text(GTK_ENTRY(userData->ScreenApp->finalContainer.str1),"");
//    gtk_entry_set_text(GTK_ENTRY(userData->ScreenApp->finalContainer.str2),"");
//    gtk_entry_set_text(GTK_ENTRY(userData->ScreenApp->finalContainer.str3),"");
    return ;
}

