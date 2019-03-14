
//{{BLOCK(pauseStateImage)

//======================================================================
//
//	pauseStateImage, 256x256@4, 
//	+ palette 256 entries, not compressed
//	+ 30 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 32x32 
//	Total size: 512 + 960 + 2048 = 3520
//
//	Time-stamp: 2019-03-14, 13:21:00
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_PAUSESTATEIMAGE_H
#define GRIT_PAUSESTATEIMAGE_H

#define pauseStateImageTilesLen 960
extern const unsigned short pauseStateImageTiles[480];

#define pauseStateImageMapLen 2048
extern const unsigned short pauseStateImageMap[1024];

#define pauseStateImagePalLen 512
extern const unsigned short pauseStateImagePal[256];

#endif // GRIT_PAUSESTATEIMAGE_H

//}}BLOCK(pauseStateImage)
