////
//// Created by hainguyen on 29/12/2021.
////
//#include "gtk/gtk.h"
//#include "InitScreen.h"
//#include "LoginController.h"
//#include "mainController.h"
//#include "gameController.h"
//#include "roomController.h"
//#include "finalController.h"
//#include "structScreen.h"
//
//void initLoginScreen(UserData* userData)
//{
//    printf("init login\n");
//    GtkBuilder *builder = gtk_builder_new_from_file("/home/hieudz/CLionProjects/LTM_Project/cmake-build-debug/View/login.glade");
//    userData->ScreenApp->loginContainer.login_window = (GtkWidget *) gtk_builder_get_object(builder,"login_window");
//    userData->ScreenApp->loginContainer.username_input = (GtkWidget *) gtk_builder_get_object(builder,"username_input");
//    userData->ScreenApp->loginContainer.password_input = (GtkWidget *) gtk_builder_get_object(builder,"password_input");
//    userData->ScreenApp->loginContainer.login_button = (GtkWidget *) gtk_builder_get_object(builder,"login_button");
//    userData->ScreenApp->loginContainer.register_button = (GtkWidget *) gtk_builder_get_object(builder,"register_button");
//    userData->ScreenApp->loginContainer.show_login_status = (GtkWidget *) gtk_builder_get_object(builder,"show_login_status");
//
//    g_signal_connect(userData->ScreenApp->loginContainer.login_button, "clicked",G_CALLBACK(on_login_clicked), userData);
//    g_signal_connect(userData->ScreenApp->loginContainer.register_button, "clicked",G_CALLBACK(on_register_clicked), userData);
//}
//
//void initMainScreen(UserData* userData)
//{
//    printf("init main\n");
//
//    GtkBuilder *builder = gtk_builder_new_from_file("/home/hieudz/CLionProjects/LTM_Project/cmake-build-debug/View/main.glade");
//    userData->ScreenApp->mainContainer.main_window = (GtkWidget *) gtk_builder_get_object(builder,"main_window");
//    userData->ScreenApp->mainContainer.show_player_name = (GtkWidget *) gtk_builder_get_object(builder,"show_player_name");
//    userData->ScreenApp->mainContainer.join_random_room = (GtkWidget *) gtk_builder_get_object(builder,"join_random_room");
//    userData->ScreenApp->mainContainer.create_room = (GtkWidget *) gtk_builder_get_object(builder,"create_room");
//    userData->ScreenApp->mainContainer.join_room= (GtkWidget *) gtk_builder_get_object(builder,"join_room");
//    userData->ScreenApp->mainContainer.input_room_id = (GtkWidget *) gtk_builder_get_object(builder,"input_room_id");
//    userData->ScreenApp->mainContainer.show_main_status = (GtkWidget *) gtk_builder_get_object(builder,"show_main_status");
//    userData->ScreenApp->mainContainer.submit_button = (GtkWidget *) gtk_builder_get_object(builder, "submit_in_main_button");
//
//    g_signal_connect(userData->ScreenApp->mainContainer.join_random_room, "clicked",G_CALLBACK(on_join_random_room_clicked), userData);
//    g_signal_connect(userData->ScreenApp->mainContainer.create_room, "clicked",G_CALLBACK(on_create_room_clicked), userData);
//    g_signal_connect(userData->ScreenApp->mainContainer.join_room, "clicked",G_CALLBACK(on_join_room_clicked), userData);
//    g_signal_connect(userData->ScreenApp->mainContainer.submit_button, "clicked",G_CALLBACK(on_submit_in_main_clicked), userData);
//}
//
//void initRoomScreen(UserData *userData)
//{
//    printf("init room\n");
//    GtkBuilder *builder = gtk_builder_new_from_file("/home/hieudz/CLionProjects/LTM_Project/cmake-build-debug/View/room.glade");
//    userData->ScreenApp->roomContainer.room_window = (GtkWidget *) gtk_builder_get_object(builder,"room_window");
//    userData->ScreenApp->roomContainer.player1_name = (GtkWidget *) gtk_builder_get_object(builder,"player1_name");
//    userData->ScreenApp->roomContainer.player2_name = (GtkWidget *) gtk_builder_get_object(builder,"player2_name");
//    userData->ScreenApp->roomContainer.player3_name = (GtkWidget *) gtk_builder_get_object(builder,"player3_name");
//    userData->ScreenApp->roomContainer.out_button= (GtkWidget *) gtk_builder_get_object(builder,"out_button");
//    userData->ScreenApp->roomContainer.start_button = (GtkWidget *) gtk_builder_get_object(builder,"start_button");
//    userData->ScreenApp->roomContainer.show_room_id = (GtkWidget *) gtk_builder_get_object(builder,"show_room_id");
//    userData->ScreenApp->roomContainer.show_room_status = (GtkWidget *) gtk_builder_get_object(builder,"show_room_status");
//
//    g_signal_connect(userData->ScreenApp->roomContainer.start_button, "clicked",G_CALLBACK(on_start_button_clicked), userData);
//    g_signal_connect(userData->ScreenApp->roomContainer.out_button, "clicked",G_CALLBACK(on_out_button_clicked), userData);
//}
//
//void initGameScreen(UserData *userData)
//{
//    printf("init game\n");
//    GtkBuilder *builder = gtk_builder_new_from_file("/home/hieudz/CLionProjects/LTM_Project/cmake-build-debug/View/game.glade");
//    userData->ScreenApp->gameContainer.game_window = (GtkWidget *) gtk_builder_get_object(builder,"game_window");
//    userData->ScreenApp->gameContainer.submit_button = (GtkWidget *) gtk_builder_get_object(builder,"submit_button");
//    userData->ScreenApp->gameContainer.value_input = (GtkWidget *) gtk_builder_get_object(builder,"value_input");
//    userData->ScreenApp->gameContainer.turn_button = (GtkWidget *) gtk_builder_get_object(builder,"turn_button");
//    userData->ScreenApp->gameContainer.show_turn = (GtkWidget *) gtk_builder_get_object(builder,"show_turn");
//    userData->ScreenApp->gameContainer.show_result = (GtkWidget *) gtk_builder_get_object(builder,"show_result");
//    userData->ScreenApp->gameContainer.show_hint = (GtkWidget *) gtk_builder_get_object(builder, "show_hint");
//    userData->ScreenApp->gameContainer.p1_point = (GtkWidget *) gtk_builder_get_object(builder,"p1_point");
//    userData->ScreenApp->gameContainer.p2_point = (GtkWidget *) gtk_builder_get_object(builder,"p2_point");
//    userData->ScreenApp->gameContainer.p3_point = (GtkWidget *) gtk_builder_get_object(builder,"p3_point");
//    userData->ScreenApp->gameContainer.show_announcement = (GtkWidget *) gtk_builder_get_object(builder,"show_announcement");
//    userData->ScreenApp->gameContainer.p1_name = (GtkWidget *) gtk_builder_get_object(builder,"p1_name");
//    userData->ScreenApp->gameContainer.p2_name = (GtkWidget *) gtk_builder_get_object(builder,"p2_name");
//    userData->ScreenApp->gameContainer.p3_name = (GtkWidget *) gtk_builder_get_object(builder,"p3_name");
//    userData->ScreenApp->gameContainer.out_to_main_button = (GtkWidget *) gtk_builder_get_object(builder, "out_to_main_button");
//    userData->ScreenApp->gameContainer.next_final_button = (GtkWidget *) gtk_builder_get_object(builder, "next_final_button");
//
//    g_signal_connect(userData->ScreenApp->gameContainer.turn_button, "clicked",G_CALLBACK(on_turn_clicked), userData);
//    g_signal_connect(userData->ScreenApp->gameContainer.submit_button, "clicked",G_CALLBACK(on_submit_clicked), userData);
//    g_signal_connect(userData->ScreenApp->gameContainer.out_to_main_button, "clicked",G_CALLBACK(on_out_to_main_clicked), userData);
//
//    g_signal_connect(userData->ScreenApp->gameContainer.next_final_button, "clicked",G_CALLBACK(on_to_final_game_clicked), userData);
//
//}
//
//void initFinalScreen(UserData *userData){
//    GtkBuilder *builder = gtk_builder_new_from_file("/home/hieudz/CLionProjects/LTM_Project/cmake-build-debug/View/final.glade");
//    userData->ScreenApp->finalContainer.final_window = (GtkWidget *) gtk_builder_get_object(builder, "final_window");
//
//    userData->ScreenApp->finalContainer.final_question = (GtkWidget *) gtk_builder_get_object(builder,
//                                                                                              "final_question");
//    userData->ScreenApp->finalContainer.hint_text = (GtkWidget *) gtk_builder_get_object(builder, "hint_text");
//    userData->ScreenApp->finalContainer.time_down = (GtkWidget *) gtk_builder_get_object(builder, "time_down");
//
//    // text-input
//    userData->ScreenApp->finalContainer.your_text_answer = (GtkWidget *) gtk_builder_get_object(builder,
//                                                                                                "your_text_answer");
//    userData->ScreenApp->finalContainer.button_submit_last_answer = (GtkWidget *) gtk_builder_get_object(builder,
//                                                                                                         "button_submit_last_answer");
//
//    userData->ScreenApp->finalContainer.str1 = (GtkWidget *) gtk_builder_get_object(builder,"str1");
//    userData->ScreenApp->finalContainer.str2 = (GtkWidget *) gtk_builder_get_object(builder,"str2");
//    userData->ScreenApp->finalContainer.str3 = (GtkWidget *) gtk_builder_get_object(builder,"str3");
//    userData->ScreenApp->finalContainer.button_submit_char = (GtkWidget *) gtk_builder_get_object(builder,"button_submit_char");
//
//    g_signal_connect(userData->ScreenApp->finalContainer.button_submit_last_answer, "clicked",
//                     G_CALLBACK(onSubmitLastAnswer), userData);
//    g_signal_connect(userData->ScreenApp->finalContainer.button_submit_char,"clicked",G_CALLBACK(onSubmit3character),userData);
//}
//
//
//
//void initApp(UserData *userData){
//    printf("init\n");
//    initLoginScreen(userData);
//    initMainScreen(userData);
//    initRoomScreen(userData);
//    initGameScreen(userData);
//    initFinalScreen(userData);
//}
//
//
//
// Created by hainguyen on 29/12/2021.
//
#include "gtk/gtk.h"
#include "InitScreen.h"
#include "LoginController.h"
#include "mainController.h"
#include "gameController.h"
#include "roomController.h"
#include "finalController.h"
#include "structScreen.h"
#include "winnerController.h"
#include "loserController.h"
void css_set(GtkCssProvider *provider, GtkWidget *widget) {
    gtk_style_context_add_provider(gtk_widget_get_style_context(widget), GTK_STYLE_PROVIDER(provider), GTK_STYLE_PROVIDER_PRIORITY_USER);
}
void initLoginScreen(UserData *userData) {
    printf("init login\n");
    GtkBuilder *builder = gtk_builder_new_from_file(
            "/home/hieudz/CLionProjects/LTM_Project/cmake-build-debug/View/login.glade");
    userData->ScreenApp->loginContainer.login_window = (GtkWidget *) gtk_builder_get_object(builder, "login_window");
    userData->ScreenApp->loginContainer.username_input = (GtkWidget *) gtk_builder_get_object(builder,
                                                                                              "username_input");
    userData->ScreenApp->loginContainer.password_input = (GtkWidget *) gtk_builder_get_object(builder,
                                                                                              "password_input");
    userData->ScreenApp->loginContainer.login_button = (GtkWidget *) gtk_builder_get_object(builder, "login_button");
    userData->ScreenApp->loginContainer.register_button = (GtkWidget *) gtk_builder_get_object(builder,
                                                                                               "register_button");
    userData->ScreenApp->loginContainer.show_login_status = (GtkWidget *) gtk_builder_get_object(builder,
                                                                                                 "show_login_status");
    // GtkCssProvider *provider_login = gtk_css_provider_new();
    GtkCssProvider *provider_login = gtk_css_provider_new();
    gtk_css_provider_load_from_path(provider_login, "/home/hieudz/CLionProjects/LTM_Project/View/style_css/style.css",NULL);

    css_set(provider_login, (GtkWidget *) userData->ScreenApp->loginContainer.login_window);
    css_set(provider_login, (GtkWidget *) userData->ScreenApp->loginContainer.login_button);
    css_set(provider_login, (GtkWidget *) userData->ScreenApp->loginContainer.register_button);
    css_set(provider_login, (GtkWidget *) userData->ScreenApp->loginContainer.password_input);
    css_set(provider_login, (GtkWidget *) userData->ScreenApp->loginContainer.show_login_status);
    css_set(provider_login, (GtkWidget *) userData->ScreenApp->loginContainer.username_input);

    g_signal_connect(userData->ScreenApp->loginContainer.login_button, "clicked", G_CALLBACK(on_login_clicked),
                     userData);
    g_signal_connect(userData->ScreenApp->loginContainer.register_button, "clicked", G_CALLBACK(on_register_clicked),
                     userData);
}

void initMainScreen(UserData *userData) {
    printf("init main\n");
    GtkBuilder *builder = gtk_builder_new_from_file(
            "/home/hieudz/CLionProjects/LTM_Project/cmake-build-debug/View/main.glade");
    userData->ScreenApp->mainContainer.main_window = (GtkWidget *) gtk_builder_get_object(builder, "main_window");
    userData->ScreenApp->mainContainer.show_player_name = (GtkWidget *) gtk_builder_get_object(builder,
                                                                                               "show_player_name");
    userData->ScreenApp->mainContainer.join_random_room = (GtkWidget *) gtk_builder_get_object(builder,
                                                                                               "join_random_room");
    userData->ScreenApp->mainContainer.create_room = (GtkWidget *) gtk_builder_get_object(builder, "create_room");
    userData->ScreenApp->mainContainer.join_room = (GtkWidget *) gtk_builder_get_object(builder, "join_room");
    userData->ScreenApp->mainContainer.input_room_id = (GtkWidget *) gtk_builder_get_object(builder, "input_room_id");
    userData->ScreenApp->mainContainer.show_main_status = (GtkWidget *) gtk_builder_get_object(builder,
                                                                                               "show_main_status");
    userData->ScreenApp->mainContainer.submit_button = (GtkWidget *) gtk_builder_get_object(builder,
                                                                                            "submit_in_main_button");
    GtkCssProvider *provider_main = gtk_css_provider_new();
    gtk_css_provider_load_from_path(provider_main,"/home/hieudz/CLionProjects/LTM_Project/View/style_css/style.css",NULL);
    css_set(provider_main, (GtkWidget *) userData->ScreenApp->mainContainer.main_window);
    css_set(provider_main, (GtkWidget *) userData->ScreenApp->mainContainer.create_room);
    css_set(provider_main, (GtkWidget *) userData->ScreenApp->mainContainer.join_random_room);
    css_set(provider_main, (GtkWidget *) userData->ScreenApp->mainContainer.join_room);
    css_set(provider_main, (GtkWidget *) userData->ScreenApp->mainContainer.submit_button);
    css_set(provider_main, (GtkWidget *) userData->ScreenApp->mainContainer.input_room_id);
    css_set(provider_main, (GtkWidget *) userData->ScreenApp->mainContainer.show_main_status);
    css_set(provider_main, (GtkWidget *) userData->ScreenApp->mainContainer.show_player_name);



    g_signal_connect(userData->ScreenApp->mainContainer.join_random_room, "clicked",
                     G_CALLBACK(on_join_random_room_clicked), userData);
    g_signal_connect(userData->ScreenApp->mainContainer.create_room, "clicked", G_CALLBACK(on_create_room_clicked),
                     userData);
    g_signal_connect(userData->ScreenApp->mainContainer.join_room, "clicked", G_CALLBACK(on_join_room_clicked),
                     userData);
    g_signal_connect(userData->ScreenApp->mainContainer.submit_button, "clicked", G_CALLBACK(on_submit_in_main_clicked),
                     userData);
}

void initRoomScreen(UserData *userData) {
    printf("init room\n");
    GtkBuilder *builder = gtk_builder_new_from_file(
            "/home/hieudz/CLionProjects/LTM_Project/cmake-build-debug/View/room.glade");
    userData->ScreenApp->roomContainer.room_window = (GtkWidget *) gtk_builder_get_object(builder, "room_window");
    userData->ScreenApp->roomContainer.player1_name = (GtkWidget *) gtk_builder_get_object(builder, "player1_name");
    userData->ScreenApp->roomContainer.player2_name = (GtkWidget *) gtk_builder_get_object(builder, "player2_name");
    userData->ScreenApp->roomContainer.player3_name = (GtkWidget *) gtk_builder_get_object(builder, "player3_name");
    userData->ScreenApp->roomContainer.out_button = (GtkWidget *) gtk_builder_get_object(builder, "out_button");
    userData->ScreenApp->roomContainer.start_button = (GtkWidget *) gtk_builder_get_object(builder, "start_button");
    userData->ScreenApp->roomContainer.show_room_id = (GtkWidget *) gtk_builder_get_object(builder, "show_room_id");
    userData->ScreenApp->roomContainer.show_room_status = (GtkWidget *) gtk_builder_get_object(builder,
                                                                                               "show_room_status");
//    GtkCssProvider *provider_login = gtk_css_provider_new();
//    gtk_css_provider_load_from_path(provider_login,"/home/hieudz/CLionProjects/LTM_Project/View/style_css/style.css",NULL);
    GtkCssProvider *provider_room = gtk_css_provider_new();
    gtk_css_provider_load_from_path(provider_room,"/home/hieudz/CLionProjects/LTM_Project/View/style_css/style.css",NULL);
    css_set(provider_room, (GtkWidget *) userData->ScreenApp->roomContainer.out_button);
    css_set(provider_room, (GtkWidget *) userData->ScreenApp->roomContainer.start_button);
    css_set(provider_room, (GtkWidget *) userData->ScreenApp->roomContainer.player1_name);
    css_set(provider_room, (GtkWidget *) userData->ScreenApp->roomContainer.player2_name);
    css_set(provider_room, (GtkWidget *) userData->ScreenApp->roomContainer.player3_name);
    css_set(provider_room, (GtkWidget *) userData->ScreenApp->roomContainer.room_window);
    css_set(provider_room, (GtkWidget *) userData->ScreenApp->roomContainer.show_room_id);
    css_set(provider_room, (GtkWidget *) userData->ScreenApp->roomContainer.show_room_status);

///
    g_signal_connect(userData->ScreenApp->roomContainer.start_button, "clicked", G_CALLBACK(on_start_button_clicked),
                     userData);
    g_signal_connect(userData->ScreenApp->roomContainer.out_button, "clicked", G_CALLBACK(on_out_button_clicked),
                     userData);
}

void initGameScreen(UserData *userData) {
    printf("init game\n");
    GtkBuilder *builder = gtk_builder_new_from_file(
            "/home/hieudz/CLionProjects/LTM_Project/cmake-build-debug/View/game.glade");
    userData->ScreenApp->gameContainer.game_window = (GtkWidget *) gtk_builder_get_object(builder, "game_window");
    userData->ScreenApp->gameContainer.submit_button = (GtkWidget *) gtk_builder_get_object(builder, "submit_button");
    userData->ScreenApp->gameContainer.value_input = (GtkWidget *) gtk_builder_get_object(builder, "value_input");
    userData->ScreenApp->gameContainer.turn_button = (GtkWidget *) gtk_builder_get_object(builder, "turn_button");
    userData->ScreenApp->gameContainer.show_turn = (GtkWidget *) gtk_builder_get_object(builder, "show_turn");
    userData->ScreenApp->gameContainer.show_result = (GtkWidget *) gtk_builder_get_object(builder, "show_result");
    userData->ScreenApp->gameContainer.show_hint = (GtkWidget *) gtk_builder_get_object(builder, "show_hint");
    userData->ScreenApp->gameContainer.p1_point = (GtkWidget *) gtk_builder_get_object(builder, "p1_point");
    userData->ScreenApp->gameContainer.p2_point = (GtkWidget *) gtk_builder_get_object(builder, "p2_point");
    userData->ScreenApp->gameContainer.p3_point = (GtkWidget *) gtk_builder_get_object(builder, "p3_point");
    userData->ScreenApp->gameContainer.show_announcement = (GtkWidget *) gtk_builder_get_object(builder,
                                                                                                "show_announcement");
    userData->ScreenApp->gameContainer.p1_name = (GtkWidget *) gtk_builder_get_object(builder, "p1_name");
    userData->ScreenApp->gameContainer.p2_name = (GtkWidget *) gtk_builder_get_object(builder, "p2_name");
    userData->ScreenApp->gameContainer.p3_name = (GtkWidget *) gtk_builder_get_object(builder, "p3_name");
    userData->ScreenApp->gameContainer.out_to_main_button = (GtkWidget *) gtk_builder_get_object(builder,
                                                                                                 "out_to_main_button");
    userData->ScreenApp->gameContainer.next_final_button = (GtkWidget *) gtk_builder_get_object(builder,
                                                                                                "next_final_button");
//    GtkCssProvider *provider_login = gtk_css_provider_new();
//    gtk_css_provider_load_from_path(provider_login,"/home/hieudz/CLionProjects/LTM_Project/View/style_css/style.css",NULL);

    GtkCssProvider *provider_game = gtk_css_provider_new();
    gtk_css_provider_load_from_path(provider_game,"/home/hieudz/CLionProjects/LTM_Project/View/style_css/style.css",NULL);
    css_set(provider_game, (GtkWidget *) userData->ScreenApp->gameContainer.submit_button);
    css_set(provider_game, (GtkWidget *) userData->ScreenApp->gameContainer.next_final_button);
    css_set(provider_game, (GtkWidget *) userData->ScreenApp->gameContainer.out_to_main_button);
    css_set(provider_game, (GtkWidget *) userData->ScreenApp->gameContainer.turn_button);
    css_set(provider_game, (GtkWidget *) userData->ScreenApp->gameContainer.game_window);
    css_set(provider_game, (GtkWidget *) userData->ScreenApp->gameContainer.p1_name);
    css_set(provider_game, (GtkWidget *) userData->ScreenApp->gameContainer.p1_point);
    css_set(provider_game, (GtkWidget *) userData->ScreenApp->gameContainer.p2_name);
    css_set(provider_game, (GtkWidget *) userData->ScreenApp->gameContainer.p2_point);
    css_set(provider_game, (GtkWidget *) userData->ScreenApp->gameContainer.p3_name);
    css_set(provider_game, (GtkWidget *) userData->ScreenApp->gameContainer.p3_point);
    css_set(provider_game, (GtkWidget *) userData->ScreenApp->gameContainer.show_announcement);
    css_set(provider_game, (GtkWidget *) userData->ScreenApp->gameContainer.show_hint);
//    css_set(provider_game, (GtkWidget *) userData->ScreenApp->gameContainer.);
    css_set(provider_game, (GtkWidget *) userData->ScreenApp->gameContainer.show_result);
    css_set(provider_game, (GtkWidget *) userData->ScreenApp->gameContainer.show_turn);
    css_set(provider_game, (GtkWidget *) userData->ScreenApp->gameContainer.value_input);
//
    g_signal_connect(userData->ScreenApp->gameContainer.turn_button, "clicked", G_CALLBACK(on_turn_clicked), userData);
    g_signal_connect(userData->ScreenApp->gameContainer.submit_button, "clicked", G_CALLBACK(on_submit_clicked),
                     userData);
    g_signal_connect(userData->ScreenApp->gameContainer.out_to_main_button, "clicked",
                     G_CALLBACK(on_out_to_main_clicked), userData);

    g_signal_connect(userData->ScreenApp->gameContainer.next_final_button, "clicked",
                     G_CALLBACK(on_to_final_game_clicked), userData);

}

void initFinalScreen(UserData *userData) {
    GtkBuilder *builder = gtk_builder_new_from_file(
            "/home/hieudz/CLionProjects/LTM_Project/cmake-build-debug/View/final.glade");
    userData->ScreenApp->finalContainer.final_window = (GtkWidget *) gtk_builder_get_object(builder, "final_window");

    userData->ScreenApp->finalContainer.final_question = (GtkWidget *) gtk_builder_get_object(builder,
                                                                                              "final_question");
    userData->ScreenApp->finalContainer.hint_text = (GtkWidget *) gtk_builder_get_object(builder, "hint_text");
    userData->ScreenApp->finalContainer.time_down = (GtkWidget *) gtk_builder_get_object(builder, "time_down");

    // text-input
    userData->ScreenApp->finalContainer.your_text_answer = (GtkWidget *) gtk_builder_get_object(builder,
                                                                                                "your_text_answer");
    userData->ScreenApp->finalContainer.button_submit_last_answer = (GtkWidget *) gtk_builder_get_object(builder,
                                                                                                         "button_submit_last_answer");

    userData->ScreenApp->finalContainer.str1 = (GtkWidget *) gtk_builder_get_object(builder, "str1");
    userData->ScreenApp->finalContainer.str2 = (GtkWidget *) gtk_builder_get_object(builder, "str2");
    userData->ScreenApp->finalContainer.str3 = (GtkWidget *) gtk_builder_get_object(builder, "str3");
    userData->ScreenApp->finalContainer.button_submit_char = (GtkWidget *) gtk_builder_get_object(builder,
                                                                                                  "button_submit_char");
    GtkCssProvider *provider_final = gtk_css_provider_new();
    gtk_css_provider_load_from_path(provider_final,"/home/hieudz/CLionProjects/LTM_Project/View/style_css/style.css",NULL);
    css_set(provider_final, (GtkWidget *) userData->ScreenApp->finalContainer.str1);
    css_set(provider_final, (GtkWidget *) userData->ScreenApp->finalContainer.str2);
    css_set(provider_final, (GtkWidget *) userData->ScreenApp->finalContainer.str3);
    css_set(provider_final, (GtkWidget *) userData->ScreenApp->finalContainer.button_submit_char);
    css_set(provider_final, (GtkWidget *) userData->ScreenApp->finalContainer.button_submit_last_answer);
    css_set(provider_final, (GtkWidget *) userData->ScreenApp->finalContainer.final_window);
    css_set(provider_final, (GtkWidget *) userData->ScreenApp->finalContainer.your_text_answer);
    css_set(provider_final, (GtkWidget *) userData->ScreenApp->finalContainer.final_question);
    css_set(provider_final, (GtkWidget *) userData->ScreenApp->finalContainer.hint_text);
    css_set(provider_final, (GtkWidget *) userData->ScreenApp->finalContainer.time_down);



    g_signal_connect(userData->ScreenApp->finalContainer.button_submit_last_answer, "clicked",
                     G_CALLBACK(onSubmitLastAnswer), userData);
    g_signal_connect(userData->ScreenApp->finalContainer.button_submit_char, "clicked", G_CALLBACK(onSubmit3character),
                     userData);
}

void initWinnerScreen(UserData *userData) {
    GtkBuilder *builder = gtk_builder_new_from_file(
            "/home/hieudz/CLionProjects/LTM_Project/cmake-build-debug/View/winner.glade");
    userData->ScreenApp->winnerContainer.winner_back_home = (GtkWidget *) gtk_builder_get_object(builder,
                                                                                                 "winner_back_home");
    userData->ScreenApp->winnerContainer.winner_window = (GtkWidget *) gtk_builder_get_object(builder, "winner_window");

    ///
    GtkCssProvider *provider_win = gtk_css_provider_new();
    gtk_css_provider_load_from_path(provider_win,"/home/hieudz/CLionProjects/LTM_Project/View/style_css/style.css",NULL);
    css_set(provider_win, (GtkWidget *) userData->ScreenApp->winnerContainer.winner_window);
    css_set(provider_win, (GtkWidget *) userData->ScreenApp->winnerContainer.winner_back_home);
    //
    g_signal_connect(userData->ScreenApp->winnerContainer.winner_back_home, "clicked", G_CALLBACK(winner_back_home),
                     userData);
}


void initLoserScreen(UserData *userData) {
    GtkBuilder *builder = gtk_builder_new_from_file(
            "/home/hieudz/CLionProjects/LTM_Project/cmake-build-debug/View/loser.glade");
    userData->ScreenApp->loserContainer.loser_back_home = (GtkWidget *) gtk_builder_get_object(builder,
                                                                                               "loser_back_home");
    userData->ScreenApp->loserContainer.loser_window = (GtkWidget *) gtk_builder_get_object(builder, "loser_window");


    ///
    GtkCssProvider *provider_loser = gtk_css_provider_new();
    gtk_css_provider_load_from_path(provider_loser,"/home/hieudz/CLionProjects/LTM_Project/View/style_css/style.css",NULL);
    css_set(provider_loser, (GtkWidget *) userData->ScreenApp->loserContainer.loser_window);
    css_set(provider_loser, (GtkWidget *) userData->ScreenApp->loserContainer.loser_back_home);
    //
    g_signal_connect(userData->ScreenApp->loserContainer.loser_back_home, "clicked", G_CALLBACK(back_home), userData);
}


void initApp(UserData *userData) {
    printf("init\n");
    initLoginScreen(userData);
    initMainScreen(userData);
    initRoomScreen(userData);
    initGameScreen(userData);
    initFinalScreen(userData);
    initLoserScreen(userData);
    initWinnerScreen(userData);
}

