#!/bin/bash
HELLO=$HOSTNAME
LOCAL=$(whoami)
if [ -e ../../.bashrc ]; then
	echo "export HELLO=\"$HELLO\"" >> ../../.bashrc
	echo "LOCAL=\"$LOCAL\"" >> ../../.bashrc
	gnome-terminal
fi
