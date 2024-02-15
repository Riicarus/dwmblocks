MEM_AVAILABLE=$(cat /proc/meminfo | grep -w MemAvailable | awk '{print $2}')
MEM_TOTAL=$(cat /proc/meminfo | grep -w MemTotal | awk '{print $2}')

MEM_USAGE=$(echo $MEM_AVAILABLE $MEM_TOTAL | awk '{printf "%.2f", 100 - (100 * $1 / $2)}')
echo " $MEM_USAGE%"