//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", 		"sbtime",			1,			0},
	{"",		"sbnwif enp1s0",		1,			14},
	{"",		"sbnwif -w wlp2s0",		1,			15},
	{"",		"sbaudio sink",			1,			10},
	{"",		"sbaudio source",		1,			11},
	{"", 		"sbmemory",			5,			12},
	{"",		"sbnetwork",			1,			0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
