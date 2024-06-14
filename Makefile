CC = gcc
CFLAGS = -I./includes -Wall
OBJFILES = objs/bootstrap.o objs/cmd_utils.o objs/install_utils.o objs/shell_utils.o objs/ExamAll.o objs/FileSize.o objs/PrintColor.o
TARGET = cil

all: $(TARGET)

objs:
	@mkdir -p objs

objs/bootstrap.o: src/bootstrap.c objs
	$(CC) $(CFLAGS) -c $< -o $@

objs/cmd_utils.o: src/Utils/cmd_utils.c objs
	$(CC) $(CFLAGS) -c $< -o $@

objs/install_utils.o: src/Utils/install_utils.c objs
	$(CC) $(CFLAGS) -c $< -o $@

objs/shell_utils.o: src/Utils/shell_utils.c objs
	$(CC) $(CFLAGS) -c $< -o $@

objs/ExamAll.o: src/LoginShell/ExamAll.c objs
	$(CC) $(CFLAGS) -c $< -o $@

objs/FileSize.o: src/FileManagement/FileSize.c objs
	$(CC) $(CFLAGS) -c $< -o $@

objs/PrintColor.o: src/Library/PrintColor.c objs
	$(CC) $(CFLAGS) -c $< -o $@


$(TARGET): $(OBJFILES)
	$(CC) $(OBJFILES) -o $(TARGET)

clean:
	rm -f $(OBJFILES) $(TARGET)