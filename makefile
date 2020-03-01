all: hash.dll .SYMBOLIC

hash.dll: src/hash.cpp src/hashmap.cpp src/hashmap.h src/myint.h src/div.h
	wcl386 csv.cpp -ox -zp4 -5 -s -l=div_dll

.SILENT
clean: .SYMBOLIC
	-del *.err
	-del *.dll
	-del *.obj

install: hash.dll .SYMBOLIC
	copy hash.dll c:\div2\

#  vim: set ts=4 sw=4 tw=0 noet fileencoding=cp858 :
