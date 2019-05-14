#include <iostream>
#include <pthread.h>
#include <string.h>
class Cliente{
	private:
		char bufferR[1024];
		char bufferS[1024];
		int ID;
		int socket;
		//pthread_t t;
	public:
		void proc();
		Cliente();
		void setId(int id);
		int getId();
		void Start();
};
