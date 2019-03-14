
//{{BLOCK(winStateImage)

//======================================================================
//
//	winStateImage, 256x256@4, 
//	+ palette 256 entries, not compressed
//	+ 152 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 32x32 
//	Total size: 512 + 4864 + 2048 = 7424
//
//	Time-stamp: 2019-03-14, 13:28:24
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_WINSTATEIMAGE_H
#define GRIT_WINSTATEIMAGE_H

#define winStateImageTilesLen 4864
extern const unsigned short winStateImageTiles[2432];

#define winStateImageMapLen 2048
extern const unsigned short winStateImageMap[1024];

#define winStateImagePalLen 512
extern const unsigned short winStateImagePal[256];

#endif // GRIT_WINSTATEIMAGE_H

//}}BLOCK(winStateImage)
