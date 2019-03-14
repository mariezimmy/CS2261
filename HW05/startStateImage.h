
//{{BLOCK(startStateImage)

//======================================================================
//
//	startStateImage, 256x256@4, 
//	+ palette 256 entries, not compressed
//	+ 69 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 32x32 
//	Total size: 512 + 2208 + 2048 = 4768
//
//	Time-stamp: 2019-03-14, 14:09:19
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_STARTSTATEIMAGE_H
#define GRIT_STARTSTATEIMAGE_H

#define startStateImageTilesLen 2208
extern const unsigned short startStateImageTiles[1104];

#define startStateImageMapLen 2048
extern const unsigned short startStateImageMap[1024];

#define startStateImagePalLen 512
extern const unsigned short startStateImagePal[256];

#endif // GRIT_STARTSTATEIMAGE_H

//}}BLOCK(startStateImage)
