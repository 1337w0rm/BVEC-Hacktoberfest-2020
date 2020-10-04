# install "pyfiglet" module with pip

from pyfiglet import figlet_format
from termcolor import colored

def print_art(message, colour):
	valid_colors = ("red", "green", "yellow", "blue", "magenta", "cyan", "white")

	if colour not in valid_colours:
		colour = "magenta"

	ascii_art = figlet_format(msg)
	colored_ascii = colored(ascii_art, color=colour)
	print(colored_ascii)

message = input("Write what you want to print: ")
colour = input("Choose colours between 'red', 'green', 'yellow', 'blue', 'magenta', 'cyan', 'white' :  ")
print_art(msg, colour)
