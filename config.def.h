/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int truecentered = 0;                    /* -C option; centers dmenu on screen */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 720;                    /* -mw option; minimum width when [true]centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Hack Nerd Font Mono:pixelsize=12:antialias=true:autohint=true",
	"TerminessTTF Nerd Font Mono:pixelsize=14:antialias=true:autohint=true",
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#839496", "#002b36" },
	[SchemeSel] = { "#839496", "#073642"},
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 7;
static unsigned int columns    = 1;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
