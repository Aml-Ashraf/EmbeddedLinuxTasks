#!/bin/bash


sudo adduser amltask5

sudo groupadd grouptask5

sudo usermod -aG grouptask5 amltask5
echo "user amlTask5 added to group GroupTask5"

echo "User Information"
id amltask5

echo "group Information"
getent group grouptask5
