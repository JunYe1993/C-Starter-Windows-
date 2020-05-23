# 通用編譯參數
CC     = gcc
CFLAGS = -g -Wall

# Objects = 為要與 main 連結的 .o 檔
OBJECTS = hello.o pointer.o unsignedChar.o struct.o
SOURCE_PATH  = source/
INCLUDE_PATH = include/

program: main.o ${OBJECTS}
	${CC} ${CFLAGS} -o program.exe main.o ${OBJECTS}

# 告訴編譯器 在當前目錄下找 main.c
main.o: main.c
	$(CC) -I$(INCLUDE_PATH) $(CFLAGS) -c $<

# 告訴編譯找 在 source/ 找 %.c 在 include/ 找 %.h
%.o: $(SOURCE_PATH)%.c $(INCLUDE_PATH)%.h
	$(CC) -I$(INCLUDE_PATH) $(CFLAGS) -c $<

.PHONY: clean

clean:
	del main.o ${OBJECTS} program.exe