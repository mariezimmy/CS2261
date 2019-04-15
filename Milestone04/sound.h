SOUND soundA;
SOUND soundB;

void setupSounds();
void playSoundA(const unsigned char *sound, int length, int frequency, int loops);
void playSoundB(const unsigned char *sound, int length, int frequency, int loops);

void setupInterrupts();
void interruptHandler();

void pauseSound();
void unpauseSound();
void pauseSoundA();
void unpauseSoundA();
void pauseSoundB();
void unpauseSoundB();
void stopSoundA();
void stopSoundB();
void stopSound();
