compile:
	for file in *.cpp
	 do 
	   result=`echo "$file" | cut -d"." -f1 -s`
	   g++ -std=c++11 $file -o $result
	done 
