
//{{BLOCK(loseStateImage)

//======================================================================
//
//	loseStateImage, 256x256@4, 
//	+ palette 256 entries, not compressed
//	+ 104 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 32x32 
//	Total size: 512 + 3328 + 2048 = 5888
//
//	Time-stamp: 2019-03-14, 14:02:44
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_LOSESTATEIMAGE_H
#define GRIT_LOSESTATEIMAGE_H

#define loseStateImageTilesLen 3328
extern const unsigned short loseStateImageTiles[1664];

#define loseStateImageMapLen 2048
extern const unsigned short loseStateImageMap[1024];

#define loseStateImagePalLen 512
extern const unsigned short loseStateImagePal[256];

#endif // GRIT_LOSESTATEIMAGE_H

//}}BLOCK(loseStateImage)
