RETRO_OBJ += src/main.o \
             src/game.o

$(eval $(call target_bin,ft_retro,RETRO_OBJ,RETRO_BIN))
$(RETRO_BIN): INCLUDE += include src
$(RETRO_BIN): LDLIBS  += ncurses