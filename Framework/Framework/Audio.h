#ifndef AUDIO_H
#define AUDIO_H

#include <Windows.h>

enum class Sounds
{
	Pickup,
	BackgroundMusic
};

void playSound( Sounds sound )
{
	switch( sound )
	{
		case Sounds::Pickup:
			{
				PlaySound( "Pickup.wav", NULL, SND_FILENAME | SND_ASYNC );
			}
			break;

		case Sounds::BackgroundMusic:
			{
				PlaySound( "BackgroundMusic.wav", NULL, SND_FILENAME | SND_ASYNC | SND_LOOP );
			}
			break;
	}
}

void stopSound()
{
	PlaySound( NULL, NULL, SND_FILENAME | SND_ASYNC );
}

#endif // !AUDIO_H
