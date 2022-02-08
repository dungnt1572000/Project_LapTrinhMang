//
// Created by hainguyen on 30/12/2021.
//

#include "stdio.h"

#include "handleGame.h"
#include "structScreen.h"
#include "string.h"
#include "stdlib.h"
#include "gtk/gtk.h"

#include "gameController.h"
#include "constant.h"
#include "time.h"


const int point[] = {0,100 ,200,300,500,600,800,1000};

int getMaxPoint(UserData *userData)
{
    char *p1_point = (char *) gtk_label_get_text(GTK_LABEL(userData->ScreenApp->gameContainer.p1_point));
    char *p2_point = (char *) gtk_label_get_text(GTK_LABEL(userData->ScreenApp->gameContainer.p2_point));
    char *p3_point = (char *) gtk_label_get_text(GTK_LABEL(userData->ScreenApp->gameContainer.p3_point));
    int point1 = atoi(p1_point);
    int point2 = atoi(p2_point);
    int point3 = atoi(p3_point);
    int max = point1;
    if(max < point2)
    {
        max = point2;
    }
    if (max < point3)
    {
        max = point3;
    }
    return max;
}

void on_turn_clicked(GtkButton *button, UserData *userData)
{
    srand(time(NULL));
    int random = rand()%8;
    userData->current_turning_point = point[random];
    printf("quay vao o:%d\n",userData->current_turning_point);
    char a[100];
    sprintf(a,"ban quay vao o %d diem", userData->current_turning_point);
    gtk_label_set_text(GTK_LABEL(userData->ScreenApp->gameContainer.show_announcement),a);
}

void on_submit_clicked(GtkButton *button, UserData *userData)
{
    char *annountcement = (char *) calloc(1, MAX_LEN_BUFF);
//    sendResultAfterTurning(userData->sockFd,annountcement);
    char *current_result = (char *) calloc(1, 100);
    char *character = (char *) gtk_entry_get_text(GTK_ENTRY(userData->ScreenApp->gameContainer.value_input));
//    printf("Chu nhap: %s\n",character);
    int times = 0;
    strcpy(current_result,userData->ScreenApp->gameContainer.result1);
    char *show_result = (char *) gtk_label_get_text(GTK_LABEL(userData->ScreenApp->gameContainer.show_result));
//    printf("Ket qua cu: %s\n",show_result);
    for (int i = 0; i < strlen(current_result); ++i) {
        if (current_result[i] == character[0] && show_result[i] == '*')
        {
            times++;
            show_result[i] = character[0];
        }
    }
//    printf("so lan tra loi dung: %d va ket qua moi: %s\n",times,show_result);

    if (userData->isTurn == 1)
    {
        printf("Turn cua: %s\n",userData->playerName);
        userData->current_point = userData->current_point + userData->current_turning_point*times;
//        printf("diem moi: %d\n",userData->current_point);
    }
    userData->isTurn = 0;
    gtk_label_set_text(GTK_LABEL(userData->ScreenApp->gameContainer.show_turn),"Not your turn");
//    gtk_widget_set_visible(userData->ScreenApp->gameContainer.value_input,FALSE);
//    gtk_widget_set_visible(userData->ScreenApp->gameContainer.submit_button,FALSE);
//    gtk_widget_set_visible(userData->ScreenApp->gameContainer.turn_button,FALSE);
    sprintf(annountcement,"result_after_turning#%d#%d#%s#%d#%d#%s",userData->position,userData->current_turning_point,
            character,times,userData->current_point,show_result);
    printf("thong bao:%s\n",annountcement);
    if (strchr(show_result,'*') != NULL)
    {
        sprintf(annountcement,"result_after_turning#%d#%d#%s#%d#%d#%s",userData->position,userData->current_turning_point,
                character,times,userData->current_point,show_result);
    }
    else{
        int maxPoint = getMaxPoint(userData);
        printf("Diem cao nhat la %d\n",maxPoint);
        sprintf(annountcement,"result_after_turning#%d#%d#%s#%d#%d#%s#end_round#%d",userData->position,userData->current_turning_point,
                character,times,userData->current_point,show_result,maxPoint);
    }
    sendResultAfterTurning(userData->sockFd,annountcement);
    // reset lai input
    gtk_entry_set_text(GTK_ENTRY(userData->ScreenApp->gameContainer.value_input),"");
    userData->current_turning_point = 0;
    free(annountcement);
    free(current_result);
}

void on_out_to_main_clicked(GtkButton *button,UserData *userData)
{
    userData->position = -1;
    userData->current_point = 0;
    userData->current_turning_point = 0;
    gtk_widget_hide(userData->ScreenApp->gameContainer.game_window);
    gtk_widget_show(userData->ScreenApp->mainContainer.main_window);
}

void on_to_final_game_clicked(GtkButton *button, UserData *userData){
    gtk_widget_hide(userData->ScreenApp->gameContainer.game_window);
    gtk_widget_show(userData->ScreenApp->finalContainer.final_window);
    char dapan_mahoa[100];
    int count =0;
    printf("Day la hint_text: %s\n",userData->ScreenApp->gameContainer.hint_final);
    for (int i = 0; i < strlen(userData->ScreenApp->gameContainer.result_final); ++i) {
        dapan_mahoa[count] = '*';
        count++;
    }
    dapan_mahoa[count]='\0';
    gtk_label_set_text((GtkLabel *) userData->ScreenApp->finalContainer.hint_text, userData->ScreenApp->gameContainer.hint_final);
    gtk_label_set_text((GtkLabel *) userData->ScreenApp->finalContainer.final_question, dapan_mahoa);
}
