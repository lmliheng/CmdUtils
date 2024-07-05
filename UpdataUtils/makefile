CC_VC = gcc
OBJFILES_VC = objs/bootstrap.o 
TARGET_VC = updata

all_vc: $(TARGET_VC)

objs_vc:
	@mkdir -p objs

objs/bootstrap.o: src/bootstrap.c objs_vc
	$(CC_VC) $(CFLAGS_VC) -c $< -o $@

$(TARGET_VC): $(OBJFILES_VC) 
	$(CC_VC) $(CFLAGS_VC) $(OBJFILES_VC) -o $(TARGET_VC) 

clean_vc:
	rm -f $(OBJFILES_VC) $(TARGET_VC)