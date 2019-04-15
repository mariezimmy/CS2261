
//{{BLOCK(pawBG)

//======================================================================
//
//	pawBG, 256x256@8, 
//	+ palette 256 entries, not compressed
//	+ 245 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 32x32 
//	Total size: 512 + 15680 + 2048 = 18240
//
//	Time-stamp: 2019-03-24, 19:27:07
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_PAWBG_H
#define GRIT_PAWBG_H

#define pawBGTilesLen 15680
extern const unsigned short pawBGTiles[7840];

#define pawBGMapLen 2048
extern const unsigned short pawBGMap[1024];

#define pawBGPalLen 512
extern const unsigned short pawBGPal[256];

#endif // GRIT_PAWBG_H

//}}BLOCK(pawBG)
