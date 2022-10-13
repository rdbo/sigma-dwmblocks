//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", 		"sbtime",			1,			0},
	{"",		"sbnwif enp1s0",		1,			11},
	{"",		"sbnwif -w wlp2s0",		1,			12},
	{"", 		"sbmemory",			5,			13},
	{"",		"sbnetwork",			1,			0},
	{"",		"sbaudio sink",			1,			14},
	{"",		"sbaudio source",		1,			15},
	{"",		"sbpower",			0,			16},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
