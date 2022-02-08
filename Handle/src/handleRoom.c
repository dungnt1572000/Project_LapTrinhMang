//
// Created by hainguyen on 02/01/2022.
//

#include "handleRoom.h"

void outRoom(int sockFd, UserData *userData)
{
    char *buff_send = (char *) calloc(1, MAX_LEN_BUFF);
    int byte_send = 0;
    sprintf(buff_send,"out_room#%s", gtk_label_get_text(GTK_LABEL(userData->ScreenApp->roomContainer.show_room_id)));
    send(sockFd,buff_send,MAX_LEN_BUFF,0);
    printf("out room:\n");
    if(byte_send < 0)
        perror("\nError: ");
    printf("data_send out room: %s\n",buff_send);

    free(buff_send);
}

void startGame(int sockFd, UserData *userData)
{
    char *buff_send = (char *) calloc(1, MAX_LEN_BUFF);
    int byte_send = 0;
    sprintf(buff_send,"start_game#%s", gtk_label_get_text(GTK_LABEL(userData->ScreenApp->roomContainer.show_room_id)));
    send(sockFd,buff_send,MAX_LEN_BUFF,0);
    if(byte_send < 0)
        perror("\nError: ");
    printf("data_send start game: %s\n",buff_send);

    free(buff_send);
}