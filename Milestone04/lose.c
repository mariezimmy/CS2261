
//{{BLOCK(lose)

//======================================================================
//
//	lose, 256x256@8, 
//	+ palette 256 entries, not compressed
//	+ 125 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 32x32 
//	Total size: 512 + 8000 + 2048 = 10560
//
//	Time-stamp: 2019-04-10, 19:27:12
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

const unsigned short loseTiles[4000] __attribute__((aligned(4)))=
{
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0100,0x0000,0x0000,0x0000,0x0201,
	0x0000,0x0000,0x0000,0x0201,0x0000,0x0000,0x0000,0x0201,
	0x0000,0x0000,0x0000,0x0201,0x0000,0x0000,0x0000,0x0201,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0100,
	0x0000,0x0000,0x0000,0x0201,0x0000,0x0000,0x0000,0x0201,
	0x0000,0x0000,0x0000,0x0201,0x0000,0x0000,0x0000,0x0201,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0100,0x0001,0x0000,0x0000,
	0x0201,0x0102,0x0000,0x0000,0x0201,0x0102,0x0000,0x0000,
	0x0201,0x0202,0x0001,0x0000,0x0201,0x0202,0x0001,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0101,0x0000,
	0x0000,0x0100,0x0202,0x0001,0x0000,0x0100,0x0202,0x0001,
	0x0000,0x0201,0x0202,0x0001,0x0000,0x0201,0x0202,0x0001,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0100,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0101,0x0101,
	0x0000,0x0101,0x0202,0x0202,0x0100,0x0202,0x0202,0x0202,
	0x0201,0x0202,0x0101,0x0101,0x0202,0x0101,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0001,0x0000,0x0000,0x0000,
	0x0102,0x0001,0x0000,0x0000,0x0202,0x0102,0x0000,0x0000,
	0x0201,0x0202,0x0001,0x0000,0x0100,0x0201,0x0102,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0100,0x0000,0x0000,0x0000,0x0100,
	0x0000,0x0000,0x0000,0x0100,0x0000,0x0000,0x0000,0x0100,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0101,0x0000,0x0000,0x0000,
	0x0202,0x0001,0x0000,0x0000,0x0202,0x0001,0x0000,0x0000,
	0x0202,0x0001,0x0000,0x0000,0x0202,0x0001,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0100,0x0001,0x0000,
	0x0000,0x0201,0x0102,0x0000,0x0000,0x0201,0x0102,0x0000,
	0x0000,0x0201,0x0102,0x0000,0x0000,0x0201,0x0102,0x0000,
	0x0000,0x0000,0x0000,0x0201,0x0000,0x0000,0x0000,0x0201,
	0x0000,0x0000,0x0000,0x0201,0x0000,0x0000,0x0000,0x0201,
	0x0000,0x0000,0x0000,0x0201,0x0000,0x0000,0x0000,0x0201,
	0x0000,0x0000,0x0000,0x0201,0x0000,0x0000,0x0000,0x0201,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0101,0x0000,0x0000,0x0100,0x0202,
	0x0000,0x0000,0x0201,0x0202,0x0000,0x0100,0x0202,0x0101,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0101,0x0101,0x0001,0x0000,
	0x0202,0x0202,0x0102,0x0001,0x0202,0x0202,0x0202,0x0102,
	0x0101,0x0101,0x0201,0x0202,0x0000,0x0000,0x0100,0x0201,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0001,0x0000,0x0000,0x0000,0x0102,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1010,
	0x0000,0x0000,0x1010,0x0202,0x0000,0x1000,0x0202,0x0202,
	0x0000,0x1000,0x0202,0x1002,0x0000,0x1000,0x0202,0x0010,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x1010,0x0010,0x0000,0x0000,
	0x0202,0x1002,0x0010,0x0000,0x0202,0x0202,0x1002,0x0000,
	0x1010,0x0210,0x0202,0x0010,0x0000,0x1000,0x0202,0x0010,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1010,0x1010,
	0x0000,0x1001,0x0202,0x0202,0x0100,0x0202,0x0202,0x0202,
	0x0201,0x0202,0x1010,0x1010,0x0201,0x0102,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x1010,0x0000,0x0000,0x0000,
	0x0202,0x1010,0x0000,0x0000,0x0202,0x0202,0x0010,0x0000,
	0x1010,0x0210,0x1002,0x0000,0x0000,0x1000,0x1002,0x0000,
	0x0100,0x0202,0x0001,0x0000,0x0100,0x0202,0x0102,0x0000,
	0x0100,0x0202,0x0102,0x0000,0x0000,0x0201,0x0202,0x0001,
	0x0000,0x0201,0x0202,0x0001,0x0000,0x0100,0x0202,0x0001,
	0x0000,0x0100,0x0202,0x0102,0x0000,0x0000,0x0201,0x0202,

	0x0000,0x0201,0x0102,0x0000,0x0100,0x0202,0x0102,0x0000,
	0x0100,0x0202,0x0102,0x0000,0x0201,0x0202,0x0001,0x0000,
	0x0201,0x0202,0x0001,0x0000,0x0201,0x0102,0x0000,0x0000,
	0x0202,0x0102,0x0000,0x0000,0x0202,0x0001,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0201,0x0000,0x0000,0x0000,0x0201,
	0x0000,0x0000,0x0000,0x0201,0x0000,0x0000,0x0000,0x0201,
	0x0000,0x0000,0x0000,0x0201,0x0000,0x0000,0x0000,0x0201,
	0x0000,0x0000,0x0000,0x0201,0x0000,0x0000,0x0000,0x0100,

	0x0102,0x0000,0x0000,0x0000,0x0102,0x0000,0x0000,0x0000,
	0x0102,0x0000,0x0000,0x0000,0x0102,0x0000,0x0000,0x0000,
	0x0102,0x0000,0x0000,0x0000,0x0102,0x0000,0x0000,0x0000,
	0x0102,0x0000,0x0000,0x0000,0x0202,0x0101,0x0000,0x0000,
	0x0000,0x0201,0x0202,0x0001,0x0000,0x0100,0x0202,0x0001,
	0x0000,0x0100,0x0202,0x0001,0x0000,0x0100,0x0202,0x0001,
	0x0000,0x0100,0x0202,0x0001,0x0000,0x0100,0x0202,0x0001,
	0x0000,0x0201,0x0202,0x0001,0x0100,0x0201,0x0102,0x0000,

	0x0000,0x0000,0x0000,0x0100,0x0000,0x0000,0x0000,0x0100,
	0x0000,0x0000,0x0000,0x0100,0x0000,0x0000,0x0000,0x0100,
	0x0000,0x0000,0x0000,0x0100,0x0000,0x0000,0x0000,0x0100,
	0x0000,0x0000,0x0000,0x0100,0x0000,0x0000,0x0000,0x0100,
	0x0202,0x0001,0x0000,0x0000,0x0202,0x0001,0x0000,0x0000,
	0x0202,0x0001,0x0000,0x0000,0x0202,0x0001,0x0000,0x0000,
	0x0202,0x0001,0x0000,0x0000,0x0202,0x0001,0x0000,0x0000,
	0x0202,0x0102,0x0000,0x0000,0x0202,0x0102,0x0000,0x0000,

	0x0000,0x0201,0x0102,0x0000,0x0000,0x0201,0x0102,0x0000,
	0x0000,0x0201,0x0102,0x0000,0x0000,0x0201,0x0102,0x0000,
	0x0000,0x0201,0x0102,0x0000,0x0000,0x0201,0x0102,0x0000,
	0x0100,0x0202,0x0102,0x0000,0x0100,0x0202,0x0102,0x0000,
	0x0000,0x0201,0x0102,0x0000,0x0000,0x0201,0x0102,0x0000,
	0x0000,0x0201,0x0102,0x0000,0x0000,0x0201,0x0102,0x0000,
	0x0000,0x0201,0x0102,0x0000,0x0000,0x0201,0x0102,0x0000,
	0x0000,0x0201,0x0102,0x0000,0x0000,0x0100,0x0202,0x0101,

	0x0000,0x0000,0x0000,0x0201,0x0000,0x0000,0x0000,0x0100,
	0x0000,0x0000,0x0000,0x0100,0x0000,0x0000,0x0000,0x0100,
	0x0000,0x0000,0x0000,0x0100,0x0000,0x0000,0x0000,0x0100,
	0x0000,0x0000,0x0000,0x0201,0x0000,0x0000,0x0100,0x0201,
	0x0202,0x0001,0x0000,0x0000,0x0202,0x0001,0x0000,0x0000,
	0x0202,0x0001,0x0000,0x0000,0x0202,0x0001,0x0000,0x0000,
	0x0202,0x0001,0x0000,0x0000,0x0202,0x0001,0x0000,0x0000,
	0x0202,0x0001,0x0000,0x0000,0x0102,0x0000,0x0000,0x0000,

	0x0000,0x1000,0x0202,0x0010,0x0000,0x1000,0x0202,0x1010,
	0x0000,0x0000,0x0210,0x0202,0x0000,0x0000,0x1000,0x0210,
	0x0000,0x0000,0x0000,0x1000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x1000,0x0010,0x0000,0x0000,0x0210,0x1002,0x0010,
	0x0000,0x0000,0x1010,0x0000,0x1010,0x0010,0x0000,0x0000,
	0x0202,0x1002,0x0000,0x0000,0x0202,0x0202,0x1010,0x0000,
	0x1010,0x0202,0x0202,0x0010,0x0000,0x1010,0x0202,0x0010,
	0x0000,0x1000,0x0202,0x0010,0x0000,0x1000,0x0202,0x0010,

	0x0000,0x0000,0x0000,0x0100,0x0000,0x0000,0x0000,0x0100,
	0x0000,0x0000,0x0000,0x0100,0x0000,0x0000,0x0000,0x0100,
	0x0000,0x0000,0x0000,0x0100,0x0000,0x0000,0x0000,0x0100,
	0x0000,0x0000,0x0000,0x0100,0x0000,0x0000,0x0000,0x0000,
	0x0202,0x0102,0x0000,0x0000,0x0202,0x1002,0x1010,0x1010,
	0x0202,0x0202,0x0202,0x0202,0x0202,0x0202,0x0202,0x0202,
	0x0202,0x0101,0x0101,0x0101,0x0202,0x0001,0x0000,0x0000,
	0x0202,0x0001,0x0000,0x0000,0x0201,0x0102,0x0001,0x0000,

	0x0000,0x1000,0x0202,0x0010,0x1010,0x1010,0x0202,0x0010,
	0x0202,0x0202,0x0202,0x0010,0x0202,0x0202,0x0202,0x0010,
	0x0101,0x0101,0x0101,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0101,0x0000,0x0000,0x0100,0x0202,0x0001,
	0x0000,0x0000,0x0100,0x0202,0x0000,0x0000,0x0100,0x0202,
	0x0000,0x0000,0x0100,0x0202,0x0000,0x0000,0x0100,0x0202,
	0x0000,0x0000,0x0100,0x0202,0x0000,0x0000,0x0201,0x0202,
	0x0000,0x0000,0x0201,0x0202,0x0100,0x0101,0x0202,0x0102,

	0x0102,0x0000,0x0000,0x0000,0x0102,0x0000,0x0000,0x0000,
	0x0102,0x0000,0x0000,0x0000,0x0102,0x0000,0x0000,0x0000,
	0x0102,0x0000,0x0000,0x0000,0x0001,0x0000,0x0000,0x0000,
	0x0001,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0201,0x0202,0x0101,0x0101,0x0100,0x0202,0x0202,0x0202,
	0x0000,0x0101,0x0202,0x0202,0x0000,0x0000,0x0101,0x0101,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0201,0x0202,0x0001,0x0000,0x0202,0x0102,0x0000,0x0000,
	0x0102,0x0001,0x0000,0x0000,0x0001,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0201,0x0202,0x0101,0x0101,0x0100,0x0202,0x0202,0x0202,
	0x0000,0x0201,0x0202,0x0202,0x0000,0x0100,0x0101,0x0101,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0201,0x0202,0x0001,0x0000,0x0202,0x0102,0x0000,0x0000,
	0x0202,0x0001,0x0000,0x0000,0x0101,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0201,0x0000,0x0000,0x0000,0x0201,
	0x0000,0x0000,0x0000,0x0201,0x0000,0x0000,0x0000,0x0100,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0201,0x0202,0x0000,0x0000,0x0100,0x0202,
	0x0000,0x0000,0x0000,0x0101,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0101,0x0101,0x0201,0x0202,0x0202,0x0202,0x0202,0x0102,
	0x0202,0x0202,0x0102,0x0001,0x0101,0x0101,0x0001,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0210,0x0202,0x1002,0x0000,0x1000,0x0202,0x0202,
	0x0000,0x0000,0x1010,0x0202,0x0000,0x0000,0x0000,0x1010,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x1010,0x0210,0x0202,0x0010,0x0202,0x0202,0x1002,0x0000,
	0x0202,0x1002,0x0010,0x0000,0x1010,0x0010,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0201,0x0202,0x0102,0x0101,0x0100,0x0202,0x0202,0x0202,
	0x0000,0x0101,0x0202,0x0202,0x0000,0x0000,0x0101,0x0101,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0101,0x0201,0x0202,0x0001,0x0202,0x0202,0x0102,0x0000,
	0x0202,0x0102,0x0001,0x0000,0x0101,0x0001,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0100,0x0000,0x0000,0x0000,0x0201,
	0x0000,0x0000,0x0000,0x0201,0x0000,0x0000,0x0000,0x0100,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0201,0x0202,0x0202,0x0102,0x0201,0x0202,0x0202,0x0001,
	0x0100,0x0101,0x0101,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0B00,0x0000,0x0000,0x0000,0x020B,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0B00,0x000B,0x0000,
	0x0000,0x020B,0x0B02,0x0000,0x0000,0x020B,0x0B02,0x0000,
	0x0000,0x020B,0x0B02,0x0000,0x0000,0x020B,0x0B02,0x0000,
	0x0B0B,0x020B,0x0B02,0x0B0B,0x0202,0x0202,0x0202,0x0202,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0B00,0x0000,0x0000,0x0000,0x0B00,
	0x0000,0x0000,0x0000,0x0B00,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0B0B,0x000B,0x0000,0x0000,
	0x0202,0x0B02,0x0000,0x0000,0x0202,0x0B02,0x0000,0x0000,
	0x0202,0x0B02,0x0000,0x0000,0x0B0B,0x000B,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0B00,
	0x0000,0x0000,0x0000,0x020B,0x0000,0x0000,0x0B00,0x0202,
	0x0000,0x0000,0x0B00,0x0202,0x0000,0x0000,0x0B00,0x0202,
	0x0000,0x0000,0x0000,0x0000,0x0B00,0x0B0B,0x0B0B,0x0B0B,
	0x020B,0x0202,0x0202,0x0202,0x0202,0x0202,0x0202,0x0202,
	0x0202,0x0B0B,0x0B0B,0x020B,0x0B02,0x0000,0x0000,0x0B00,
	0x000B,0x0000,0x0000,0x0000,0x000B,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x000B,0x0000,0x0000,0x0000,0x0B02,0x0000,0x0000,0x0000,
	0x0202,0x000B,0x0000,0x0000,0x0202,0x0B02,0x0000,0x0000,
	0x020B,0x0B02,0x0000,0x0000,0x020B,0x0B02,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0B00,
	0x0000,0x0000,0x0100,0x0201,0x0000,0x0000,0x0201,0x0202,
	0x0000,0x0000,0x020B,0x0B02,0x0000,0x0B00,0x0202,0x000B,
	0x0000,0x0B00,0x0202,0x0B0B,0x0000,0x0B00,0x0202,0x0202,

	0x0000,0x0000,0x0000,0x0000,0x0B0B,0x0B0B,0x000B,0x0000,
	0x0202,0x0202,0x0B02,0x0001,0x0202,0x0202,0x0202,0x0102,
	0x0B0B,0x0B0B,0x020B,0x0B02,0x0000,0x0000,0x0B00,0x0202,
	0x0B0B,0x0B0B,0x0B0B,0x0202,0x0202,0x0202,0x0202,0x0202,
	0x0000,0x0000,0x0000,0x020B,0x0000,0x0000,0x0000,0x0B00,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x000B,0x0000,0x0000,0x0000,
	0x000B,0x0000,0x0000,0x0000,0x000B,0x0000,0x0000,0x0000,

	0x0202,0x0202,0x0202,0x0202,0x0B0B,0x020B,0x0B02,0x0B0B,
	0x0000,0x020B,0x0B02,0x0000,0x0000,0x020B,0x0B02,0x0000,
	0x0000,0x020B,0x0B02,0x0000,0x0000,0x020B,0x0B02,0x0000,
	0x0000,0x020B,0x0B02,0x0000,0x0000,0x020B,0x0B02,0x0000,
	0x0B02,0x0000,0x0000,0x0000,0x000B,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0B00,
	0x0000,0x0000,0x0000,0x0B00,0x0000,0x0000,0x0000,0x020B,
	0x0000,0x0000,0x0000,0x020B,0x0000,0x0000,0x0000,0x0201,

	0x0000,0x0000,0x0000,0x0000,0x0B00,0x0B0B,0x0B0B,0x0000,
	0x020B,0x0202,0x0202,0x0B0B,0x0202,0x0202,0x0202,0x0202,
	0x0202,0x0B0B,0x0B0B,0x0202,0x0B02,0x0000,0x0000,0x020B,
	0x0B02,0x0000,0x0000,0x0B00,0x0202,0x0B0B,0x0B0B,0x0001,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x000B,0x0000,0x0000,0x0000,
	0x0B02,0x0000,0x0000,0x0000,0x0B02,0x0000,0x0000,0x0000,
	0x000B,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,
	0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0101,0x0101,0x0000,0x0000,0x0101,0x0101,
	0x0000,0x0000,0x0101,0x0101,0x0000,0x0000,0x0101,0x0101,

	0x0000,0x0000,0x0B00,0x0202,0x0000,0x0000,0x0B00,0x0202,
	0x0000,0x0000,0x0B00,0x0202,0x0000,0x0000,0x0B00,0x0202,
	0x0000,0x0000,0x0B00,0x0202,0x0000,0x0000,0x0B00,0x0202,
	0x0000,0x0000,0x0B00,0x0202,0x0000,0x0000,0x0B00,0x0202,
	0x000B,0x0000,0x0000,0x0000,0x000B,0x0000,0x0000,0x0000,
	0x000B,0x0000,0x0000,0x0000,0x0B02,0x0000,0x0000,0x0B00,
	0x0202,0x0B0B,0x0B0B,0x020B,0x0202,0x0202,0x0202,0x0202,
	0x0B0B,0x0202,0x0202,0x0202,0x000B,0x0B0B,0x0B0B,0x0B0B,

	0x020B,0x0B02,0x0000,0x0000,0x020B,0x0B02,0x0000,0x0000,
	0x020B,0x0B02,0x0000,0x0000,0x0202,0x0B02,0x0000,0x0000,
	0x0202,0x000B,0x0000,0x0000,0x0B02,0x0000,0x0000,0x0000,
	0x000B,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0B00,0x0202,0x0B0B,0x0000,0x0B00,0x0202,0x000B,
	0x0000,0x0B00,0x0202,0x000B,0x0000,0x0B00,0x0202,0x0B0B,
	0x0000,0x0000,0x020B,0x0202,0x0000,0x0000,0x0201,0x0202,
	0x0000,0x0000,0x0100,0x020B,0x0000,0x0000,0x0000,0x0B00,

	0x0B0B,0x0B0B,0x0B0B,0x0B0B,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0B0B,0x0000,0x0000,0x0B0B,0x0202,
	0x0B0B,0x0B0B,0x0202,0x0202,0x0202,0x0202,0x0202,0x0B02,
	0x0202,0x0202,0x0B02,0x0001,0x0B0B,0x0B0B,0x000B,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x000B,0x0000,0x0000,0x0000,
	0x000B,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x020B,0x0B02,0x0000,0x0000,0x020B,0x0B02,0x0000,
	0x0000,0x020B,0x0B02,0x0000,0x0000,0x020B,0x0B02,0x0000,
	0x0000,0x020B,0x0B02,0x0000,0x0000,0x020B,0x0B02,0x0000,
	0x0000,0x020B,0x0B02,0x0000,0x0000,0x0B00,0x000B,0x0000,
	0x0000,0x0000,0x0000,0x0100,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0B00,0x0000,0x0000,0x0000,0x020B,
	0x0000,0x0000,0x0000,0x020B,0x0000,0x0000,0x0000,0x0B00,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x020B,0x0202,0x0202,0x0B02,0x0100,0x0B0B,0x0B0B,0x0202,
	0x000B,0x0000,0x0000,0x020B,0x0B02,0x0000,0x0000,0x020B,
	0x0202,0x0B0B,0x0B0B,0x0202,0x0202,0x0202,0x0202,0x0202,
	0x0B0B,0x0202,0x0202,0x0B02,0x0000,0x0B0B,0x0B0B,0x000B,
	0x0001,0x0000,0x0000,0x0000,0x0102,0x0000,0x0000,0x0000,
	0x0B02,0x0000,0x0000,0x0000,0x0B02,0x0000,0x0000,0x0000,
	0x000B,0x0000,0x0000,0x0B00,0x000B,0x0000,0x0000,0x0B00,
	0x0000,0x0000,0x0000,0x0B00,0x0000,0x0000,0x0000,0x0000,

	0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,
	0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,
	0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
	0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
	0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
	0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
	0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,
	0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,

	0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
	0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
	0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,
	0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,
	0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,
	0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,
	0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,
	0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,

	0x0101,0x0101,0x0000,0x0000,0x0101,0x0101,0x0000,0x0000,
	0x0101,0x0101,0x0000,0x0000,0x0101,0x0101,0x0000,0x0000,
	0x0101,0x0101,0x0000,0x0000,0x0101,0x0101,0x0000,0x0000,
	0x0101,0x0101,0x0000,0x0000,0x0101,0x0101,0x0000,0x0000,
	0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
	0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
	0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
	0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,

	0x0101,0x0101,0x0000,0x0000,0x0101,0x0101,0x0000,0x0000,
	0x0101,0x0101,0x0000,0x0000,0x0101,0x0101,0x0000,0x0000,
	0x0101,0x0101,0x0404,0x0404,0x0101,0x0101,0x0404,0x0404,
	0x0101,0x0101,0x0404,0x0404,0x0101,0x0101,0x0404,0x0404,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0404,0x0404,0x0000,0x0000,0x0404,0x0404,
	0x0000,0x0000,0x0404,0x0404,0x0000,0x0000,0x0404,0x0404,

	0x0101,0x0101,0x0303,0x0303,0x0101,0x0101,0x0303,0x0303,
	0x0101,0x0101,0x0303,0x0303,0x0101,0x0101,0x0303,0x0303,
	0x0101,0x0101,0x0303,0x0303,0x0101,0x0101,0x0303,0x0303,
	0x0101,0x0101,0x0303,0x0303,0x0101,0x0101,0x0303,0x0303,
	0x0000,0x0000,0x0B00,0x0202,0x0000,0x0000,0x0B00,0x0202,
	0x0000,0x0000,0x0B00,0x0202,0x0000,0x0000,0x0B00,0x0202,
	0x0000,0x0000,0x0B00,0x0202,0x0000,0x0000,0x0B00,0x0202,
	0x0000,0x0000,0x0B00,0x0202,0x0000,0x0000,0x0000,0x0B0B,

	0x000B,0x0000,0x0000,0x0000,0x000B,0x0000,0x0000,0x0000,
	0x000B,0x0000,0x0000,0x0000,0x000B,0x0000,0x0000,0x0000,
	0x000B,0x0000,0x0000,0x0000,0x000B,0x0000,0x0000,0x0000,
	0x000B,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0404,0x0404,0x0101,0x0101,0x0404,0x0404,0x0101,0x0101,
	0x0404,0x0404,0x0101,0x0101,0x0404,0x0404,0x0101,0x0101,
	0x0101,0x0101,0x0303,0x0303,0x0101,0x0101,0x0303,0x0303,
	0x0101,0x0101,0x0303,0x0303,0x0101,0x0101,0x0303,0x0303,

	0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,
	0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,
	0x0606,0x0606,0x0101,0x0101,0x0606,0x0606,0x0101,0x0101,
	0x0606,0x0606,0x0101,0x0101,0x0606,0x0606,0x0101,0x0101,
	0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,
	0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,
	0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,
	0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,

	0x0404,0x0404,0x0101,0x0101,0x0404,0x0404,0x0101,0x0101,
	0x0404,0x0404,0x0101,0x0101,0x0404,0x0404,0x0101,0x0101,
	0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,
	0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,
	0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
	0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
	0x0303,0x0303,0x0404,0x0404,0x0303,0x0303,0x0404,0x0404,
	0x0303,0x0303,0x0404,0x0404,0x0303,0x0303,0x0404,0x0404,

	0x0303,0x0303,0x0101,0x0101,0x0303,0x0303,0x0101,0x0101,
	0x0303,0x0303,0x0101,0x0101,0x0303,0x0303,0x0101,0x0101,
	0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,
	0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,
	0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,
	0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,
	0x0404,0x0404,0x0606,0x0606,0x0404,0x0404,0x0606,0x0606,
	0x0404,0x0404,0x0606,0x0606,0x0404,0x0404,0x0606,0x0606,

	0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,
	0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,
	0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,
	0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,
	0x0606,0x0606,0x0303,0x0303,0x0606,0x0606,0x0303,0x0303,
	0x0606,0x0606,0x0303,0x0303,0x0606,0x0606,0x0303,0x0303,
	0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,
	0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,

	0x0303,0x0303,0x0101,0x0101,0x0303,0x0303,0x0101,0x0101,
	0x0303,0x0303,0x0101,0x0101,0x0303,0x0303,0x0101,0x0101,
	0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
	0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
	0x0404,0x0404,0x0000,0x0000,0x0404,0x0404,0x0000,0x0000,
	0x0404,0x0404,0x0000,0x0000,0x0404,0x0404,0x0000,0x0000,
	0x0303,0x0303,0x0101,0x0101,0x0303,0x0303,0x0101,0x0101,
	0x0303,0x0303,0x0101,0x0101,0x0303,0x0303,0x0101,0x0101,

	0x0101,0x0101,0x0606,0x0606,0x0101,0x0101,0x0606,0x0606,
	0x0101,0x0101,0x0606,0x0606,0x0101,0x0101,0x0606,0x0606,
	0x0101,0x0101,0x0606,0x0606,0x0101,0x0101,0x0606,0x0606,
	0x0101,0x0101,0x0606,0x0606,0x0101,0x0101,0x0606,0x0606,
	0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,
	0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,
	0x0606,0x0606,0x0404,0x0404,0x0606,0x0606,0x0404,0x0404,
	0x0606,0x0606,0x0404,0x0404,0x0606,0x0606,0x0404,0x0404,

	0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,
	0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,
	0x0404,0x0404,0x0606,0x0606,0x0404,0x0404,0x0606,0x0606,
	0x0404,0x0404,0x0606,0x0606,0x0404,0x0404,0x0606,0x0606,
	0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,
	0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,
	0x0101,0x0606,0x0606,0x0606,0x0101,0x0101,0x0606,0x0606,
	0x0606,0x0101,0x0101,0x0606,0x0606,0x0606,0x0101,0x0101,

	0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,
	0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,
	0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,
	0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,
	0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,
	0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,
	0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,
	0x0606,0x0606,0x0606,0x0101,0x0606,0x0606,0x0101,0x0101,

	0x0606,0x0606,0x0404,0x0404,0x0606,0x0606,0x0404,0x0404,
	0x0606,0x0606,0x0404,0x0404,0x0606,0x0606,0x0404,0x0404,
	0x0404,0x0101,0x0404,0x0404,0x0101,0x0101,0x0404,0x0404,
	0x0101,0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,
	0x0101,0x0101,0x0606,0x0606,0x0101,0x0101,0x0606,0x0606,
	0x0101,0x0101,0x0606,0x0606,0x0101,0x0101,0x0606,0x0606,
	0x0101,0x0101,0x0404,0x0404,0x0101,0x0101,0x0404,0x0404,
	0x0101,0x0101,0x0404,0x0404,0x0101,0x0101,0x0404,0x0404,

	0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,
	0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,
	0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,
	0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,
	0x0404,0x0404,0x0606,0x0606,0x0404,0x0404,0x0606,0x0606,
	0x0404,0x0404,0x0606,0x0606,0x0404,0x0404,0x0606,0x0606,
	0x0404,0x0404,0x0606,0x0606,0x0404,0x0404,0x0606,0x0606,
	0x0404,0x0404,0x0606,0x0606,0x0404,0x0404,0x0606,0x0606,

	0x0101,0x0606,0x0606,0x0606,0x0101,0x0606,0x0606,0x0606,
	0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,
	0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,
	0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,0x0606,
	0x0606,0x0101,0x0101,0x0101,0x0606,0x0101,0x0101,0x0101,
	0x0606,0x0606,0x0101,0x0101,0x0606,0x0606,0x0101,0x0101,
	0x0606,0x0606,0x0101,0x0101,0x0606,0x0606,0x0101,0x0101,
	0x0606,0x0606,0x0101,0x0101,0x0606,0x0606,0x0101,0x0101,

	0x0101,0x0101,0x0404,0x0404,0x0101,0x0101,0x0404,0x0404,
	0x0101,0x0101,0x0404,0x0404,0x0101,0x0101,0x0404,0x0404,
	0x0101,0x0101,0x0404,0x0404,0x0101,0x0101,0x0404,0x0404,
	0x0101,0x0101,0x0404,0x0404,0x0101,0x0101,0x0404,0x0404,
	0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,
	0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,
	0x0303,0x0303,0x0404,0x0404,0x0303,0x0303,0x0404,0x0404,
	0x0303,0x0303,0x0404,0x0404,0x0303,0x0303,0x0404,0x0404,

	0x0404,0x0404,0x0303,0x0303,0x0404,0x0404,0x0303,0x0303,
	0x0404,0x0404,0x0303,0x0303,0x0404,0x0404,0x0303,0x0303,
	0x0404,0x0404,0x0303,0x0303,0x0404,0x0404,0x0303,0x0303,
	0x0404,0x0404,0x0303,0x0303,0x0404,0x0404,0x0303,0x0303,
	0x0505,0x0505,0x0606,0x0606,0x0505,0x0505,0x0606,0x0606,
	0x0505,0x0505,0x0606,0x0606,0x0505,0x0505,0x0606,0x0606,
	0x0101,0x0101,0x0606,0x0606,0x0101,0x0101,0x0606,0x0606,
	0x0101,0x0101,0x0606,0x0606,0x0101,0x0101,0x0606,0x0606,

	0x0101,0x0101,0x0404,0x0404,0x0101,0x0101,0x0404,0x0404,
	0x0101,0x0101,0x0404,0x0404,0x0101,0x0101,0x0404,0x0404,
	0x0606,0x0606,0x0404,0x0404,0x0606,0x0606,0x0404,0x0404,
	0x0606,0x0606,0x0404,0x0404,0x0606,0x0606,0x0404,0x0404,
	0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,
	0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,0x0404,
	0x0404,0x0404,0x0101,0x0101,0x0404,0x0404,0x0101,0x0101,
	0x0404,0x0404,0x0101,0x0101,0x0404,0x0404,0x0101,0x0101,

	0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,
	0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,
	0x0101,0x0101,0x0000,0x0000,0x0101,0x0101,0x0000,0x0000,
	0x0101,0x0101,0x0000,0x0000,0x0101,0x0101,0x0000,0x0000,
	0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,
	0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,
	0x0101,0x0101,0x0606,0x0606,0x0101,0x0101,0x0606,0x0606,
	0x0101,0x0101,0x0606,0x0606,0x0101,0x0101,0x0606,0x0606,

	0x0606,0x0606,0x0404,0x0404,0x0606,0x0606,0x0404,0x0404,
	0x0606,0x0606,0x0404,0x0404,0x0606,0x0606,0x0404,0x0404,
	0x0404,0x0404,0x0101,0x0101,0x0404,0x0404,0x0101,0x0101,
	0x0404,0x0404,0x0101,0x0101,0x0404,0x0404,0x0101,0x0101,
	0x0000,0x0000,0x0101,0x0101,0x0000,0x0000,0x0101,0x0101,
	0x0000,0x0000,0x0101,0x0101,0x0000,0x0000,0x0101,0x0101,
	0x0000,0x0000,0x0404,0x0404,0x0000,0x0000,0x0404,0x0404,
	0x0000,0x0000,0x0404,0x0404,0x0000,0x0000,0x0404,0x0404,

	0x0101,0x0101,0x0606,0x0606,0x0101,0x0101,0x0606,0x0606,
	0x0101,0x0101,0x0606,0x0606,0x0101,0x0101,0x0606,0x0606,
	0x0404,0x0404,0x0606,0x0606,0x0404,0x0404,0x0606,0x0606,
	0x0404,0x0404,0x0606,0x0606,0x0404,0x0404,0x0606,0x0606,
	0x0606,0x0606,0x0303,0x0303,0x0606,0x0606,0x0303,0x0303,
	0x0606,0x0606,0x0303,0x0303,0x0606,0x0606,0x0303,0x0303,
	0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
	0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,

	0x0101,0x0101,0x0404,0x0404,0x0101,0x0101,0x0404,0x0404,
	0x0101,0x0101,0x0404,0x0404,0x0101,0x0101,0x0404,0x0404,
	0x0000,0x0000,0x0101,0x0101,0x0000,0x0000,0x0101,0x0101,
	0x0000,0x0000,0x0101,0x0101,0x0000,0x0000,0x0101,0x0101,
	0x0404,0x0404,0x0303,0x0303,0x0404,0x0404,0x0303,0x0303,
	0x0404,0x0404,0x0303,0x0303,0x0404,0x0404,0x0303,0x0303,
	0x0101,0x0101,0x0404,0x0404,0x0101,0x0101,0x0404,0x0404,
	0x0101,0x0101,0x0404,0x0404,0x0101,0x0101,0x0404,0x0404,

	0x0404,0x0404,0x0606,0x0606,0x0404,0x0404,0x0606,0x0606,
	0x0404,0x0404,0x0606,0x0606,0x0404,0x0404,0x0606,0x0606,
	0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
	0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
};

const unsigned short loseMap[1024] __attribute__((aligned(4)))=
{
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0001,0x0401,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0002,0x0402,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0003,0x0004,0x0005,0x0006,0x0007,0x0008,
	0x0009,0x000A,0x0000,0x000B,0x040B,0x000C,0x000D,0x000E,
	0x000F,0x0010,0x0000,0x0011,0x0012,0x000B,0x040B,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0013,0x0014,0x0015,0x0016,0x0017,0x0018,
	0x0019,0x001A,0x0000,0x000B,0x040B,0x001B,0x001C,0x001D,
	0x001E,0x001F,0x0020,0x0021,0x0022,0x0801,0x0C01,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0023,0x0024,0x0000,0x0025,0x0026,0x0000,
	0x0027,0x0028,0x0000,0x0029,0x0429,0x002A,0x002B,0x0C05,
	0x002C,0x002D,0x0000,0x002E,0x002F,0x0030,0x0430,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0031,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0032,0x0033,
	0x0432,0x0000,0x0034,0x0035,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0036,0x0037,0x0038,0x0039,0x003A,0x003B,0x003C,
	0x003D,0x003E,0x003F,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0040,0x0040,0x0040,0x0000,0x0000,0x0040,
	0x0000,0x0000,0x0000,0x0041,0x0441,0x0000,0x0000,0x0000,
	0x0000,0x0042,0x0043,0x0044,0x0045,0x0046,0x0047,0x0048,
	0x0049,0x004A,0x004B,0x0035,0x0000,0x0000,0x0000,0x0000,

	0x0041,0x004C,0x004D,0x004E,0x004F,0x0050,0x0450,0x0051,
	0x0052,0x0000,0x0053,0x0054,0x0454,0x0000,0x0000,0x0000,
	0x0000,0x0055,0x0056,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0057,0x004D,0x0058,0x0059,0x005A,0x0C41,0x0057,0x005B,
	0x005C,0x005D,0x005E,0x005F,0x0060,0x0061,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0062,0x0063,0x0052,0x0000,0x0000,0x0000,0x0054,0x0064,
	0x0065,0x0066,0x0066,0x0067,0x0068,0x0454,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0069,0x006A,0x004C,0x004C,0x0859,0x0859,0x045C,0x006B,
	0x004F,0x006C,0x0066,0x006D,0x006E,0x046E,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0054,0x006F,0x0070,0x0051,0x006F,0x084E,0x006F,0x006B,
	0x005E,0x0066,0x0071,0x0858,0x0072,0x046E,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0C52,0x045F,0x0C6F,0x0051,0x0470,0x045B,0x085B,0x006B,
	0x0066,0x0858,0x0858,0x0066,0x006A,0x046E,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0450,0x084D,0x006A,0x004E,0x006A,0x0C6F,0x086F,0x0C63,
	0x0066,0x0066,0x0066,0x0066,0x0073,0x0074,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0450,0x0051,0x006A,0x0059,0x004F,0x0075,0x0C58,0x0066,
	0x0066,0x0066,0x0066,0x0076,0x004F,0x0C41,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0077,0x0051,0x006F,0x0859,0x004F,0x0875,0x0066,0x0066,
	0x0066,0x0066,0x046B,0x005A,0x004F,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0474,0x0051,0x085B,0x006F,0x0859,0x0078,0x0066,
	0x0079,0x0051,0x0073,0x004F,0x0074,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x007A,0x007B,0x004E,0x0051,0x007C,0x084D,
	0x005B,0x006A,0x005A,0x0074,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0474,0x004F,0x0059,0x0059,0x0059,
	0x005A,0x004F,0x0C41,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

const unsigned short losePal[256] __attribute__((aligned(4)))=
{
	0x1CFF,0x0000,0x7FFF,0x4A52,0x1CE8,0x3DFF,0x318C,0x6F7A,
	0x29F3,0x36B7,0x1D4E,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

//}}BLOCK(lose)
