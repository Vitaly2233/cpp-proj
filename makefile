SRC = main.cpp
APP = myprogram

all: $(APP)

$(APP): $(SRC) 
	g++ $(SRC) -o $(APP)
	
run: $(APP)
	./$(APP)

.PHONY: watch
watch:
	while true; do \
		fswatch $(SRC) | xargs -n1 make all run; \
		clear; \
		sleep 1; \
	done
	
.PHONY: clean
clean:
	rm -f $(APP)