#ifndef AUDIO_H
#define AUDIO_H

#include <Windows.h>

enum class Sounds
{
	Pickup,
	BackgroundMusic
};

void playSound( Sounds sound, bool isLooping )
{
	LPCSTR soundToPlay = "";

	switch( sound )
	{
		case Sounds::Pickup:
			{
				soundToPlay = "";
			}
			break;

		case Sounds::BackgroundMusic:
			{
				soundToPlay = "";
			}
			break;
	}

	PlaySound( soundToPlay, NULL, SND_FILENAME | SND_ASYNC | SND_LOOP );
}

#endif // !AUDIO_H
