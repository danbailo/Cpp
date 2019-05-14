#include "cliente.h"
#include <pthread.h>

	Cliente::Cliente(){
		memset(bufferR,0,1024);
		memset(bufferS,0,1024);
		//this->socket=socket;
	}
	void Cliente::setId(int id){
		this->ID=id;
	}
	int Cliente::getId(){
		return this->ID;
	}
	void Cliente::proc(){
		while(true){
			recv(this->socket,this->bufferR,1024,0);
			if(strcmp(this->bufferR,"Ola")==0)
				send(this->socket,"oi povo",7,0);
		memset(this->bufferR,0,sizeof(this->bufferR));
		}	
	}
	void Cliente::Start(){
		pthread_t t1;
		pthread_create(&t1,NULL,proc(),&socket);
	}