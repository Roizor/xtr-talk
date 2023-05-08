main:
	touch ./bin/xtr && rm ./bin/xtr && clang ./src/main.c -o ./bin/xtr

link: # Potentially dangerous
	touch ./bin/xtr && rm ./bin/xtr && clang ./src/main.c -o ./bin/xtr && sudo ln -sf bin/xtr /usr/bin/xtr

init-bin: # Just in case you've accidentally deleted it
	mkdir bin && touch ./bin/xtr && rm ./bin/xtr && clang ./src/main.c -o ./bin/xtr

init-bin-link: # For that one scenario where you accientally deleted it, and are feeling Potentially dangerous
	touch ./bin/xtr && rm ./bin/xtr && clang ./src/main.c -o ./bin/xtr && sudo ln -sf bin/xtr /usr/bin/xtr