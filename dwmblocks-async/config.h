#define CMDLENGTH 50
#define DELIMITER "^c#ffffff^ | "
#define CLICKABLE_BLOCKS
#define scriptDir "$HOME/.scripts/dwmblocks/"

const Block blocks[] = {
	// BLOCK(scriptDir "xbps-updates.sh",      333,     0),
	BLOCK(scriptDir "vol-dwm.sh",           10,      1),
	BLOCK(scriptDir "mic-dwm.sh",           10,      2),
	BLOCK(scriptDir "backlight.sh",         0,       3),
	BLOCK(scriptDir "cputemp.sh",           5,       0),
	BLOCK(scriptDir "ram.sh",               5,       0),
	BLOCK(scriptDir "disk.sh -r",           10,      0),
	BLOCK(scriptDir "disk.sh -u",           10,      0),
	BLOCK(scriptDir "bat-dwm.sh",           5,       0),
	BLOCK(scriptDir "calendar.sh",          10,      6),
	BLOCK(scriptDir "time.sh",              5,       0),
	BLOCK(scriptDir "kbd.sh",               0,       5),
};
