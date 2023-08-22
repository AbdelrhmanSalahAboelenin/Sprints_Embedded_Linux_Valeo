#!/bin/bash

# Get a list of available WiFi networks with signal strength
wifi_list=$(nmcli device wifi list)

# Extract and process the signal strength and SSID
best_signal=""
max_signal=-100

while IFS= read -r line; do
    signal=$(echo "$line" | awk '{print $8}')
    ssid=$(echo "$line" | awk '{print $2}')

    # Convert signal to an integer
    signal_int=${signal%-*}

    # Skip hidden networks
    if [ -n "$ssid" ]; then
        # Compare signal strengths
        if [ "$signal_int" -gt "$max_signal" ]; then
            max_signal="$signal_int"
            best_signal="$ssid"
        fi
    fi
done <<< "$wifi_list"

# Check if a network with good signal was found
if [ -n "$best_signal" ]; then
    echo "Best WiFi signal: $best_signal"

    
else
    echo "Can't recommend any WIFI network."
fi

