#pragma once
#define NAMESIZE 256
#define MAX_PLAYERS 8
#define BUFSIZE 2048
#define SNAKE_SPEED 100

//DEFINES DE OBJECTOS E MAPAS
#define WALL 101
#define BLANK 100
#define TP_WALL 102
#define DURATION 60
#define FOOD 103
#define ICE 105
#define GRENADE 106
#define VODKA 107
#define OIL 108
#define GLUE 109
#define O_VODKA 110
#define O_OIL 111
#define O_GLUE 112

#define SNAKE 104

#define MAX_OBJECTS 8

#define MAP_ROWS					20
#define MAP_COLUMNS					20
#define MAP_SIZE					20


//butoes e afins
#define LOGIN_BUTTON 400
#define HELP_BUTTON 401
#define LOGOUT_BUTTON 402
#define GAME_MENU_BUTTON 403
#define CREATE_GAME_BUTTON 404
#define JOIN_GAME_BUTTON 405
#define GAMEMENU_BACK_BUTTON 406
#define REFRESH_STATUS_BUTTON 407
#define UP 610
#define DOWN 611
#define RIGHT 612
#define LEFT  613 

//responses comando do cliente
#pragma once
#define R_CONNECT 600
#define R_LOGOUT 601
#define R_CHECK_GAME_STATUS 602
#define R_1_MOVEUP 603
#define R_1_MOVEDOWN 604
#define R_1_MOVELEFT 605
#define R_1_MOVERIGHT 606
#define R_2_MOVEUP 607
#define R_2_MOVEDOWN 608
#define R_2_MOVELEFT 609
#define R_2_MOVERIGHT 610
#define R_JOINGAME 611
#define R_CREATEGAME 612



//status do cliente
#define NOT_LOGGED 700
#define LOGGED_IN 701
#define PLAYING 702
#define WAITING_GAME 703
#define SERVERS_OFFLINE 704
#define DISCONNECTED 705
#define INGAME_MENU 706
#define INGAME_LOBBY 707

//response do servidor
#define SERVER_ERROR_NAME_EXISTS 800
#define SERVER_LOGIN_SUCCESS 801
#define SERVER_LOGIN_FAILED 802
#define SERVER_NO_GAME_RUNNING 803
#define SERVER_GAME_ACCEPTING 804
#define SERVER_GAME_IS_RUNNING 805
#define SERVER_DISCONNECT 806
