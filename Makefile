ELF		=	elf

SANTA		=	santa

SRC		=  	main.cpp \
			Object/Object.cpp \
			Object/Toy.cpp \
			Object/Teddy.cpp \
			Object/LittlePony.cpp \
			Object/Wrap.cpp \
			Object/Box.cpp \
			Object/GiftPaper.cpp \
			Xmas/PapaXmasElf.cpp \
			Xmas/PapaXmasTable.cpp \
			Xmas/PapaXmasConveyorBelt.cpp \

SSRC		=	Santa/Santa.cpp \
			Santa/Xml.cpp

OBJ		=	$(SRC:.cpp=.o)

SOBJ		=	$(SSRC:.cpp=.o)

CXXFLAGS	+= 	-W -Wall -Werror -Wextra

RM		= 	rm -f

CC		= 	g++

%.o: %.cpp
		@printf "[\033[0;32mdone\033[0m] % 33s\n" $<
		@$(CC) -c -o $@ $< $(CXXFLAGS)

all:		$(SANTA)

$(ELF):		$(OBJ)
		@$(CC) $(OBJ) -o $(ELF)

$(SANTA):	$(SOBJ)
		@$(CC) $(SOBJ) -o Santa/$(SANTA)
		@echo -en "`cat asciiart 2>&-`"

clean:
		@printf "[\033[0;31mdeleted\033[0m] % 30s\n" $(OBJ)
		@printf "[\033[0;31mdeleted\033[0m] % 30s\n" $(SOBJ)
		@$(RM) $(OBJ) $(SOBJ)

fclean:		clean
		@$(RM) $(ELF) Santa/$(SANTA)
		@printf "[\033[0;31mdeleted\033[0m] % 30s\n" $(ELF)
		@printf "[\033[0;31mdeleted\033[0m] % 30s\n" $(SANTA)

re:		fclean all

bin:		re clean

.PHONY:		all clean fclean re bin
