/*
 * Author: Joachim Larsen
 *
 * This is a library I made while learning to program in C.
 *
 * It contains simple functions copy-pasted from stackoverflow and the like.
 *
 *
 */


/* Clears the terminal screen.
 */
void clearScreen()
{
	const char* CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J";
	write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12);
}



