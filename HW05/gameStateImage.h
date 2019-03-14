
//{{BLOCK(gameStateImage)

//======================================================================
//
//	gameStateImage, 256x256@4, 
//	+ palette 256 entries, not compressed
//	+ 279 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 32x32 
//	Total size: 512 + 8928 + 2048 = 11488
//
//	Time-stamp: 2019-03-14, 14:11:00
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_GAMESTATEIMAGE_H
#define GRIT_GAMESTATEIMAGE_H

#define gameStateImageTilesLen 8928
extern const unsigned short gameStateImageTiles[4464];

#define gameStateImageMapLen 2048
extern const unsigned short gameStateImageMap[1024];

#define gameStateImagePalLen 512
extern const unsigned short gameStateImagePal[256];

#endif // GRIT_GAMESTATEIMAGE_H

//}}BLOCK(gameStateImage)
