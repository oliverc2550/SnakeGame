#ifndef AUDIO_H
#define AUDIO_H

#include <Windows.h>
//Enums to use within playSound() for easy switching
enum class Sounds
{
	Pickup,
	BackgroundMusic
};
//#######################################################
//    Function    :    playSound()
//    Purpose     :    To play sounds within Snake Game
//    Parameters  :    Sounds sound
//    Returns     :    void
//    Notes       :	   Used to wrap PlaySound(), to give a cleaner implementation within other cpp files
//    See also    :    stopSound()
//#######################################################
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
//#######################################################
//    Function    :    stopSound()
//    Purpose     :    To stop playing sounds within Snake Game
//    Parameters  :    none
//    Returns     :    void
//    Notes       :	   Used to wrap PlaySound(), to give a cleaner implementation within other cpp files
//    See also    :    playSound()
//#######################################################
void stopSound()
{
	PlaySound( NULL, NULL, SND_FILENAME | SND_ASYNC );
}

#endif // !AUDIO_H
