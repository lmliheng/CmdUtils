CC = gcc
CFLAGS = -I./includes -Wall
OBJFILES = objs/bootstrap.o objs/cmd_utils.o objs/install_utils.o objs/shell_utils.o objs/ExamAll.o objs/FileInfo.o objs/updata_utils.o objs/Version.o 
TARGET = cil
LIBTARGET = lib/libprintcolor.a
LIBOBJS = objs/PrintColor.o

all: $(TARGET)

objs:
	@mkdir -p objs



objs/PrintColor.o: src/Library/PrintColor.c objs
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBTARGET): $(LIBOBJS)
	@mkdir -p lib 
	cd lib && $(AR) rcs $(notdir $(LIBTARGET)) ../$(LIBOBJS)




objs/bootstrap.o: src/bootstrap.c objs
	$(CC) $(CFLAGS) -c $< -o $@

objs/install_utils.o: src/Utils/install_utils.c objs
	$(CC) $(CFLAGS) -c $< -o $@

objs/shell_utils.o: src/Utils/shell_utils.c objs
	$(CC) $(CFLAGS) -c $< -o $@

objs/ExamAll.o: src/LoginShell/ExamAll.c objs
	$(CC) $(CFLAGS) -c $< -o $@

objs/FileInfo.o: src/FileManagement/FileInfo.c objs
	$(CC) $(CFLAGS) -c $< -o $@

objs/cmd_utils.o: src/Utils/cmd_utils.c objs
	$(CC) $(CFLAGS) -c $< -o $@

objs/updata_utils.o: src/Utils/updata_utils.c objs
	$(CC) $(CFLAGS) -c $< -o $@

objs/Version.o: src/Utils/Version.c objs
	$(CC) $(CFLAGS) -c $< -o $@	




$(TARGET): $(OBJFILES) $(LIBTARGET)
	$(CC) $(OBJFILES) -o $(TARGET) -L./lib -lprintcolor




clean:
	rm -f $(OBJFILES) $(TARGET) $(LIBTARGET)