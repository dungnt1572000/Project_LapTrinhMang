//
// Created by hainguyen on 01/01/2022.
//

#ifndef LTM_PROJECT_HANDLETHREAD_H
#define LTM_PROJECT_HANDLETHREAD_H

#include "clientError.h"
#include "constant.h"
#include "stdio.h"
#include "structScreen.h"
#include <sys/socket.h>
#include "handleRecvData.h"


static void *multiModeHandle(void *argv) {
    printf("Enter thread :\n");
    int selectStatus;
    char recvData[MAX_LEN_BUFF];
    int recvSize;
    UserData *userData = (UserData *) argv;
    fd_set readFds;

    while (1) {
        FD_ZERO(&readFds);
        FD_SET(userData->sockFd, &readFds);
        selectStatus = select(userData->sockFd + 1, &readFds, NULL, NULL, NULL);
        if (selectStatus == -1) {
            printf("Break thread :\n");
            pthread_exit(NULL);
        }
        else {
            recvSize = recv(userData->sockFd, recvData, MAX_LEN_BUFF, 0);
            recvData[recvSize] = 0;
            char *dataRecv = (char *) calloc(1, MAX_LEN_BUFF);
            strcpy(dataRecv, recvData);
            if(strcmp(dataRecv,"")!=0){
                handleRecvData(dataRecv, userData);
            }
            free(dataRecv);
        }
    }
}

#endif //LTM_PROJECT_HANDLETHREAD_H
