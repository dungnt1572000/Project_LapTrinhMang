//
// Created by hainguyen on 29/12/2021.
//

#include "handleMain.h"

void createRoom(int sockFd, UserData *userData)
{
    char *buff_send = (char *) calloc(1, MAX_LEN_BUFF);
    int byte_send;
    sprintf(buff_send,"create_room#%d",userData->playerID);
    byte_send = send(sockFd,buff_send,MAX_LEN_BUFF,0);
    printf("data_send: %s\n",buff_send);
    printf("phai an chu nhi\n");
    gtk_widget_set_visible(userData->ScreenApp->mainContainer.submit_button,FALSE);
    if(byte_send < 0)
        perror("\nError: ");
    free(buff_send);
}

void joinRandomRoom(int sockFd, UserData *userData)
{
    char *buff_send = (char *) calloc(1, MAX_LEN_BUFF);
    int byte_send ;
    sprintf(buff_send,"join_random_room#%d",(userData->playerID));
    printf("data_send: %s\n",buff_send);
    byte_send = send(sockFd,buff_send,MAX_LEN_BUFF,0);
    free(buff_send);
    if(byte_send < 0) {
        perror("\nError: ");
    }
}

void joinRoomByID(int sockFd,UserData *userData)
{
    char *buff_send = (char *) calloc(1, MAX_LEN_BUFF);
    int  byte_send;
//    char *roomID = (char *) calloc(1, MAX_LEN_BUFF);
    char *roomID = (char *)gtk_entry_get_text(GTK_ENTRY(userData->ScreenApp->mainContainer.input_room_id));
//    strcpy(roomID,gtk_entry_get_text(userData->ScreenApp->mainContainer.input_room_id));
    printf("roomID: %s\n",roomID);
    sprintf(buff_send,"join_room#%s#%d",roomID,userData->playerID);
    printf("data_send: %s\n",buff_send);
    byte_send = send(sockFd,buff_send,MAX_LEN_BUFF,0);
    gtk_entry_set_text(GTK_ENTRY(userData->ScreenApp->mainContainer.input_room_id),"");
    free(buff_send);
   // free(roomID);
    if(byte_send < 0) {
        perror("\nError: ");
    }
}





