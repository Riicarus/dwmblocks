MEM_FREE=$(cat /proc/meminfo | grep -w MemAvailable | awk '{print $2}')
MEM_TOTAL=$(cat /proc/meminfo | grep -w MemTotal | awk '{print $2}')

MEM_USAGE=$(echo $MEM_FREE $MEM_TOTAL | awk '{printf "%.2f", $1/$2}')
echo " $MEM_USAGE%"
