#include <SDL.h>
#include <SDL_net.h>
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {

	if (SDLNet_Init() == -1) {
		cerr << "SDLNet_Init error: " << SDLNet_GetError() << endl;
		return 1;
	}
	cout << "Thank you for using ChArtFX !\n";
	return 0;
}
