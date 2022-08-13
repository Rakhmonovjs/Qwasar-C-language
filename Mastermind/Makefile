
CC = gcc 
 
CFLAGS = -g -Wall -Wextra -Werror -O0 -g3 -fsanitize=address --pedantic 
 
SOURCES =  master.c 
OBJECTS = $(SOURCES:.c=.o) 
TARGET = my_mastermind 
$(TARGET) : $(OBJECTS) 
 	$(CC) $(CFLAGS) -o $@ $^  
 
.PHONY: clean 
 
clean:
	@rm -r $(TARGET)