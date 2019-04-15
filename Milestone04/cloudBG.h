
//{{BLOCK(cloudBG)

//======================================================================
//
//	cloudBG, 256x256@8, 
//	+ palette 256 entries, not compressed
//	+ 235 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 32x32 
//	Total size: 512 + 15040 + 2048 = 17600
//
//	Time-stamp: 2019-03-24, 19:27:16
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_CLOUDBG_H
#define GRIT_CLOUDBG_H

#define cloudBGTilesLen 15040
extern const unsigned short cloudBGTiles[7520];

#define cloudBGMapLen 2048
extern const unsigned short cloudBGMap[1024];

#define cloudBGPalLen 512
extern const unsigned short cloudBGPal[256];

#endif // GRIT_CLOUDBG_H

//}}BLOCK(cloudBG)
