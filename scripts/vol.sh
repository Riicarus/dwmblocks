#!/bin/bash
vol=$(pamixer --get-volume)
muted=$(pamixer --get-mute | awk '{print $1=="false" ? "" : "(X)"}')
echo " ${vol}%${muted}"