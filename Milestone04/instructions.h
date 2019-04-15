
//{{BLOCK(instructions)

//======================================================================
//
//	instructions, 256x256@8, 
//	+ palette 256 entries, not compressed
//	+ 305 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 32x32 
//	Total size: 512 + 19520 + 2048 = 22080
//
//	Time-stamp: 2019-04-10, 18:55:56
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_INSTRUCTIONS_H
#define GRIT_INSTRUCTIONS_H

#define instructionsTilesLen 19520
extern const unsigned short instructionsTiles[9760];

#define instructionsMapLen 2048
extern const unsigned short instructionsMap[1024];

#define instructionsPalLen 512
extern const unsigned short instructionsPal[256];

#endif // GRIT_INSTRUCTIONS_H

//}}BLOCK(instructions)
