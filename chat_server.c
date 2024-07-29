#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 12345	//port
#define MAX_CLIENTS 10 	//кол-во клиентов

//хранение клиентских сокетов
int client_sockets[MAX_CLIENTS];

//функция добавления нового клиента в массив
void add_client(int client_sockets) {
	for (int i = 0; i < MAX_CLIENTS; i++) {
		if (client_sockets[i] == 0) {
			client_sockets[i] = client_sockets;
			break;
		}
	}
}

//функция для удаления клиента из массива
void remove_client(int client_sockets) {
	for (int i = 0; i < MAX_CLIENTS; i++) {
		if (client_sockets[i] == client_socket) {
			client_sockets[i] = 0;
			break;
		}
	}
}

//функция для пересылки сообщения всем подключенным клиентам
void broadcast_message(char *message, int sender_socket) {
	for (int i = 0; i < MAC_CLIENTS; i++) {
		if (client_sockets[i] != 0 && client_sockets[i] != sender_socket) {
			send(client_sockets[i], message, strlen(message), 0);
		}
	}
}

int main() {
	int server_socket, client_socket;
	struct sockaddr_in server_addr, client_addr;
	socklen_t addr_size;
	char buffer[1024]
	
	//инициализация массива клиентских сокетов
	memset(client_sockets, 0, sizeof(client_sockets));

	//создание серверного сокета
	server_socket = socket(AF_INET, SOCK_STREAM, 0);
	if (server_socket == -1) {
		perror("socket");
		exit(1);
	}


	










