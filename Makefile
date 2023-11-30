CC=gcc
TARGET=test
OBJS=main.o sort.o student.o utils.o

all: $(TARGET)
$(TARGET): $(OBJS)
	$(CC) -o $@ $^
%.o: %.c
	$(CC) -c $<
clean:
	rm -f $(OBJS) $(TARGET)
